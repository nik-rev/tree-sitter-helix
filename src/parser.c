#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym__text_primary = 1,
  anon_sym_POUND_LBRACK_PIPE = 2,
  anon_sym_RBRACK_POUND = 3,
  anon_sym_POUND_LBRACK = 4,
  anon_sym_PIPE_RBRACK_POUND = 5,
  sym__text = 6,
  anon_sym_POUND_LPAREN = 7,
  anon_sym_PIPE_RPAREN_POUND = 8,
  anon_sym_POUND_LPAREN_PIPE = 9,
  anon_sym_RPAREN_POUND = 10,
  sym_source_file = 11,
  sym__opening_primary_left = 12,
  sym__closing_primary_left = 13,
  sym_primary_left = 14,
  sym__opening_primary_right = 15,
  sym__closing_primary_right = 16,
  sym_primary_right = 17,
  sym_text = 18,
  sym__opening_right = 19,
  sym__closing_right = 20,
  sym_right = 21,
  sym__opening_left = 22,
  sym__closing_left = 23,
  sym_left = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_primary_left_repeat1 = 26,
  aux_sym_right_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__text_primary] = "_text_primary",
  [anon_sym_POUND_LBRACK_PIPE] = "#[|",
  [anon_sym_RBRACK_POUND] = "]#",
  [anon_sym_POUND_LBRACK] = "#[",
  [anon_sym_PIPE_RBRACK_POUND] = "|]#",
  [sym__text] = "_text",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_PIPE_RPAREN_POUND] = "|)#",
  [anon_sym_POUND_LPAREN_PIPE] = "#(|",
  [anon_sym_RPAREN_POUND] = ")#",
  [sym_source_file] = "source_file",
  [sym__opening_primary_left] = "punctuation",
  [sym__closing_primary_left] = "punctuation",
  [sym_primary_left] = "primary_left",
  [sym__opening_primary_right] = "punctuation",
  [sym__closing_primary_right] = "punctuation",
  [sym_primary_right] = "primary_right",
  [sym_text] = "text",
  [sym__opening_right] = "punctuation",
  [sym__closing_right] = "punctuation",
  [sym_right] = "right",
  [sym__opening_left] = "punctuation",
  [sym__closing_left] = "punctuation",
  [sym_left] = "left",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_primary_left_repeat1] = "primary_left_repeat1",
  [aux_sym_right_repeat1] = "right_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__text_primary] = sym__text_primary,
  [anon_sym_POUND_LBRACK_PIPE] = anon_sym_POUND_LBRACK_PIPE,
  [anon_sym_RBRACK_POUND] = anon_sym_RBRACK_POUND,
  [anon_sym_POUND_LBRACK] = anon_sym_POUND_LBRACK,
  [anon_sym_PIPE_RBRACK_POUND] = anon_sym_PIPE_RBRACK_POUND,
  [sym__text] = sym__text,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_PIPE_RPAREN_POUND] = anon_sym_PIPE_RPAREN_POUND,
  [anon_sym_POUND_LPAREN_PIPE] = anon_sym_POUND_LPAREN_PIPE,
  [anon_sym_RPAREN_POUND] = anon_sym_RPAREN_POUND,
  [sym_source_file] = sym_source_file,
  [sym__opening_primary_left] = sym__opening_primary_left,
  [sym__closing_primary_left] = sym__opening_primary_left,
  [sym_primary_left] = sym_primary_left,
  [sym__opening_primary_right] = sym__opening_primary_left,
  [sym__closing_primary_right] = sym__opening_primary_left,
  [sym_primary_right] = sym_primary_right,
  [sym_text] = sym_text,
  [sym__opening_right] = sym__opening_primary_left,
  [sym__closing_right] = sym__opening_primary_left,
  [sym_right] = sym_right,
  [sym__opening_left] = sym__opening_primary_left,
  [sym__closing_left] = sym__opening_primary_left,
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
  [sym__text_primary] = {
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
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_RPAREN_POUND] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__opening_primary_left] = {
    .visible = true,
    .named = true,
  },
  [sym__closing_primary_left] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_left] = {
    .visible = true,
    .named = true,
  },
  [sym__opening_primary_right] = {
    .visible = true,
    .named = true,
  },
  [sym__closing_primary_right] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_right] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__opening_right] = {
    .visible = true,
    .named = true,
  },
  [sym__closing_right] = {
    .visible = true,
    .named = true,
  },
  [sym_right] = {
    .visible = true,
    .named = true,
  },
  [sym__opening_left] = {
    .visible = true,
    .named = true,
  },
  [sym__closing_left] = {
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
  [1] = {
    [0] = sym_text,
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
      ACCEPT_TOKEN(sym__text_primary);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(22);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__text_primary);
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
      ACCEPT_TOKEN(sym__text_primary);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__text_primary);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK_PIPE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK_POUND);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      if (lookahead == '|') ADVANCE(17);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACK_POUND);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      if (lookahead == '|') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PIPE_RPAREN_POUND);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN_PIPE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RPAREN_POUND);
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
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_LBRACK_PIPE] = ACTIONS(1),
    [anon_sym_RBRACK_POUND] = ACTIONS(1),
    [anon_sym_POUND_LBRACK] = ACTIONS(1),
    [anon_sym_PIPE_RBRACK_POUND] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [anon_sym_PIPE_RPAREN_POUND] = ACTIONS(1),
    [anon_sym_POUND_LPAREN_PIPE] = ACTIONS(1),
    [anon_sym_RPAREN_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym__opening_primary_left] = STATE(20),
    [sym_primary_left] = STATE(2),
    [sym__opening_primary_right] = STATE(17),
    [sym_primary_right] = STATE(2),
    [sym_text] = STATE(2),
    [sym__opening_right] = STATE(18),
    [sym_right] = STATE(2),
    [sym__opening_left] = STATE(19),
    [sym_left] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__text_primary] = ACTIONS(5),
    [anon_sym_POUND_LBRACK_PIPE] = ACTIONS(7),
    [anon_sym_POUND_LBRACK] = ACTIONS(9),
    [sym__text] = ACTIONS(5),
    [anon_sym_POUND_LPAREN] = ACTIONS(11),
    [anon_sym_POUND_LPAREN_PIPE] = ACTIONS(13),
  },
  [2] = {
    [sym__opening_primary_left] = STATE(20),
    [sym_primary_left] = STATE(3),
    [sym__opening_primary_right] = STATE(17),
    [sym_primary_right] = STATE(3),
    [sym_text] = STATE(3),
    [sym__opening_right] = STATE(18),
    [sym_right] = STATE(3),
    [sym__opening_left] = STATE(19),
    [sym_left] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__text_primary] = ACTIONS(5),
    [anon_sym_POUND_LBRACK_PIPE] = ACTIONS(7),
    [anon_sym_POUND_LBRACK] = ACTIONS(9),
    [sym__text] = ACTIONS(5),
    [anon_sym_POUND_LPAREN] = ACTIONS(11),
    [anon_sym_POUND_LPAREN_PIPE] = ACTIONS(13),
  },
  [3] = {
    [sym__opening_primary_left] = STATE(20),
    [sym_primary_left] = STATE(3),
    [sym__opening_primary_right] = STATE(17),
    [sym_primary_right] = STATE(3),
    [sym_text] = STATE(3),
    [sym__opening_right] = STATE(18),
    [sym_right] = STATE(3),
    [sym__opening_left] = STATE(19),
    [sym_left] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym__text_primary] = ACTIONS(19),
    [anon_sym_POUND_LBRACK_PIPE] = ACTIONS(22),
    [anon_sym_POUND_LBRACK] = ACTIONS(25),
    [sym__text] = ACTIONS(19),
    [anon_sym_POUND_LPAREN] = ACTIONS(28),
    [anon_sym_POUND_LPAREN_PIPE] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 6,
      sym__text_primary,
      anon_sym_POUND_LBRACK_PIPE,
      anon_sym_POUND_LBRACK,
      sym__text,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LPAREN_PIPE,
  [12] = 2,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 6,
      sym__text_primary,
      anon_sym_POUND_LBRACK_PIPE,
      anon_sym_POUND_LBRACK,
      sym__text,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LPAREN_PIPE,
  [24] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 6,
      sym__text_primary,
      anon_sym_POUND_LBRACK_PIPE,
      anon_sym_POUND_LBRACK,
      sym__text,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LPAREN_PIPE,
  [36] = 2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 6,
      sym__text_primary,
      anon_sym_POUND_LBRACK_PIPE,
      anon_sym_POUND_LBRACK,
      sym__text,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LPAREN_PIPE,
  [48] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 6,
      sym__text_primary,
      anon_sym_POUND_LBRACK_PIPE,
      anon_sym_POUND_LBRACK,
      sym__text,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LPAREN_PIPE,
  [60] = 2,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 6,
      sym__text_primary,
      anon_sym_POUND_LBRACK_PIPE,
      anon_sym_POUND_LBRACK,
      sym__text,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LPAREN_PIPE,
  [72] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 6,
      sym__text_primary,
      anon_sym_POUND_LBRACK_PIPE,
      anon_sym_POUND_LBRACK,
      sym__text,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LPAREN_PIPE,
  [84] = 2,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 6,
      sym__text_primary,
      anon_sym_POUND_LBRACK_PIPE,
      anon_sym_POUND_LBRACK,
      sym__text,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LPAREN_PIPE,
  [96] = 2,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 6,
      sym__text_primary,
      anon_sym_POUND_LBRACK_PIPE,
      anon_sym_POUND_LBRACK,
      sym__text,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LPAREN_PIPE,
  [108] = 2,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 6,
      sym__text_primary,
      anon_sym_POUND_LBRACK_PIPE,
      anon_sym_POUND_LBRACK,
      sym__text,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LPAREN_PIPE,
  [120] = 2,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 6,
      sym__text_primary,
      anon_sym_POUND_LBRACK_PIPE,
      anon_sym_POUND_LBRACK,
      sym__text,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LPAREN_PIPE,
  [132] = 2,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 6,
      sym__text_primary,
      anon_sym_POUND_LBRACK_PIPE,
      anon_sym_POUND_LBRACK,
      sym__text,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LPAREN_PIPE,
  [144] = 2,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 6,
      sym__text_primary,
      anon_sym_POUND_LBRACK_PIPE,
      anon_sym_POUND_LBRACK,
      sym__text,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LPAREN_PIPE,
  [156] = 4,
    ACTIONS(86), 1,
      sym__text_primary,
    ACTIONS(88), 1,
      anon_sym_PIPE_RBRACK_POUND,
    STATE(9), 1,
      sym__closing_primary_right,
    STATE(25), 1,
      aux_sym_primary_left_repeat1,
  [169] = 4,
    ACTIONS(90), 1,
      sym__text,
    ACTIONS(92), 1,
      anon_sym_PIPE_RPAREN_POUND,
    STATE(13), 1,
      sym__closing_right,
    STATE(24), 1,
      aux_sym_right_repeat1,
  [182] = 4,
    ACTIONS(90), 1,
      sym__text,
    ACTIONS(94), 1,
      anon_sym_RPAREN_POUND,
    STATE(11), 1,
      sym__closing_left,
    STATE(23), 1,
      aux_sym_right_repeat1,
  [195] = 4,
    ACTIONS(86), 1,
      sym__text_primary,
    ACTIONS(96), 1,
      anon_sym_RBRACK_POUND,
    STATE(6), 1,
      sym__closing_primary_left,
    STATE(21), 1,
      aux_sym_primary_left_repeat1,
  [208] = 4,
    ACTIONS(86), 1,
      sym__text_primary,
    ACTIONS(96), 1,
      anon_sym_RBRACK_POUND,
    STATE(4), 1,
      sym__closing_primary_left,
    STATE(22), 1,
      aux_sym_primary_left_repeat1,
  [221] = 3,
    ACTIONS(98), 1,
      sym__text_primary,
    STATE(22), 1,
      aux_sym_primary_left_repeat1,
    ACTIONS(101), 2,
      anon_sym_RBRACK_POUND,
      anon_sym_PIPE_RBRACK_POUND,
  [232] = 4,
    ACTIONS(90), 1,
      sym__text,
    ACTIONS(94), 1,
      anon_sym_RPAREN_POUND,
    STATE(16), 1,
      sym__closing_left,
    STATE(26), 1,
      aux_sym_right_repeat1,
  [245] = 4,
    ACTIONS(90), 1,
      sym__text,
    ACTIONS(92), 1,
      anon_sym_PIPE_RPAREN_POUND,
    STATE(10), 1,
      sym__closing_right,
    STATE(26), 1,
      aux_sym_right_repeat1,
  [258] = 4,
    ACTIONS(86), 1,
      sym__text_primary,
    ACTIONS(88), 1,
      anon_sym_PIPE_RBRACK_POUND,
    STATE(14), 1,
      sym__closing_primary_right,
    STATE(22), 1,
      aux_sym_primary_left_repeat1,
  [271] = 3,
    ACTIONS(103), 1,
      sym__text,
    STATE(26), 1,
      aux_sym_right_repeat1,
    ACTIONS(106), 2,
      anon_sym_PIPE_RPAREN_POUND,
      anon_sym_RPAREN_POUND,
  [282] = 2,
    ACTIONS(108), 1,
      sym__text_primary,
    ACTIONS(110), 2,
      anon_sym_RBRACK_POUND,
      anon_sym_PIPE_RBRACK_POUND,
  [290] = 2,
    ACTIONS(112), 1,
      sym__text,
    ACTIONS(114), 2,
      anon_sym_PIPE_RPAREN_POUND,
      anon_sym_RPAREN_POUND,
  [298] = 2,
    ACTIONS(116), 1,
      sym__text,
    ACTIONS(118), 1,
      anon_sym_RPAREN_POUND,
  [305] = 2,
    ACTIONS(120), 1,
      sym__text,
    ACTIONS(122), 1,
      anon_sym_PIPE_RPAREN_POUND,
  [312] = 2,
    ACTIONS(124), 1,
      sym__text_primary,
    ACTIONS(126), 1,
      anon_sym_PIPE_RBRACK_POUND,
  [319] = 2,
    ACTIONS(128), 1,
      sym__text_primary,
    ACTIONS(130), 1,
      anon_sym_RBRACK_POUND,
  [326] = 1,
    ACTIONS(132), 1,
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
  [SMALL_STATE(14)] = 120,
  [SMALL_STATE(15)] = 132,
  [SMALL_STATE(16)] = 144,
  [SMALL_STATE(17)] = 156,
  [SMALL_STATE(18)] = 169,
  [SMALL_STATE(19)] = 182,
  [SMALL_STATE(20)] = 195,
  [SMALL_STATE(21)] = 208,
  [SMALL_STATE(22)] = 221,
  [SMALL_STATE(23)] = 232,
  [SMALL_STATE(24)] = 245,
  [SMALL_STATE(25)] = 258,
  [SMALL_STATE(26)] = 271,
  [SMALL_STATE(27)] = 282,
  [SMALL_STATE(28)] = 290,
  [SMALL_STATE(29)] = 298,
  [SMALL_STATE(30)] = 305,
  [SMALL_STATE(31)] = 312,
  [SMALL_STATE(32)] = 319,
  [SMALL_STATE(33)] = 326,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_left, 3, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_left, 3, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__closing_primary_right, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__closing_primary_right, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_left, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_left, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__closing_primary_left, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__closing_primary_left, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_right, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_right, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__closing_right, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__closing_right, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_right, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_right, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__closing_left, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__closing_left, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_primary_left_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_primary_left_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_right_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_right_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_primary_left_repeat1, 1, 0, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_primary_left_repeat1, 1, 0, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_right_repeat1, 1, 0, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_right_repeat1, 1, 0, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__opening_left, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__opening_left, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__opening_right, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__opening_right, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__opening_primary_right, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__opening_primary_right, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__opening_primary_left, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__opening_primary_left, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
