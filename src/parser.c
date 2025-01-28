#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__text_primary = 1,
  sym_char_primary = 2,
  sym_char_regular = 3,
  sym_start_left_primary = 4,
  sym_end_left_primary = 5,
  sym_start_right_primary = 6,
  sym_end_right_primary = 7,
  sym__text = 8,
  sym_start_right = 9,
  sym_end_right = 10,
  sym_start_left = 11,
  sym_end_left = 12,
  sym_source_file = 13,
  sym_left_primary = 14,
  sym_right_primary = 15,
  sym_text = 16,
  sym_right = 17,
  sym_left = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym_left_primary_repeat1 = 20,
  aux_sym_right_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__text_primary] = "_text_primary",
  [sym_char_primary] = "char",
  [sym_char_regular] = "char",
  [sym_start_left_primary] = "start_left_primary",
  [sym_end_left_primary] = "end_left_primary",
  [sym_start_right_primary] = "start_right_primary",
  [sym_end_right_primary] = "end_right_primary",
  [sym__text] = "_text",
  [sym_start_right] = "start_right",
  [sym_end_right] = "end_right",
  [sym_start_left] = "start_left",
  [sym_end_left] = "end_left",
  [sym_source_file] = "source_file",
  [sym_left_primary] = "left_primary",
  [sym_right_primary] = "right_primary",
  [sym_text] = "text",
  [sym_right] = "right",
  [sym_left] = "left",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_left_primary_repeat1] = "left_primary_repeat1",
  [aux_sym_right_repeat1] = "right_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__text_primary] = sym__text_primary,
  [sym_char_primary] = sym_char_primary,
  [sym_char_regular] = sym_char_primary,
  [sym_start_left_primary] = sym_start_left_primary,
  [sym_end_left_primary] = sym_end_left_primary,
  [sym_start_right_primary] = sym_start_right_primary,
  [sym_end_right_primary] = sym_end_right_primary,
  [sym__text] = sym__text,
  [sym_start_right] = sym_start_right,
  [sym_end_right] = sym_end_right,
  [sym_start_left] = sym_start_left,
  [sym_end_left] = sym_end_left,
  [sym_source_file] = sym_source_file,
  [sym_left_primary] = sym_left_primary,
  [sym_right_primary] = sym_right_primary,
  [sym_text] = sym_text,
  [sym_right] = sym_right,
  [sym_left] = sym_left,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_left_primary_repeat1] = aux_sym_left_primary_repeat1,
  [aux_sym_right_repeat1] = aux_sym_right_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__text_primary] = {
    .visible = false,
    .named = true,
  },
  [sym_char_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_char_regular] = {
    .visible = true,
    .named = true,
  },
  [sym_start_left_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_end_left_primary] = {
    .visible = true,
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
  [sym_left_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_right_primary] = {
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
  [aux_sym_left_primary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_right_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
      if (lookahead == '#') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '[') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '|') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(18);
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
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(16);
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
          lookahead == ')') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__text_primary);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(24);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__text_primary);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__text_primary);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_char_primary);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_char_primary);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_char_regular);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_char_regular);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_start_left_primary);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_end_left_primary);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_start_right_primary);
      if (lookahead == '|') ADVANCE(20);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_end_right_primary);
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
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_start_left_primary] = ACTIONS(1),
    [sym_end_left_primary] = ACTIONS(1),
    [sym_start_right_primary] = ACTIONS(1),
    [sym_end_right_primary] = ACTIONS(1),
    [sym_start_right] = ACTIONS(1),
    [sym_end_right] = ACTIONS(1),
    [sym_start_left] = ACTIONS(1),
    [sym_end_left] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym_left_primary] = STATE(2),
    [sym_right_primary] = STATE(2),
    [sym_text] = STATE(2),
    [sym_right] = STATE(2),
    [sym_left] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__text_primary] = ACTIONS(5),
    [sym_start_left_primary] = ACTIONS(7),
    [sym_start_right_primary] = ACTIONS(9),
    [sym__text] = ACTIONS(5),
    [sym_start_right] = ACTIONS(11),
    [sym_start_left] = ACTIONS(13),
  },
  [2] = {
    [sym_left_primary] = STATE(3),
    [sym_right_primary] = STATE(3),
    [sym_text] = STATE(3),
    [sym_right] = STATE(3),
    [sym_left] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__text_primary] = ACTIONS(5),
    [sym_start_left_primary] = ACTIONS(7),
    [sym_start_right_primary] = ACTIONS(9),
    [sym__text] = ACTIONS(5),
    [sym_start_right] = ACTIONS(11),
    [sym_start_left] = ACTIONS(13),
  },
  [3] = {
    [sym_left_primary] = STATE(3),
    [sym_right_primary] = STATE(3),
    [sym_text] = STATE(3),
    [sym_right] = STATE(3),
    [sym_left] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym__text_primary] = ACTIONS(19),
    [sym_start_left_primary] = ACTIONS(22),
    [sym_start_right_primary] = ACTIONS(25),
    [sym__text] = ACTIONS(19),
    [sym_start_right] = ACTIONS(28),
    [sym_start_left] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 6,
      sym__text_primary,
      sym_start_left_primary,
      sym_start_right_primary,
      sym__text,
      sym_start_right,
      sym_start_left,
  [12] = 2,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 6,
      sym__text_primary,
      sym_start_left_primary,
      sym_start_right_primary,
      sym__text,
      sym_start_right,
      sym_start_left,
  [24] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 6,
      sym__text_primary,
      sym_start_left_primary,
      sym_start_right_primary,
      sym__text,
      sym_start_right,
      sym_start_left,
  [36] = 2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 6,
      sym__text_primary,
      sym_start_left_primary,
      sym_start_right_primary,
      sym__text,
      sym_start_right,
      sym_start_left,
  [48] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 6,
      sym__text_primary,
      sym_start_left_primary,
      sym_start_right_primary,
      sym__text,
      sym_start_right,
      sym_start_left,
  [60] = 2,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 6,
      sym__text_primary,
      sym_start_left_primary,
      sym_start_right_primary,
      sym__text,
      sym_start_right,
      sym_start_left,
  [72] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 6,
      sym__text_primary,
      sym_start_left_primary,
      sym_start_right_primary,
      sym__text,
      sym_start_right,
      sym_start_left,
  [84] = 2,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 6,
      sym__text_primary,
      sym_start_left_primary,
      sym_start_right_primary,
      sym__text,
      sym_start_right,
      sym_start_left,
  [96] = 2,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 6,
      sym__text_primary,
      sym_start_left_primary,
      sym_start_right_primary,
      sym__text,
      sym_start_right,
      sym_start_left,
  [108] = 3,
    ACTIONS(70), 1,
      sym_char_primary,
    STATE(13), 1,
      aux_sym_left_primary_repeat1,
    ACTIONS(73), 2,
      sym_end_left_primary,
      sym_end_right_primary,
  [119] = 3,
    ACTIONS(75), 1,
      sym_char_regular,
    STATE(14), 1,
      aux_sym_right_repeat1,
    ACTIONS(78), 2,
      sym_end_right,
      sym_end_left,
  [130] = 3,
    ACTIONS(80), 1,
      sym_char_primary,
    ACTIONS(82), 1,
      sym_end_left_primary,
    STATE(19), 1,
      aux_sym_left_primary_repeat1,
  [140] = 3,
    ACTIONS(84), 1,
      sym_char_regular,
    ACTIONS(86), 1,
      sym_end_right,
    STATE(21), 1,
      aux_sym_right_repeat1,
  [150] = 3,
    ACTIONS(88), 1,
      sym_char_regular,
    ACTIONS(90), 1,
      sym_end_left,
    STATE(22), 1,
      aux_sym_right_repeat1,
  [160] = 3,
    ACTIONS(92), 1,
      sym_char_primary,
    ACTIONS(94), 1,
      sym_end_right_primary,
    STATE(20), 1,
      aux_sym_left_primary_repeat1,
  [170] = 3,
    ACTIONS(96), 1,
      sym_char_primary,
    ACTIONS(98), 1,
      sym_end_left_primary,
    STATE(13), 1,
      aux_sym_left_primary_repeat1,
  [180] = 3,
    ACTIONS(96), 1,
      sym_char_primary,
    ACTIONS(100), 1,
      sym_end_right_primary,
    STATE(13), 1,
      aux_sym_left_primary_repeat1,
  [190] = 3,
    ACTIONS(102), 1,
      sym_char_regular,
    ACTIONS(104), 1,
      sym_end_right,
    STATE(14), 1,
      aux_sym_right_repeat1,
  [200] = 3,
    ACTIONS(102), 1,
      sym_char_regular,
    ACTIONS(106), 1,
      sym_end_left,
    STATE(14), 1,
      aux_sym_right_repeat1,
  [210] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
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
  [SMALL_STATE(14)] = 119,
  [SMALL_STATE(15)] = 130,
  [SMALL_STATE(16)] = 140,
  [SMALL_STATE(17)] = 150,
  [SMALL_STATE(18)] = 160,
  [SMALL_STATE(19)] = 170,
  [SMALL_STATE(20)] = 180,
  [SMALL_STATE(21)] = 190,
  [SMALL_STATE(22)] = 200,
  [SMALL_STATE(23)] = 210,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_primary, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_primary, 2, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_primary, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_primary, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_primary, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_primary, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_primary, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_primary, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 3, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left, 3, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_left_primary_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_left_primary_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_right_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_right_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_helix(void) {
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
