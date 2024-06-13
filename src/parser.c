#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_true = 1,
  anon_sym_false = 2,
  aux_sym_byte_token1 = 3,
  sym_short = 4,
  sym_int = 5,
  sym_long = 6,
  sym_float = 7,
  sym_double = 8,
  anon_sym_LBRACKB_SEMI = 9,
  anon_sym_COMMA = 10,
  anon_sym_RBRACK = 11,
  anon_sym_LBRACKI_SEMI = 12,
  anon_sym_LBRACKL_SEMI = 13,
  aux_sym_string_token1 = 14,
  anon_sym_DQUOTE = 15,
  anon_sym_SQUOTE = 16,
  sym_string_single_quoted = 17,
  sym_string_double_quoted = 18,
  sym_escape_sequence = 19,
  anon_sym_LBRACK = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  anon_sym_COLON = 23,
  sym_document = 24,
  sym__value = 25,
  sym__boolean = 26,
  sym_byte = 27,
  sym_byte_array = 28,
  sym_int_array = 29,
  sym_long_array = 30,
  sym_string = 31,
  aux_sym__string_double_quoted = 32,
  aux_sym__string_single_quoted = 33,
  sym_list = 34,
  sym_component = 35,
  sym_pair = 36,
  aux_sym_byte_array_repeat1 = 37,
  aux_sym_int_array_repeat1 = 38,
  aux_sym_long_array_repeat1 = 39,
  aux_sym_list_repeat1 = 40,
  aux_sym_component_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_byte_token1] = "byte_token1",
  [sym_short] = "short",
  [sym_int] = "int",
  [sym_long] = "long",
  [sym_float] = "float",
  [sym_double] = "double",
  [anon_sym_LBRACKB_SEMI] = "[B;",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACKI_SEMI] = "[I;",
  [anon_sym_LBRACKL_SEMI] = "[L;",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_string_single_quoted] = "string_single_quoted",
  [sym_string_double_quoted] = "string_double_quoted",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym__boolean] = "_boolean",
  [sym_byte] = "byte",
  [sym_byte_array] = "byte_array",
  [sym_int_array] = "int_array",
  [sym_long_array] = "long_array",
  [sym_string] = "string",
  [aux_sym__string_double_quoted] = "_string_double_quoted",
  [aux_sym__string_single_quoted] = "_string_single_quoted",
  [sym_list] = "list",
  [sym_component] = "component",
  [sym_pair] = "pair",
  [aux_sym_byte_array_repeat1] = "byte_array_repeat1",
  [aux_sym_int_array_repeat1] = "int_array_repeat1",
  [aux_sym_long_array_repeat1] = "long_array_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_component_repeat1] = "component_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_byte_token1] = aux_sym_byte_token1,
  [sym_short] = sym_short,
  [sym_int] = sym_int,
  [sym_long] = sym_long,
  [sym_float] = sym_float,
  [sym_double] = sym_double,
  [anon_sym_LBRACKB_SEMI] = anon_sym_LBRACKB_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACKI_SEMI] = anon_sym_LBRACKI_SEMI,
  [anon_sym_LBRACKL_SEMI] = anon_sym_LBRACKL_SEMI,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_string_single_quoted] = sym_string_single_quoted,
  [sym_string_double_quoted] = sym_string_double_quoted,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym__boolean] = sym__boolean,
  [sym_byte] = sym_byte,
  [sym_byte_array] = sym_byte_array,
  [sym_int_array] = sym_int_array,
  [sym_long_array] = sym_long_array,
  [sym_string] = sym_string,
  [aux_sym__string_double_quoted] = aux_sym__string_double_quoted,
  [aux_sym__string_single_quoted] = aux_sym__string_single_quoted,
  [sym_list] = sym_list,
  [sym_component] = sym_component,
  [sym_pair] = sym_pair,
  [aux_sym_byte_array_repeat1] = aux_sym_byte_array_repeat1,
  [aux_sym_int_array_repeat1] = aux_sym_int_array_repeat1,
  [aux_sym_long_array_repeat1] = aux_sym_long_array_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_component_repeat1] = aux_sym_component_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_byte_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_short] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_long] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_double] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACKB_SEMI] = {
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
  [anon_sym_LBRACKI_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKL_SEMI] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_single_quoted] = {
    .visible = true,
    .named = true,
  },
  [sym_string_double_quoted] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean] = {
    .visible = false,
    .named = true,
  },
  [sym_byte] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_array] = {
    .visible = true,
    .named = true,
  },
  [sym_int_array] = {
    .visible = true,
    .named = true,
  },
  [sym_long_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_double_quoted] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_single_quoted] = {
    .visible = false,
    .named = false,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_byte_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_long_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
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
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      ADVANCE_MAP(
        '"', 35,
        '\'', 36,
        ',', 21,
        '-', 33,
        ':', 45,
        '[', 42,
        '\\', 9,
        ']', 22,
        'f', 25,
        't', 29,
        '{', 43,
        '}', 44,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '}') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(24);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 41,
        '/', 41,
        '\\', 41,
        'b', 41,
        'f', 41,
        'n', 41,
        'r', 41,
        't', 41,
        'u', 41,
      );
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      ADVANCE_MAP(
        '"', 35,
        '\'', 36,
        ',', 21,
        '-', 33,
        ':', 45,
        '[', 42,
        ']', 22,
        'f', 25,
        't', 29,
        '{', 43,
        '}', 44,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_byte_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_short);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_int);
      ADVANCE_MAP(
        '.', 32,
        'B', 14,
        'b', 14,
        'D', 19,
        'd', 19,
        'F', 18,
        'f', 18,
        'L', 17,
        'l', 17,
        'S', 15,
        's', 15,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_long);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACKB_SEMI);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACKI_SEMI);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACKL_SEMI);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(26);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_string_single_quoted);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_string_single_quoted);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_string_double_quoted);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_string_double_quoted);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(6);
      if (lookahead == 'I') ADVANCE(7);
      if (lookahead == 'L') ADVANCE(8);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
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
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
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
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_byte_token1] = ACTIONS(1),
    [sym_short] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_long] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_LBRACKB_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKI_SEMI] = ACTIONS(1),
    [anon_sym_LBRACKL_SEMI] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(60),
    [sym__value] = STATE(58),
    [sym__boolean] = STATE(19),
    [sym_byte] = STATE(58),
    [sym_byte_array] = STATE(58),
    [sym_int_array] = STATE(58),
    [sym_long_array] = STATE(58),
    [sym_string] = STATE(58),
    [sym_list] = STATE(58),
    [sym_component] = STATE(58),
    [anon_sym_true] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(3),
    [aux_sym_byte_token1] = ACTIONS(3),
    [sym_short] = ACTIONS(5),
    [sym_int] = ACTIONS(5),
    [sym_long] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [sym_double] = ACTIONS(5),
    [anon_sym_LBRACKB_SEMI] = ACTIONS(7),
    [anon_sym_LBRACKI_SEMI] = ACTIONS(9),
    [anon_sym_LBRACKL_SEMI] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [2] = {
    [sym__value] = STATE(43),
    [sym__boolean] = STATE(19),
    [sym_byte] = STATE(43),
    [sym_byte_array] = STATE(43),
    [sym_int_array] = STATE(43),
    [sym_long_array] = STATE(43),
    [sym_string] = STATE(43),
    [sym_list] = STATE(43),
    [sym_component] = STATE(43),
    [anon_sym_true] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(3),
    [aux_sym_byte_token1] = ACTIONS(3),
    [sym_short] = ACTIONS(23),
    [sym_int] = ACTIONS(23),
    [sym_long] = ACTIONS(23),
    [sym_float] = ACTIONS(23),
    [sym_double] = ACTIONS(23),
    [anon_sym_LBRACKB_SEMI] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKI_SEMI] = ACTIONS(9),
    [anon_sym_LBRACKL_SEMI] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [3] = {
    [sym__value] = STATE(52),
    [sym__boolean] = STATE(19),
    [sym_byte] = STATE(52),
    [sym_byte_array] = STATE(52),
    [sym_int_array] = STATE(52),
    [sym_long_array] = STATE(52),
    [sym_string] = STATE(52),
    [sym_list] = STATE(52),
    [sym_component] = STATE(52),
    [anon_sym_true] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(3),
    [aux_sym_byte_token1] = ACTIONS(3),
    [sym_short] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_long] = ACTIONS(27),
    [sym_float] = ACTIONS(27),
    [sym_double] = ACTIONS(27),
    [anon_sym_LBRACKB_SEMI] = ACTIONS(7),
    [anon_sym_LBRACKI_SEMI] = ACTIONS(9),
    [anon_sym_LBRACKL_SEMI] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [4] = {
    [sym__value] = STATE(54),
    [sym__boolean] = STATE(19),
    [sym_byte] = STATE(54),
    [sym_byte_array] = STATE(54),
    [sym_int_array] = STATE(54),
    [sym_long_array] = STATE(54),
    [sym_string] = STATE(54),
    [sym_list] = STATE(54),
    [sym_component] = STATE(54),
    [anon_sym_true] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(3),
    [aux_sym_byte_token1] = ACTIONS(3),
    [sym_short] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_long] = ACTIONS(29),
    [sym_float] = ACTIONS(29),
    [sym_double] = ACTIONS(29),
    [anon_sym_LBRACKB_SEMI] = ACTIONS(7),
    [anon_sym_LBRACKI_SEMI] = ACTIONS(9),
    [anon_sym_LBRACKL_SEMI] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym__boolean,
    STATE(46), 1,
      sym_byte,
    ACTIONS(31), 3,
      anon_sym_true,
      anon_sym_false,
      aux_sym_byte_token1,
  [15] = 6,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_string_token1,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_pair,
    STATE(57), 1,
      sym_string,
  [34] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_string_token1,
    STATE(55), 1,
      sym_pair,
    STATE(57), 1,
      sym_string,
  [50] = 1,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [58] = 3,
    STATE(19), 1,
      sym__boolean,
    STATE(50), 1,
      sym_byte,
    ACTIONS(31), 3,
      anon_sym_true,
      anon_sym_false,
      aux_sym_byte_token1,
  [70] = 1,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [78] = 1,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [86] = 1,
    ACTIONS(45), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [93] = 1,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [100] = 1,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [107] = 1,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [114] = 1,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [121] = 3,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym__string_double_quoted,
    ACTIONS(57), 2,
      sym_string_double_quoted,
      sym_escape_sequence,
  [132] = 1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [139] = 1,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [146] = 3,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym__string_double_quoted,
    ACTIONS(66), 2,
      sym_string_double_quoted,
      sym_escape_sequence,
  [157] = 3,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    STATE(30), 1,
      aux_sym__string_single_quoted,
    ACTIONS(68), 2,
      sym_string_single_quoted,
      sym_escape_sequence,
  [168] = 1,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [175] = 1,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [182] = 1,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [189] = 1,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [196] = 3,
    ACTIONS(78), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      aux_sym__string_single_quoted,
    ACTIONS(80), 2,
      sym_string_single_quoted,
      sym_escape_sequence,
  [207] = 3,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym__string_double_quoted,
    ACTIONS(82), 2,
      sym_string_double_quoted,
      sym_escape_sequence,
  [218] = 1,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [225] = 1,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [232] = 3,
    ACTIONS(88), 1,
      anon_sym_SQUOTE,
    STATE(30), 1,
      aux_sym__string_single_quoted,
    ACTIONS(90), 2,
      sym_string_single_quoted,
      sym_escape_sequence,
  [243] = 1,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [250] = 1,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [257] = 1,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [264] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_byte_array_repeat1,
  [274] = 3,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      aux_sym_int_array_repeat1,
  [284] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_component_repeat1,
  [294] = 3,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_int_array_repeat1,
  [304] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      aux_sym_list_repeat1,
  [314] = 3,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym_long_array_repeat1,
  [324] = 3,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_component_repeat1,
  [334] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      aux_sym_list_repeat1,
  [344] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_int_array_repeat1,
  [354] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      aux_sym_list_repeat1,
  [364] = 3,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_long_array_repeat1,
  [374] = 3,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_component_repeat1,
  [384] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_byte_array_repeat1,
  [394] = 3,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym_long_array_repeat1,
  [404] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_byte_array_repeat1,
  [414] = 1,
    ACTIONS(135), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [419] = 1,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [424] = 1,
    ACTIONS(122), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [429] = 1,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [434] = 2,
    ACTIONS(154), 1,
      sym_int,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
  [441] = 1,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [446] = 1,
    ACTIONS(110), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [451] = 2,
    ACTIONS(160), 1,
      sym_long,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
  [458] = 1,
    ACTIONS(164), 1,
      anon_sym_COLON,
  [462] = 1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
  [466] = 1,
    ACTIONS(168), 1,
      sym_int,
  [470] = 1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
  [474] = 1,
    ACTIONS(172), 1,
      sym_long,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 15,
  [SMALL_STATE(7)] = 34,
  [SMALL_STATE(8)] = 50,
  [SMALL_STATE(9)] = 58,
  [SMALL_STATE(10)] = 70,
  [SMALL_STATE(11)] = 78,
  [SMALL_STATE(12)] = 86,
  [SMALL_STATE(13)] = 93,
  [SMALL_STATE(14)] = 100,
  [SMALL_STATE(15)] = 107,
  [SMALL_STATE(16)] = 114,
  [SMALL_STATE(17)] = 121,
  [SMALL_STATE(18)] = 132,
  [SMALL_STATE(19)] = 139,
  [SMALL_STATE(20)] = 146,
  [SMALL_STATE(21)] = 157,
  [SMALL_STATE(22)] = 168,
  [SMALL_STATE(23)] = 175,
  [SMALL_STATE(24)] = 182,
  [SMALL_STATE(25)] = 189,
  [SMALL_STATE(26)] = 196,
  [SMALL_STATE(27)] = 207,
  [SMALL_STATE(28)] = 218,
  [SMALL_STATE(29)] = 225,
  [SMALL_STATE(30)] = 232,
  [SMALL_STATE(31)] = 243,
  [SMALL_STATE(32)] = 250,
  [SMALL_STATE(33)] = 257,
  [SMALL_STATE(34)] = 264,
  [SMALL_STATE(35)] = 274,
  [SMALL_STATE(36)] = 284,
  [SMALL_STATE(37)] = 294,
  [SMALL_STATE(38)] = 304,
  [SMALL_STATE(39)] = 314,
  [SMALL_STATE(40)] = 324,
  [SMALL_STATE(41)] = 334,
  [SMALL_STATE(42)] = 344,
  [SMALL_STATE(43)] = 354,
  [SMALL_STATE(44)] = 364,
  [SMALL_STATE(45)] = 374,
  [SMALL_STATE(46)] = 384,
  [SMALL_STATE(47)] = 394,
  [SMALL_STATE(48)] = 404,
  [SMALL_STATE(49)] = 414,
  [SMALL_STATE(50)] = 419,
  [SMALL_STATE(51)] = 424,
  [SMALL_STATE(52)] = 429,
  [SMALL_STATE(53)] = 434,
  [SMALL_STATE(54)] = 441,
  [SMALL_STATE(55)] = 446,
  [SMALL_STATE(56)] = 451,
  [SMALL_STATE(57)] = 458,
  [SMALL_STATE(58)] = 462,
  [SMALL_STATE(59)] = 466,
  [SMALL_STATE(60)] = 470,
  [SMALL_STATE(61)] = 474,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_array, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_array, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 4, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_double_quoted, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_double_quoted, 2, 0, 0), SHIFT_REPEAT(17),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_array, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_array, 4, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_single_quoted, 2, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_single_quoted, 2, 0, 0), SHIFT_REPEAT(30),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_array, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_array, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_long_array_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_long_array_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_int_array_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_int_array_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
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

TS_PUBLIC const TSLanguage *tree_sitter_snbt(void) {
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
