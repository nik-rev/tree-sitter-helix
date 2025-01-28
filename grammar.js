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
      repeat(
        choice(
          $.primary_left,
          $.primary_right,
          $.right,
          $.left,
          $.text,
          $.text_primary,
        ),
      ),

    text_primary: () => /[^#\[\]\|]+/,

    opening_primary_left: () => "#[|",
    closing_primary_left: () => "]#",
    primary_left: ($) =>
      seq(
        $.opening_primary_left,
        repeat($.text_primary),
        $.closing_primary_left,
      ),

    opening_primary_right: () => "#[",
    closing_primary_right: () => "|]#",
    primary_right: ($) =>
      seq(
        $.opening_primary_right,
        repeat($.text_primary),
        $.closing_primary_right,
      ),

    text: () => /[^#\(\)\|]+/,

    opening_right: () => "#(",
    closing_right: () => "|)#",
    right: ($) => seq($.opening_right, repeat($.text), $.closing_right),

    opening_left: () => "#(|",
    closing_left: () => ")#",
    left: ($) => seq($.opening_left, repeat($.text), $.closing_left),
  },
});
