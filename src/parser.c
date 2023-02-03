#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
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
  anon_sym_PIPE = 6,
  anon_sym_AMP = 7,
  anon_sym_PLUS = 8,
  anon_sym_DASH = 9,
  anon_sym_LBRACK = 10,
  anon_sym_COMMA = 11,
  anon_sym_RBRACK = 12,
  anon_sym_AT = 13,
  aux_sym__data_token1 = 14,
  sym__register = 15,
  sym__bytes = 16,
  sym__syscall = 17,
  anon_sym_goto = 18,
  anon_sym_POUND = 19,
  aux_sym__label_token1 = 20,
  sym__number = 21,
  sym__word = 22,
  sym_source_file = 23,
  sym_declarations = 24,
  sym_declaration = 25,
  sym_statements = 26,
  sym_statement = 27,
  sym_expression = 28,
  sym_binary_expression = 29,
  sym_unary_expression = 30,
  sym_operator = 31,
  sym_reader = 32,
  sym_writer = 33,
  sym_assign = 34,
  sym__memory = 35,
  sym__constant = 36,
  sym__data = 37,
  sym__goto = 38,
  sym__label = 39,
  aux_sym_declarations_repeat1 = 40,
  aux_sym_statements_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_const] = "const",
  [anon_sym_data] = "data",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [aux_sym__data_token1] = "_data_token1",
  [sym__register] = "_register",
  [sym__bytes] = "_bytes",
  [sym__syscall] = "_syscall",
  [anon_sym_goto] = "goto",
  [anon_sym_POUND] = "#",
  [aux_sym__label_token1] = "_label_token1",
  [sym__number] = "_number",
  [sym__word] = "_word",
  [sym_source_file] = "source_file",
  [sym_declarations] = "declarations",
  [sym_declaration] = "declaration",
  [sym_statements] = "statements",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_operator] = "operator",
  [sym_reader] = "reader",
  [sym_writer] = "writer",
  [sym_assign] = "assign",
  [sym__memory] = "_memory",
  [sym__constant] = "_constant",
  [sym__data] = "_data",
  [sym__goto] = "_goto",
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
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__data_token1] = aux_sym__data_token1,
  [sym__register] = sym__register,
  [sym__bytes] = sym__bytes,
  [sym__syscall] = sym__syscall,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym__label_token1] = aux_sym__label_token1,
  [sym__number] = sym__number,
  [sym__word] = sym__word,
  [sym_source_file] = sym_source_file,
  [sym_declarations] = sym_declarations,
  [sym_declaration] = sym_declaration,
  [sym_statements] = sym_statements,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_operator] = sym_operator,
  [sym_reader] = sym_reader,
  [sym_writer] = sym_writer,
  [sym_assign] = sym_assign,
  [sym__memory] = sym__memory,
  [sym__constant] = sym__constant,
  [sym__data] = sym__data,
  [sym__goto] = sym__goto,
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__label_token1] = {
    .visible = false,
    .named = false,
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
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
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
  [sym__goto] = {
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
      if (eof) ADVANCE(24);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '&') ADVANCE(33);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(43);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '"' ||
          lookahead == '_') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '1' ||
          lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '"' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == ',' ||
          lookahead == 'i' ||
          lookahead == 'j' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '&') ADVANCE(33);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'g') ADVANCE(13);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == ',' ||
          lookahead == '1' ||
          lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8') ADVANCE(48);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_data);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__data_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__data_token1);
      if (lookahead == 'a') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__data_token1);
      if (lookahead == 'o') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__data_token1);
      if (lookahead == 'o') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__data_token1);
      if (lookahead == 'y') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__data_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__data_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__register);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__bytes);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__syscall);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__syscall);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_goto);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 21},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__data_token1] = ACTIONS(1),
    [sym__register] = ACTIONS(1),
    [sym__bytes] = ACTIONS(1),
    [sym__syscall] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym__label_token1] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym_declarations] = STATE(3),
    [sym_declaration] = STATE(41),
    [aux_sym_declarations_repeat1] = STATE(9),
    [anon_sym_const] = ACTIONS(3),
    [anon_sym_data] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(7), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      sym__register,
    STATE(7), 1,
      sym_unary_expression,
    STATE(10), 1,
      sym_reader,
    STATE(12), 1,
      sym__memory,
    STATE(20), 1,
      sym_operator,
    STATE(37), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(14), 3,
      sym_assign,
      sym__constant,
      sym__data,
  [37] = 11,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym__register,
    ACTIONS(17), 1,
      sym__syscall,
    ACTIONS(19), 1,
      anon_sym_goto,
    STATE(5), 1,
      aux_sym_statements_repeat1,
    STATE(12), 1,
      sym__memory,
    STATE(30), 1,
      sym_statement,
    STATE(31), 1,
      sym_statements,
    STATE(32), 1,
      sym__goto,
    STATE(33), 1,
      sym_writer,
    STATE(39), 1,
      sym_assign,
  [71] = 11,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(26), 1,
      sym__register,
    ACTIONS(29), 1,
      sym__syscall,
    ACTIONS(32), 1,
      anon_sym_goto,
    STATE(4), 1,
      aux_sym_statements_repeat1,
    STATE(12), 1,
      sym__memory,
    STATE(30), 1,
      sym_statement,
    STATE(32), 1,
      sym__goto,
    STATE(33), 1,
      sym_writer,
    STATE(39), 1,
      sym_assign,
  [105] = 11,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym__register,
    ACTIONS(17), 1,
      sym__syscall,
    ACTIONS(19), 1,
      anon_sym_goto,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_statements_repeat1,
    STATE(12), 1,
      sym__memory,
    STATE(30), 1,
      sym_statement,
    STATE(32), 1,
      sym__goto,
    STATE(33), 1,
      sym_writer,
    STATE(39), 1,
      sym_assign,
  [139] = 7,
    ACTIONS(7), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      sym__register,
    STATE(12), 1,
      sym__memory,
    STATE(47), 1,
      sym_reader,
    STATE(14), 3,
      sym_assign,
      sym__constant,
      sym__data,
  [163] = 7,
    ACTIONS(7), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      sym__register,
    STATE(12), 1,
      sym__memory,
    STATE(43), 1,
      sym_reader,
    STATE(14), 3,
      sym_assign,
      sym__constant,
      sym__data,
  [187] = 5,
    ACTIONS(37), 1,
      anon_sym_const,
    ACTIONS(40), 1,
      anon_sym_data,
    STATE(8), 1,
      aux_sym_declarations_repeat1,
    STATE(41), 1,
      sym_declaration,
    ACTIONS(43), 4,
      anon_sym_LBRACK,
      sym__register,
      sym__syscall,
      anon_sym_goto,
  [206] = 5,
    ACTIONS(3), 1,
      anon_sym_const,
    ACTIONS(5), 1,
      anon_sym_data,
    STATE(8), 1,
      aux_sym_declarations_repeat1,
    STATE(41), 1,
      sym_declaration,
    ACTIONS(45), 4,
      anon_sym_LBRACK,
      sym__register,
      sym__syscall,
      anon_sym_goto,
  [225] = 5,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      sym_binary_expression,
    STATE(19), 1,
      sym_operator,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
  [243] = 1,
    ACTIONS(51), 6,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
  [252] = 1,
    ACTIONS(53), 6,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
  [261] = 1,
    ACTIONS(55), 6,
      anon_sym_const,
      anon_sym_data,
      anon_sym_LBRACK,
      sym__register,
      sym__syscall,
      anon_sym_goto,
  [270] = 1,
    ACTIONS(57), 5,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
  [278] = 1,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__register,
      sym__syscall,
      anon_sym_goto,
  [286] = 1,
    ACTIONS(61), 5,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
  [294] = 1,
    ACTIONS(63), 5,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
  [302] = 1,
    ACTIONS(65), 4,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym__register,
  [309] = 1,
    ACTIONS(67), 4,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym__register,
  [316] = 1,
    ACTIONS(69), 4,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym__register,
  [323] = 2,
    ACTIONS(13), 1,
      anon_sym_AT,
    STATE(38), 1,
      sym__constant,
  [330] = 2,
    ACTIONS(7), 1,
      anon_sym_AMP,
    STATE(38), 1,
      sym__data,
  [337] = 2,
    ACTIONS(71), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym__label,
  [344] = 1,
    ACTIONS(73), 1,
      sym__bytes,
  [348] = 1,
    ACTIONS(75), 1,
      sym__register,
  [352] = 1,
    ACTIONS(77), 1,
      anon_sym_COMMA,
  [356] = 1,
    ACTIONS(79), 1,
      aux_sym__label_token1,
  [360] = 1,
    ACTIONS(81), 1,
      anon_sym_SEMI,
  [364] = 1,
    ACTIONS(83), 1,
      anon_sym_LF,
  [368] = 1,
    ACTIONS(85), 1,
      anon_sym_SEMI,
  [372] = 1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
  [376] = 1,
    ACTIONS(89), 1,
      anon_sym_SEMI,
  [380] = 1,
    ACTIONS(91), 1,
      anon_sym_COLON_EQ,
  [384] = 1,
    ACTIONS(93), 1,
      anon_sym_SEMI,
  [388] = 1,
    ACTIONS(95), 1,
      aux_sym__data_token1,
  [392] = 1,
    ACTIONS(97), 1,
      sym__word,
  [396] = 1,
    ACTIONS(99), 1,
      anon_sym_SEMI,
  [400] = 1,
    ACTIONS(101), 1,
      anon_sym_SEMI,
  [404] = 1,
    ACTIONS(103), 1,
      anon_sym_COLON_EQ,
  [408] = 1,
    ACTIONS(105), 1,
      sym__word,
  [412] = 1,
    ACTIONS(107), 1,
      anon_sym_SEMI,
  [416] = 1,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
  [420] = 1,
    ACTIONS(111), 1,
      anon_sym_SEMI,
  [424] = 1,
    ACTIONS(113), 1,
      sym__number,
  [428] = 1,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
  [432] = 1,
    ACTIONS(117), 1,
      anon_sym_LF,
  [436] = 1,
    ACTIONS(119), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 71,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 163,
  [SMALL_STATE(8)] = 187,
  [SMALL_STATE(9)] = 206,
  [SMALL_STATE(10)] = 225,
  [SMALL_STATE(11)] = 243,
  [SMALL_STATE(12)] = 252,
  [SMALL_STATE(13)] = 261,
  [SMALL_STATE(14)] = 270,
  [SMALL_STATE(15)] = 278,
  [SMALL_STATE(16)] = 286,
  [SMALL_STATE(17)] = 294,
  [SMALL_STATE(18)] = 302,
  [SMALL_STATE(19)] = 309,
  [SMALL_STATE(20)] = 316,
  [SMALL_STATE(21)] = 323,
  [SMALL_STATE(22)] = 330,
  [SMALL_STATE(23)] = 337,
  [SMALL_STATE(24)] = 344,
  [SMALL_STATE(25)] = 348,
  [SMALL_STATE(26)] = 352,
  [SMALL_STATE(27)] = 356,
  [SMALL_STATE(28)] = 360,
  [SMALL_STATE(29)] = 364,
  [SMALL_STATE(30)] = 368,
  [SMALL_STATE(31)] = 372,
  [SMALL_STATE(32)] = 376,
  [SMALL_STATE(33)] = 380,
  [SMALL_STATE(34)] = 384,
  [SMALL_STATE(35)] = 388,
  [SMALL_STATE(36)] = 392,
  [SMALL_STATE(37)] = 396,
  [SMALL_STATE(38)] = 400,
  [SMALL_STATE(39)] = 404,
  [SMALL_STATE(40)] = 408,
  [SMALL_STATE(41)] = 412,
  [SMALL_STATE(42)] = 416,
  [SMALL_STATE(43)] = 420,
  [SMALL_STATE(44)] = 424,
  [SMALL_STATE(45)] = 428,
  [SMALL_STATE(46)] = 432,
  [SMALL_STATE(47)] = 436,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(25),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(12),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(32),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(21),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(22),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__memory, 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reader, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__goto, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_writer, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [115] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
