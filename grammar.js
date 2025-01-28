/**
 * @file A parser for the extremely simple Helix language
 * @author Nikita Revenco <pm@nikrev.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "helix",

  rules: {
    source_file: ($) =>
      repeat(choice($.left_primary, $.right_primary, $.right, $.left, $.text)),

    _text_primary: () => /[^#\[\]\|]+/,

    start_left_primary: () => "#[|",
    end_left_primary: () => "]#",
    left_primary: ($) =>
      seq(
        $.start_left_primary,
        repeat(alias($._text_primary, $.text)),
        $.end_left_primary,
      ),

    start_right_primary: () => "#[",
    end_right_primary: () => "|]#",
    right_primary: ($) =>
      seq(
        $.start_right_primary,
        repeat(alias($._text_primary, $.text)),
        $.end_right_primary,
      ),

    text: ($) => choice($._text, $._text_primary),

    _text: () => /[^#\(\)\|]+/,

    start_right: () => "#(",
    end_right: () => "|)#",
    right: ($) =>
      seq($.start_right, repeat(alias($._text, $.text)), $.end_right),

    start_left: () => "#(|",
    end_left: () => ")#",
    left: ($) => seq($.start_left, repeat(alias($._text, $.text)), $.end_left),
  },
});
