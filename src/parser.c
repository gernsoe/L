#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_syscall = 1,
  anon_sym_COLON_EQ = 2,
  anon_sym_LBRACK = 3,
  anon_sym_COMMA = 4,
  anon_sym_RBRACK = 5,
  sym_register = 6,
  anon_sym_cnst = 7,
  anon_sym_AT = 8,
  anon_sym_POUND = 9,
  aux_sym_label_token1 = 10,
  anon_sym_goto = 11,
  sym_number = 12,
  sym_memorySizeBytes = 13,
  sym_word = 14,
  sym_bytesAsHex = 15,
  sym_source_file = 16,
  sym_definition = 17,
  sym_assignment = 18,
  sym_readMemory = 19,
  sym_writeMemory = 20,
  sym_byteRegister = 21,
  sym_constantDefinitions = 22,
  sym_constant = 23,
  sym_label = 24,
  sym_goto = 25,
  aux_sym_source_file_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_syscall] = "syscall",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_register] = "register",
  [anon_sym_cnst] = "cnst",
  [anon_sym_AT] = "@",
  [anon_sym_POUND] = "#",
  [aux_sym_label_token1] = "label_token1",
  [anon_sym_goto] = "goto",
  [sym_number] = "number",
  [sym_memorySizeBytes] = "memorySizeBytes",
  [sym_word] = "word",
  [sym_bytesAsHex] = "bytesAsHex",
  [sym_source_file] = "source_file",
  [sym_definition] = "definition",
  [sym_assignment] = "assignment",
  [sym_readMemory] = "readMemory",
  [sym_writeMemory] = "writeMemory",
  [sym_byteRegister] = "byteRegister",
  [sym_constantDefinitions] = "constantDefinitions",
  [sym_constant] = "constant",
  [sym_label] = "label",
  [sym_goto] = "goto",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_syscall] = sym_syscall,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_register] = sym_register,
  [anon_sym_cnst] = anon_sym_cnst,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [anon_sym_goto] = anon_sym_goto,
  [sym_number] = sym_number,
  [sym_memorySizeBytes] = sym_memorySizeBytes,
  [sym_word] = sym_word,
  [sym_bytesAsHex] = sym_bytesAsHex,
  [sym_source_file] = sym_source_file,
  [sym_definition] = sym_definition,
  [sym_assignment] = sym_assignment,
  [sym_readMemory] = sym_readMemory,
  [sym_writeMemory] = sym_writeMemory,
  [sym_byteRegister] = sym_byteRegister,
  [sym_constantDefinitions] = sym_constantDefinitions,
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
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
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
  [sym_memorySizeBytes] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_bytesAsHex] = {
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
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_readMemory] = {
    .visible = true,
    .named = true,
  },
  [sym_writeMemory] = {
    .visible = true,
    .named = true,
  },
  [sym_byteRegister] = {
    .visible = true,
    .named = true,
  },
  [sym_constantDefinitions] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'g') ADVANCE(40);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '1' ||
          lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8') ADVANCE(48);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 2:
      if (lookahead == ';') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == ',' ||
          lookahead == 'i' ||
          lookahead == 'j' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 'g') ADVANCE(9);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == ',' ||
          lookahead == '1' ||
          lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8') ADVANCE(56);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_syscall);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_cnst);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_cnst);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_cnst);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == ';') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'a') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'c') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'l') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'l') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'n') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'o') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'o') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 's') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 's') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 't') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 't') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'y') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_goto);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_memorySizeBytes);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_bytesAsHex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_syscall] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [anon_sym_cnst] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_label_token1] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_memorySizeBytes] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_bytesAsHex] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym_definition] = STATE(2),
    [sym_assignment] = STATE(8),
    [sym_readMemory] = STATE(12),
    [sym_writeMemory] = STATE(12),
    [sym_byteRegister] = STATE(22),
    [sym_constant] = STATE(8),
    [sym_label] = STATE(8),
    [sym_goto] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_syscall] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_register] = ACTIONS(9),
    [anon_sym_cnst] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(15),
  },
  [2] = {
    [sym_definition] = STATE(3),
    [sym_assignment] = STATE(8),
    [sym_readMemory] = STATE(12),
    [sym_writeMemory] = STATE(12),
    [sym_byteRegister] = STATE(22),
    [sym_constant] = STATE(8),
    [sym_label] = STATE(8),
    [sym_goto] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_syscall] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_register] = ACTIONS(9),
    [anon_sym_cnst] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(15),
  },
  [3] = {
    [sym_definition] = STATE(3),
    [sym_assignment] = STATE(8),
    [sym_readMemory] = STATE(12),
    [sym_writeMemory] = STATE(12),
    [sym_byteRegister] = STATE(22),
    [sym_constant] = STATE(8),
    [sym_label] = STATE(8),
    [sym_goto] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_syscall] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(24),
    [sym_register] = ACTIONS(27),
    [anon_sym_cnst] = ACTIONS(30),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_goto] = ACTIONS(36),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      anon_sym_cnst,
    STATE(11), 1,
      sym_constantDefinitions,
    STATE(13), 1,
      sym_byteRegister,
    ACTIONS(39), 2,
      sym_register,
      sym_bytesAsHex,
    ACTIONS(43), 2,
      sym_number,
      sym_word,
    STATE(14), 2,
      sym_constant,
      sym_label,
  [28] = 1,
    ACTIONS(45), 8,
      ts_builtin_sym_end,
      sym_syscall,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      sym_register,
      anon_sym_cnst,
      anon_sym_POUND,
      anon_sym_goto,
  [39] = 2,
    ACTIONS(49), 1,
      anon_sym_COLON_EQ,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_syscall,
      anon_sym_LBRACK,
      sym_register,
      anon_sym_cnst,
      anon_sym_POUND,
      anon_sym_goto,
  [52] = 1,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      sym_syscall,
      anon_sym_LBRACK,
      sym_register,
      anon_sym_cnst,
      anon_sym_POUND,
      anon_sym_goto,
  [62] = 1,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_syscall,
      anon_sym_LBRACK,
      sym_register,
      anon_sym_cnst,
      anon_sym_POUND,
      anon_sym_goto,
  [72] = 1,
    ACTIONS(53), 7,
      ts_builtin_sym_end,
      sym_syscall,
      anon_sym_LBRACK,
      sym_register,
      anon_sym_cnst,
      anon_sym_POUND,
      anon_sym_goto,
  [82] = 1,
    ACTIONS(55), 7,
      ts_builtin_sym_end,
      sym_syscall,
      anon_sym_LBRACK,
      sym_register,
      anon_sym_cnst,
      anon_sym_POUND,
      anon_sym_goto,
  [92] = 1,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      sym_syscall,
      anon_sym_LBRACK,
      sym_register,
      anon_sym_cnst,
      anon_sym_POUND,
      anon_sym_goto,
  [102] = 1,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      sym_syscall,
      anon_sym_LBRACK,
      sym_register,
      anon_sym_cnst,
      anon_sym_POUND,
      anon_sym_goto,
  [112] = 1,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      sym_syscall,
      anon_sym_LBRACK,
      sym_register,
      anon_sym_cnst,
      anon_sym_POUND,
      anon_sym_goto,
  [122] = 1,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      sym_syscall,
      anon_sym_LBRACK,
      sym_register,
      anon_sym_cnst,
      anon_sym_POUND,
      anon_sym_goto,
  [132] = 1,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      sym_syscall,
      anon_sym_LBRACK,
      sym_register,
      anon_sym_cnst,
      anon_sym_POUND,
      anon_sym_goto,
  [142] = 2,
    ACTIONS(13), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_label,
  [149] = 1,
    ACTIONS(67), 1,
      sym_bytesAsHex,
  [153] = 1,
    ACTIONS(69), 1,
      sym_register,
  [157] = 1,
    ACTIONS(71), 1,
      sym_memorySizeBytes,
  [161] = 1,
    ACTIONS(73), 1,
      sym_word,
  [165] = 1,
    ACTIONS(75), 1,
      anon_sym_COMMA,
  [169] = 1,
    ACTIONS(77), 1,
      anon_sym_COLON_EQ,
  [173] = 1,
    ACTIONS(79), 1,
      sym_number,
  [177] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
  [181] = 1,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
  [185] = 1,
    ACTIONS(85), 1,
      aux_sym_label_token1,
  [189] = 1,
    ACTIONS(87), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 28,
  [SMALL_STATE(6)] = 39,
  [SMALL_STATE(7)] = 52,
  [SMALL_STATE(8)] = 62,
  [SMALL_STATE(9)] = 72,
  [SMALL_STATE(10)] = 82,
  [SMALL_STATE(11)] = 92,
  [SMALL_STATE(12)] = 102,
  [SMALL_STATE(13)] = 112,
  [SMALL_STATE(14)] = 122,
  [SMALL_STATE(15)] = 132,
  [SMALL_STATE(16)] = 142,
  [SMALL_STATE(17)] = 149,
  [SMALL_STATE(18)] = 153,
  [SMALL_STATE(19)] = 157,
  [SMALL_STATE(20)] = 161,
  [SMALL_STATE(21)] = 165,
  [SMALL_STATE(22)] = 169,
  [SMALL_STATE(23)] = 173,
  [SMALL_STATE(24)] = 177,
  [SMALL_STATE(25)] = 181,
  [SMALL_STATE(26)] = 185,
  [SMALL_STATE(27)] = 189,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byteRegister, 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_writeMemory, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readMemory, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constantDefinitions, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [81] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
