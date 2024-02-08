// Copyright 2010-2021, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "rewriter/order_rewriter.h"

#include <memory>
#include <string>

#include "converter/segments.h"
#include "converter/segments_matchers.h"
#include "request/conversion_request.h"
#include "rewriter/rewriter_interface.h"
#include "session/request_test_util.h"
#include "testing/gmock.h"
#include "testing/gunit.h"
#include "testing/mozctest.h"

namespace mozc {
namespace {

using ::testing::Field;
using ::testing::Pointee;

class OrderRewriterTest : public testing::TestWithTempUserProfile {
 protected:
  void SetUp() override {
    rewriter_ = std::make_unique<OrderRewriter>();

    convreq_ = ConversionRequest();
    request_ = commands::Request();

    convreq_.set_request(&request_);
  }

  std::unique_ptr<OrderRewriter> rewriter_;
  ConversionRequest convreq_;
  commands::Request request_;
};

TEST_F(OrderRewriterTest, Capability) {
  // Desktop
  EXPECT_EQ(rewriter_->capability(convreq_), RewriterInterface::NOT_AVAILABLE);

  // Mobile
  commands::RequestForUnitTest::FillMobileRequest(&request_);
  EXPECT_EQ(rewriter_->capability(convreq_),
            RewriterInterface::PREDICTION | RewriterInterface::SUGGESTION);
}

Segments BuildTestSegments() {
  Segments segments;
  segments.add_segment();
  auto add_candidate = [&](const std::string key, const std::string value,
                           Segment::Candidate::Category category) {
    Segment *segment = segments.mutable_conversion_segment(0);
    Segment::Candidate *c = segment->add_candidate();
    c->key = key;
    c->content_key = key;
    c->value = value;
    c->content_value = value;
    c->category = category;
    if (c->key.size() < segment->key().size()) {
      c->attributes = Segment::Candidate::PARTIALLY_KEY_CONSUMED;
      c->consumed_key_size = c->key.size();
    }
  };

  segments.mutable_conversion_segment(0)->set_key("きょうの");
  add_candidate("きょうの", "今日の", Segment::Candidate::DEFAULT_CATEGORY);
  add_candidate("きょうの", "きょうの", Segment::Candidate::DEFAULT_CATEGORY);
  add_candidate("きょうの", "other", Segment::Candidate::OTHER);
  add_candidate("きょうの", "教の", Segment::Candidate::DEFAULT_CATEGORY);
  add_candidate("きょうの", "強の", Segment::Candidate::DEFAULT_CATEGORY);
  add_candidate("きょうの", "凶の", Segment::Candidate::DEFAULT_CATEGORY);
  add_candidate("きょうの", "キョウの", Segment::Candidate::DEFAULT_CATEGORY);
  add_candidate("きょうの", "キョウノ", Segment::Candidate::DEFAULT_CATEGORY);
  add_candidate("きょうの", "KYOUNO", Segment::Candidate::DEFAULT_CATEGORY);
  add_candidate("きょう", "今日", Segment::Candidate::DEFAULT_CATEGORY);
  add_candidate("きょう", "きょう", Segment::Candidate::DEFAULT_CATEGORY);
  add_candidate("きょう", "京", Segment::Candidate::DEFAULT_CATEGORY);
  add_candidate("きょう", "供", Segment::Candidate::DEFAULT_CATEGORY);
  add_candidate("きょうの", "😀", Segment::Candidate::SYMBOL);
  add_candidate("きょうの", "響野", Segment::Candidate::DEFAULT_CATEGORY);

  Segment::Candidate *meta_candidate =
      segments.mutable_conversion_segment(0)->add_meta_candidate();
  meta_candidate->key = "きょうの";
  meta_candidate->content_key = "きょうの";
  meta_candidate->value = "ｷｮｳﾉ";
  meta_candidate->content_value = "ｷｮｳﾉ";

  return segments;
}

TEST_F(OrderRewriterTest, NotAvailable) {
  Segments segments = BuildTestSegments();
  EXPECT_FALSE(rewriter_->Rewrite(convreq_, &segments));
}

TEST_F(OrderRewriterTest, Rewrite) {
  Segments segments = BuildTestSegments();
  request_.mutable_decoder_experiment_params()
      ->set_enable_findability_oriented_order(true);
  request_.mutable_decoder_experiment_params()
      ->set_findability_oriented_order_top_size(5);
  EXPECT_TRUE(rewriter_->Rewrite(convreq_, &segments));

  constexpr auto ValueIs = [](const auto &value) {
    return Pointee(Field(&Segment::Candidate::value, value));
  };
  EXPECT_THAT(segments.conversion_segment(0), CandidatesAreArray({
                                                  ValueIs("今日の"),
                                                  ValueIs("きょうの"),
                                                  ValueIs("教の"),
                                                  ValueIs("強の"),
                                                  ValueIs("凶の"),
                                                  ValueIs("キョウの"),
                                                  ValueIs("キョウノ"),
                                                  ValueIs("響野"),
                                                  ValueIs("KYOUNO"),
                                                  ValueIs("ｷｮｳﾉ"),
                                                  ValueIs("other"),
                                                  ValueIs("😀"),
                                                  ValueIs("きょう"),
                                                  ValueIs("今日"),
                                                  ValueIs("きょう"),
                                                  ValueIs("京"),
                                                  ValueIs("供"),
                                              }));
}

}  // namespace
}  // namespace mozc
