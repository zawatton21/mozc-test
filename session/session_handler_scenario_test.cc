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

#include <memory>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

#include "absl/log/log.h"
#include "absl/status/status.h"
#include "absl/status/statusor.h"
#include "absl/strings/str_format.h"
#include "base/file_stream.h"
#include "base/file_util.h"
#include "engine/engine_interface.h"
#include "engine/mock_data_engine_factory.h"
#include "protocol/commands.pb.h"
#include "session/request_test_util.h"
#include "session/session_handler_test_util.h"
#include "session/session_handler_tool.h"
#include "testing/gunit.h"
#include "testing/mozctest.h"

namespace mozc {

using ::mozc::session::SessionHandlerInterpreter;
using ::mozc::session::testing::SessionHandlerTestBase;
using ::testing::WithParamInterface;

class SessionHandlerScenarioTestBase : public SessionHandlerTestBase {
 protected:
  void SetUp() override {
    // Note that singleton Config instance is backed up and restored
    // by SessionHandlerTestBase's SetUp and TearDown methods.
    SessionHandlerTestBase::SetUp();

    std::unique_ptr<EngineInterface> engine =
        MockDataEngineFactory::Create().value();
    handler_ = std::make_unique<SessionHandlerInterpreter>(std::move(engine));
  }

  void TearDown() override {
    handler_.reset();
    SessionHandlerTestBase::TearDown();
  }

