#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_LF = 2,
  anon_sym_const = 3,
  anon_sym_data = 4,
  anon_sym_COLON_EQ = 5,
  anon_sym_LBRACK = 6,
  anon_sym_COMMA = 7,
  anon_sym_RBRACK = 8,
  anon_sym_AT = 9,
  anon_sym_AMP = 10,
  aux_sym__data_token1 = 11,
  sym__register = 12,
  sym__bytes = 13,
  sym__syscall = 14,
  anon_sym_POUND = 15,
  aux_sym__label_token1 = 16,
  sym__operator = 17,
  sym__number = 18,
  sym__word = 19,
  sym_source_file = 20,
  sym_declarations = 21,
  sym_declaration = 22,
  sym_statements = 23,
  sym_statement = 24,
  sym_expression = 25,
  sym_reader = 26,
  sym_writer = 27,
  sym_assign = 28,
  sym__memory = 29,
  sym__constant = 30,
  sym__data = 31,
  sym__label = 32,
  aux_sym_declarations_repeat1 = 33,
  aux_sym_statements_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_const] = "const",
  [anon_sym_data] = "data",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [anon_sym_AMP] = "&",
  [aux_sym__data_token1] = "_data_token1",
  [sym__register] = "_register",
  [sym__bytes] = "_bytes",
  [sym__syscall] = "_syscall",
  [anon_sym_POUND] = "#",
  [aux_sym__label_token1] = "_label_token1",
  [sym__operator] = "_operator",
  [sym__number] = "_number",
  [sym__word] = "_word",
  [sym_source_file] = "source_file",
  [sym_declarations] = "declarations",
  [sym_declaration] = "declaration",
  [sym_statements] = "statements",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_reader] = "reader",
  [sym_writer] = "writer",
  [sym_assign] = "assign",
  [sym__memory] = "_memory",
  [sym__constant] = "_constant",
  [sym__data] = "_data",
  [sym__label] = "_label",
  [aux_sym_declarations_repeat1] = "declarations_repeat1",
  [aux_sym_statements_repeat1] = "statements_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AMP] = anon_sym_AMP,
  [aux_sym__data_token1] = aux_sym__data_token1,
  [sym__register] = sym__register,
  [sym__bytes] = sym__bytes,
  [sym__syscall] = sym__syscall,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym__label_token1] = aux_sym__label_token1,
  [sym__operator] = sym__operator,
  [sym__number] = sym__number,
  [sym__word] = sym__word,
  [sym_source_file] = sym_source_file,
  [sym_declarations] = sym_declarations,
  [sym_declaration] = sym_declaration,
  [sym_statements] = sym_statements,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_reader] = sym_reader,
  [sym_writer] = sym_writer,
  [sym_assign] = sym_assign,
  [sym__memory] = sym__memory,
  [sym__constant] = sym__constant,
  [sym__data] = sym__data,
  [sym__label] = sym__label,
  [aux_sym_declarations_repeat1] = aux_sym_declarations_repeat1,
  [aux_sym_statements_repeat1] = aux_sym_statements_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__data_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__register] = {
    .visible = false,
    .named = true,
  },
  [sym__bytes] = {
    .visible = false,
    .named = true,
  },
  [sym__syscall] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__label_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__operator] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_reader] = {
    .visible = true,
    .named = true,
  },
  [sym_writer] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym__memory] = {
    .visible = false,
    .named = true,
  },
  [sym__constant] = {
    .visible = false,
    .named = true,
  },
  [sym__data] = {
    .visible = false,
    .named = true,
  },
  [sym__label] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statements_repeat1] = {
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
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '&') ADVANCE(33);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == '"' ||
          lookahead == '-' ||
          lookahead == '_') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '1' ||
          lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == ',' ||
          lookahead == '1' ||
          lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8') ADVANCE(42);
      if (lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          lookahead == '|') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 16:
      if (lookahead == 'y') ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '"' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == '!' ||
          lookahead == ',' ||
          lookahead == '?' ||
          lookahead == 'i' ||
          lookahead == 'j' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '&') ADVANCE(34);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          lookahead == '|') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_data);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '|') ADVANCE(59);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__data_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__data_token1);
      if (lookahead == 'a') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__data_token1);
      if (lookahead == 'o') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__data_token1);
      if (lookahead == 'y') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__data_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__data_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__register);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__bytes);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__syscall);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__syscall);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__operator);
      if (lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '|') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [aux_sym__data_token1] = ACTIONS(1),
    [sym__register] = ACTIONS(1),
    [sym__bytes] = ACTIONS(1),
    [sym__syscall] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym__label_token1] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(44),
    [sym_declarations] = STATE(4),
    [sym_declaration] = STATE(41),
    [sym_statements] = STATE(40),
    [sym_statement] = STATE(38),
    [sym_writer] = STATE(37),
    [sym_assign] = STATE(35),
    [sym__memory] = STATE(14),
    [sym__label] = STATE(10),
    [aux_sym_declarations_repeat1] = STATE(9),
    [aux_sym_statements_repeat1] = STATE(5),
    [anon_sym_const] = ACTIONS(3),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__register] = ACTIONS(9),
    [sym__syscall] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      sym__register,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      sym__operator,
    STATE(14), 1,
      sym__memory,
    STATE(17), 1,
      sym_reader,
    STATE(24), 1,
      sym_expression,
    STATE(19), 3,
      sym_assign,
      sym__constant,
      sym__data,
  [30] = 11,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(26), 1,
      sym__register,
    ACTIONS(29), 1,
      sym__syscall,
    ACTIONS(32), 1,
      anon_sym_POUND,
    STATE(3), 1,
      aux_sym_statements_repeat1,
    STATE(10), 1,
      sym__label,
    STATE(14), 1,
      sym__memory,
    STATE(35), 1,
      sym_assign,
    STATE(37), 1,
      sym_writer,
    STATE(38), 1,
      sym_statement,
  [64] = 11,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      sym__register,
    ACTIONS(11), 1,
      sym__syscall,
    ACTIONS(13), 1,
      anon_sym_POUND,
    STATE(5), 1,
      aux_sym_statements_repeat1,
    STATE(10), 1,
      sym__label,
    STATE(14), 1,
      sym__memory,
    STATE(35), 1,
      sym_assign,
    STATE(36), 1,
      sym_statements,
    STATE(37), 1,
      sym_writer,
    STATE(38), 1,
      sym_statement,
  [98] = 11,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      sym__register,
    ACTIONS(11), 1,
      sym__syscall,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_statements_repeat1,
    STATE(10), 1,
      sym__label,
    STATE(14), 1,
      sym__memory,
    STATE(35), 1,
      sym_assign,
    STATE(37), 1,
      sym_writer,
    STATE(38), 1,
      sym_statement,
  [132] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      sym__register,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_AMP,
    STATE(14), 1,
      sym__memory,
    STATE(47), 1,
      sym_reader,
    STATE(19), 3,
      sym_assign,
      sym__constant,
      sym__data,
  [156] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      sym__register,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_AMP,
    STATE(14), 1,
      sym__memory,
    STATE(43), 1,
      sym_reader,
    STATE(19), 3,
      sym_assign,
      sym__constant,
      sym__data,
  [180] = 5,
    ACTIONS(39), 1,
      anon_sym_const,
    ACTIONS(42), 1,
      anon_sym_data,
    STATE(8), 1,
      aux_sym_declarations_repeat1,
    STATE(41), 1,
      sym_declaration,
    ACTIONS(45), 4,
      anon_sym_LBRACK,
      sym__register,
      sym__syscall,
      anon_sym_POUND,
  [199] = 5,
    ACTIONS(3), 1,
      anon_sym_const,
    ACTIONS(5), 1,
      anon_sym_data,
    STATE(8), 1,
      aux_sym_declarations_repeat1,
    STATE(41), 1,
      sym_declaration,
    ACTIONS(47), 4,
      anon_sym_LBRACK,
      sym__register,
      sym__syscall,
      anon_sym_POUND,
  [218] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      sym__register,
    ACTIONS(11), 1,
      sym__syscall,
    STATE(14), 1,
      sym__memory,
    STATE(27), 1,
      sym_statement,
    STATE(35), 1,
      sym_assign,
    STATE(37), 1,
      sym_writer,
  [240] = 1,
    ACTIONS(49), 6,
      anon_sym_const,
      anon_sym_data,
      anon_sym_LBRACK,
      sym__register,
      sym__syscall,
      anon_sym_POUND,
  [249] = 1,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__register,
      sym__syscall,
      anon_sym_POUND,
  [257] = 1,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__register,
      sym__syscall,
      anon_sym_POUND,
  [265] = 1,
    ACTIONS(55), 3,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      sym__operator,
  [271] = 1,
    ACTIONS(57), 3,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      sym__operator,
  [277] = 1,
    ACTIONS(59), 3,
      anon_sym_LBRACK,
      sym__register,
      sym__syscall,
  [283] = 2,
    ACTIONS(61), 1,
      anon_sym_SEMI,
    ACTIONS(63), 1,
      sym__operator,
  [290] = 2,
    ACTIONS(15), 1,
      anon_sym_AT,
    STATE(33), 1,
      sym__constant,
  [297] = 1,
    ACTIONS(65), 2,
      anon_sym_SEMI,
      sym__operator,
  [302] = 1,
    ACTIONS(67), 2,
      anon_sym_SEMI,
      sym__operator,
  [307] = 1,
    ACTIONS(69), 2,
      anon_sym_SEMI,
      sym__operator,
  [312] = 2,
    ACTIONS(37), 1,
      anon_sym_AMP,
    STATE(33), 1,
      sym__data,
  [319] = 1,
    ACTIONS(71), 1,
      anon_sym_LF,
  [323] = 1,
    ACTIONS(73), 1,
      anon_sym_SEMI,
  [327] = 1,
    ACTIONS(75), 1,
      anon_sym_LF,
  [331] = 1,
    ACTIONS(77), 1,
      sym__register,
  [335] = 1,
    ACTIONS(79), 1,
      anon_sym_SEMI,
  [339] = 1,
    ACTIONS(81), 1,
      anon_sym_COMMA,
  [343] = 1,
    ACTIONS(83), 1,
      sym__word,
  [347] = 1,
    ACTIONS(85), 1,
      sym__number,
  [351] = 1,
    ACTIONS(87), 1,
      aux_sym__data_token1,
  [355] = 1,
    ACTIONS(89), 1,
      sym__bytes,
  [359] = 1,
    ACTIONS(91), 1,
      anon_sym_SEMI,
  [363] = 1,
    ACTIONS(93), 1,
      sym__word,
  [367] = 1,
    ACTIONS(95), 1,
      anon_sym_COLON_EQ,
  [371] = 1,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
  [375] = 1,
    ACTIONS(99), 1,
      anon_sym_COLON_EQ,
  [379] = 1,
    ACTIONS(101), 1,
      anon_sym_SEMI,
  [383] = 1,
    ACTIONS(103), 1,
      anon_sym_LF,
  [387] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
  [391] = 1,
    ACTIONS(107), 1,
      anon_sym_SEMI,
  [395] = 1,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
  [399] = 1,
    ACTIONS(111), 1,
      anon_sym_SEMI,
  [403] = 1,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
  [407] = 1,
    ACTIONS(115), 1,
      aux_sym__label_token1,
  [411] = 1,
    ACTIONS(117), 1,
      anon_sym_SEMI,
  [415] = 1,
    ACTIONS(119), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 98,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 156,
  [SMALL_STATE(8)] = 180,
  [SMALL_STATE(9)] = 199,
  [SMALL_STATE(10)] = 218,
  [SMALL_STATE(11)] = 240,
  [SMALL_STATE(12)] = 249,
  [SMALL_STATE(13)] = 257,
  [SMALL_STATE(14)] = 265,
  [SMALL_STATE(15)] = 271,
  [SMALL_STATE(16)] = 277,
  [SMALL_STATE(17)] = 283,
  [SMALL_STATE(18)] = 290,
  [SMALL_STATE(19)] = 297,
  [SMALL_STATE(20)] = 302,
  [SMALL_STATE(21)] = 307,
  [SMALL_STATE(22)] = 312,
  [SMALL_STATE(23)] = 319,
  [SMALL_STATE(24)] = 323,
  [SMALL_STATE(25)] = 327,
  [SMALL_STATE(26)] = 331,
  [SMALL_STATE(27)] = 335,
  [SMALL_STATE(28)] = 339,
  [SMALL_STATE(29)] = 343,
  [SMALL_STATE(30)] = 347,
  [SMALL_STATE(31)] = 351,
  [SMALL_STATE(32)] = 355,
  [SMALL_STATE(33)] = 359,
  [SMALL_STATE(34)] = 363,
  [SMALL_STATE(35)] = 367,
  [SMALL_STATE(36)] = 371,
  [SMALL_STATE(37)] = 375,
  [SMALL_STATE(38)] = 379,
  [SMALL_STATE(39)] = 383,
  [SMALL_STATE(40)] = 387,
  [SMALL_STATE(41)] = 391,
  [SMALL_STATE(42)] = 395,
  [SMALL_STATE(43)] = 399,
  [SMALL_STATE(44)] = 403,
  [SMALL_STATE(45)] = 407,
  [SMALL_STATE(46)] = 411,
  [SMALL_STATE(47)] = 415,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(26),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(14),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(46),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(45),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(18),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(22),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__memory, 5),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reader, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_writer, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [113] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
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
