#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__text = 1,
  anon_sym_POUND_LBRACK_PIPE = 2,
  anon_sym_RBRACK_POUND = 3,
  anon_sym_POUND_LBRACK = 4,
  anon_sym_PIPE_RBRACK_POUND = 5,
  anon_sym_POUND_LPAREN_PIPE = 6,
  anon_sym_RPAREN_POUND = 7,
  anon_sym_POUND_LPAREN = 8,
  anon_sym_PIPE_RPAREN_POUND = 9,
  sym_source_file = 10,
  sym__definition = 11,
  sym__opening_primary_left = 12,
  sym__closing_primary_left = 13,
  sym_primary_left = 14,
  sym__opening_primary_right = 15,
  sym__closing_primary_right = 16,
  sym_primary_right = 17,
  sym__opening_left = 18,
  sym__closing_left = 19,
  sym_left = 20,
  sym__opening_right = 21,
  sym__closing_right = 22,
  sym_right = 23,
  aux_sym_source_file_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__text] = "_text",
  [anon_sym_POUND_LBRACK_PIPE] = "#[|",
  [anon_sym_RBRACK_POUND] = "]#",
  [anon_sym_POUND_LBRACK] = "#[",
  [anon_sym_PIPE_RBRACK_POUND] = "|]#",
  [anon_sym_POUND_LPAREN_PIPE] = "#(|",
  [anon_sym_RPAREN_POUND] = ")#",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_PIPE_RPAREN_POUND] = "|)#",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__opening_primary_left] = "_opening_primary_left",
  [sym__closing_primary_left] = "_closing_primary_left",
  [sym_primary_left] = "primary_left",
  [sym__opening_primary_right] = "_opening_primary_right",
  [sym__closing_primary_right] = "_closing_primary_right",
  [sym_primary_right] = "primary_right",
  [sym__opening_left] = "_opening_left",
  [sym__closing_left] = "_closing_left",
  [sym_left] = "left",
  [sym__opening_right] = "_opening_right",
  [sym__closing_right] = "_closing_right",
  [sym_right] = "right",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__text] = sym__text,
  [anon_sym_POUND_LBRACK_PIPE] = anon_sym_POUND_LBRACK_PIPE,
  [anon_sym_RBRACK_POUND] = anon_sym_RBRACK_POUND,
  [anon_sym_POUND_LBRACK] = anon_sym_POUND_LBRACK,
  [anon_sym_PIPE_RBRACK_POUND] = anon_sym_PIPE_RBRACK_POUND,
  [anon_sym_POUND_LPAREN_PIPE] = anon_sym_POUND_LPAREN_PIPE,
  [anon_sym_RPAREN_POUND] = anon_sym_RPAREN_POUND,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_PIPE_RPAREN_POUND] = anon_sym_PIPE_RPAREN_POUND,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__opening_primary_left] = sym__opening_primary_left,
  [sym__closing_primary_left] = sym__closing_primary_left,
  [sym_primary_left] = sym_primary_left,
  [sym__opening_primary_right] = sym__opening_primary_right,
  [sym__closing_primary_right] = sym__closing_primary_right,
  [sym_primary_right] = sym_primary_right,
  [sym__opening_left] = sym__opening_left,
  [sym__closing_left] = sym__closing_left,
  [sym_left] = sym_left,
  [sym__opening_right] = sym__opening_right,
  [sym__closing_right] = sym__closing_right,
  [sym_right] = sym_right,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_LBRACK_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_RBRACK_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LPAREN_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_RPAREN_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__opening_primary_left] = {
    .visible = false,
    .named = true,
  },
  [sym__closing_primary_left] = {
    .visible = false,
    .named = true,
  },
  [sym_primary_left] = {
    .visible = true,
    .named = true,
  },
  [sym__opening_primary_right] = {
    .visible = false,
    .named = true,
  },
  [sym__closing_primary_right] = {
    .visible = false,
    .named = true,
  },
  [sym_primary_right] = {
    .visible = true,
    .named = true,
  },
  [sym__opening_left] = {
    .visible = false,
    .named = true,
  },
  [sym__closing_left] = {
    .visible = false,
    .named = true,
  },
  [sym_left] = {
    .visible = true,
    .named = true,
  },
  [sym__opening_right] = {
    .visible = false,
    .named = true,
  },
  [sym__closing_right] = {
    .visible = false,
    .named = true,
  },
  [sym_right] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == ']') ADVANCE(2);
      if (lookahead == '|') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == '[') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == ']') ADVANCE(4);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '#') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK_PIPE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACK_POUND);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      if (lookahead == '|') ADVANCE(11);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACK_POUND);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN_PIPE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN_POUND);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      if (lookahead == '|') ADVANCE(15);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PIPE_RPAREN_POUND);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_LBRACK_PIPE] = ACTIONS(1),
    [anon_sym_RBRACK_POUND] = ACTIONS(1),
    [anon_sym_POUND_LBRACK] = ACTIONS(1),
    [anon_sym_PIPE_RBRACK_POUND] = ACTIONS(1),
    [anon_sym_POUND_LPAREN_PIPE] = ACTIONS(1),
    [anon_sym_RPAREN_POUND] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [anon_sym_PIPE_RPAREN_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(12),
    [sym__definition] = STATE(2),
    [sym__opening_primary_left] = STATE(13),
    [sym_primary_left] = STATE(2),
    [sym__opening_primary_right] = STATE(14),
    [sym_primary_right] = STATE(2),
    [sym__opening_left] = STATE(15),
    [sym_left] = STATE(2),
    [sym__opening_right] = STATE(16),
    [sym_right] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__text] = ACTIONS(5),
    [anon_sym_POUND_LBRACK_PIPE] = ACTIONS(7),
    [anon_sym_POUND_LBRACK] = ACTIONS(9),
    [anon_sym_POUND_LPAREN_PIPE] = ACTIONS(11),
    [anon_sym_POUND_LPAREN] = ACTIONS(13),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym__opening_primary_left] = STATE(13),
    [sym_primary_left] = STATE(3),
    [sym__opening_primary_right] = STATE(14),
    [sym_primary_right] = STATE(3),
    [sym__opening_left] = STATE(15),
    [sym_left] = STATE(3),
    [sym__opening_right] = STATE(16),
    [sym_right] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__text] = ACTIONS(17),
    [anon_sym_POUND_LBRACK_PIPE] = ACTIONS(7),
    [anon_sym_POUND_LBRACK] = ACTIONS(9),
    [anon_sym_POUND_LPAREN_PIPE] = ACTIONS(11),
    [anon_sym_POUND_LPAREN] = ACTIONS(13),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym__opening_primary_left] = STATE(13),
    [sym_primary_left] = STATE(3),
    [sym__opening_primary_right] = STATE(14),
    [sym_primary_right] = STATE(3),
    [sym__opening_left] = STATE(15),
    [sym_left] = STATE(3),
    [sym__opening_right] = STATE(16),
    [sym_right] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__text] = ACTIONS(21),
    [anon_sym_POUND_LBRACK_PIPE] = ACTIONS(24),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_POUND_LPAREN_PIPE] = ACTIONS(30),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(38), 4,
      anon_sym_POUND_LBRACK_PIPE,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN_PIPE,
      anon_sym_POUND_LPAREN,
  [11] = 2,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(42), 4,
      anon_sym_POUND_LBRACK_PIPE,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN_PIPE,
      anon_sym_POUND_LPAREN,
  [22] = 2,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(46), 4,
      anon_sym_POUND_LBRACK_PIPE,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN_PIPE,
      anon_sym_POUND_LPAREN,
  [33] = 2,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(50), 4,
      anon_sym_POUND_LBRACK_PIPE,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN_PIPE,
      anon_sym_POUND_LPAREN,
  [44] = 2,
    ACTIONS(52), 1,
      anon_sym_RBRACK_POUND,
    STATE(4), 1,
      sym__closing_primary_left,
  [51] = 2,
    ACTIONS(54), 1,
      anon_sym_PIPE_RBRACK_POUND,
    STATE(5), 1,
      sym__closing_primary_right,
  [58] = 2,
    ACTIONS(56), 1,
      anon_sym_RPAREN_POUND,
    STATE(6), 1,
      sym__closing_left,
  [65] = 2,
    ACTIONS(58), 1,
      anon_sym_PIPE_RPAREN_POUND,
    STATE(7), 1,
      sym__closing_right,
  [72] = 1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
  [76] = 1,
    ACTIONS(62), 1,
      sym__text,
  [80] = 1,
    ACTIONS(64), 1,
      sym__text,
  [84] = 1,
    ACTIONS(66), 1,
      sym__text,
  [88] = 1,
    ACTIONS(68), 1,
      sym__text,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 11,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 33,
  [SMALL_STATE(8)] = 44,
  [SMALL_STATE(9)] = 51,
  [SMALL_STATE(10)] = 58,
  [SMALL_STATE(11)] = 65,
  [SMALL_STATE(12)] = 72,
  [SMALL_STATE(13)] = 76,
  [SMALL_STATE(14)] = 80,
  [SMALL_STATE(15)] = 84,
  [SMALL_STATE(16)] = 88,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_left, 3, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_left, 3, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_right, 3, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_right, 3, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [60] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
