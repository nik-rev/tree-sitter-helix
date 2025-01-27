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
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice($.primary_left, $.primary_right, $.left, $.right, $.text),

    // TODO: figure out how to allow more characters as text.
    // Ideally we would allow anything other than our keyword characters,
    // but I'm not sure how to do that
    text: () => /[\d\w\s]+/,

    _outer_text_token: () => /[^#]/,

    _opening_primary_left: () => "#[|",
    _closing_primary_left: () => "]#",

    primary_left: ($) =>
      seq($._opening_primary_left, $.text, $._closing_primary_left),

    _opening_primary_right: () => "#[",
    _closing_primary_right: () => "|]#",

    primary_right: ($) =>
      seq($._opening_primary_right, $.text, $._closing_primary_right),

    _opening_left: () => "#(|",
    _closing_left: () => ")#",

    left: ($) => seq($._opening_left, $.text, $._closing_left),

    _opening_right: () => "#(",
    _closing_right: () => "|)#",

    right: ($) => seq($._opening_right, $.text, $._closing_right),
  },
});
