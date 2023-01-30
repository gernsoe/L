#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_syscall = 1,
  sym_register = 2,
  anon_sym_cnst = 3,
  anon_sym_AT = 4,
  anon_sym_POUND = 5,
  aux_sym_label_token1 = 6,
  anon_sym_goto = 7,
  sym_number = 8,
  sym_word = 9,
  sym_source_file = 10,
  sym_definition = 11,
  sym_constant = 12,
  sym_label = 13,
  sym_goto = 14,
  aux_sym_source_file_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_syscall] = "syscall",
  [sym_register] = "register",
  [anon_sym_cnst] = "cnst",
  [anon_sym_AT] = "@",
  [anon_sym_POUND] = "#",
  [aux_sym_label_token1] = "label_token1",
  [anon_sym_goto] = "goto",
  [sym_number] = "number",
  [sym_word] = "word",
  [sym_source_file] = "source_file",
  [sym_definition] = "definition",
  [sym_constant] = "constant",
  [sym_label] = "label",
  [sym_goto] = "goto",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_syscall] = sym_syscall,
  [sym_register] = sym_register,
  [anon_sym_cnst] = anon_sym_cnst,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [anon_sym_goto] = anon_sym_goto,
  [sym_number] = sym_number,
  [sym_word] = sym_word,
  [sym_source_file] = sym_source_file,
  [sym_definition] = sym_definition,
  [sym_constant] = sym_constant,
  [sym_label] = sym_label,
  [sym_goto] = sym_goto,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_syscall] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cnst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_goto] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '@') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'g') ADVANCE(31);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == ';') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(1);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'y') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == ',' ||
          lookahead == 'i' ||
          lookahead == 'j' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(6);
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_syscall);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_cnst);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_cnst);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == ';') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'a') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'c') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'l') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'l') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'n') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'o') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'o') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 's') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 's') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 't') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 't') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'y') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_goto);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 17},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_syscall] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [anon_sym_cnst] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_label_token1] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym_definition] = STATE(2),
    [sym_constant] = STATE(4),
    [sym_label] = STATE(4),
    [sym_goto] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_syscall] = ACTIONS(5),
    [sym_register] = ACTIONS(5),
    [anon_sym_cnst] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_goto] = ACTIONS(11),
  },
  [2] = {
    [sym_definition] = STATE(3),
    [sym_constant] = STATE(4),
    [sym_label] = STATE(4),
    [sym_goto] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_syscall] = ACTIONS(5),
    [sym_register] = ACTIONS(5),
    [anon_sym_cnst] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_goto] = ACTIONS(11),
  },
  [3] = {
    [sym_definition] = STATE(3),
    [sym_constant] = STATE(4),
    [sym_label] = STATE(4),
    [sym_goto] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_syscall] = ACTIONS(17),
    [sym_register] = ACTIONS(17),
    [anon_sym_cnst] = ACTIONS(20),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(26),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(29), 6,
      ts_builtin_sym_end,
      sym_syscall,
      sym_register,
      anon_sym_cnst,
      anon_sym_POUND,
      anon_sym_goto,
  [9] = 1,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      sym_syscall,
      sym_register,
      anon_sym_cnst,
      anon_sym_POUND,
      anon_sym_goto,
  [18] = 1,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      sym_syscall,
      sym_register,
      anon_sym_cnst,
      anon_sym_POUND,
      anon_sym_goto,
  [27] = 1,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      sym_syscall,
      sym_register,
      anon_sym_cnst,
      anon_sym_POUND,
      anon_sym_goto,
  [36] = 2,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_label,
  [43] = 1,
    ACTIONS(37), 1,
      anon_sym_AT,
  [47] = 1,
    ACTIONS(39), 1,
      aux_sym_label_token1,
  [51] = 1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
  [55] = 1,
    ACTIONS(43), 1,
      sym_word,
  [59] = 1,
    ACTIONS(45), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 9,
  [SMALL_STATE(6)] = 18,
  [SMALL_STATE(7)] = 27,
  [SMALL_STATE(8)] = 36,
  [SMALL_STATE(9)] = 43,
  [SMALL_STATE(10)] = 47,
  [SMALL_STATE(11)] = 51,
  [SMALL_STATE(12)] = 55,
  [SMALL_STATE(13)] = 59,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_L(void) {
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
