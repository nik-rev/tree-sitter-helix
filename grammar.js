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
    // TODO: add the actual grammar rules
    source_file: ($) => "hello",
  },
});
