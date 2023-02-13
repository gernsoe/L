#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_SEMI = 1,
  anon_sym_LF = 2,
  anon_sym_const = 3,
  anon_sym_data = 4,
  anon_sym_COLON_EQ = 5,
  anon_sym_QMARK_EQ = 6,
  sym_constant = 7,
  sym_data = 8,
  sym_label = 9,
  anon_sym_LBRACK = 10,
  anon_sym_COMMA = 11,
  anon_sym_RBRACK = 12,
  sym_register = 13,
  sym_syscall = 14,
  sym_operator = 15,
  sym_number = 16,
  sym_source_file = 17,
  sym_declarations = 18,
  sym_declaration = 19,
  sym_statements = 20,
  sym_statement = 21,
  sym_expression = 22,
  sym_reader = 23,
  sym_writer = 24,
  sym_assign = 25,
  sym_memory = 26,
  aux_sym_declarations_repeat1 = 27,
  aux_sym_statements_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_const] = "const",
  [anon_sym_data] = "data",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_QMARK_EQ] = "\?=",
  [sym_constant] = "constant",
  [sym_data] = "data",
  [sym_label] = "label",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_register] = "register",
  [sym_syscall] = "syscall",
  [sym_operator] = "operator",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_declarations] = "declarations",
  [sym_declaration] = "declaration",
  [sym_statements] = "statements",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_reader] = "reader",
  [sym_writer] = "writer",
  [sym_assign] = "assign",
  [sym_memory] = "memory",
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
  [anon_sym_QMARK_EQ] = anon_sym_QMARK_EQ,
  [sym_constant] = sym_constant,
  [sym_data] = sym_data,
  [sym_label] = sym_label,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_register] = sym_register,
  [sym_syscall] = sym_syscall,
  [sym_operator] = sym_operator,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_declarations] = sym_declarations,
  [sym_declaration] = sym_declaration,
  [sym_statements] = sym_statements,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_reader] = sym_reader,
  [sym_writer] = sym_writer,
  [sym_assign] = sym_assign,
  [sym_memory] = sym_memory,
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
  [anon_sym_QMARK_EQ] = {
    .visible = true,
    .named = false,
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
  [sym_memory] = {
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
};

enum {
  field_assignment = 1,
  field_conditional = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_assignment] = "assignment",
  [field_conditional] = "conditional",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_assignment, 0},
    {field_assignment, 1},
    {field_assignment, 2},
  [3] =
    {field_conditional, 0},
    {field_conditional, 1},
    {field_conditional, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(7);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == '!' ||
          lookahead == ',' ||
          lookahead == '?' ||
          ('i' <= lookahead && lookahead <= 'n') ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 24:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(37);
      END_STATE();
    case 25:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_constant);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_data);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|') ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_syscall);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(20);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_QMARK_EQ] = ACTIONS(1),
    [sym_constant] = ACTIONS(1),
    [sym_data] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [sym_syscall] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(34),
    [sym_declarations] = STATE(4),
    [sym_declaration] = STATE(23),
    [sym_statements] = STATE(32),
    [sym_statement] = STATE(31),
    [sym_writer] = STATE(21),
    [sym_assign] = STATE(22),
    [sym_memory] = STATE(18),
    [aux_sym_declarations_repeat1] = STATE(9),
    [aux_sym_statements_repeat1] = STATE(6),
    [anon_sym_const] = ACTIONS(3),
    [anon_sym_data] = ACTIONS(5),
    [sym_label] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_register] = ACTIONS(11),
    [sym_syscall] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_register,
    ACTIONS(17), 1,
      sym_operator,
    STATE(18), 1,
      sym_memory,
    STATE(19), 1,
      sym_reader,
    STATE(20), 1,
      sym_assign,
    STATE(33), 1,
      sym_expression,
    ACTIONS(15), 4,
      sym_constant,
      sym_data,
      sym_label,
      sym_number,
  [28] = 8,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_register,
    ACTIONS(17), 1,
      sym_operator,
    STATE(18), 1,
      sym_memory,
    STATE(19), 1,
      sym_reader,
    STATE(20), 1,
      sym_assign,
    STATE(35), 1,
      sym_expression,
    ACTIONS(15), 4,
      sym_constant,
      sym_data,
      sym_label,
      sym_number,
  [56] = 10,
    ACTIONS(7), 1,
      sym_label,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_register,
    ACTIONS(13), 1,
      sym_syscall,
    STATE(6), 1,
      aux_sym_statements_repeat1,
    STATE(18), 1,
      sym_memory,
    STATE(21), 1,
      sym_writer,
    STATE(22), 1,
      sym_assign,
    STATE(26), 1,
      sym_statements,
    STATE(31), 1,
      sym_statement,
  [87] = 10,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_label,
    ACTIONS(24), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym_register,
    ACTIONS(30), 1,
      sym_syscall,
    STATE(5), 1,
      aux_sym_statements_repeat1,
    STATE(18), 1,
      sym_memory,
    STATE(21), 1,
      sym_writer,
    STATE(22), 1,
      sym_assign,
    STATE(31), 1,
      sym_statement,
  [118] = 10,
    ACTIONS(7), 1,
      sym_label,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_register,
    ACTIONS(13), 1,
      sym_syscall,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_statements_repeat1,
    STATE(18), 1,
      sym_memory,
    STATE(21), 1,
      sym_writer,
    STATE(22), 1,
      sym_assign,
    STATE(31), 1,
      sym_statement,
  [149] = 6,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_register,
    STATE(18), 1,
      sym_memory,
    STATE(20), 1,
      sym_assign,
    STATE(41), 1,
      sym_reader,
    ACTIONS(15), 4,
      sym_constant,
      sym_data,
      sym_label,
      sym_number,
  [171] = 6,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_register,
    STATE(18), 1,
      sym_memory,
    STATE(20), 1,
      sym_assign,
    STATE(38), 1,
      sym_reader,
    ACTIONS(15), 4,
      sym_constant,
      sym_data,
      sym_label,
      sym_number,
  [193] = 5,
    ACTIONS(3), 1,
      anon_sym_const,
    ACTIONS(5), 1,
      anon_sym_data,
    STATE(10), 1,
      aux_sym_declarations_repeat1,
    STATE(23), 1,
      sym_declaration,
    ACTIONS(35), 4,
      sym_label,
      anon_sym_LBRACK,
      sym_register,
      sym_syscall,
  [212] = 5,
    ACTIONS(37), 1,
      anon_sym_const,
    ACTIONS(40), 1,
      anon_sym_data,
    STATE(10), 1,
      aux_sym_declarations_repeat1,
    STATE(23), 1,
      sym_declaration,
    ACTIONS(43), 4,
      sym_label,
      anon_sym_LBRACK,
      sym_register,
      sym_syscall,
  [231] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_register,
    ACTIONS(13), 1,
      sym_syscall,
    STATE(18), 1,
      sym_memory,
    STATE(21), 1,
      sym_writer,
    STATE(22), 1,
      sym_assign,
    STATE(29), 1,
      sym_statement,
  [253] = 1,
    ACTIONS(45), 6,
      anon_sym_const,
      anon_sym_data,
      sym_label,
      anon_sym_LBRACK,
      sym_register,
      sym_syscall,
  [262] = 3,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(51), 4,
      sym_label,
      anon_sym_LBRACK,
      sym_register,
      sym_syscall,
  [275] = 3,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(55), 4,
      sym_label,
      anon_sym_LBRACK,
      sym_register,
      sym_syscall,
  [288] = 1,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_LBRACK,
      sym_register,
      sym_syscall,
  [296] = 1,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_LBRACK,
      sym_register,
      sym_syscall,
  [304] = 1,
    ACTIONS(59), 4,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      sym_operator,
  [311] = 1,
    ACTIONS(61), 4,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      sym_operator,
  [318] = 2,
    ACTIONS(63), 1,
      anon_sym_SEMI,
    ACTIONS(65), 1,
      sym_operator,
  [325] = 1,
    ACTIONS(67), 2,
      anon_sym_SEMI,
      sym_operator,
  [330] = 2,
    ACTIONS(69), 1,
      anon_sym_COLON_EQ,
    ACTIONS(71), 1,
      anon_sym_QMARK_EQ,
  [337] = 1,
    ACTIONS(73), 2,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
  [342] = 1,
    ACTIONS(75), 1,
      anon_sym_SEMI,
  [346] = 1,
    ACTIONS(77), 1,
      anon_sym_LF,
  [350] = 1,
    ACTIONS(79), 1,
      sym_constant,
  [354] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
  [358] = 1,
    ACTIONS(83), 1,
      anon_sym_COMMA,
  [362] = 1,
    ACTIONS(85), 1,
      sym_number,
  [366] = 1,
    ACTIONS(87), 1,
      anon_sym_SEMI,
  [370] = 1,
    ACTIONS(89), 1,
      anon_sym_SEMI,
  [374] = 1,
    ACTIONS(91), 1,
      anon_sym_SEMI,
  [378] = 1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
  [382] = 1,
    ACTIONS(95), 1,
      anon_sym_SEMI,
  [386] = 1,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
  [390] = 1,
    ACTIONS(99), 1,
      anon_sym_SEMI,
  [394] = 1,
    ACTIONS(101), 1,
      anon_sym_SEMI,
  [398] = 1,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
  [402] = 1,
    ACTIONS(105), 1,
      anon_sym_SEMI,
  [406] = 1,
    ACTIONS(107), 1,
      sym_register,
  [410] = 1,
    ACTIONS(79), 1,
      sym_data,
  [414] = 1,
    ACTIONS(109), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 149,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 193,
  [SMALL_STATE(10)] = 212,
  [SMALL_STATE(11)] = 231,
  [SMALL_STATE(12)] = 253,
  [SMALL_STATE(13)] = 262,
  [SMALL_STATE(14)] = 275,
  [SMALL_STATE(15)] = 288,
  [SMALL_STATE(16)] = 296,
  [SMALL_STATE(17)] = 304,
  [SMALL_STATE(18)] = 311,
  [SMALL_STATE(19)] = 318,
  [SMALL_STATE(20)] = 325,
  [SMALL_STATE(21)] = 330,
  [SMALL_STATE(22)] = 337,
  [SMALL_STATE(23)] = 342,
  [SMALL_STATE(24)] = 346,
  [SMALL_STATE(25)] = 350,
  [SMALL_STATE(26)] = 354,
  [SMALL_STATE(27)] = 358,
  [SMALL_STATE(28)] = 362,
  [SMALL_STATE(29)] = 366,
  [SMALL_STATE(30)] = 370,
  [SMALL_STATE(31)] = 374,
  [SMALL_STATE(32)] = 378,
  [SMALL_STATE(33)] = 382,
  [SMALL_STATE(34)] = 386,
  [SMALL_STATE(35)] = 390,
  [SMALL_STATE(36)] = 394,
  [SMALL_STATE(37)] = 398,
  [SMALL_STATE(38)] = 402,
  [SMALL_STATE(39)] = 406,
  [SMALL_STATE(40)] = 410,
  [SMALL_STATE(41)] = 414,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(11),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(39),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(18),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(36),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 1),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(25),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(40),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory, 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reader, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_writer, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
