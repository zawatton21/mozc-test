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

#include "config/config_handler.h"

#include <array>
#include <cstddef>
#include <memory>
#include <string>
#include <vector>

#include "absl/container/flat_hash_set.h"
#include "absl/random/random.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/string_view.h"
#include "absl/synchronization/notification.h"
#include "absl/time/clock.h"
#include "absl/time/time.h"
#include "base/clock.h"
#include "base/clock_mock.h"
#include "base/file/temp_dir.h"
#include "base/file_util.h"
#include "base/system_util.h"
#include "base/thread.h"
#include "protocol/config.pb.h"
#include "testing/gmock.h"
#include "testing/gunit.h"
#include "testing/mozctest.h"

namespace mozc {
namespace config {
namespace {

class ConfigHandlerTest : public testing::TestWithTempUserProfile {
 protected:
  ConfigHandlerTest()
      : default_config_filename_(ConfigHandler::GetConfigFileName()) {}
  ~ConfigHandlerTest() override {
    ConfigHandler::SetConfigFileName(default_config_filename_);
  }

 private:
  std::string default_config_filename_;
};

TEST_F(ConfigHandlerTest, SetConfig) {
  Config input;
  Config output;

  TempDirectory temp_dir = testing::MakeTempDirectoryOrDie();
  const std::string config_file =
      FileUtil::JoinPath(temp_dir.path(), "mozc_config_test_tmp");
  ASSERT_OK(FileUtil::UnlinkIfExists(config_file));
  ConfigHandler::SetConfigFileName(config_file);
  EXPECT_EQ(ConfigHandler::GetConfigFileName(), config_file);
  ConfigHandler::Reload();

  ConfigHandler::GetDefaultConfig(&input);
  input.set_incognito_mode(true);
#ifndef MOZC_NO_LOGGING
  input.set_verbose_level(2);
#endif  // MOZC_NO_LOGGING
  ConfigHandler::SetMetaData(&input);
  ConfigHandler::SetConfig(input);
  output.Clear();
  ConfigHandler::GetConfig(&output);
  std::unique_ptr<config::Config> output2 = ConfigHandler::GetConfig();
  input.mutable_general_config()->set_last_modified_time(0);
  output.mutable_general_config()->set_last_modified_time(0);
  output2->mutable_general_config()->set_last_modified_time(0);
  EXPECT_EQ(absl::StrCat(output), absl::StrCat(input));
  EXPECT_EQ(absl::StrCat(*output2), absl::StrCat(input));

  ConfigHandler::GetDefaultConfig(&input);
  input.set_incognito_mode(false);
#ifndef MOZC_NO_LOGGING
  input.set_verbose_level(0);
#endif  // MOZC_NO_LOGGING
  ConfigHandler::SetMetaData(&input);
  ConfigHandler::SetConfig(input);
  output.Clear();
  ConfigHandler::GetConfig(&output);
  output2 = ConfigHandler::GetConfig();

  input.mutable_general_config()->set_last_modified_time(0);
  output.mutable_general_config()->set_last_modified_time(0);
  output2->mutable_general_config()->set_last_modified_time(0);
  EXPECT_EQ(absl::StrCat(output), absl::StrCat(input));
  EXPECT_EQ(absl::StrCat(*output2), absl::StrCat(input));

#if defined(__ANDROID__) && defined(CHANNEL_DEV)
  input.Clear();
  EXPECT_FALSE(input.general_config().has_upload_usage_stats());
  EXPECT_TRUE(ConfigHandler::SetConfig(input));
  output.Clear();
  ConfigHandler::GetConfig(&output);
  EXPECT_TRUE(output.general_config().has_upload_usage_stats());
  EXPECT_TRUE(output.general_config().upload_usage_stats());

  input.Clear();
  input.mutable_general_config()->set_upload_usage_stats(false);
  EXPECT_TRUE(input.general_config().has_upload_usage_stats());
  EXPECT_FALSE(input.general_config().upload_usage_stats());
  EXPECT_TRUE(ConfigHandler::SetConfig(input));
  output.Clear();
  ConfigHandler::GetConfig(&output);
  EXPECT_TRUE(output.general_config().has_upload_usage_stats());
  EXPECT_TRUE(output.general_config().upload_usage_stats());
#endif  // __ANDROID__ && CHANNEL_DEV
}

TEST_F(ConfigHandlerTest, SetMetadata) {
  ClockMock clock1(absl::FromUnixSeconds(1000));
  Clock::SetClockForUnitTest(&clock1);
  Config input1;
  ConfigHandler::SetMetaData(&input1);

  ClockMock clock2(absl::FromUnixSeconds(1000));
  Clock::SetClockForUnitTest(&clock2);
  Config input2;
  ConfigHandler::SetMetaData(&input2);

  ClockMock clock3(absl::FromUnixSeconds(1001));
  Clock::SetClockForUnitTest(&clock3);
  Config input3;
  ConfigHandler::SetMetaData(&input3);

  // input1 and input2 are created at the same time,
  // but input3 is not.
  EXPECT_EQ(absl::StrCat(input1), absl::StrCat(input2));
  EXPECT_NE(absl::StrCat(input2), absl::StrCat(input3));
  EXPECT_NE(absl::StrCat(input3), absl::StrCat(input1));
  Clock::SetClockForUnitTest(nullptr);
}

TEST_F(ConfigHandlerTest, SetConfig_IdentityCheck) {
  Config input;

  TempDirectory temp_dir = testing::MakeTempDirectoryOrDie();
  const std::string config_file =
      FileUtil::JoinPath(temp_dir.path(), "mozc_config_test_tmp");
  ASSERT_OK(FileUtil::UnlinkIfExists(config_file));
  ConfigHandler::SetConfigFileName(config_file);
  EXPECT_EQ(ConfigHandler::GetConfigFileName(), config_file);
  ConfigHandler::Reload();

  ConfigHandler::GetDefaultConfig(&input);
  input.set_incognito_mode(true);
#ifndef MOZC_NO_LOGGING
  input.set_verbose_level(2);
#endif  // MOZC_NO_LOGGING

  ClockMock clock1(absl::FromUnixSeconds(1000));

  Clock::SetClockForUnitTest(&clock1);
  ConfigHandler::SetConfig(input);
  std::unique_ptr<config::Config> output1 = ConfigHandler::GetConfig();

  ClockMock clock2(absl::FromUnixSeconds(1001));
  Clock::SetClockForUnitTest(&clock2);
  ConfigHandler::SetConfig(input);
  std::unique_ptr<config::Config> output2 = ConfigHandler::GetConfig();

  // As SetConfig() is called twice with the same config,
  // GetConfig() must return the identical (including metadata!) config.
  // This also means no actual storage write access happened.
  EXPECT_EQ(absl::StrCat(*output1), absl::StrCat(*output2));
  Clock::SetClockForUnitTest(nullptr);
}

TEST_F(ConfigHandlerTest, ConfigFileNameConfig) {
  const std::string config_file = absl::StrCat("config", kConfigVersion, ".db");
  const std::string filename =
      FileUtil::JoinPath(SystemUtil::GetUserProfileDirectory(), config_file);
  ASSERT_OK(FileUtil::UnlinkIfExists(filename));
  Config input;
  ConfigHandler::SetConfig(input);
  EXPECT_OK(FileUtil::FileExists(filename));
}

TEST_F(ConfigHandlerTest, SetConfigFileName) {
  Config mozc_config;
  const bool default_incognito_mode = mozc_config.incognito_mode();
  mozc_config.set_incognito_mode(!default_incognito_mode);
  ConfigHandler::SetConfig(mozc_config);
  ConfigHandler::SetConfigFileName("memory://set_config_file_name_test.db");
  // After SetConfigFileName called, settings are set as default.
  Config updated_config;
  ConfigHandler::GetConfig(&updated_config);
  EXPECT_EQ(updated_config.incognito_mode(), default_incognito_mode);
}

#if !defined(__ANDROID__)
// Temporarily disable this test because FileUtil::CopyFile fails on
// Android for some reason.
TEST_F(ConfigHandlerTest, LoadTestConfig) {
  // TODO(yukawa): Generate test data automatically so that we can keep
  //     the compatibility among variety of config files.
  // TODO(yukawa): Enumerate test data in the directory automatically.
  constexpr std::array<absl::string_view, 3> kDataFiles = {
      "linux_config1.db",
      "mac_config1.db",
      "win_config1.db",
  };

  for (absl::string_view file_name : kDataFiles) {
    const std::string src_path = mozc::testing::GetSourceFileOrDie(
        {MOZC_DICT_DIR_COMPONENTS, "test", "config", file_name});
    const std::string dest_path =
        FileUtil::JoinPath(SystemUtil::GetUserProfileDirectory(), file_name);
    ASSERT_OK(FileUtil::CopyFile(src_path, dest_path))
        << "Copy failed: " << src_path << " to " << dest_path;

    ConfigHandler::SetConfigFileName(absl::StrCat("user://", file_name));
    ConfigHandler::Reload();

    Config default_config;
    ConfigHandler::GetConfig(&default_config);
  }
}
#endif  // !__ANDROID__

TEST_F(ConfigHandlerTest, GetDefaultConfig) {
  Config output;

  output.Clear();
  ConfigHandler::GetDefaultConfig(&output);
#ifdef __APPLE__
  EXPECT_EQ(output.session_keymap(), Config::KOTOERI);
#elif defined(OS_CHROMEOS)  // __APPLE__
  EXPECT_EQ(output.session_keymap(), Config::CHROMEOS);
#else   // __APPLE__ || OS_CHROMEOS
  EXPECT_EQ(output.session_keymap(), Config::MSIME);
#endif  // __APPLE__ || OS_CHROMEOS
  EXPECT_EQ(output.character_form_rules_size(), 13);

  struct TestCase {
    absl::string_view group;
    Config::CharacterForm preedit_character_form;
    Config::CharacterForm conversion_character_form;
  };

  constexpr std::array<TestCase, 13> kTestCases = {{
      // "ア"
      {"ア", Config::FULL_WIDTH, Config::FULL_WIDTH},
      {"A", Config::FULL_WIDTH, Config::LAST_FORM},
      {"0", Config::FULL_WIDTH, Config::LAST_FORM},
      {"(){}[]", Config::FULL_WIDTH, Config::LAST_FORM},
      {".,", Config::FULL_WIDTH, Config::LAST_FORM},
      // "。、",
      {"。、", Config::FULL_WIDTH, Config::FULL_WIDTH},
      // "・「」"
      {"・「」", Config::FULL_WIDTH, Config::FULL_WIDTH},
      {"\"'", Config::FULL_WIDTH, Config::LAST_FORM},
      {":;", Config::FULL_WIDTH, Config::LAST_FORM},
      {"#%&@$^_|`\\", Config::FULL_WIDTH, Config::LAST_FORM},
      {"~", Config::FULL_WIDTH, Config::LAST_FORM},
      {"<>=+-/*", Config::FULL_WIDTH, Config::LAST_FORM},
      {"?!", Config::FULL_WIDTH, Config::LAST_FORM},
  }};
  EXPECT_EQ(output.character_form_rules_size(), kTestCases.size());
  for (size_t i = 0; i < kTestCases.size(); ++i) {
    EXPECT_EQ(output.character_form_rules(i).group(), kTestCases[i].group);
    EXPECT_EQ(output.character_form_rules(i).preedit_character_form(),
              kTestCases[i].preedit_character_form);
    EXPECT_EQ(output.character_form_rules(i).conversion_character_form(),
              kTestCases[i].conversion_character_form);
  }

#if defined(__ANDROID__) && defined(CHANNEL_DEV)
  EXPECT_TRUE(output.general_config().has_upload_usage_stats());
  EXPECT_TRUE(output.general_config().upload_usage_stats());
#endif  // __ANDROID__ && CHANNEL_DEV
}

TEST_F(ConfigHandlerTest, DefaultConfig) {
  Config config;
  ConfigHandler::GetDefaultConfig(&config);
  EXPECT_EQ(absl::StrCat(ConfigHandler::DefaultConfig()), absl::StrCat(config));
}

// Returns concatenated serialized data of |Config::character_form_rules|.
std::string ExtractCharacterFormRules(const Config &config) {
  std::string rules;
  for (size_t i = 0; i < config.character_form_rules_size(); ++i) {
    config.character_form_rules(i).AppendToString(&rules);
  }
  return rules;
}

TEST_F(ConfigHandlerTest, ConcurrentAccess) {
  std::vector<Config> configs;

  {
    Config config;
    ConfigHandler::GetDefaultConfig(&config);
    configs.push_back(config);
  }
  {
    Config config;
    ConfigHandler::GetDefaultConfig(&config);
    config.clear_character_form_rules();
    {
      auto *rule = config.add_character_form_rules();
      rule->set_group("0");
      rule->set_preedit_character_form(Config::HALF_WIDTH);
      rule->set_conversion_character_form(Config::HALF_WIDTH);
    }
    {
      auto *rule = config.add_character_form_rules();
      rule->set_group("A");
      rule->set_preedit_character_form(Config::LAST_FORM);
      rule->set_conversion_character_form(Config::LAST_FORM);
    }
    configs.push_back(config);
  }
  {
    Config config;
    ConfigHandler::GetDefaultConfig(&config);
    {
      auto *rule = config.add_character_form_rules();
      rule->set_group("0");
      rule->set_preedit_character_form(Config::HALF_WIDTH);
      rule->set_conversion_character_form(Config::HALF_WIDTH);
    }
    {
      auto *rule = config.add_character_form_rules();
      rule->set_group("A");
      rule->set_preedit_character_form(Config::LAST_FORM);
      rule->set_conversion_character_form(Config::LAST_FORM);
    }
    configs.push_back(config);
  }

  // Since |ConfigHandler::SetConfig()| actually updates some metadata in
  // |GeneralConfig|, the returned object from |ConfigHandler::GetConfig()|
  // is not predictable.  Hence we only make sure that
  // |Config::character_form_rules()| is one of expected values.
  absl::flat_hash_set<std::string> character_form_rules_set;
  for (const auto &config : configs) {
    character_form_rules_set.insert(ExtractCharacterFormRules(config));
  }

  // Before starting concurrent test, check to see if it works in single
  // thread.
  for (const auto &config : configs) {
    // Update the global config.
    ConfigHandler::SetConfig(config);

    // Check to see if the returned config contains one of expected
    // |Config::character_form_rules()|.
    Config returned_config;
    ConfigHandler::GetConfig(&returned_config);
    const auto &rules = ExtractCharacterFormRules(returned_config);
    ASSERT_TRUE(character_form_rules_set.contains(rules));
  }

  {
    absl::Notification cancel;

    std::vector<Thread> set_threads;
    for (int i = 0; i < 2; ++i) {
      set_threads.push_back(Thread([&cancel, &configs] {
        absl::BitGen gen;
        while (!cancel.HasBeenNotified()) {
          const size_t next_index = absl::Uniform(gen, 0u, configs.size());
          ConfigHandler::SetConfig(configs[next_index]);
        }
      }));
    }

    std::vector<Thread> get_threads;
    for (int i = 0; i < 4; ++i) {
      get_threads.push_back(Thread([&cancel, &character_form_rules_set] {
        while (!cancel.HasBeenNotified()) {
          Config config;
          ConfigHandler::GetConfig(&config);
          const auto &rules = ExtractCharacterFormRules(config);
          EXPECT_TRUE(character_form_rules_set.contains(rules));
        }
      }));
    }

    // Wait for a while to see if everything goes well.
    // 250 msec is good enough to crash the code if it is not guarded by
    // the lock, but feel free to change the duration.  It is basically an
    // arbitrary number.
    absl::SleepFor(absl::Milliseconds(250));

    cancel.Notify();
    for (auto &set_thread : set_threads) {
      set_thread.Join();
    }
    for (auto &get_thread : get_threads) {
      get_thread.Join();
    }
  }
}

}  // namespace
}  // namespace config
}  // namespace mozc
