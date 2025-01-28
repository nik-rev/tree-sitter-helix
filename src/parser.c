#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 1
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_start_right_primary = 1,
  sym_end_right_primary = 2,
  sym__text_primary = 3,
  sym_char_primary = 4,
  sym_char_regular = 5,
  sym_start_left_primary = 6,
  sym_end_left_primary = 7,
  sym__text = 8,
  sym_start_right = 9,
  sym_end_right = 10,
  sym_start_left = 11,
  sym_end_left = 12,
  sym_source_file = 13,
  sym_right_primary = 14,
  sym_cursor_primary = 15,
  sym_cursor = 16,
  sym_left_primary = 17,
  sym_text = 18,
  sym_right = 19,
  sym_left = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_right_primary_repeat1 = 22,
  aux_sym_right_repeat1 = 23,
  alias_sym_char = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_start_right_primary] = "start_right_primary",
  [sym_end_right_primary] = "end_right_primary",
  [sym__text_primary] = "_text_primary",
  [sym_char_primary] = "cursor_primary",
  [sym_char_regular] = "cursor",
  [sym_start_left_primary] = "start_left_primary",
  [sym_end_left_primary] = "end_left_primary",
  [sym__text] = "_text",
  [sym_start_right] = "start_right",
  [sym_end_right] = "end_right",
  [sym_start_left] = "start_left",
  [sym_end_left] = "end_left",
  [sym_source_file] = "source_file",
  [sym_right_primary] = "right_primary",
  [sym_cursor_primary] = "cursor_primary",
  [sym_cursor] = "cursor",
  [sym_left_primary] = "left_primary",
  [sym_text] = "text",
  [sym_right] = "right",
  [sym_left] = "left",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_right_primary_repeat1] = "right_primary_repeat1",
  [aux_sym_right_repeat1] = "right_repeat1",
  [alias_sym_char] = "char",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_start_right_primary] = sym_start_right_primary,
  [sym_end_right_primary] = sym_end_right_primary,
  [sym__text_primary] = sym__text_primary,
  [sym_char_primary] = sym_char_primary,
  [sym_char_regular] = sym_char_regular,
  [sym_start_left_primary] = sym_start_left_primary,
  [sym_end_left_primary] = sym_end_left_primary,
  [sym__text] = sym__text,
  [sym_start_right] = sym_start_right,
  [sym_end_right] = sym_end_right,
  [sym_start_left] = sym_start_left,
  [sym_end_left] = sym_end_left,
  [sym_source_file] = sym_source_file,
  [sym_right_primary] = sym_right_primary,
  [sym_cursor_primary] = sym_cursor_primary,
  [sym_cursor] = sym_cursor,
  [sym_left_primary] = sym_left_primary,
  [sym_text] = sym_text,
  [sym_right] = sym_right,
  [sym_left] = sym_left,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_right_primary_repeat1] = aux_sym_right_primary_repeat1,
  [aux_sym_right_repeat1] = aux_sym_right_repeat1,
  [alias_sym_char] = alias_sym_char,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_start_right_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_end_right_primary] = {
    .visible = true,
    .named = true,
  },
  [sym__text_primary] = {
    .visible = false,
    .named = true,
  },
  [sym_char_primary] = {
    .visible = true,
    .named = false,
  },
  [sym_char_regular] = {
    .visible = true,
    .named = false,
  },
  [sym_start_left_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_end_left_primary] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_start_right] = {
    .visible = true,
    .named = true,
  },
  [sym_end_right] = {
    .visible = true,
    .named = true,
  },
  [sym_start_left] = {
    .visible = true,
    .named = true,
  },
  [sym_end_left] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_right_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_cursor_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_cursor] = {
    .visible = true,
    .named = true,
  },
  [sym_left_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_right] = {
    .visible = true,
    .named = true,
  },
  [sym_left] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_right_primary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_right_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_char] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_char,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == ']') ADVANCE(2);
      if (lookahead == '|') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '[') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '|') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(3);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == ']') ADVANCE(4);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(2);
      if (lookahead == '|') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == ']') ADVANCE(4);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(24);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(15);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_start_right_primary);
      if (lookahead == '|') ADVANCE(22);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_end_right_primary);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__text_primary);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(24);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__text_primary);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__text_primary);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_char_primary);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_char_primary);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_char_regular);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_char_regular);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_start_left_primary);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_end_left_primary);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_start_right);
      if (lookahead == '|') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_end_right);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_start_left);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_end_left);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_start_right_primary] = ACTIONS(1),
    [sym_end_right_primary] = ACTIONS(1),
    [sym_start_left_primary] = ACTIONS(1),
    [sym_end_left_primary] = ACTIONS(1),
    [sym_start_right] = ACTIONS(1),
    [sym_end_right] = ACTIONS(1),
    [sym_start_left] = ACTIONS(1),
    [sym_end_left] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym_right_primary] = STATE(3),
    [sym_left_primary] = STATE(3),
    [sym_text] = STATE(3),
    [sym_right] = STATE(3),
    [sym_left] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_start_right_primary] = ACTIONS(5),
    [sym__text_primary] = ACTIONS(7),
    [sym_start_left_primary] = ACTIONS(9),
    [sym__text] = ACTIONS(7),
    [sym_start_right] = ACTIONS(11),
    [sym_start_left] = ACTIONS(13),
  },
  [2] = {
    [sym_right_primary] = STATE(2),
    [sym_left_primary] = STATE(2),
    [sym_text] = STATE(2),
    [sym_right] = STATE(2),
    [sym_left] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_start_right_primary] = ACTIONS(17),
    [sym__text_primary] = ACTIONS(20),
    [sym_start_left_primary] = ACTIONS(23),
    [sym__text] = ACTIONS(20),
    [sym_start_right] = ACTIONS(26),
    [sym_start_left] = ACTIONS(29),
  },
  [3] = {
    [sym_right_primary] = STATE(2),
    [sym_left_primary] = STATE(2),
    [sym_text] = STATE(2),
    [sym_right] = STATE(2),
    [sym_left] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym_start_right_primary] = ACTIONS(5),
    [sym__text_primary] = ACTIONS(7),
    [sym_start_left_primary] = ACTIONS(9),
    [sym__text] = ACTIONS(7),
    [sym_start_right] = ACTIONS(11),
    [sym_start_left] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 6,
      sym_start_right_primary,
      sym__text_primary,
      sym_start_left_primary,
      sym__text,
      sym_start_right,
      sym_start_left,
  [12] = 2,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 6,
      sym_start_right_primary,
      sym__text_primary,
      sym_start_left_primary,
      sym__text,
      sym_start_right,
      sym_start_left,
  [24] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 6,
      sym_start_right_primary,
      sym__text_primary,
      sym_start_left_primary,
      sym__text,
      sym_start_right,
      sym_start_left,
  [36] = 2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 6,
      sym_start_right_primary,
      sym__text_primary,
      sym_start_left_primary,
      sym__text,
      sym_start_right,
      sym_start_left,
  [48] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 6,
      sym_start_right_primary,
      sym__text_primary,
      sym_start_left_primary,
      sym__text,
      sym_start_right,
      sym_start_left,
  [60] = 2,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 6,
      sym_start_right_primary,
      sym__text_primary,
      sym_start_left_primary,
      sym__text,
      sym_start_right,
      sym_start_left,
  [72] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 6,
      sym_start_right_primary,
      sym__text_primary,
      sym_start_left_primary,
      sym__text,
      sym_start_right,
      sym_start_left,
  [84] = 2,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 6,
      sym_start_right_primary,
      sym__text_primary,
      sym_start_left_primary,
      sym__text,
      sym_start_right,
      sym_start_left,
  [96] = 2,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 6,
      sym_start_right_primary,
      sym__text_primary,
      sym_start_left_primary,
      sym__text,
      sym_start_right,
      sym_start_left,
  [108] = 3,
    ACTIONS(70), 1,
      sym_char_regular,
    ACTIONS(73), 1,
      sym_end_left,
    STATE(13), 1,
      aux_sym_right_repeat1,
  [118] = 3,
    ACTIONS(75), 1,
      sym_char_regular,
    STATE(13), 1,
      aux_sym_right_repeat1,
    STATE(34), 1,
      sym_cursor,
  [128] = 3,
    ACTIONS(77), 1,
      sym_char_primary,
    ACTIONS(80), 1,
      sym_end_left_primary,
    STATE(15), 1,
      aux_sym_right_primary_repeat1,
  [138] = 3,
    ACTIONS(82), 1,
      sym_char_regular,
    ACTIONS(84), 1,
      sym_end_left,
    STATE(21), 1,
      aux_sym_right_repeat1,
  [148] = 3,
    ACTIONS(75), 1,
      sym_char_regular,
    STATE(14), 1,
      aux_sym_right_repeat1,
    STATE(31), 1,
      sym_cursor,
  [158] = 3,
    ACTIONS(86), 1,
      sym_char_primary,
    ACTIONS(88), 1,
      sym_end_left_primary,
    STATE(15), 1,
      aux_sym_right_primary_repeat1,
  [168] = 3,
    ACTIONS(90), 1,
      sym_char_primary,
    STATE(20), 1,
      aux_sym_right_primary_repeat1,
    STATE(35), 1,
      sym_cursor_primary,
  [178] = 3,
    ACTIONS(90), 1,
      sym_char_primary,
    STATE(15), 1,
      aux_sym_right_primary_repeat1,
    STATE(32), 1,
      sym_cursor_primary,
  [188] = 3,
    ACTIONS(82), 1,
      sym_char_regular,
    ACTIONS(92), 1,
      sym_end_left,
    STATE(13), 1,
      aux_sym_right_repeat1,
  [198] = 3,
    ACTIONS(86), 1,
      sym_char_primary,
    ACTIONS(94), 1,
      sym_end_left_primary,
    STATE(18), 1,
      aux_sym_right_primary_repeat1,
  [208] = 2,
    ACTIONS(96), 1,
      sym_char_regular,
    ACTIONS(98), 1,
      sym_end_right,
  [215] = 2,
    ACTIONS(100), 1,
      sym_char_primary,
    STATE(22), 1,
      sym_cursor_primary,
  [222] = 2,
    ACTIONS(98), 1,
      sym_end_left,
    ACTIONS(102), 1,
      sym_char_regular,
  [229] = 2,
    ACTIONS(104), 1,
      sym_char_primary,
    ACTIONS(106), 1,
      sym_end_left_primary,
  [236] = 2,
    ACTIONS(108), 1,
      sym_char_regular,
    STATE(16), 1,
      sym_cursor,
  [243] = 2,
    ACTIONS(104), 1,
      sym_char_primary,
    ACTIONS(110), 1,
      sym_end_right_primary,
  [250] = 2,
    ACTIONS(96), 1,
      sym_char_regular,
    ACTIONS(112), 1,
      sym_end_left,
  [257] = 2,
    ACTIONS(110), 1,
      sym_end_left_primary,
    ACTIONS(114), 1,
      sym_char_primary,
  [264] = 1,
    ACTIONS(116), 1,
      sym_end_right,
  [268] = 1,
    ACTIONS(118), 1,
      sym_end_right_primary,
  [272] = 1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
  [276] = 1,
    ACTIONS(122), 1,
      sym_end_right,
  [280] = 1,
    ACTIONS(124), 1,
      sym_end_right_primary,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 12,
  [SMALL_STATE(6)] = 24,
  [SMALL_STATE(7)] = 36,
  [SMALL_STATE(8)] = 48,
  [SMALL_STATE(9)] = 60,
  [SMALL_STATE(10)] = 72,
  [SMALL_STATE(11)] = 84,
  [SMALL_STATE(12)] = 96,
  [SMALL_STATE(13)] = 108,
  [SMALL_STATE(14)] = 118,
  [SMALL_STATE(15)] = 128,
  [SMALL_STATE(16)] = 138,
  [SMALL_STATE(17)] = 148,
  [SMALL_STATE(18)] = 158,
  [SMALL_STATE(19)] = 168,
  [SMALL_STATE(20)] = 178,
  [SMALL_STATE(21)] = 188,
  [SMALL_STATE(22)] = 198,
  [SMALL_STATE(23)] = 208,
  [SMALL_STATE(24)] = 215,
  [SMALL_STATE(25)] = 222,
  [SMALL_STATE(26)] = 229,
  [SMALL_STATE(27)] = 236,
  [SMALL_STATE(28)] = 243,
  [SMALL_STATE(29)] = 250,
  [SMALL_STATE(30)] = 257,
  [SMALL_STATE(31)] = 264,
  [SMALL_STATE(32)] = 268,
  [SMALL_STATE(33)] = 272,
  [SMALL_STATE(34)] = 276,
  [SMALL_STATE(35)] = 280,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_primary, 3, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_primary, 3, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 3, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_primary, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_primary, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_primary, 4, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_primary, 4, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_primary, 4, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_primary, 4, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 4, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right, 4, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 4, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left, 4, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_right_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_right_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_right_primary_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_right_primary_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_right_repeat1, 1, 0, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cursor, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cursor, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_right_primary_repeat1, 1, 0, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_right_primary_repeat1, 1, 0, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cursor_primary, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_right_repeat1, 1, 0, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cursor_primary, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_multicursor(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
