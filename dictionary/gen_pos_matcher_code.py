# -*- coding: utf-8 -*-
# Copyright 2010-2021, Google Inc.
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met:
#
#     * Redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer.
#     * Redistributions in binary form must reproduce the above
# copyright notice, this list of conditions and the following disclaimer
# in the documentation and/or other materials provided with the
# distribution.
#     * Neither the name of Google Inc. nor the names of its
# contributors may be used to endorse or promote products derived from
# this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

"""A tool to generate POS matcher.

This script generates POS matcher data and POS ID matching C++ functions for the
PosMatcher class. See pos_matcher.h for details.
"""

import codecs
import optparse
import struct

from dictionary import pos_util


def OutputPosMatcherData(pos_matcher, output):
  data = []
  for rule_name in pos_matcher.GetRuleNameList():
    data.append(pos_matcher.GetId(rule_name))

  offset = 2 * len(pos_matcher.GetRuleNameList())
  for rule_name in pos_matcher.GetRuleNameList():
    data.append(offset)
    offset += 2 * len(pos_matcher.GetRange(rule_name)) + 1

  for rule_name in pos_matcher.GetRuleNameList():
    for id_range in pos_matcher.GetRange(rule_name):
      data.append(id_range[0])
      data.append(id_range[1])
    data.append(0xFFFF)

  for u16 in data:
    output.write(struct.pack('<H', u16))


def OutputPosMatcherHeader(pos_matcher, output):
  """Generates the definition of PosMatcher class.

  PosMatcher is independent of the actual input data but just provides logic for
  POS matching. To use a generated class, it's required to pass the data
  generated by OutputPosMatcherData() above.
  """

  lid_table_size = len(pos_matcher.GetRuleNameList())

  output.write(' public:\n')

  # Helper function to generate Get<RuleName>Id() method from rule name and its
  # corresponding index.
  def _GenerateGetMethod(rule_name, index):
    return (
        '  constexpr uint16_t Get%(rule_name)sId() const {\n'
        '    return data_[%(index)d];\n'
        '  }'
        % {
            'rule_name': rule_name,
            'index': index,
        }
    )

  # Helper function to generate Is<RuleName>(uint16_t id) method from rule name
  # and its corresponding index. The generated function checks if the given id
  # belongs to some range in kRangeTable[index] = kRangeTable_RuleName[].
  def _GenerateIsMethod(rule_name, index):
    return (
        '  constexpr bool Is%(rule_name)s(uint16_t id) const {\n'
        '    return IsRuleInTable(%(index)d, id);\n'
        '  }'
        % {
            'rule_name': rule_name,
            'index': index,
        }
    )

  # Generate Get<RuleName>Id() and Is<RuleName>(uint16_t id) for each rule.
  for i, rule_name in enumerate(pos_matcher.GetRuleNameList()):
    output.write(
        '  // %(rule_name)s "%(original_pattern)s"\n'
        '%(get_method)s\n'
        '%(is_method)s\n'
        % {
            'rule_name': rule_name,
            'original_pattern': pos_matcher.GetOriginalPattern(rule_name),
            'get_method': _GenerateGetMethod(rule_name, i),
            'is_method': _GenerateIsMethod(rule_name, i),
        }
    )

  # Constructor takes two pointers to arrays generated by OutputPosMatcherData()
  # function.
  output.write(
      '\n'
      ' private:\n'
      '  static constexpr int kLidTableSize = %(lid_table_size)d;\n'
      % {
          'lid_table_size': lid_table_size,
      }
  )


def ParseOptions():
  parser = optparse.OptionParser()
  parser.add_option('--id_file', dest='id_file', help='Path to id.def')
  parser.add_option(
      '--special_pos_file',
      dest='special_pos_file',
      help='Path to special_pos.def',
  )
  parser.add_option(
      '--pos_matcher_rule_file',
      dest='pos_matcher_rule_file',
      help='Path to pos_matcher_rule.def',
  )
  parser.add_option(
      '--output_pos_matcher_data',
      dest='output_pos_matcher_data',
      default='',
      help='Path to the output file of pos matcher data.',
  )
  parser.add_option(
      '--output_pos_matcher_h',
      dest='output_pos_matcher_h',
      default='',
      help='Path to the output header file of PosMatcher.',
  )
  return parser.parse_args()[0]


def main():
  options = ParseOptions()

  if options.output_pos_matcher_h:
    # To generate a header file of PosMatcher, you don't need to specify
    # --id_file and --special_pos_file because empty POS database sufficies.
    pos_database = pos_util.PosDataBase()
    pos_matcher = pos_util.PosMatcher(pos_database)
    pos_matcher.Parse(options.pos_matcher_rule_file)
    with codecs.open(
        options.output_pos_matcher_h, 'w', encoding='utf-8'
    ) as stream:
      OutputPosMatcherHeader(pos_matcher, stream)

  if options.output_pos_matcher_data:
    pos_database = pos_util.PosDataBase()
    pos_database.Parse(options.id_file, options.special_pos_file)
    pos_matcher = pos_util.PosMatcher(pos_database)
    pos_matcher.Parse(options.pos_matcher_rule_file)
    with open(options.output_pos_matcher_data, 'wb') as stream:
      OutputPosMatcherData(pos_matcher, stream)


if __name__ == '__main__':
  main()