  std::unique_ptr<SessionHandlerInterpreter> handler_;
};

class SessionHandlerScenarioTest : public SessionHandlerScenarioTestBase,
                                   public WithParamInterface<const char *> {};

// Tests should be passed.
const char *kScenarioFileList[] = {
#define DATA_DIR "test/session/scenario/"
    DATA_DIR "auto_partial_suggestion.txt",
    DATA_DIR "b12751061_scenario.txt",
    DATA_DIR "b16123009_scenario.txt",
    DATA_DIR "b18112966_scenario.txt",
    DATA_DIR "b7132535_scenario.txt",
    DATA_DIR "b7321313_scenario.txt",
    DATA_DIR "b7548679_scenario.txt",
    DATA_DIR "b8690065_scenario.txt",
    DATA_DIR "b8703702_scenario.txt",
    DATA_DIR "change_request.txt",
    DATA_DIR "clear_user_prediction.txt",
    DATA_DIR "commit.txt",
    DATA_DIR "commit_by_space.txt",
    DATA_DIR "composing_alphanumeric.txt",
    DATA_DIR "composition_display_as.txt",
    DATA_DIR "conversion.txt",
    DATA_DIR "conversion_display_as.txt",
    DATA_DIR "conversion_with_history_segment.txt",
    DATA_DIR "conversion_with_long_history_segments.txt",
    DATA_DIR "convert_from_full_ascii_to_t13n.txt",
    DATA_DIR "convert_from_full_katakana_to_t13n.txt",
    DATA_DIR "convert_from_half_ascii_to_t13n.txt",
    DATA_DIR "convert_from_half_katakana_to_t13n.txt",
    DATA_DIR "convert_from_hiragana_to_t13n.txt",
    DATA_DIR "delete_history.txt",
    DATA_DIR "description.txt",
    DATA_DIR "desktop_t13n_candidates.txt",
    DATA_DIR "domain_suggestion.txt",
#if !defined(__APPLE__)
    // "InputModeX" commands are not supported on Mac.
    // Mac: We do not have the way to change the mode indicator from IME.
    DATA_DIR "input_mode.txt",
#endif  // !__APPLE__
    DATA_DIR "handwriting.txt",
    DATA_DIR "insert_characters.txt",
    DATA_DIR "kana_modifier_insensitive_conversion.txt",
    DATA_DIR "mobile_partial_variant_candidates.txt",
    DATA_DIR "mobile_qwerty_transliteration_scenario.txt",
    DATA_DIR "mobile_revert_user_history_learning.txt",
    DATA_DIR "mobile_t13n_candidates.txt",
    DATA_DIR "on_off_cancel.txt",
    DATA_DIR "partial_suggestion.txt",
    DATA_DIR "pending_character.txt",
    DATA_DIR "predict_and_convert.txt",
    DATA_DIR "reconvert.txt",
    DATA_DIR "revert.txt",
    DATA_DIR "segment_focus.txt",
    DATA_DIR "segment_width.txt",
    DATA_DIR "suggest_after_zero_query.txt",
    DATA_DIR "twelvekeys_switch_inputmode_scenario.txt",
    DATA_DIR "twelvekeys_toggle_flick_alphabet_scenario.txt",
    DATA_DIR "twelvekeys_toggle_hiragana_preedit_scenario_a.txt",
    DATA_DIR "twelvekeys_toggle_hiragana_preedit_scenario_ka.txt",
    DATA_DIR "twelvekeys_toggle_hiragana_preedit_scenario_sa.txt",
    DATA_DIR "twelvekeys_toggle_hiragana_preedit_scenario_ta.txt",
    DATA_DIR "twelvekeys_toggle_hiragana_preedit_scenario_na.txt",
    DATA_DIR "twelvekeys_toggle_hiragana_preedit_scenario_ha.txt",
    DATA_DIR "twelvekeys_toggle_hiragana_preedit_scenario_ma.txt",
    DATA_DIR "twelvekeys_toggle_hiragana_preedit_scenario_ya.txt",
    DATA_DIR "twelvekeys_toggle_hiragana_preedit_scenario_ra.txt",
    DATA_DIR "twelvekeys_toggle_hiragana_preedit_scenario_wa.txt",
    DATA_DIR "twelvekeys_toggle_hiragana_preedit_scenario_symbol.txt",
    DATA_DIR "undo.txt",
    DATA_DIR "undo_partial_commit.txt",
    DATA_DIR "zero_query_suggestion.txt",
#undef DATA_DIR
};

INSTANTIATE_TEST_SUITE_P(SessionHandlerScenarioParameters,
                         SessionHandlerScenarioTest,
                         ::testing::ValuesIn(kScenarioFileList));

const char *kUsageStatsScenarioFileList[] = {
#define DATA_DIR "test/session/scenario/usage_stats/"
    DATA_DIR "auto_partial_suggestion.txt",
    DATA_DIR "backspace_after_commit.txt",
    DATA_DIR "backspace_after_commit_after_backspace.txt",
    DATA_DIR "composition.txt",
    DATA_DIR "continue_input.txt",
    DATA_DIR "continuous_input.txt",
    DATA_DIR "conversion.txt",
    DATA_DIR "insert_space.txt",
    DATA_DIR "language_aware_input.txt",
    DATA_DIR "mouse_select_from_suggestion.txt",
    DATA_DIR "multiple_backspace_after_commit.txt",
    DATA_DIR "multiple_segments.txt",
    DATA_DIR "numpad_in_direct_input_mode.txt",
    DATA_DIR "prediction.txt",
    DATA_DIR "select_candidates_in_multiple_segments.txt",
    DATA_DIR "select_candidates_in_multiple_segments_and_expand_segment.txt",
    DATA_DIR "select_minor_conversion.txt",
    DATA_DIR "select_minor_prediction.txt",
    DATA_DIR "select_prediction.txt",
    DATA_DIR "select_t13n_by_key.txt",
#ifndef __linux__
    // This test requires cascading window.
    // TODO(hsumita): Removes this ifndef block.
    DATA_DIR "select_t13n_on_cascading_window.txt",
#endif  // !__linux__
    DATA_DIR "suggestion.txt",
    DATA_DIR "switch_kana_type.txt",
    DATA_DIR "zero_query_suggestion.txt",
#undef DATA_DIR
};
INSTANTIATE_TEST_SUITE_P(SessionHandlerUsageStatsScenarioParameters,
                         SessionHandlerScenarioTest,
                         ::testing::ValuesIn(kUsageStatsScenarioFileList));

// Temporarily disabled test scenario.
//
// NOTE: If you want to have test scenario which does not pass at this
// moment but for the recording, you can describe it as follows.
const char *kFailedScenarioFileList[] = {
    // Requires multiple session handling.
    "data/test/session/scenario/usage_stats/multiple_sessions.txt",
};
INSTANTIATE_TEST_SUITE_P(DISABLED_SessionHandlerScenarioParameters,
                         SessionHandlerScenarioTest,
                         ::testing::ValuesIn(kFailedScenarioFileList));

void ParseLine(SessionHandlerInterpreter &handler, const std::string &line) {
  std::vector<std::string> args = handler.Parse(line);
  if (args.empty()) {
    return;
  }

  const absl::Status status = handler.Eval(args);
  if (status.ok()) {
    return;
  }
  FAIL() << line << "\n" << status.message();
}

TEST_P(SessionHandlerScenarioTest, TestImplBase) {
  // Open the scenario file.
  const absl::StatusOr<std::string> scenario_path =
      mozc::testing::GetSourceFile({MOZC_DICT_DIR_COMPONENTS, GetParam()});
  ASSERT_TRUE(scenario_path.ok()) << scenario_path.status();
  LOG(INFO) << "Testing " << FileUtil::Basename(*scenario_path);
  InputFileStream input_stream(*scenario_path);

  std::string line_text;
  int line_number = 0;
  while (std::getline(input_stream, line_text)) {
    ++line_number;
    SCOPED_TRACE(absl::StrFormat("Scenario: %s [%s:%d]", line_text,
                                 *scenario_path, line_number));
    ParseLine(*handler_, line_text);
  }
}

class SessionHandlerScenarioTestForRequest
    : public SessionHandlerScenarioTestBase,
      public WithParamInterface<std::tuple<const char *, commands::Request>> {};

const char *kScenariosForExperimentParams[] = {
#define DATA_DIR "test/session/scenario/"
    DATA_DIR "mobile_zero_query.txt",
    DATA_DIR "mobile_preedit.txt",
#undef DATA_DIR
};

commands::Request GetMobileRequest() {
  commands::Request request = commands::Request::default_instance();
  commands::RequestForUnitTest::FillMobileRequest(&request);
  return request;
}

// Makes sure that the results are not changed by experiment params.
INSTANTIATE_TEST_SUITE_P(
    TestForExperimentParams, SessionHandlerScenarioTestForRequest,
    ::testing::Combine(
        ::testing::ValuesIn(kScenariosForExperimentParams),
        ::testing::Values(
            GetMobileRequest(),
            []() {
              auto request = GetMobileRequest();
              request.mutable_decoder_experiment_params()
                  ->set_enable_new_spatial_scoring(true);
              return request;
            }(),
            []() {
              auto request = GetMobileRequest();
              request.mutable_decoder_experiment_params()
                  ->set_enable_realtime_conversion_v2(true);
              return request;
            }(),
            []() {
              auto request = GetMobileRequest();
              request.mutable_decoder_experiment_params()
                  ->set_enable_findability_oriented_order(true);
              return request;
            }(),
            []() {
              auto request = GetMobileRequest();
              request.mutable_decoder_experiment_params()
                  ->set_apply_user_segment_history_rewriter_for_prediction(
                      true);
              return request;
            }(),
            []() {
              auto request = GetMobileRequest();
              request.mutable_decoder_experiment_params()
                  ->set_filter_noisy_number_candidate(true);
              return request;
            }())));

TEST_P(SessionHandlerScenarioTestForRequest, TestImplBase) {
  // Open the scenario file.
  const absl::StatusOr<std::string> scenario_path =
      mozc::testing::GetSourceFile(
          {MOZC_DICT_DIR_COMPONENTS, std::get<0>(GetParam())});
  ASSERT_TRUE(scenario_path.ok()) << scenario_path.status();

  handler_->SetRequest(std::get<1>(GetParam()));

  LOG(INFO) << "Testing " << FileUtil::Basename(*scenario_path);
  InputFileStream input_stream(*scenario_path);
  std::string line_text;
  int line_number = 0;
  while (std::getline(input_stream, line_text)) {
    ++line_number;
    SCOPED_TRACE(absl::StrFormat("Scenario: %s [%s:%d]", line_text,
                                 *scenario_path, line_number));
    ParseLine(*handler_, line_text);
  }
}
}  // namespace mozc
