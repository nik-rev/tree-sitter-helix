#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_text_primary = 1,
  sym_opening_primary_left = 2,
  sym_closing_primary_left = 3,
  sym_opening_primary_right = 4,
  sym_closing_primary_right = 5,
  sym_text = 6,
  sym_opening_right = 7,
  sym_closing_right = 8,
  sym_opening_left = 9,
  sym_closing_left = 10,
  sym_source_file = 11,
  sym_primary_left = 12,
  sym_primary_right = 13,
  sym_right = 14,
  sym_left = 15,
  aux_sym_source_file_repeat1 = 16,
  aux_sym_primary_left_repeat1 = 17,
  aux_sym_right_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text_primary] = "text_primary",
  [sym_opening_primary_left] = "opening_primary_left",
  [sym_closing_primary_left] = "closing_primary_left",
  [sym_opening_primary_right] = "opening_primary_right",
  [sym_closing_primary_right] = "closing_primary_right",
  [sym_text] = "text",
  [sym_opening_right] = "opening_right",
  [sym_closing_right] = "closing_right",
  [sym_opening_left] = "opening_left",
  [sym_closing_left] = "closing_left",
  [sym_source_file] = "source_file",
  [sym_primary_left] = "primary_left",
  [sym_primary_right] = "primary_right",
  [sym_right] = "right",
  [sym_left] = "left",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_primary_left_repeat1] = "primary_left_repeat1",
  [aux_sym_right_repeat1] = "right_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_text_primary] = sym_text_primary,
  [sym_opening_primary_left] = sym_opening_primary_left,
  [sym_closing_primary_left] = sym_closing_primary_left,
  [sym_opening_primary_right] = sym_opening_primary_right,
  [sym_closing_primary_right] = sym_closing_primary_right,
  [sym_text] = sym_text,
  [sym_opening_right] = sym_opening_right,
  [sym_closing_right] = sym_closing_right,
  [sym_opening_left] = sym_opening_left,
  [sym_closing_left] = sym_closing_left,
  [sym_source_file] = sym_source_file,
  [sym_primary_left] = sym_primary_left,
  [sym_primary_right] = sym_primary_right,
  [sym_right] = sym_right,
  [sym_left] = sym_left,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_primary_left_repeat1] = aux_sym_primary_left_repeat1,
  [aux_sym_right_repeat1] = aux_sym_right_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_text_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_opening_primary_left] = {
    .visible = true,
    .named = true,
  },
  [sym_closing_primary_left] = {
    .visible = true,
    .named = true,
  },
  [sym_opening_primary_right] = {
    .visible = true,
    .named = true,
  },
  [sym_closing_primary_right] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_opening_right] = {
    .visible = true,
    .named = true,
  },
  [sym_closing_right] = {
    .visible = true,
    .named = true,
  },
  [sym_opening_left] = {
    .visible = true,
    .named = true,
  },
  [sym_closing_left] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_left] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_right] = {
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
  [aux_sym_primary_left_repeat1] = {
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
      if (lookahead == '#') ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '[') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '|') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(22);
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
          lookahead == ' ') ADVANCE(15);
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
          lookahead == ']') ADVANCE(22);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_text_primary);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(22);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_text_primary);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_text_primary);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_text_primary);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_opening_primary_left);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_closing_primary_left);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_opening_primary_right);
      if (lookahead == '|') ADVANCE(17);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_closing_primary_right);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_opening_right);
      if (lookahead == '|') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_closing_right);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_opening_left);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_closing_left);
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
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_opening_primary_left] = ACTIONS(1),
    [sym_closing_primary_left] = ACTIONS(1),
    [sym_opening_primary_right] = ACTIONS(1),
    [sym_closing_primary_right] = ACTIONS(1),
    [sym_opening_right] = ACTIONS(1),
    [sym_closing_right] = ACTIONS(1),
    [sym_opening_left] = ACTIONS(1),
    [sym_closing_left] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_primary_left] = STATE(2),
    [sym_primary_right] = STATE(2),
    [sym_right] = STATE(2),
    [sym_left] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text_primary] = ACTIONS(5),
    [sym_opening_primary_left] = ACTIONS(7),
    [sym_opening_primary_right] = ACTIONS(9),
    [sym_text] = ACTIONS(5),
    [sym_opening_right] = ACTIONS(11),
    [sym_opening_left] = ACTIONS(13),
  },
  [2] = {
    [sym_primary_left] = STATE(3),
    [sym_primary_right] = STATE(3),
    [sym_right] = STATE(3),
    [sym_left] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_text_primary] = ACTIONS(17),
    [sym_opening_primary_left] = ACTIONS(7),
    [sym_opening_primary_right] = ACTIONS(9),
    [sym_text] = ACTIONS(17),
    [sym_opening_right] = ACTIONS(11),
    [sym_opening_left] = ACTIONS(13),
  },
  [3] = {
    [sym_primary_left] = STATE(3),
    [sym_primary_right] = STATE(3),
    [sym_right] = STATE(3),
    [sym_left] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_text_primary] = ACTIONS(21),
    [sym_opening_primary_left] = ACTIONS(24),
    [sym_opening_primary_right] = ACTIONS(27),
    [sym_text] = ACTIONS(21),
    [sym_opening_right] = ACTIONS(30),
    [sym_opening_left] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 6,
      sym_text_primary,
      sym_opening_primary_left,
      sym_opening_primary_right,
      sym_text,
      sym_opening_right,
      sym_opening_left,
  [12] = 2,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 6,
      sym_text_primary,
      sym_opening_primary_left,
      sym_opening_primary_right,
      sym_text,
      sym_opening_right,
      sym_opening_left,
  [24] = 2,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 6,
      sym_text_primary,
      sym_opening_primary_left,
      sym_opening_primary_right,
      sym_text,
      sym_opening_right,
      sym_opening_left,
  [36] = 2,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 6,
      sym_text_primary,
      sym_opening_primary_left,
      sym_opening_primary_right,
      sym_text,
      sym_opening_right,
      sym_opening_left,
  [48] = 2,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 6,
      sym_text_primary,
      sym_opening_primary_left,
      sym_opening_primary_right,
      sym_text,
      sym_opening_right,
      sym_opening_left,
  [60] = 2,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 6,
      sym_text_primary,
      sym_opening_primary_left,
      sym_opening_primary_right,
      sym_text,
      sym_opening_right,
      sym_opening_left,
  [72] = 2,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 6,
      sym_text_primary,
      sym_opening_primary_left,
      sym_opening_primary_right,
      sym_text,
      sym_opening_right,
      sym_opening_left,
  [84] = 2,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 6,
      sym_text_primary,
      sym_opening_primary_left,
      sym_opening_primary_right,
      sym_text,
      sym_opening_right,
      sym_opening_left,
  [96] = 3,
    ACTIONS(68), 1,
      sym_text_primary,
    STATE(12), 1,
      aux_sym_primary_left_repeat1,
    ACTIONS(71), 2,
      sym_closing_primary_left,
      sym_closing_primary_right,
  [107] = 3,
    ACTIONS(73), 1,
      sym_text,
    STATE(13), 1,
      aux_sym_right_repeat1,
    ACTIONS(76), 2,
      sym_closing_right,
      sym_closing_left,
  [118] = 3,
    ACTIONS(78), 1,
      sym_text_primary,
    ACTIONS(80), 1,
      sym_closing_primary_left,
    STATE(18), 1,
      aux_sym_primary_left_repeat1,
  [128] = 3,
    ACTIONS(82), 1,
      sym_text_primary,
    ACTIONS(84), 1,
      sym_closing_primary_right,
    STATE(19), 1,
      aux_sym_primary_left_repeat1,
  [138] = 3,
    ACTIONS(86), 1,
      sym_text,
    ACTIONS(88), 1,
      sym_closing_right,
    STATE(20), 1,
      aux_sym_right_repeat1,
  [148] = 3,
    ACTIONS(90), 1,
      sym_text,
    ACTIONS(92), 1,
      sym_closing_left,
    STATE(21), 1,
      aux_sym_right_repeat1,
  [158] = 3,
    ACTIONS(94), 1,
      sym_text_primary,
    ACTIONS(96), 1,
      sym_closing_primary_left,
    STATE(12), 1,
      aux_sym_primary_left_repeat1,
  [168] = 3,
    ACTIONS(94), 1,
      sym_text_primary,
    ACTIONS(98), 1,
      sym_closing_primary_right,
    STATE(12), 1,
      aux_sym_primary_left_repeat1,
  [178] = 3,
    ACTIONS(100), 1,
      sym_text,
    ACTIONS(102), 1,
      sym_closing_right,
    STATE(13), 1,
      aux_sym_right_repeat1,
  [188] = 3,
    ACTIONS(100), 1,
      sym_text,
    ACTIONS(104), 1,
      sym_closing_left,
    STATE(13), 1,
      aux_sym_right_repeat1,
  [198] = 1,
    ACTIONS(106), 1,
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
  [SMALL_STATE(13)] = 107,
  [SMALL_STATE(14)] = 118,
  [SMALL_STATE(15)] = 128,
  [SMALL_STATE(16)] = 138,
  [SMALL_STATE(17)] = 148,
  [SMALL_STATE(18)] = 158,
  [SMALL_STATE(19)] = 168,
  [SMALL_STATE(20)] = 178,
  [SMALL_STATE(21)] = 188,
  [SMALL_STATE(22)] = 198,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_left, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_left, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_right, 2, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_right, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_left, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_left, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_right, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_right, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right, 3, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left, 3, 0, 0),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_primary_left_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_primary_left_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_right_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_right_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
