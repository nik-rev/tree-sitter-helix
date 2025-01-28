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
      repeat(choice($.primary_left, $.primary_right, $.right, $.left, $.text)),

    _text_primary: () => /[^#\[\]\|]+/,

    _opening_primary_left: () => "#[|",
    _closing_primary_left: () => "]#",
    primary_left: ($) =>
      seq(
        alias($._opening_primary_left, $.punctuation),
        repeat(alias($._text_primary, $.text)),
        alias($._closing_primary_left, $.punctuation),
      ),

    _opening_primary_right: () => "#[",
    _closing_primary_right: () => "|]#",
    primary_right: ($) =>
      seq(
        alias($._opening_primary_right, $.punctuation),
        repeat(alias($._text_primary, $.text)),
        alias($._closing_primary_right, $.punctuation),
      ),

    text: ($) => choice($._text, $._text_primary),

    _text: () => /[^#\(\)\|]+/,

    _opening_right: () => "#(",
    _closing_right: () => "|)#",
    right: ($) =>
      seq(
        alias($._opening_right, $.punctuation),
        repeat(alias($._text, $.text)),
        alias($._closing_right, $.punctuation),
      ),

    punctuation: ($) =>
      choice(
        $._closing_left,
        $._opening_left,
        $._closing_right,
        $._opening_right,
        $._closing_primary_left,
        $._opening_primary_left,
        $._closing_primary_right,
        $._opening_primary_right,
      ),

    _opening_left: () => "#(|",
    _closing_left: () => ")#",
    left: ($) =>
      seq(
        alias($._opening_left, $.punctuation),
        repeat(alias($._text, $.text)),
        alias($._closing_left, $.punctuation),
      ),
  },
});
