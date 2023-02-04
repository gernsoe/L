#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
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
  anon_sym_QMARK_EQ = 6,
  anon_sym_AT = 7,
  anon_sym_AMP = 8,
  anon_sym_POUND = 9,
  anon_sym_LBRACK = 10,
  anon_sym_COMMA = 11,
  anon_sym_RBRACK = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_string_token1 = 14,
  sym_register = 15,
  sym_syscall = 16,
  sym_operator = 17,
  sym_number = 18,
  sym_address = 19,
  sym_source_file = 20,
  sym_declarations = 21,
  sym_declaration = 22,
  sym_statements = 23,
  sym_statement = 24,
  sym_expression = 25,
  sym_reader = 26,
  sym_writer = 27,
  sym_assign = 28,
  sym_constant = 29,
  sym_data = 30,
  sym_label = 31,
  sym_memory = 32,
  sym_string = 33,
  aux_sym_declarations_repeat1 = 34,
  aux_sym_statements_repeat1 = 35,
  aux_sym_string_repeat1 = 36,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_const] = "const",
  [anon_sym_data] = "data",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_QMARK_EQ] = "\?=",
  [anon_sym_AT] = "@",
  [anon_sym_AMP] = "&",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_register] = "register",
  [sym_syscall] = "syscall",
  [sym_operator] = "operator",
  [sym_number] = "number",
  [sym_address] = "address",
  [sym_source_file] = "source_file",
  [sym_declarations] = "declarations",
  [sym_declaration] = "declaration",
  [sym_statements] = "statements",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_reader] = "reader",
  [sym_writer] = "writer",
  [sym_assign] = "assign",
  [sym_constant] = "constant",
  [sym_data] = "data",
  [sym_label] = "label",
  [sym_memory] = "memory",
  [sym_string] = "string",
  [aux_sym_declarations_repeat1] = "declarations_repeat1",
  [aux_sym_statements_repeat1] = "statements_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_QMARK_EQ] = anon_sym_QMARK_EQ,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_register] = sym_register,
  [sym_syscall] = sym_syscall,
  [sym_operator] = sym_operator,
  [sym_number] = sym_number,
  [sym_address] = sym_address,
  [sym_source_file] = sym_source_file,
  [sym_declarations] = sym_declarations,
  [sym_declaration] = sym_declaration,
  [sym_statements] = sym_statements,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_reader] = sym_reader,
  [sym_writer] = sym_writer,
  [sym_assign] = sym_assign,
  [sym_constant] = sym_constant,
  [sym_data] = sym_data,
  [sym_label] = sym_label,
  [sym_memory] = sym_memory,
  [sym_string] = sym_string,
  [aux_sym_declarations_repeat1] = aux_sym_declarations_repeat1,
  [aux_sym_statements_repeat1] = aux_sym_statements_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [anon_sym_QMARK_EQ] = {
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
  [anon_sym_POUND] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_syscall] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
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
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_data] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_memory] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
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
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '&') ADVANCE(31);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '?') ADVANCE(3);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          lookahead == '|') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(29);
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
      if (lookahead == 'l') ADVANCE(40);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 18:
      if (lookahead == '!' ||
          lookahead == ',' ||
          lookahead == '?' ||
          lookahead == 'i' ||
          lookahead == 'j' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '?') ADVANCE(3);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '|') ADVANCE(42);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_data);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '|') ADVANCE(42);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_syscall);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_syscall);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '|') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'a') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'a') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'a') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'c') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'l') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'l') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'n') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'o') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 's') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 's') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 't') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 't') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'y') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_address);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_QMARK_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [sym_syscall] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_address] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym_declarations] = STATE(5),
    [sym_declaration] = STATE(40),
    [sym_statements] = STATE(37),
    [sym_statement] = STATE(36),
    [sym_writer] = STATE(32),
    [sym_assign] = STATE(23),
    [sym_label] = STATE(10),
    [sym_memory] = STATE(17),
    [aux_sym_declarations_repeat1] = STATE(8),
    [aux_sym_statements_repeat1] = STATE(6),
    [anon_sym_const] = ACTIONS(3),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_register] = ACTIONS(11),
    [sym_syscall] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_register,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_operator,
    ACTIONS(23), 1,
      sym_number,
    STATE(17), 1,
      sym_memory,
    STATE(31), 1,
      sym_reader,
    STATE(33), 1,
      sym_expression,
    STATE(24), 5,
      sym_assign,
      sym_constant,
      sym_data,
      sym_label,
      sym_string,
  [41] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_register,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      anon_sym_AMP,
    STATE(17), 1,
      sym_memory,
    STATE(46), 1,
      sym_reader,
    STATE(24), 5,
      sym_assign,
      sym_constant,
      sym_data,
      sym_label,
      sym_string,
  [76] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_register,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      anon_sym_AMP,
    STATE(17), 1,
      sym_memory,
    STATE(52), 1,
      sym_reader,
    STATE(24), 5,
      sym_assign,
      sym_constant,
      sym_data,
      sym_label,
      sym_string,
  [111] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_register,
    ACTIONS(13), 1,
      sym_syscall,
    STATE(6), 1,
      aux_sym_statements_repeat1,
    STATE(10), 1,
      sym_label,
    STATE(17), 1,
      sym_memory,
    STATE(23), 1,
      sym_assign,
    STATE(32), 1,
      sym_writer,
    STATE(36), 1,
      sym_statement,
    STATE(39), 1,
      sym_statements,
  [145] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_register,
    ACTIONS(13), 1,
      sym_syscall,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_statements_repeat1,
    STATE(10), 1,
      sym_label,
    STATE(17), 1,
      sym_memory,
    STATE(23), 1,
      sym_assign,
    STATE(32), 1,
      sym_writer,
    STATE(36), 1,
      sym_statement,
  [179] = 11,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(34), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_register,
    ACTIONS(40), 1,
      sym_syscall,
    STATE(7), 1,
      aux_sym_statements_repeat1,
    STATE(10), 1,
      sym_label,
    STATE(17), 1,
      sym_memory,
    STATE(23), 1,
      sym_assign,
    STATE(32), 1,
      sym_writer,
    STATE(36), 1,
      sym_statement,
  [213] = 5,
    ACTIONS(3), 1,
      anon_sym_const,
    ACTIONS(5), 1,
      anon_sym_data,
    STATE(9), 1,
      aux_sym_declarations_repeat1,
    STATE(40), 1,
      sym_declaration,
    ACTIONS(43), 4,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_register,
      sym_syscall,
  [232] = 5,
    ACTIONS(45), 1,
      anon_sym_const,
    ACTIONS(48), 1,
      anon_sym_data,
    STATE(9), 1,
      aux_sym_declarations_repeat1,
    STATE(40), 1,
      sym_declaration,
    ACTIONS(51), 4,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_register,
      sym_syscall,
  [251] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_register,
    ACTIONS(13), 1,
      sym_syscall,
    STATE(17), 1,
      sym_memory,
    STATE(23), 1,
      sym_assign,
    STATE(32), 1,
      sym_writer,
    STATE(50), 1,
      sym_statement,
  [273] = 3,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(57), 4,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_register,
      sym_syscall,
  [286] = 3,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_LF,
    ACTIONS(61), 4,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_register,
      sym_syscall,
  [299] = 1,
    ACTIONS(63), 6,
      anon_sym_const,
      anon_sym_data,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_register,
      sym_syscall,
  [308] = 1,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_register,
      sym_syscall,
  [316] = 1,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_register,
      sym_syscall,
  [324] = 1,
    ACTIONS(67), 5,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_register,
      sym_syscall,
      sym_operator,
  [332] = 1,
    ACTIONS(69), 4,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      sym_operator,
  [339] = 1,
    ACTIONS(71), 4,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      sym_operator,
  [346] = 3,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      aux_sym_string_token1,
    STATE(21), 1,
      aux_sym_string_repeat1,
  [356] = 3,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      aux_sym_string_token1,
    STATE(19), 1,
      aux_sym_string_repeat1,
  [366] = 3,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      aux_sym_string_token1,
    STATE(21), 1,
      aux_sym_string_repeat1,
  [376] = 3,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      sym_number,
    STATE(29), 1,
      sym_string,
  [386] = 1,
    ACTIONS(88), 2,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
  [391] = 1,
    ACTIONS(90), 2,
      anon_sym_SEMI,
      sym_operator,
  [396] = 2,
    ACTIONS(25), 1,
      anon_sym_AMP,
    STATE(41), 1,
      sym_data,
  [403] = 1,
    ACTIONS(92), 2,
      anon_sym_SEMI,
      sym_operator,
  [408] = 1,
    ACTIONS(94), 2,
      anon_sym_SEMI,
      sym_operator,
  [413] = 2,
    ACTIONS(15), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym_constant,
  [420] = 1,
    ACTIONS(96), 2,
      anon_sym_SEMI,
      sym_operator,
  [425] = 1,
    ACTIONS(98), 2,
      anon_sym_SEMI,
      sym_operator,
  [430] = 2,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      sym_operator,
  [437] = 1,
    ACTIONS(104), 2,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
  [442] = 1,
    ACTIONS(106), 1,
      anon_sym_SEMI,
  [446] = 1,
    ACTIONS(108), 1,
      sym_number,
  [450] = 1,
    ACTIONS(110), 1,
      sym_address,
  [454] = 1,
    ACTIONS(112), 1,
      anon_sym_SEMI,
  [458] = 1,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
  [462] = 1,
    ACTIONS(116), 1,
      anon_sym_COMMA,
  [466] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [470] = 1,
    ACTIONS(120), 1,
      anon_sym_SEMI,
  [474] = 1,
    ACTIONS(122), 1,
      anon_sym_SEMI,
  [478] = 1,
    ACTIONS(124), 1,
      sym_number,
  [482] = 1,
    ACTIONS(126), 1,
      anon_sym_RBRACK,
  [486] = 1,
    ACTIONS(128), 1,
      sym_address,
  [490] = 1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
  [494] = 1,
    ACTIONS(132), 1,
      anon_sym_SEMI,
  [498] = 1,
    ACTIONS(134), 1,
      anon_sym_SEMI,
  [502] = 1,
    ACTIONS(136), 1,
      sym_register,
  [506] = 1,
    ACTIONS(138), 1,
      sym_address,
  [510] = 1,
    ACTIONS(140), 1,
      anon_sym_SEMI,
  [514] = 1,
    ACTIONS(142), 1,
      anon_sym_LF,
  [518] = 1,
    ACTIONS(144), 1,
      anon_sym_SEMI,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 111,
  [SMALL_STATE(6)] = 145,
  [SMALL_STATE(7)] = 179,
  [SMALL_STATE(8)] = 213,
  [SMALL_STATE(9)] = 232,
  [SMALL_STATE(10)] = 251,
  [SMALL_STATE(11)] = 273,
  [SMALL_STATE(12)] = 286,
  [SMALL_STATE(13)] = 299,
  [SMALL_STATE(14)] = 308,
  [SMALL_STATE(15)] = 316,
  [SMALL_STATE(16)] = 324,
  [SMALL_STATE(17)] = 332,
  [SMALL_STATE(18)] = 339,
  [SMALL_STATE(19)] = 346,
  [SMALL_STATE(20)] = 356,
  [SMALL_STATE(21)] = 366,
  [SMALL_STATE(22)] = 376,
  [SMALL_STATE(23)] = 386,
  [SMALL_STATE(24)] = 391,
  [SMALL_STATE(25)] = 396,
  [SMALL_STATE(26)] = 403,
  [SMALL_STATE(27)] = 408,
  [SMALL_STATE(28)] = 413,
  [SMALL_STATE(29)] = 420,
  [SMALL_STATE(30)] = 425,
  [SMALL_STATE(31)] = 430,
  [SMALL_STATE(32)] = 437,
  [SMALL_STATE(33)] = 442,
  [SMALL_STATE(34)] = 446,
  [SMALL_STATE(35)] = 450,
  [SMALL_STATE(36)] = 454,
  [SMALL_STATE(37)] = 458,
  [SMALL_STATE(38)] = 462,
  [SMALL_STATE(39)] = 466,
  [SMALL_STATE(40)] = 470,
  [SMALL_STATE(41)] = 474,
  [SMALL_STATE(42)] = 478,
  [SMALL_STATE(43)] = 482,
  [SMALL_STATE(44)] = 486,
  [SMALL_STATE(45)] = 490,
  [SMALL_STATE(46)] = 494,
  [SMALL_STATE(47)] = 498,
  [SMALL_STATE(48)] = 502,
  [SMALL_STATE(49)] = 506,
  [SMALL_STATE(50)] = 510,
  [SMALL_STATE(51)] = 514,
  [SMALL_STATE(52)] = 518,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(49),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(48),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(17),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(47),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 1),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(28),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(25),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory, 5),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(21),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_writer, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reader, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_L(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
