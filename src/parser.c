#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 1
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_func = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_begin = 5,
  anon_sym_end = 6,
  anon_sym_return = 7,
  anon_sym_SEMI = 8,
  anon_sym_SQUOTE = 9,
  aux_sym_string_token1 = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_token2 = 12,
  sym_number = 13,
  sym_identifier = 14,
  anon_sym_SLASH_SLASH = 15,
  aux_sym_comment_line_token1 = 16,
  sym_source_file = 17,
  sym__definition = 18,
  sym_function_definition = 19,
  sym_parameter_list = 20,
  sym_block = 21,
  aux_sym__statement_list = 22,
  sym__statement = 23,
  sym_return_statement = 24,
  sym__literal = 25,
  sym_string = 26,
  sym_comment = 27,
  sym_comment_line = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_parameter_list_repeat1 = 30,
  alias_sym_parameter = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_func] = "func",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_line_token1] = "comment_line_token1",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [aux_sym__statement_list] = "_statement_list",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym__literal] = "_literal",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_comment_line] = "comment_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [alias_sym_parameter] = "parameter",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_line_token1] = aux_sym_comment_line_token1,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [aux_sym__statement_list] = aux_sym__statement_list,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym__literal] = sym__literal,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym_comment_line] = sym_comment_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [alias_sym_parameter] = alias_sym_parameter,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_line_token1] = {
    .visible = false,
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
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_list] = {
    .visible = false,
    .named = false,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_parameter] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_body = 1,
  field_comment_text = 2,
  field_name = 3,
  field_parameters = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_comment_text] = "comment_text",
  [field_name] = "name",
  [field_parameters] = "parameters",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_comment_text, 1},
  [1] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [1] = alias_sym_parameter,
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
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_comment_line_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_comment_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 31},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym__definition] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_comment_line] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_func] = ACTIONS(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_end,
    ACTIONS(11), 1,
      anon_sym_return,
    STATE(8), 1,
      sym_comment_line,
    STATE(4), 4,
      aux_sym__statement_list,
      sym__statement,
      sym_return_statement,
      sym_comment,
  [19] = 5,
    ACTIONS(13), 1,
      anon_sym_end,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(18), 1,
      anon_sym_SLASH_SLASH,
    STATE(8), 1,
      sym_comment_line,
    STATE(3), 4,
      aux_sym__statement_list,
      sym__statement,
      sym_return_statement,
      sym_comment,
  [38] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_end,
    STATE(8), 1,
      sym_comment_line,
    STATE(3), 4,
      aux_sym__statement_list,
      sym__statement,
      sym_return_statement,
      sym_comment,
  [57] = 5,
    ACTIONS(5), 1,
      anon_sym_func,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_comment_line,
    STATE(6), 4,
      sym__definition,
      sym_function_definition,
      sym_comment,
      aux_sym_source_file_repeat1,
  [76] = 5,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(30), 1,
      anon_sym_SLASH_SLASH,
    STATE(8), 1,
      sym_comment_line,
    STATE(6), 4,
      sym__definition,
      sym_function_definition,
      sym_comment,
      aux_sym_source_file_repeat1,
  [95] = 4,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 2,
      sym_number,
      sym_identifier,
    STATE(27), 2,
      sym__literal,
      sym_string,
  [110] = 1,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_end,
      anon_sym_return,
      anon_sym_SLASH_SLASH,
  [118] = 1,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_end,
      anon_sym_return,
      anon_sym_SLASH_SLASH,
  [126] = 3,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_parameter_list_repeat1,
  [136] = 1,
    ACTIONS(48), 3,
      anon_sym_end,
      anon_sym_return,
      anon_sym_SLASH_SLASH,
  [142] = 3,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      aux_sym_parameter_list_repeat1,
  [152] = 1,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_SLASH_SLASH,
  [158] = 1,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_SLASH_SLASH,
  [164] = 3,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_parameter_list_repeat1,
  [174] = 1,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_SLASH_SLASH,
  [180] = 2,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_parameter_list,
  [187] = 2,
    ACTIONS(64), 1,
      anon_sym_begin,
    STATE(13), 1,
      sym_block,
  [194] = 2,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    ACTIONS(68), 1,
      sym_identifier,
  [201] = 1,
    ACTIONS(70), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [206] = 1,
    ACTIONS(72), 1,
      sym_identifier,
  [210] = 1,
    ACTIONS(74), 1,
      sym_identifier,
  [214] = 1,
    ACTIONS(76), 1,
      anon_sym_begin,
  [218] = 1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
  [222] = 1,
    ACTIONS(80), 1,
      aux_sym_string_token1,
  [226] = 1,
    ACTIONS(82), 1,
      aux_sym_string_token2,
  [230] = 1,
    ACTIONS(84), 1,
      anon_sym_SEMI,
  [234] = 1,
    ACTIONS(86), 1,
      anon_sym_begin,
  [238] = 1,
    ACTIONS(88), 1,
      aux_sym_comment_line_token1,
  [242] = 1,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
  [246] = 1,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
  [250] = 1,
    ACTIONS(92), 1,
      anon_sym_begin,
  [254] = 1,
    ACTIONS(94), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 118,
  [SMALL_STATE(10)] = 126,
  [SMALL_STATE(11)] = 136,
  [SMALL_STATE(12)] = 142,
  [SMALL_STATE(13)] = 152,
  [SMALL_STATE(14)] = 158,
  [SMALL_STATE(15)] = 164,
  [SMALL_STATE(16)] = 174,
  [SMALL_STATE(17)] = 180,
  [SMALL_STATE(18)] = 187,
  [SMALL_STATE(19)] = 194,
  [SMALL_STATE(20)] = 201,
  [SMALL_STATE(21)] = 206,
  [SMALL_STATE(22)] = 210,
  [SMALL_STATE(23)] = 214,
  [SMALL_STATE(24)] = 218,
  [SMALL_STATE(25)] = 222,
  [SMALL_STATE(26)] = 226,
  [SMALL_STATE(27)] = 230,
  [SMALL_STATE(28)] = 234,
  [SMALL_STATE(29)] = 238,
  [SMALL_STATE(30)] = 242,
  [SMALL_STATE(31)] = 246,
  [SMALL_STATE(32)] = 250,
  [SMALL_STATE(33)] = 254,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list, 2), SHIFT_REPEAT(7),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list, 2), SHIFT_REPEAT(29),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 2, .production_id = 1),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(21),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, .production_id = 3),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, .production_id = 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_template(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
