#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 34
#define SYMBOL_COUNT 154
#define ALIAS_COUNT 0
#define TOKEN_COUNT 109
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  sym__ws_sep = 2,
  aux_sym_file_control_command_token1 = 3,
  aux_sym_file_control_command_token2 = 4,
  aux_sym_section_control_command_token1 = 5,
  anon_sym_DOTinclude = 6,
  anon_sym_DOTexport = 7,
  anon_sym_DOTimport = 8,
  anon_sym_DOTsegment = 9,
  anon_sym_DOTsection = 10,
  anon_sym_word = 11,
  anon_sym_DOTbyte = 12,
  anon_sym_DOTaddr = 13,
  anon_sym_DOTproc = 14,
  anon_sym_DOTendproc = 15,
  anon_sym_EQ = 16,
  anon_sym_COLON = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  sym_num_literal = 20,
  sym_char_literal = 21,
  anon_sym_PLUS = 22,
  anon_sym_DASH = 23,
  anon_sym_STAR = 24,
  anon_sym_SLASH = 25,
  anon_sym_LT_LT = 26,
  anon_sym_GT_GT = 27,
  anon_sym_AMP = 28,
  anon_sym_PIPE = 29,
  aux_sym_unary_expr_token1 = 30,
  anon_sym_POUND = 31,
  anon_sym_LPAREN2 = 32,
  anon_sym_COMMA = 33,
  anon_sym_x = 34,
  anon_sym_y = 35,
  aux_sym__implied_opcode_token1 = 36,
  aux_sym__implied_opcode_token2 = 37,
  aux_sym__implied_opcode_token3 = 38,
  aux_sym__implied_opcode_token4 = 39,
  aux_sym__implied_opcode_token5 = 40,
  aux_sym__implied_opcode_token6 = 41,
  aux_sym__implied_opcode_token7 = 42,
  aux_sym__implied_opcode_token8 = 43,
  aux_sym__implied_opcode_token9 = 44,
  aux_sym__implied_opcode_token10 = 45,
  aux_sym__implied_opcode_token11 = 46,
  aux_sym__implied_opcode_token12 = 47,
  aux_sym__implied_opcode_token13 = 48,
  aux_sym__implied_opcode_token14 = 49,
  aux_sym__implied_opcode_token15 = 50,
  aux_sym__implied_opcode_token16 = 51,
  aux_sym__implied_opcode_token17 = 52,
  aux_sym__implied_opcode_token18 = 53,
  aux_sym__implied_opcode_token19 = 54,
  aux_sym__implied_opcode_token20 = 55,
  aux_sym__implied_opcode_token21 = 56,
  aux_sym__implied_opcode_token22 = 57,
  aux_sym__implied_opcode_token23 = 58,
  aux_sym__implied_opcode_token24 = 59,
  aux_sym__implied_opcode_token25 = 60,
  aux_sym__implied_opcode_token26 = 61,
  aux_sym__implied_opcode_token27 = 62,
  aux_sym__implied_opcode_token28 = 63,
  aux_sym__implied_opcode_token29 = 64,
  aux_sym__implied_opcode_token30 = 65,
  aux_sym__implied_opcode_token31 = 66,
  aux_sym__implied_opcode_token32 = 67,
  aux_sym__implied_opcode_token33 = 68,
  aux_sym__implied_opcode_token34 = 69,
  aux_sym__implied_opcode_token35 = 70,
  aux_sym__implied_opcode_token36 = 71,
  aux_sym__implied_opcode_token37 = 72,
  aux_sym__relative_opcode_token1 = 73,
  aux_sym__relative_opcode_token2 = 74,
  aux_sym__relative_opcode_token3 = 75,
  aux_sym__relative_opcode_token4 = 76,
  aux_sym__relative_opcode_token5 = 77,
  aux_sym__relative_opcode_token6 = 78,
  aux_sym__relative_opcode_token7 = 79,
  aux_sym__relative_opcode_token8 = 80,
  aux_sym__relative_opcode_token9 = 81,
  aux_sym__immediate_opcode_token1 = 82,
  aux_sym__immediate_opcode_token2 = 83,
  aux_sym__immediate_opcode_token3 = 84,
  aux_sym__immediate_opcode_token4 = 85,
  aux_sym__immediate_opcode_token5 = 86,
  aux_sym__immediate_opcode_token6 = 87,
  aux_sym__immediate_opcode_token7 = 88,
  aux_sym__immediate_opcode_token8 = 89,
  aux_sym__immediate_opcode_token9 = 90,
  aux_sym__immediate_opcode_token10 = 91,
  aux_sym__immediate_opcode_token11 = 92,
  aux_sym__immediate_opcode_token12 = 93,
  aux_sym__absolute_opcode_token1 = 94,
  aux_sym__absolute_opcode_token2 = 95,
  aux_sym__absolute_opcode_token3 = 96,
  aux_sym__absolute_opcode_token4 = 97,
  aux_sym__absolute_opcode_token5 = 98,
  aux_sym__absolute_opcode_token6 = 99,
  aux_sym__absolute_opcode_token7 = 100,
  aux_sym__absolute_opcode_token8 = 101,
  anon_sym_DQUOTE = 102,
  sym_string_content = 103,
  sym_escape_sequence = 104,
  sym_comma = 105,
  sym_cheap_local_label = 106,
  sym_local_label = 107,
  sym_global_label = 108,
  sym_source_file = 109,
  sym__statement = 110,
  sym__control_command = 111,
  sym_file_control_command = 112,
  sym_export_control_command = 113,
  sym_import_control_command = 114,
  sym_segment_control_command = 115,
  sym_section_control_command = 116,
  sym_byte_control_command = 117,
  sym_address_control_command = 118,
  sym_proc_control_command = 119,
  sym__inc_name = 120,
  sym__export_name = 121,
  sym__import_name = 122,
  sym__segment_name = 123,
  sym__sec_name = 124,
  sym__word_name = 125,
  sym__byte_name = 126,
  sym__address_name = 127,
  sym__proc_name = 128,
  sym__endproc_name = 129,
  sym_assignment = 130,
  sym_label = 131,
  aux_sym__byte_list = 132,
  sym__byte_literal = 133,
  sym__expr = 134,
  sym__identifier = 135,
  sym_binary_expr = 136,
  sym_unary_expr = 137,
  sym__operation = 138,
  sym_implied = 139,
  sym_relative = 140,
  sym_immediate = 141,
  sym_absolute = 142,
  sym_indirect = 143,
  sym__reg_x = 144,
  sym__reg_y = 145,
  sym__implied_opcode = 146,
  sym__relative_opcode = 147,
  sym__immediate_opcode = 148,
  sym__absolute_opcode = 149,
  sym__indirect_opcode = 150,
  sym_string = 151,
  aux_sym_source_file_repeat1 = 152,
  aux_sym_string_repeat1 = 153,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym__ws_sep] = "_ws_sep",
  [aux_sym_file_control_command_token1] = "file_name",
  [aux_sym_file_control_command_token2] = "file_name",
  [aux_sym_section_control_command_token1] = "section_name",
  [anon_sym_DOTinclude] = "control_command",
  [anon_sym_DOTexport] = "control_command",
  [anon_sym_DOTimport] = "control_command",
  [anon_sym_DOTsegment] = "control_command",
  [anon_sym_DOTsection] = "control_command",
  [anon_sym_word] = "control_command",
  [anon_sym_DOTbyte] = "control_command",
  [anon_sym_DOTaddr] = "control_command",
  [anon_sym_DOTproc] = "control_command",
  [anon_sym_DOTendproc] = "control_command",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_num_literal] = "num_literal",
  [sym_char_literal] = "char_literal",
  [anon_sym_PLUS] = "operator",
  [anon_sym_DASH] = "operator",
  [anon_sym_STAR] = "operator",
  [anon_sym_SLASH] = "operator",
  [anon_sym_LT_LT] = "operator",
  [anon_sym_GT_GT] = "operator",
  [anon_sym_AMP] = "operator",
  [anon_sym_PIPE] = "operator",
  [aux_sym_unary_expr_token1] = "operator",
  [anon_sym_POUND] = "#",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_x] = "register",
  [anon_sym_y] = "register",
  [aux_sym__implied_opcode_token1] = "_implied_opcode_token1",
  [aux_sym__implied_opcode_token2] = "_implied_opcode_token2",
  [aux_sym__implied_opcode_token3] = "_implied_opcode_token3",
  [aux_sym__implied_opcode_token4] = "_implied_opcode_token4",
  [aux_sym__implied_opcode_token5] = "_implied_opcode_token5",
  [aux_sym__implied_opcode_token6] = "_implied_opcode_token6",
  [aux_sym__implied_opcode_token7] = "_implied_opcode_token7",
  [aux_sym__implied_opcode_token8] = "_implied_opcode_token8",
  [aux_sym__implied_opcode_token9] = "_implied_opcode_token9",
  [aux_sym__implied_opcode_token10] = "_implied_opcode_token10",
  [aux_sym__implied_opcode_token11] = "_implied_opcode_token11",
  [aux_sym__implied_opcode_token12] = "_implied_opcode_token12",
  [aux_sym__implied_opcode_token13] = "_implied_opcode_token13",
  [aux_sym__implied_opcode_token14] = "_implied_opcode_token14",
  [aux_sym__implied_opcode_token15] = "_implied_opcode_token15",
  [aux_sym__implied_opcode_token16] = "_implied_opcode_token16",
  [aux_sym__implied_opcode_token17] = "_implied_opcode_token17",
  [aux_sym__implied_opcode_token18] = "_implied_opcode_token18",
  [aux_sym__implied_opcode_token19] = "_implied_opcode_token19",
  [aux_sym__implied_opcode_token20] = "_implied_opcode_token20",
  [aux_sym__implied_opcode_token21] = "_implied_opcode_token21",
  [aux_sym__implied_opcode_token22] = "_implied_opcode_token22",
  [aux_sym__implied_opcode_token23] = "_implied_opcode_token23",
  [aux_sym__implied_opcode_token24] = "_implied_opcode_token24",
  [aux_sym__implied_opcode_token25] = "_implied_opcode_token25",
  [aux_sym__implied_opcode_token26] = "_implied_opcode_token26",
  [aux_sym__implied_opcode_token27] = "_implied_opcode_token27",
  [aux_sym__implied_opcode_token28] = "_implied_opcode_token28",
  [aux_sym__implied_opcode_token29] = "_implied_opcode_token29",
  [aux_sym__implied_opcode_token30] = "_implied_opcode_token30",
  [aux_sym__implied_opcode_token31] = "_implied_opcode_token31",
  [aux_sym__implied_opcode_token32] = "_implied_opcode_token32",
  [aux_sym__implied_opcode_token33] = "_implied_opcode_token33",
  [aux_sym__implied_opcode_token34] = "_implied_opcode_token34",
  [aux_sym__implied_opcode_token35] = "_implied_opcode_token35",
  [aux_sym__implied_opcode_token36] = "_implied_opcode_token36",
  [aux_sym__implied_opcode_token37] = "_implied_opcode_token37",
  [aux_sym__relative_opcode_token1] = "_relative_opcode_token1",
  [aux_sym__relative_opcode_token2] = "_relative_opcode_token2",
  [aux_sym__relative_opcode_token3] = "_relative_opcode_token3",
  [aux_sym__relative_opcode_token4] = "_relative_opcode_token4",
  [aux_sym__relative_opcode_token5] = "_relative_opcode_token5",
  [aux_sym__relative_opcode_token6] = "_relative_opcode_token6",
  [aux_sym__relative_opcode_token7] = "_relative_opcode_token7",
  [aux_sym__relative_opcode_token8] = "_relative_opcode_token8",
  [aux_sym__relative_opcode_token9] = "_relative_opcode_token9",
  [aux_sym__immediate_opcode_token1] = "_immediate_opcode_token1",
  [aux_sym__immediate_opcode_token2] = "_immediate_opcode_token2",
  [aux_sym__immediate_opcode_token3] = "_immediate_opcode_token3",
  [aux_sym__immediate_opcode_token4] = "_immediate_opcode_token4",
  [aux_sym__immediate_opcode_token5] = "_immediate_opcode_token5",
  [aux_sym__immediate_opcode_token6] = "_immediate_opcode_token6",
  [aux_sym__immediate_opcode_token7] = "_immediate_opcode_token7",
  [aux_sym__immediate_opcode_token8] = "_immediate_opcode_token8",
  [aux_sym__immediate_opcode_token9] = "_immediate_opcode_token9",
  [aux_sym__immediate_opcode_token10] = "_immediate_opcode_token10",
  [aux_sym__immediate_opcode_token11] = "_immediate_opcode_token11",
  [aux_sym__immediate_opcode_token12] = "_immediate_opcode_token12",
  [aux_sym__absolute_opcode_token1] = "_absolute_opcode_token1",
  [aux_sym__absolute_opcode_token2] = "_absolute_opcode_token2",
  [aux_sym__absolute_opcode_token3] = "_absolute_opcode_token3",
  [aux_sym__absolute_opcode_token4] = "_absolute_opcode_token4",
  [aux_sym__absolute_opcode_token5] = "_absolute_opcode_token5",
  [aux_sym__absolute_opcode_token6] = "_absolute_opcode_token6",
  [aux_sym__absolute_opcode_token7] = "_absolute_opcode_token7",
  [aux_sym__absolute_opcode_token8] = "_absolute_opcode_token8",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comma] = "comma",
  [sym_cheap_local_label] = "cheap_local_label",
  [sym_local_label] = "local_label",
  [sym_global_label] = "global_label",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__control_command] = "_control_command",
  [sym_file_control_command] = "file_control_command",
  [sym_export_control_command] = "export_control_command",
  [sym_import_control_command] = "import_control_command",
  [sym_segment_control_command] = "segment_control_command",
  [sym_section_control_command] = "section_control_command",
  [sym_byte_control_command] = "byte_control_command",
  [sym_address_control_command] = "address_control_command",
  [sym_proc_control_command] = "proc_control_command",
  [sym__inc_name] = "_inc_name",
  [sym__export_name] = "_export_name",
  [sym__import_name] = "_import_name",
  [sym__segment_name] = "_segment_name",
  [sym__sec_name] = "_sec_name",
  [sym__word_name] = "_word_name",
  [sym__byte_name] = "_byte_name",
  [sym__address_name] = "_address_name",
  [sym__proc_name] = "_proc_name",
  [sym__endproc_name] = "_endproc_name",
  [sym_assignment] = "assignment",
  [sym_label] = "label",
  [aux_sym__byte_list] = "_byte_list",
  [sym__byte_literal] = "_byte_literal",
  [sym__expr] = "_expr",
  [sym__identifier] = "_identifier",
  [sym_binary_expr] = "binary_expr",
  [sym_unary_expr] = "unary_expr",
  [sym__operation] = "_operation",
  [sym_implied] = "implied",
  [sym_relative] = "relative",
  [sym_immediate] = "immediate",
  [sym_absolute] = "absolute",
  [sym_indirect] = "indirect",
  [sym__reg_x] = "_reg_x",
  [sym__reg_y] = "_reg_y",
  [sym__implied_opcode] = "opcode",
  [sym__relative_opcode] = "opcode",
  [sym__immediate_opcode] = "opcode",
  [sym__absolute_opcode] = "opcode",
  [sym__indirect_opcode] = "opcode",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym__ws_sep] = sym__ws_sep,
  [aux_sym_file_control_command_token1] = aux_sym_file_control_command_token1,
  [aux_sym_file_control_command_token2] = aux_sym_file_control_command_token1,
  [aux_sym_section_control_command_token1] = aux_sym_section_control_command_token1,
  [anon_sym_DOTinclude] = anon_sym_DOTinclude,
  [anon_sym_DOTexport] = anon_sym_DOTinclude,
  [anon_sym_DOTimport] = anon_sym_DOTinclude,
  [anon_sym_DOTsegment] = anon_sym_DOTinclude,
  [anon_sym_DOTsection] = anon_sym_DOTinclude,
  [anon_sym_word] = anon_sym_DOTinclude,
  [anon_sym_DOTbyte] = anon_sym_DOTinclude,
  [anon_sym_DOTaddr] = anon_sym_DOTinclude,
  [anon_sym_DOTproc] = anon_sym_DOTinclude,
  [anon_sym_DOTendproc] = anon_sym_DOTinclude,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_num_literal] = sym_num_literal,
  [sym_char_literal] = sym_char_literal,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_PLUS,
  [anon_sym_LT_LT] = anon_sym_PLUS,
  [anon_sym_GT_GT] = anon_sym_PLUS,
  [anon_sym_AMP] = anon_sym_PLUS,
  [anon_sym_PIPE] = anon_sym_PLUS,
  [aux_sym_unary_expr_token1] = anon_sym_PLUS,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_y] = anon_sym_x,
  [aux_sym__implied_opcode_token1] = aux_sym__implied_opcode_token1,
  [aux_sym__implied_opcode_token2] = aux_sym__implied_opcode_token2,
  [aux_sym__implied_opcode_token3] = aux_sym__implied_opcode_token3,
  [aux_sym__implied_opcode_token4] = aux_sym__implied_opcode_token4,
  [aux_sym__implied_opcode_token5] = aux_sym__implied_opcode_token5,
  [aux_sym__implied_opcode_token6] = aux_sym__implied_opcode_token6,
  [aux_sym__implied_opcode_token7] = aux_sym__implied_opcode_token7,
  [aux_sym__implied_opcode_token8] = aux_sym__implied_opcode_token8,
  [aux_sym__implied_opcode_token9] = aux_sym__implied_opcode_token9,
  [aux_sym__implied_opcode_token10] = aux_sym__implied_opcode_token10,
  [aux_sym__implied_opcode_token11] = aux_sym__implied_opcode_token11,
  [aux_sym__implied_opcode_token12] = aux_sym__implied_opcode_token12,
  [aux_sym__implied_opcode_token13] = aux_sym__implied_opcode_token13,
  [aux_sym__implied_opcode_token14] = aux_sym__implied_opcode_token14,
  [aux_sym__implied_opcode_token15] = aux_sym__implied_opcode_token15,
  [aux_sym__implied_opcode_token16] = aux_sym__implied_opcode_token16,
  [aux_sym__implied_opcode_token17] = aux_sym__implied_opcode_token17,
  [aux_sym__implied_opcode_token18] = aux_sym__implied_opcode_token18,
  [aux_sym__implied_opcode_token19] = aux_sym__implied_opcode_token19,
  [aux_sym__implied_opcode_token20] = aux_sym__implied_opcode_token20,
  [aux_sym__implied_opcode_token21] = aux_sym__implied_opcode_token21,
  [aux_sym__implied_opcode_token22] = aux_sym__implied_opcode_token22,
  [aux_sym__implied_opcode_token23] = aux_sym__implied_opcode_token23,
  [aux_sym__implied_opcode_token24] = aux_sym__implied_opcode_token24,
  [aux_sym__implied_opcode_token25] = aux_sym__implied_opcode_token25,
  [aux_sym__implied_opcode_token26] = aux_sym__implied_opcode_token26,
  [aux_sym__implied_opcode_token27] = aux_sym__implied_opcode_token27,
  [aux_sym__implied_opcode_token28] = aux_sym__implied_opcode_token28,
  [aux_sym__implied_opcode_token29] = aux_sym__implied_opcode_token29,
  [aux_sym__implied_opcode_token30] = aux_sym__implied_opcode_token30,
  [aux_sym__implied_opcode_token31] = aux_sym__implied_opcode_token31,
  [aux_sym__implied_opcode_token32] = aux_sym__implied_opcode_token32,
  [aux_sym__implied_opcode_token33] = aux_sym__implied_opcode_token33,
  [aux_sym__implied_opcode_token34] = aux_sym__implied_opcode_token34,
  [aux_sym__implied_opcode_token35] = aux_sym__implied_opcode_token35,
  [aux_sym__implied_opcode_token36] = aux_sym__implied_opcode_token36,
  [aux_sym__implied_opcode_token37] = aux_sym__implied_opcode_token37,
  [aux_sym__relative_opcode_token1] = aux_sym__relative_opcode_token1,
  [aux_sym__relative_opcode_token2] = aux_sym__relative_opcode_token2,
  [aux_sym__relative_opcode_token3] = aux_sym__relative_opcode_token3,
  [aux_sym__relative_opcode_token4] = aux_sym__relative_opcode_token4,
  [aux_sym__relative_opcode_token5] = aux_sym__relative_opcode_token5,
  [aux_sym__relative_opcode_token6] = aux_sym__relative_opcode_token6,
  [aux_sym__relative_opcode_token7] = aux_sym__relative_opcode_token7,
  [aux_sym__relative_opcode_token8] = aux_sym__relative_opcode_token8,
  [aux_sym__relative_opcode_token9] = aux_sym__relative_opcode_token9,
  [aux_sym__immediate_opcode_token1] = aux_sym__immediate_opcode_token1,
  [aux_sym__immediate_opcode_token2] = aux_sym__immediate_opcode_token2,
  [aux_sym__immediate_opcode_token3] = aux_sym__immediate_opcode_token3,
  [aux_sym__immediate_opcode_token4] = aux_sym__immediate_opcode_token4,
  [aux_sym__immediate_opcode_token5] = aux_sym__immediate_opcode_token5,
  [aux_sym__immediate_opcode_token6] = aux_sym__immediate_opcode_token6,
  [aux_sym__immediate_opcode_token7] = aux_sym__immediate_opcode_token7,
  [aux_sym__immediate_opcode_token8] = aux_sym__immediate_opcode_token8,
  [aux_sym__immediate_opcode_token9] = aux_sym__immediate_opcode_token9,
  [aux_sym__immediate_opcode_token10] = aux_sym__immediate_opcode_token10,
  [aux_sym__immediate_opcode_token11] = aux_sym__immediate_opcode_token11,
  [aux_sym__immediate_opcode_token12] = aux_sym__immediate_opcode_token12,
  [aux_sym__absolute_opcode_token1] = aux_sym__absolute_opcode_token1,
  [aux_sym__absolute_opcode_token2] = aux_sym__absolute_opcode_token2,
  [aux_sym__absolute_opcode_token3] = aux_sym__absolute_opcode_token3,
  [aux_sym__absolute_opcode_token4] = aux_sym__absolute_opcode_token4,
  [aux_sym__absolute_opcode_token5] = aux_sym__absolute_opcode_token5,
  [aux_sym__absolute_opcode_token6] = aux_sym__absolute_opcode_token6,
  [aux_sym__absolute_opcode_token7] = aux_sym__absolute_opcode_token7,
  [aux_sym__absolute_opcode_token8] = aux_sym__absolute_opcode_token8,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comma] = sym_comma,
  [sym_cheap_local_label] = sym_cheap_local_label,
  [sym_local_label] = sym_local_label,
  [sym_global_label] = sym_global_label,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__control_command] = sym__control_command,
  [sym_file_control_command] = sym_file_control_command,
  [sym_export_control_command] = sym_export_control_command,
  [sym_import_control_command] = sym_import_control_command,
  [sym_segment_control_command] = sym_segment_control_command,
  [sym_section_control_command] = sym_section_control_command,
  [sym_byte_control_command] = sym_byte_control_command,
  [sym_address_control_command] = sym_address_control_command,
  [sym_proc_control_command] = sym_proc_control_command,
  [sym__inc_name] = sym__inc_name,
  [sym__export_name] = sym__export_name,
  [sym__import_name] = sym__import_name,
  [sym__segment_name] = sym__segment_name,
  [sym__sec_name] = sym__sec_name,
  [sym__word_name] = sym__word_name,
  [sym__byte_name] = sym__byte_name,
  [sym__address_name] = sym__address_name,
  [sym__proc_name] = sym__proc_name,
  [sym__endproc_name] = sym__endproc_name,
  [sym_assignment] = sym_assignment,
  [sym_label] = sym_label,
  [aux_sym__byte_list] = aux_sym__byte_list,
  [sym__byte_literal] = sym__byte_literal,
  [sym__expr] = sym__expr,
  [sym__identifier] = sym__identifier,
  [sym_binary_expr] = sym_binary_expr,
  [sym_unary_expr] = sym_unary_expr,
  [sym__operation] = sym__operation,
  [sym_implied] = sym_implied,
  [sym_relative] = sym_relative,
  [sym_immediate] = sym_immediate,
  [sym_absolute] = sym_absolute,
  [sym_indirect] = sym_indirect,
  [sym__reg_x] = sym__reg_x,
  [sym__reg_y] = sym__reg_y,
  [sym__implied_opcode] = sym__implied_opcode,
  [sym__relative_opcode] = sym__implied_opcode,
  [sym__immediate_opcode] = sym__implied_opcode,
  [sym__absolute_opcode] = sym__implied_opcode,
  [sym__indirect_opcode] = sym__implied_opcode,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__ws_sep] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_control_command_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_control_command_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_section_control_command_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTinclude] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTexport] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTimport] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTsegment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTsection] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTbyte] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTaddr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTproc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTendproc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_num_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_unary_expr_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__implied_opcode_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token25] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token26] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token27] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token28] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token29] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token30] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token31] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token32] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token33] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token34] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token35] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token36] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token37] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__relative_opcode_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__relative_opcode_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__relative_opcode_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__relative_opcode_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__relative_opcode_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__relative_opcode_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__relative_opcode_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__relative_opcode_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__relative_opcode_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__absolute_opcode_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__absolute_opcode_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__absolute_opcode_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__absolute_opcode_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__absolute_opcode_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__absolute_opcode_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__absolute_opcode_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__absolute_opcode_token8] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_cheap_local_label] = {
    .visible = true,
    .named = true,
  },
  [sym_local_label] = {
    .visible = true,
    .named = true,
  },
  [sym_global_label] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__control_command] = {
    .visible = false,
    .named = true,
  },
  [sym_file_control_command] = {
    .visible = true,
    .named = true,
  },
  [sym_export_control_command] = {
    .visible = true,
    .named = true,
  },
  [sym_import_control_command] = {
    .visible = true,
    .named = true,
  },
  [sym_segment_control_command] = {
    .visible = true,
    .named = true,
  },
  [sym_section_control_command] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_control_command] = {
    .visible = true,
    .named = true,
  },
  [sym_address_control_command] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_control_command] = {
    .visible = true,
    .named = true,
  },
  [sym__inc_name] = {
    .visible = false,
    .named = true,
  },
  [sym__export_name] = {
    .visible = false,
    .named = true,
  },
  [sym__import_name] = {
    .visible = false,
    .named = true,
  },
  [sym__segment_name] = {
    .visible = false,
    .named = true,
  },
  [sym__sec_name] = {
    .visible = false,
    .named = true,
  },
  [sym__word_name] = {
    .visible = false,
    .named = true,
  },
  [sym__byte_name] = {
    .visible = false,
    .named = true,
  },
  [sym__address_name] = {
    .visible = false,
    .named = true,
  },
  [sym__proc_name] = {
    .visible = false,
    .named = true,
  },
  [sym__endproc_name] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__byte_list] = {
    .visible = false,
    .named = false,
  },
  [sym__byte_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__operation] = {
    .visible = false,
    .named = true,
  },
  [sym_implied] = {
    .visible = true,
    .named = true,
  },
  [sym_relative] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate] = {
    .visible = true,
    .named = true,
  },
  [sym_absolute] = {
    .visible = true,
    .named = true,
  },
  [sym_indirect] = {
    .visible = true,
    .named = true,
  },
  [sym__reg_x] = {
    .visible = false,
    .named = true,
  },
  [sym__reg_y] = {
    .visible = false,
    .named = true,
  },
  [sym__implied_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym__relative_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym__immediate_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym__absolute_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym__indirect_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(99);
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(134);
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == ',') ADVANCE(136);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(137);
      if (lookahead == 'y') ADVANCE(138);
      if (lookahead == '|') ADVANCE(132);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(41);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(31);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(61);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(59);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(77);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(49);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      if (('<' <= lookahead && lookahead <= '>') ||
          lookahead == '~') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(93)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '~') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(124);
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(129);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(130);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'b') ADVANCE(315);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(304);
      if (lookahead == 's') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(318);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(86);
      if (lookahead == 'x') ADVANCE(84);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(191);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(247);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(249);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(193);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(195);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(197);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(199);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(203);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(205);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(207);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(163);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(261);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(263);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(265);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(28);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(22);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(327);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(328);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(325);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 27:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(267);
      END_STATE();
    case 28:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(269);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(169);
      END_STATE();
    case 29:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(335);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(52);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(56);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(213);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(215);
      END_STATE();
    case 34:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(227);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(229);
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(141);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(143);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(145);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(147);
      END_STATE();
    case 36:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(181);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(149);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(151);
      END_STATE();
    case 37:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(183);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(153);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 38:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(253);
      END_STATE();
    case 39:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(157);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(330);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(352);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(340);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(338);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(343);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(319);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 41:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(17);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      END_STATE();
    case 43:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 44:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(329);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(337);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 45:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(320);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 49:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(19);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 50:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(322);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 51:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 52:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 53:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      END_STATE();
    case 54:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(69);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 55:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 56:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 57:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 58:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(332);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(345);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 59:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(346);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 61:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 62:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 63:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 64:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 65:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(344);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 66:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 67:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 68:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 69:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(237);
      END_STATE();
    case 70:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 71:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 72:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(217);
      END_STATE();
    case 73:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 74:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 75:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 76:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 77:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 78:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 79:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(239);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(241);
      END_STATE();
    case 80:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(165);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(167);
      END_STATE();
    case 81:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(121);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 90:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 91:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 92:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(5);
      END_STATE();
    case 93:
      if (eof) ADVANCE(99);
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == ',') ADVANCE(136);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(137);
      if (lookahead == 'y') ADVANCE(138);
      if (lookahead == '|') ADVANCE(132);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(41);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(31);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(61);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(59);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(77);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(49);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      if (('<' <= lookahead && lookahead <= '>') ||
          lookahead == '~') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(93)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 94:
      if (eof) ADVANCE(99);
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == ',') ADVANCE(136);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(12);
      if (lookahead == '|') ADVANCE(132);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(40);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(60);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(50);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(30);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(95)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 95:
      if (eof) ADVANCE(99);
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == ',') ADVANCE(136);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(12);
      if (lookahead == '|') ADVANCE(132);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(40);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(60);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(50);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(30);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(95)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 96:
      if (eof) ADVANCE(99);
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == ',') ADVANCE(275);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(12);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(40);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(60);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(50);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(30);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(96)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 97:
      if (eof) ADVANCE(99);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(12);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(40);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(60);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(50);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(30);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(97)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 98:
      if (eof) ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(97)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(40);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(60);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(50);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(30);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__ws_sep);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_file_control_command_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_file_control_command_token2);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_section_control_command_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOTinclude);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOTexport);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DOTimport);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DOTsegment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOTsection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOTaddr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOTproc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOTendproc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_num_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_num_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_num_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_unary_expr_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token2);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token3);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token4);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token5);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token6);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token7);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token8);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token9);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token11);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token12);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token13);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token14);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token15);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token16);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token17);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token18);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token19);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token20);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token21);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token22);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token24);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token25);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token26);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token27);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token28);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token29);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token30);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token31);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token32);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token33);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token34);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token35);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token36);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token37);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token2);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token3);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token4);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token5);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token6);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token7);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token8);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token9);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token1);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token2);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token3);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token4);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token5);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token6);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token7);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token8);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token9);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token10);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token11);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token12);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token1);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token2);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token3);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token4);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token5);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token6);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token7);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token8);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_cheap_local_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(309);
      if (lookahead == 'g') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'd') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'd') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'd') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'd') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'i') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'l') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'm') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'm') ADVANCE(303);
      if (lookahead == 'n') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead == 'x') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'p') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'p') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'p') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'u') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'y') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_local_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'd') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'r') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(248);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(196);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(198);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(204);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(206);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(164);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(262);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(264);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'w')) ADVANCE(355);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(270);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(214);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(228);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(144);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(150);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(154);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(158);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(210);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(240);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(166);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_global_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 94},
  [2] = {.lex_state = 94},
  [3] = {.lex_state = 94},
  [4] = {.lex_state = 94},
  [5] = {.lex_state = 94},
  [6] = {.lex_state = 94},
  [7] = {.lex_state = 94},
  [8] = {.lex_state = 94},
  [9] = {.lex_state = 94},
  [10] = {.lex_state = 94},
  [11] = {.lex_state = 94},
  [12] = {.lex_state = 94},
  [13] = {.lex_state = 96},
  [14] = {.lex_state = 94},
  [15] = {.lex_state = 94},
  [16] = {.lex_state = 94},
  [17] = {.lex_state = 98},
  [18] = {.lex_state = 94},
  [19] = {.lex_state = 94},
  [20] = {.lex_state = 94},
  [21] = {.lex_state = 94},
  [22] = {.lex_state = 94},
  [23] = {.lex_state = 94},
  [24] = {.lex_state = 94},
  [25] = {.lex_state = 94},
  [26] = {.lex_state = 94},
  [27] = {.lex_state = 94},
  [28] = {.lex_state = 94},
  [29] = {.lex_state = 94},
  [30] = {.lex_state = 94},
  [31] = {.lex_state = 94},
  [32] = {.lex_state = 94},
  [33] = {.lex_state = 94},
  [34] = {.lex_state = 94},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 94},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 98},
  [55] = {.lex_state = 98},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 98},
  [58] = {.lex_state = 98},
  [59] = {.lex_state = 98},
  [60] = {.lex_state = 98},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 98},
  [63] = {.lex_state = 98},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 94},
  [66] = {.lex_state = 98},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 98},
  [71] = {.lex_state = 98},
  [72] = {.lex_state = 98},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 98},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(1),
    [anon_sym_DOTexport] = ACTIONS(1),
    [anon_sym_DOTimport] = ACTIONS(1),
    [anon_sym_DOTsegment] = ACTIONS(1),
    [anon_sym_DOTsection] = ACTIONS(1),
    [anon_sym_word] = ACTIONS(1),
    [anon_sym_DOTbyte] = ACTIONS(1),
    [anon_sym_DOTaddr] = ACTIONS(1),
    [anon_sym_DOTproc] = ACTIONS(1),
    [anon_sym_DOTendproc] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_num_literal] = ACTIONS(1),
    [sym_char_literal] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym_unary_expr_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [aux_sym__implied_opcode_token1] = ACTIONS(1),
    [aux_sym__implied_opcode_token2] = ACTIONS(1),
    [aux_sym__implied_opcode_token3] = ACTIONS(1),
    [aux_sym__implied_opcode_token4] = ACTIONS(1),
    [aux_sym__implied_opcode_token5] = ACTIONS(1),
    [aux_sym__implied_opcode_token6] = ACTIONS(1),
    [aux_sym__implied_opcode_token7] = ACTIONS(1),
    [aux_sym__implied_opcode_token8] = ACTIONS(1),
    [aux_sym__implied_opcode_token9] = ACTIONS(1),
    [aux_sym__implied_opcode_token10] = ACTIONS(1),
    [aux_sym__implied_opcode_token11] = ACTIONS(1),
    [aux_sym__implied_opcode_token12] = ACTIONS(1),
    [aux_sym__implied_opcode_token13] = ACTIONS(1),
    [aux_sym__implied_opcode_token14] = ACTIONS(1),
    [aux_sym__implied_opcode_token15] = ACTIONS(1),
    [aux_sym__implied_opcode_token16] = ACTIONS(1),
    [aux_sym__implied_opcode_token17] = ACTIONS(1),
    [aux_sym__implied_opcode_token18] = ACTIONS(1),
    [aux_sym__implied_opcode_token19] = ACTIONS(1),
    [aux_sym__implied_opcode_token20] = ACTIONS(1),
    [aux_sym__implied_opcode_token21] = ACTIONS(1),
    [aux_sym__implied_opcode_token22] = ACTIONS(1),
    [aux_sym__implied_opcode_token23] = ACTIONS(1),
    [aux_sym__implied_opcode_token24] = ACTIONS(1),
    [aux_sym__implied_opcode_token25] = ACTIONS(1),
    [aux_sym__implied_opcode_token26] = ACTIONS(1),
    [aux_sym__implied_opcode_token27] = ACTIONS(1),
    [aux_sym__implied_opcode_token28] = ACTIONS(1),
    [aux_sym__implied_opcode_token29] = ACTIONS(1),
    [aux_sym__implied_opcode_token30] = ACTIONS(1),
    [aux_sym__implied_opcode_token31] = ACTIONS(1),
    [aux_sym__implied_opcode_token32] = ACTIONS(1),
    [aux_sym__implied_opcode_token33] = ACTIONS(1),
    [aux_sym__implied_opcode_token34] = ACTIONS(1),
    [aux_sym__implied_opcode_token35] = ACTIONS(1),
    [aux_sym__implied_opcode_token36] = ACTIONS(1),
    [aux_sym__implied_opcode_token37] = ACTIONS(1),
    [aux_sym__relative_opcode_token1] = ACTIONS(1),
    [aux_sym__relative_opcode_token2] = ACTIONS(1),
    [aux_sym__relative_opcode_token3] = ACTIONS(1),
    [aux_sym__relative_opcode_token4] = ACTIONS(1),
    [aux_sym__relative_opcode_token5] = ACTIONS(1),
    [aux_sym__relative_opcode_token6] = ACTIONS(1),
    [aux_sym__relative_opcode_token7] = ACTIONS(1),
    [aux_sym__relative_opcode_token8] = ACTIONS(1),
    [aux_sym__relative_opcode_token9] = ACTIONS(1),
    [aux_sym__immediate_opcode_token1] = ACTIONS(1),
    [aux_sym__immediate_opcode_token2] = ACTIONS(1),
    [aux_sym__immediate_opcode_token3] = ACTIONS(1),
    [aux_sym__immediate_opcode_token4] = ACTIONS(1),
    [aux_sym__immediate_opcode_token5] = ACTIONS(1),
    [aux_sym__immediate_opcode_token6] = ACTIONS(1),
    [aux_sym__immediate_opcode_token7] = ACTIONS(1),
    [aux_sym__immediate_opcode_token8] = ACTIONS(1),
    [aux_sym__immediate_opcode_token9] = ACTIONS(1),
    [aux_sym__immediate_opcode_token10] = ACTIONS(1),
    [aux_sym__immediate_opcode_token11] = ACTIONS(1),
    [aux_sym__immediate_opcode_token12] = ACTIONS(1),
    [aux_sym__absolute_opcode_token1] = ACTIONS(1),
    [aux_sym__absolute_opcode_token2] = ACTIONS(1),
    [aux_sym__absolute_opcode_token3] = ACTIONS(1),
    [aux_sym__absolute_opcode_token4] = ACTIONS(1),
    [aux_sym__absolute_opcode_token5] = ACTIONS(1),
    [aux_sym__absolute_opcode_token6] = ACTIONS(1),
    [aux_sym__absolute_opcode_token7] = ACTIONS(1),
    [aux_sym__absolute_opcode_token8] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [sym_cheap_local_label] = ACTIONS(1),
    [sym_local_label] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(67),
    [sym__statement] = STATE(3),
    [sym__control_command] = STATE(3),
    [sym_file_control_command] = STATE(3),
    [sym_export_control_command] = STATE(3),
    [sym_import_control_command] = STATE(3),
    [sym_segment_control_command] = STATE(3),
    [sym_section_control_command] = STATE(3),
    [sym_byte_control_command] = STATE(3),
    [sym_address_control_command] = STATE(3),
    [sym_proc_control_command] = STATE(3),
    [sym__inc_name] = STATE(66),
    [sym__export_name] = STATE(54),
    [sym__import_name] = STATE(62),
    [sym__segment_name] = STATE(51),
    [sym__sec_name] = STATE(57),
    [sym__word_name] = STATE(47),
    [sym__byte_name] = STATE(47),
    [sym__address_name] = STATE(48),
    [sym__proc_name] = STATE(64),
    [sym__endproc_name] = STATE(18),
    [sym_assignment] = STATE(3),
    [sym_label] = STATE(3),
    [sym__operation] = STATE(3),
    [sym_implied] = STATE(3),
    [sym_relative] = STATE(3),
    [sym_immediate] = STATE(3),
    [sym_absolute] = STATE(3),
    [sym_indirect] = STATE(3),
    [sym__implied_opcode] = STATE(21),
    [sym__relative_opcode] = STATE(55),
    [sym__immediate_opcode] = STATE(58),
    [sym__absolute_opcode] = STATE(59),
    [sym__indirect_opcode] = STATE(60),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(7),
    [anon_sym_DOTexport] = ACTIONS(9),
    [anon_sym_DOTimport] = ACTIONS(11),
    [anon_sym_DOTsegment] = ACTIONS(13),
    [anon_sym_DOTsection] = ACTIONS(15),
    [anon_sym_word] = ACTIONS(17),
    [anon_sym_DOTbyte] = ACTIONS(17),
    [anon_sym_DOTaddr] = ACTIONS(19),
    [anon_sym_DOTproc] = ACTIONS(21),
    [anon_sym_DOTendproc] = ACTIONS(23),
    [aux_sym__implied_opcode_token1] = ACTIONS(25),
    [aux_sym__implied_opcode_token2] = ACTIONS(25),
    [aux_sym__implied_opcode_token3] = ACTIONS(25),
    [aux_sym__implied_opcode_token4] = ACTIONS(25),
    [aux_sym__implied_opcode_token5] = ACTIONS(25),
    [aux_sym__implied_opcode_token6] = ACTIONS(25),
    [aux_sym__implied_opcode_token7] = ACTIONS(25),
    [aux_sym__implied_opcode_token8] = ACTIONS(25),
    [aux_sym__implied_opcode_token9] = ACTIONS(25),
    [aux_sym__implied_opcode_token10] = ACTIONS(25),
    [aux_sym__implied_opcode_token11] = ACTIONS(25),
    [aux_sym__implied_opcode_token12] = ACTIONS(25),
    [aux_sym__implied_opcode_token13] = ACTIONS(25),
    [aux_sym__implied_opcode_token14] = ACTIONS(25),
    [aux_sym__implied_opcode_token15] = ACTIONS(25),
    [aux_sym__implied_opcode_token16] = ACTIONS(25),
    [aux_sym__implied_opcode_token17] = ACTIONS(25),
    [aux_sym__implied_opcode_token18] = ACTIONS(25),
    [aux_sym__implied_opcode_token19] = ACTIONS(25),
    [aux_sym__implied_opcode_token20] = ACTIONS(25),
    [aux_sym__implied_opcode_token21] = ACTIONS(27),
    [aux_sym__implied_opcode_token22] = ACTIONS(27),
    [aux_sym__implied_opcode_token23] = ACTIONS(27),
    [aux_sym__implied_opcode_token24] = ACTIONS(27),
    [aux_sym__implied_opcode_token25] = ACTIONS(27),
    [aux_sym__implied_opcode_token26] = ACTIONS(27),
    [aux_sym__implied_opcode_token27] = ACTIONS(25),
    [aux_sym__implied_opcode_token28] = ACTIONS(25),
    [aux_sym__implied_opcode_token29] = ACTIONS(25),
    [aux_sym__implied_opcode_token30] = ACTIONS(25),
    [aux_sym__implied_opcode_token31] = ACTIONS(25),
    [aux_sym__implied_opcode_token32] = ACTIONS(25),
    [aux_sym__implied_opcode_token33] = ACTIONS(25),
    [aux_sym__implied_opcode_token34] = ACTIONS(25),
    [aux_sym__implied_opcode_token35] = ACTIONS(25),
    [aux_sym__implied_opcode_token36] = ACTIONS(25),
    [aux_sym__implied_opcode_token37] = ACTIONS(25),
    [aux_sym__relative_opcode_token1] = ACTIONS(29),
    [aux_sym__relative_opcode_token2] = ACTIONS(29),
    [aux_sym__relative_opcode_token3] = ACTIONS(29),
    [aux_sym__relative_opcode_token4] = ACTIONS(29),
    [aux_sym__relative_opcode_token5] = ACTIONS(29),
    [aux_sym__relative_opcode_token6] = ACTIONS(29),
    [aux_sym__relative_opcode_token7] = ACTIONS(29),
    [aux_sym__relative_opcode_token8] = ACTIONS(29),
    [aux_sym__relative_opcode_token9] = ACTIONS(29),
    [aux_sym__immediate_opcode_token1] = ACTIONS(31),
    [aux_sym__immediate_opcode_token2] = ACTIONS(31),
    [aux_sym__immediate_opcode_token3] = ACTIONS(33),
    [aux_sym__immediate_opcode_token4] = ACTIONS(31),
    [aux_sym__immediate_opcode_token5] = ACTIONS(33),
    [aux_sym__immediate_opcode_token6] = ACTIONS(33),
    [aux_sym__immediate_opcode_token7] = ACTIONS(31),
    [aux_sym__immediate_opcode_token8] = ACTIONS(31),
    [aux_sym__immediate_opcode_token9] = ACTIONS(33),
    [aux_sym__immediate_opcode_token10] = ACTIONS(33),
    [aux_sym__immediate_opcode_token11] = ACTIONS(31),
    [aux_sym__immediate_opcode_token12] = ACTIONS(31),
    [aux_sym__absolute_opcode_token1] = ACTIONS(35),
    [aux_sym__absolute_opcode_token2] = ACTIONS(37),
    [aux_sym__absolute_opcode_token3] = ACTIONS(35),
    [aux_sym__absolute_opcode_token4] = ACTIONS(37),
    [aux_sym__absolute_opcode_token5] = ACTIONS(37),
    [aux_sym__absolute_opcode_token6] = ACTIONS(37),
    [aux_sym__absolute_opcode_token7] = ACTIONS(37),
    [aux_sym__absolute_opcode_token8] = ACTIONS(37),
    [sym_cheap_local_label] = ACTIONS(39),
    [sym_local_label] = ACTIONS(41),
    [sym_global_label] = ACTIONS(43),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__control_command] = STATE(2),
    [sym_file_control_command] = STATE(2),
    [sym_export_control_command] = STATE(2),
    [sym_import_control_command] = STATE(2),
    [sym_segment_control_command] = STATE(2),
    [sym_section_control_command] = STATE(2),
    [sym_byte_control_command] = STATE(2),
    [sym_address_control_command] = STATE(2),
    [sym_proc_control_command] = STATE(2),
    [sym__inc_name] = STATE(66),
    [sym__export_name] = STATE(54),
    [sym__import_name] = STATE(62),
    [sym__segment_name] = STATE(51),
    [sym__sec_name] = STATE(57),
    [sym__word_name] = STATE(47),
    [sym__byte_name] = STATE(47),
    [sym__address_name] = STATE(48),
    [sym__proc_name] = STATE(64),
    [sym__endproc_name] = STATE(18),
    [sym_assignment] = STATE(2),
    [sym_label] = STATE(2),
    [sym__operation] = STATE(2),
    [sym_implied] = STATE(2),
    [sym_relative] = STATE(2),
    [sym_immediate] = STATE(2),
    [sym_absolute] = STATE(2),
    [sym_indirect] = STATE(2),
    [sym__implied_opcode] = STATE(21),
    [sym__relative_opcode] = STATE(55),
    [sym__immediate_opcode] = STATE(58),
    [sym__absolute_opcode] = STATE(59),
    [sym__indirect_opcode] = STATE(60),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(47),
    [anon_sym_DOTexport] = ACTIONS(50),
    [anon_sym_DOTimport] = ACTIONS(53),
    [anon_sym_DOTsegment] = ACTIONS(56),
    [anon_sym_DOTsection] = ACTIONS(59),
    [anon_sym_word] = ACTIONS(62),
    [anon_sym_DOTbyte] = ACTIONS(62),
    [anon_sym_DOTaddr] = ACTIONS(65),
    [anon_sym_DOTproc] = ACTIONS(68),
    [anon_sym_DOTendproc] = ACTIONS(71),
    [aux_sym__implied_opcode_token1] = ACTIONS(74),
    [aux_sym__implied_opcode_token2] = ACTIONS(74),
    [aux_sym__implied_opcode_token3] = ACTIONS(74),
    [aux_sym__implied_opcode_token4] = ACTIONS(74),
    [aux_sym__implied_opcode_token5] = ACTIONS(74),
    [aux_sym__implied_opcode_token6] = ACTIONS(74),
    [aux_sym__implied_opcode_token7] = ACTIONS(74),
    [aux_sym__implied_opcode_token8] = ACTIONS(74),
    [aux_sym__implied_opcode_token9] = ACTIONS(74),
    [aux_sym__implied_opcode_token10] = ACTIONS(74),
    [aux_sym__implied_opcode_token11] = ACTIONS(74),
    [aux_sym__implied_opcode_token12] = ACTIONS(74),
    [aux_sym__implied_opcode_token13] = ACTIONS(74),
    [aux_sym__implied_opcode_token14] = ACTIONS(74),
    [aux_sym__implied_opcode_token15] = ACTIONS(74),
    [aux_sym__implied_opcode_token16] = ACTIONS(74),
    [aux_sym__implied_opcode_token17] = ACTIONS(74),
    [aux_sym__implied_opcode_token18] = ACTIONS(74),
    [aux_sym__implied_opcode_token19] = ACTIONS(74),
    [aux_sym__implied_opcode_token20] = ACTIONS(74),
    [aux_sym__implied_opcode_token21] = ACTIONS(77),
    [aux_sym__implied_opcode_token22] = ACTIONS(77),
    [aux_sym__implied_opcode_token23] = ACTIONS(77),
    [aux_sym__implied_opcode_token24] = ACTIONS(77),
    [aux_sym__implied_opcode_token25] = ACTIONS(77),
    [aux_sym__implied_opcode_token26] = ACTIONS(77),
    [aux_sym__implied_opcode_token27] = ACTIONS(74),
    [aux_sym__implied_opcode_token28] = ACTIONS(74),
    [aux_sym__implied_opcode_token29] = ACTIONS(74),
    [aux_sym__implied_opcode_token30] = ACTIONS(74),
    [aux_sym__implied_opcode_token31] = ACTIONS(74),
    [aux_sym__implied_opcode_token32] = ACTIONS(74),
    [aux_sym__implied_opcode_token33] = ACTIONS(74),
    [aux_sym__implied_opcode_token34] = ACTIONS(74),
    [aux_sym__implied_opcode_token35] = ACTIONS(74),
    [aux_sym__implied_opcode_token36] = ACTIONS(74),
    [aux_sym__implied_opcode_token37] = ACTIONS(74),
    [aux_sym__relative_opcode_token1] = ACTIONS(80),
    [aux_sym__relative_opcode_token2] = ACTIONS(80),
    [aux_sym__relative_opcode_token3] = ACTIONS(80),
    [aux_sym__relative_opcode_token4] = ACTIONS(80),
    [aux_sym__relative_opcode_token5] = ACTIONS(80),
    [aux_sym__relative_opcode_token6] = ACTIONS(80),
    [aux_sym__relative_opcode_token7] = ACTIONS(80),
    [aux_sym__relative_opcode_token8] = ACTIONS(80),
    [aux_sym__relative_opcode_token9] = ACTIONS(80),
    [aux_sym__immediate_opcode_token1] = ACTIONS(83),
    [aux_sym__immediate_opcode_token2] = ACTIONS(83),
    [aux_sym__immediate_opcode_token3] = ACTIONS(86),
    [aux_sym__immediate_opcode_token4] = ACTIONS(83),
    [aux_sym__immediate_opcode_token5] = ACTIONS(86),
    [aux_sym__immediate_opcode_token6] = ACTIONS(86),
    [aux_sym__immediate_opcode_token7] = ACTIONS(83),
    [aux_sym__immediate_opcode_token8] = ACTIONS(83),
    [aux_sym__immediate_opcode_token9] = ACTIONS(86),
    [aux_sym__immediate_opcode_token10] = ACTIONS(86),
    [aux_sym__immediate_opcode_token11] = ACTIONS(83),
    [aux_sym__immediate_opcode_token12] = ACTIONS(83),
    [aux_sym__absolute_opcode_token1] = ACTIONS(89),
    [aux_sym__absolute_opcode_token2] = ACTIONS(92),
    [aux_sym__absolute_opcode_token3] = ACTIONS(89),
    [aux_sym__absolute_opcode_token4] = ACTIONS(92),
    [aux_sym__absolute_opcode_token5] = ACTIONS(92),
    [aux_sym__absolute_opcode_token6] = ACTIONS(92),
    [aux_sym__absolute_opcode_token7] = ACTIONS(92),
    [aux_sym__absolute_opcode_token8] = ACTIONS(92),
    [sym_cheap_local_label] = ACTIONS(95),
    [sym_local_label] = ACTIONS(98),
    [sym_global_label] = ACTIONS(101),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym__control_command] = STATE(2),
    [sym_file_control_command] = STATE(2),
    [sym_export_control_command] = STATE(2),
    [sym_import_control_command] = STATE(2),
    [sym_segment_control_command] = STATE(2),
    [sym_section_control_command] = STATE(2),
    [sym_byte_control_command] = STATE(2),
    [sym_address_control_command] = STATE(2),
    [sym_proc_control_command] = STATE(2),
    [sym__inc_name] = STATE(66),
    [sym__export_name] = STATE(54),
    [sym__import_name] = STATE(62),
    [sym__segment_name] = STATE(51),
    [sym__sec_name] = STATE(57),
    [sym__word_name] = STATE(47),
    [sym__byte_name] = STATE(47),
    [sym__address_name] = STATE(48),
    [sym__proc_name] = STATE(64),
    [sym__endproc_name] = STATE(18),
    [sym_assignment] = STATE(2),
    [sym_label] = STATE(2),
    [sym__operation] = STATE(2),
    [sym_implied] = STATE(2),
    [sym_relative] = STATE(2),
    [sym_immediate] = STATE(2),
    [sym_absolute] = STATE(2),
    [sym_indirect] = STATE(2),
    [sym__implied_opcode] = STATE(21),
    [sym__relative_opcode] = STATE(55),
    [sym__immediate_opcode] = STATE(58),
    [sym__absolute_opcode] = STATE(59),
    [sym__indirect_opcode] = STATE(60),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(7),
    [anon_sym_DOTexport] = ACTIONS(9),
    [anon_sym_DOTimport] = ACTIONS(11),
    [anon_sym_DOTsegment] = ACTIONS(13),
    [anon_sym_DOTsection] = ACTIONS(15),
    [anon_sym_word] = ACTIONS(17),
    [anon_sym_DOTbyte] = ACTIONS(17),
    [anon_sym_DOTaddr] = ACTIONS(19),
    [anon_sym_DOTproc] = ACTIONS(21),
    [anon_sym_DOTendproc] = ACTIONS(23),
    [aux_sym__implied_opcode_token1] = ACTIONS(25),
    [aux_sym__implied_opcode_token2] = ACTIONS(25),
    [aux_sym__implied_opcode_token3] = ACTIONS(25),
    [aux_sym__implied_opcode_token4] = ACTIONS(25),
    [aux_sym__implied_opcode_token5] = ACTIONS(25),
    [aux_sym__implied_opcode_token6] = ACTIONS(25),
    [aux_sym__implied_opcode_token7] = ACTIONS(25),
    [aux_sym__implied_opcode_token8] = ACTIONS(25),
    [aux_sym__implied_opcode_token9] = ACTIONS(25),
    [aux_sym__implied_opcode_token10] = ACTIONS(25),
    [aux_sym__implied_opcode_token11] = ACTIONS(25),
    [aux_sym__implied_opcode_token12] = ACTIONS(25),
    [aux_sym__implied_opcode_token13] = ACTIONS(25),
    [aux_sym__implied_opcode_token14] = ACTIONS(25),
    [aux_sym__implied_opcode_token15] = ACTIONS(25),
    [aux_sym__implied_opcode_token16] = ACTIONS(25),
    [aux_sym__implied_opcode_token17] = ACTIONS(25),
    [aux_sym__implied_opcode_token18] = ACTIONS(25),
    [aux_sym__implied_opcode_token19] = ACTIONS(25),
    [aux_sym__implied_opcode_token20] = ACTIONS(25),
    [aux_sym__implied_opcode_token21] = ACTIONS(27),
    [aux_sym__implied_opcode_token22] = ACTIONS(27),
    [aux_sym__implied_opcode_token23] = ACTIONS(27),
    [aux_sym__implied_opcode_token24] = ACTIONS(27),
    [aux_sym__implied_opcode_token25] = ACTIONS(27),
    [aux_sym__implied_opcode_token26] = ACTIONS(27),
    [aux_sym__implied_opcode_token27] = ACTIONS(25),
    [aux_sym__implied_opcode_token28] = ACTIONS(25),
    [aux_sym__implied_opcode_token29] = ACTIONS(25),
    [aux_sym__implied_opcode_token30] = ACTIONS(25),
    [aux_sym__implied_opcode_token31] = ACTIONS(25),
    [aux_sym__implied_opcode_token32] = ACTIONS(25),
    [aux_sym__implied_opcode_token33] = ACTIONS(25),
    [aux_sym__implied_opcode_token34] = ACTIONS(25),
    [aux_sym__implied_opcode_token35] = ACTIONS(25),
    [aux_sym__implied_opcode_token36] = ACTIONS(25),
    [aux_sym__implied_opcode_token37] = ACTIONS(25),
    [aux_sym__relative_opcode_token1] = ACTIONS(29),
    [aux_sym__relative_opcode_token2] = ACTIONS(29),
    [aux_sym__relative_opcode_token3] = ACTIONS(29),
    [aux_sym__relative_opcode_token4] = ACTIONS(29),
    [aux_sym__relative_opcode_token5] = ACTIONS(29),
    [aux_sym__relative_opcode_token6] = ACTIONS(29),
    [aux_sym__relative_opcode_token7] = ACTIONS(29),
    [aux_sym__relative_opcode_token8] = ACTIONS(29),
    [aux_sym__relative_opcode_token9] = ACTIONS(29),
    [aux_sym__immediate_opcode_token1] = ACTIONS(31),
    [aux_sym__immediate_opcode_token2] = ACTIONS(31),
    [aux_sym__immediate_opcode_token3] = ACTIONS(33),
    [aux_sym__immediate_opcode_token4] = ACTIONS(31),
    [aux_sym__immediate_opcode_token5] = ACTIONS(33),
    [aux_sym__immediate_opcode_token6] = ACTIONS(33),
    [aux_sym__immediate_opcode_token7] = ACTIONS(31),
    [aux_sym__immediate_opcode_token8] = ACTIONS(31),
    [aux_sym__immediate_opcode_token9] = ACTIONS(33),
    [aux_sym__immediate_opcode_token10] = ACTIONS(33),
    [aux_sym__immediate_opcode_token11] = ACTIONS(31),
    [aux_sym__immediate_opcode_token12] = ACTIONS(31),
    [aux_sym__absolute_opcode_token1] = ACTIONS(35),
    [aux_sym__absolute_opcode_token2] = ACTIONS(37),
    [aux_sym__absolute_opcode_token3] = ACTIONS(35),
    [aux_sym__absolute_opcode_token4] = ACTIONS(37),
    [aux_sym__absolute_opcode_token5] = ACTIONS(37),
    [aux_sym__absolute_opcode_token6] = ACTIONS(37),
    [aux_sym__absolute_opcode_token7] = ACTIONS(37),
    [aux_sym__absolute_opcode_token8] = ACTIONS(37),
    [sym_cheap_local_label] = ACTIONS(39),
    [sym_local_label] = ACTIONS(41),
    [sym_global_label] = ACTIONS(43),
  },
  [4] = {
    [sym__reg_x] = STATE(30),
    [sym__reg_y] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(108),
    [anon_sym_DOTexport] = ACTIONS(108),
    [anon_sym_DOTimport] = ACTIONS(108),
    [anon_sym_DOTsegment] = ACTIONS(108),
    [anon_sym_DOTsection] = ACTIONS(108),
    [anon_sym_word] = ACTIONS(108),
    [anon_sym_DOTbyte] = ACTIONS(108),
    [anon_sym_DOTaddr] = ACTIONS(108),
    [anon_sym_DOTproc] = ACTIONS(108),
    [anon_sym_DOTendproc] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_LT_LT] = ACTIONS(110),
    [anon_sym_GT_GT] = ACTIONS(110),
    [anon_sym_AMP] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_COMMA] = ACTIONS(112),
    [aux_sym__implied_opcode_token1] = ACTIONS(108),
    [aux_sym__implied_opcode_token2] = ACTIONS(108),
    [aux_sym__implied_opcode_token3] = ACTIONS(108),
    [aux_sym__implied_opcode_token4] = ACTIONS(108),
    [aux_sym__implied_opcode_token5] = ACTIONS(108),
    [aux_sym__implied_opcode_token6] = ACTIONS(108),
    [aux_sym__implied_opcode_token7] = ACTIONS(108),
    [aux_sym__implied_opcode_token8] = ACTIONS(108),
    [aux_sym__implied_opcode_token9] = ACTIONS(108),
    [aux_sym__implied_opcode_token10] = ACTIONS(108),
    [aux_sym__implied_opcode_token11] = ACTIONS(108),
    [aux_sym__implied_opcode_token12] = ACTIONS(108),
    [aux_sym__implied_opcode_token13] = ACTIONS(108),
    [aux_sym__implied_opcode_token14] = ACTIONS(108),
    [aux_sym__implied_opcode_token15] = ACTIONS(108),
    [aux_sym__implied_opcode_token16] = ACTIONS(108),
    [aux_sym__implied_opcode_token17] = ACTIONS(108),
    [aux_sym__implied_opcode_token18] = ACTIONS(108),
    [aux_sym__implied_opcode_token19] = ACTIONS(108),
    [aux_sym__implied_opcode_token20] = ACTIONS(108),
    [aux_sym__implied_opcode_token21] = ACTIONS(108),
    [aux_sym__implied_opcode_token22] = ACTIONS(108),
    [aux_sym__implied_opcode_token23] = ACTIONS(108),
    [aux_sym__implied_opcode_token24] = ACTIONS(108),
    [aux_sym__implied_opcode_token25] = ACTIONS(108),
    [aux_sym__implied_opcode_token26] = ACTIONS(108),
    [aux_sym__implied_opcode_token27] = ACTIONS(108),
    [aux_sym__implied_opcode_token28] = ACTIONS(108),
    [aux_sym__implied_opcode_token29] = ACTIONS(108),
    [aux_sym__implied_opcode_token30] = ACTIONS(108),
    [aux_sym__implied_opcode_token31] = ACTIONS(108),
    [aux_sym__implied_opcode_token32] = ACTIONS(108),
    [aux_sym__implied_opcode_token33] = ACTIONS(108),
    [aux_sym__implied_opcode_token34] = ACTIONS(108),
    [aux_sym__implied_opcode_token35] = ACTIONS(108),
    [aux_sym__implied_opcode_token36] = ACTIONS(108),
    [aux_sym__implied_opcode_token37] = ACTIONS(108),
    [aux_sym__relative_opcode_token1] = ACTIONS(108),
    [aux_sym__relative_opcode_token2] = ACTIONS(108),
    [aux_sym__relative_opcode_token3] = ACTIONS(108),
    [aux_sym__relative_opcode_token4] = ACTIONS(108),
    [aux_sym__relative_opcode_token5] = ACTIONS(108),
    [aux_sym__relative_opcode_token6] = ACTIONS(108),
    [aux_sym__relative_opcode_token7] = ACTIONS(108),
    [aux_sym__relative_opcode_token8] = ACTIONS(108),
    [aux_sym__relative_opcode_token9] = ACTIONS(108),
    [aux_sym__immediate_opcode_token1] = ACTIONS(108),
    [aux_sym__immediate_opcode_token2] = ACTIONS(108),
    [aux_sym__immediate_opcode_token3] = ACTIONS(108),
    [aux_sym__immediate_opcode_token4] = ACTIONS(108),
    [aux_sym__immediate_opcode_token5] = ACTIONS(108),
    [aux_sym__immediate_opcode_token6] = ACTIONS(108),
    [aux_sym__immediate_opcode_token7] = ACTIONS(108),
    [aux_sym__immediate_opcode_token8] = ACTIONS(108),
    [aux_sym__immediate_opcode_token9] = ACTIONS(108),
    [aux_sym__immediate_opcode_token10] = ACTIONS(108),
    [aux_sym__immediate_opcode_token11] = ACTIONS(108),
    [aux_sym__immediate_opcode_token12] = ACTIONS(108),
    [aux_sym__absolute_opcode_token1] = ACTIONS(108),
    [aux_sym__absolute_opcode_token2] = ACTIONS(108),
    [aux_sym__absolute_opcode_token3] = ACTIONS(108),
    [aux_sym__absolute_opcode_token4] = ACTIONS(108),
    [aux_sym__absolute_opcode_token5] = ACTIONS(108),
    [aux_sym__absolute_opcode_token6] = ACTIONS(108),
    [aux_sym__absolute_opcode_token7] = ACTIONS(108),
    [aux_sym__absolute_opcode_token8] = ACTIONS(108),
    [sym_cheap_local_label] = ACTIONS(106),
    [sym_local_label] = ACTIONS(108),
    [sym_global_label] = ACTIONS(108),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(116),
    [anon_sym_DOTexport] = ACTIONS(116),
    [anon_sym_DOTimport] = ACTIONS(116),
    [anon_sym_DOTsegment] = ACTIONS(116),
    [anon_sym_DOTsection] = ACTIONS(116),
    [anon_sym_word] = ACTIONS(116),
    [anon_sym_DOTbyte] = ACTIONS(116),
    [anon_sym_DOTaddr] = ACTIONS(116),
    [anon_sym_DOTproc] = ACTIONS(116),
    [anon_sym_DOTendproc] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_LT_LT] = ACTIONS(114),
    [anon_sym_GT_GT] = ACTIONS(114),
    [anon_sym_AMP] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_COMMA] = ACTIONS(114),
    [aux_sym__implied_opcode_token1] = ACTIONS(116),
    [aux_sym__implied_opcode_token2] = ACTIONS(116),
    [aux_sym__implied_opcode_token3] = ACTIONS(116),
    [aux_sym__implied_opcode_token4] = ACTIONS(116),
    [aux_sym__implied_opcode_token5] = ACTIONS(116),
    [aux_sym__implied_opcode_token6] = ACTIONS(116),
    [aux_sym__implied_opcode_token7] = ACTIONS(116),
    [aux_sym__implied_opcode_token8] = ACTIONS(116),
    [aux_sym__implied_opcode_token9] = ACTIONS(116),
    [aux_sym__implied_opcode_token10] = ACTIONS(116),
    [aux_sym__implied_opcode_token11] = ACTIONS(116),
    [aux_sym__implied_opcode_token12] = ACTIONS(116),
    [aux_sym__implied_opcode_token13] = ACTIONS(116),
    [aux_sym__implied_opcode_token14] = ACTIONS(116),
    [aux_sym__implied_opcode_token15] = ACTIONS(116),
    [aux_sym__implied_opcode_token16] = ACTIONS(116),
    [aux_sym__implied_opcode_token17] = ACTIONS(116),
    [aux_sym__implied_opcode_token18] = ACTIONS(116),
    [aux_sym__implied_opcode_token19] = ACTIONS(116),
    [aux_sym__implied_opcode_token20] = ACTIONS(116),
    [aux_sym__implied_opcode_token21] = ACTIONS(116),
    [aux_sym__implied_opcode_token22] = ACTIONS(116),
    [aux_sym__implied_opcode_token23] = ACTIONS(116),
    [aux_sym__implied_opcode_token24] = ACTIONS(116),
    [aux_sym__implied_opcode_token25] = ACTIONS(116),
    [aux_sym__implied_opcode_token26] = ACTIONS(116),
    [aux_sym__implied_opcode_token27] = ACTIONS(116),
    [aux_sym__implied_opcode_token28] = ACTIONS(116),
    [aux_sym__implied_opcode_token29] = ACTIONS(116),
    [aux_sym__implied_opcode_token30] = ACTIONS(116),
    [aux_sym__implied_opcode_token31] = ACTIONS(116),
    [aux_sym__implied_opcode_token32] = ACTIONS(116),
    [aux_sym__implied_opcode_token33] = ACTIONS(116),
    [aux_sym__implied_opcode_token34] = ACTIONS(116),
    [aux_sym__implied_opcode_token35] = ACTIONS(116),
    [aux_sym__implied_opcode_token36] = ACTIONS(116),
    [aux_sym__implied_opcode_token37] = ACTIONS(116),
    [aux_sym__relative_opcode_token1] = ACTIONS(116),
    [aux_sym__relative_opcode_token2] = ACTIONS(116),
    [aux_sym__relative_opcode_token3] = ACTIONS(116),
    [aux_sym__relative_opcode_token4] = ACTIONS(116),
    [aux_sym__relative_opcode_token5] = ACTIONS(116),
    [aux_sym__relative_opcode_token6] = ACTIONS(116),
    [aux_sym__relative_opcode_token7] = ACTIONS(116),
    [aux_sym__relative_opcode_token8] = ACTIONS(116),
    [aux_sym__relative_opcode_token9] = ACTIONS(116),
    [aux_sym__immediate_opcode_token1] = ACTIONS(116),
    [aux_sym__immediate_opcode_token2] = ACTIONS(116),
    [aux_sym__immediate_opcode_token3] = ACTIONS(116),
    [aux_sym__immediate_opcode_token4] = ACTIONS(116),
    [aux_sym__immediate_opcode_token5] = ACTIONS(116),
    [aux_sym__immediate_opcode_token6] = ACTIONS(116),
    [aux_sym__immediate_opcode_token7] = ACTIONS(116),
    [aux_sym__immediate_opcode_token8] = ACTIONS(116),
    [aux_sym__immediate_opcode_token9] = ACTIONS(116),
    [aux_sym__immediate_opcode_token10] = ACTIONS(116),
    [aux_sym__immediate_opcode_token11] = ACTIONS(116),
    [aux_sym__immediate_opcode_token12] = ACTIONS(116),
    [aux_sym__absolute_opcode_token1] = ACTIONS(116),
    [aux_sym__absolute_opcode_token2] = ACTIONS(116),
    [aux_sym__absolute_opcode_token3] = ACTIONS(116),
    [aux_sym__absolute_opcode_token4] = ACTIONS(116),
    [aux_sym__absolute_opcode_token5] = ACTIONS(116),
    [aux_sym__absolute_opcode_token6] = ACTIONS(116),
    [aux_sym__absolute_opcode_token7] = ACTIONS(116),
    [aux_sym__absolute_opcode_token8] = ACTIONS(116),
    [sym_cheap_local_label] = ACTIONS(114),
    [sym_local_label] = ACTIONS(116),
    [sym_global_label] = ACTIONS(116),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(120),
    [anon_sym_DOTexport] = ACTIONS(120),
    [anon_sym_DOTimport] = ACTIONS(120),
    [anon_sym_DOTsegment] = ACTIONS(120),
    [anon_sym_DOTsection] = ACTIONS(120),
    [anon_sym_word] = ACTIONS(120),
    [anon_sym_DOTbyte] = ACTIONS(120),
    [anon_sym_DOTaddr] = ACTIONS(120),
    [anon_sym_DOTproc] = ACTIONS(120),
    [anon_sym_DOTendproc] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_LT_LT] = ACTIONS(118),
    [anon_sym_GT_GT] = ACTIONS(118),
    [anon_sym_AMP] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(118),
    [aux_sym__implied_opcode_token1] = ACTIONS(120),
    [aux_sym__implied_opcode_token2] = ACTIONS(120),
    [aux_sym__implied_opcode_token3] = ACTIONS(120),
    [aux_sym__implied_opcode_token4] = ACTIONS(120),
    [aux_sym__implied_opcode_token5] = ACTIONS(120),
    [aux_sym__implied_opcode_token6] = ACTIONS(120),
    [aux_sym__implied_opcode_token7] = ACTIONS(120),
    [aux_sym__implied_opcode_token8] = ACTIONS(120),
    [aux_sym__implied_opcode_token9] = ACTIONS(120),
    [aux_sym__implied_opcode_token10] = ACTIONS(120),
    [aux_sym__implied_opcode_token11] = ACTIONS(120),
    [aux_sym__implied_opcode_token12] = ACTIONS(120),
    [aux_sym__implied_opcode_token13] = ACTIONS(120),
    [aux_sym__implied_opcode_token14] = ACTIONS(120),
    [aux_sym__implied_opcode_token15] = ACTIONS(120),
    [aux_sym__implied_opcode_token16] = ACTIONS(120),
    [aux_sym__implied_opcode_token17] = ACTIONS(120),
    [aux_sym__implied_opcode_token18] = ACTIONS(120),
    [aux_sym__implied_opcode_token19] = ACTIONS(120),
    [aux_sym__implied_opcode_token20] = ACTIONS(120),
    [aux_sym__implied_opcode_token21] = ACTIONS(120),
    [aux_sym__implied_opcode_token22] = ACTIONS(120),
    [aux_sym__implied_opcode_token23] = ACTIONS(120),
    [aux_sym__implied_opcode_token24] = ACTIONS(120),
    [aux_sym__implied_opcode_token25] = ACTIONS(120),
    [aux_sym__implied_opcode_token26] = ACTIONS(120),
    [aux_sym__implied_opcode_token27] = ACTIONS(120),
    [aux_sym__implied_opcode_token28] = ACTIONS(120),
    [aux_sym__implied_opcode_token29] = ACTIONS(120),
    [aux_sym__implied_opcode_token30] = ACTIONS(120),
    [aux_sym__implied_opcode_token31] = ACTIONS(120),
    [aux_sym__implied_opcode_token32] = ACTIONS(120),
    [aux_sym__implied_opcode_token33] = ACTIONS(120),
    [aux_sym__implied_opcode_token34] = ACTIONS(120),
    [aux_sym__implied_opcode_token35] = ACTIONS(120),
    [aux_sym__implied_opcode_token36] = ACTIONS(120),
    [aux_sym__implied_opcode_token37] = ACTIONS(120),
    [aux_sym__relative_opcode_token1] = ACTIONS(120),
    [aux_sym__relative_opcode_token2] = ACTIONS(120),
    [aux_sym__relative_opcode_token3] = ACTIONS(120),
    [aux_sym__relative_opcode_token4] = ACTIONS(120),
    [aux_sym__relative_opcode_token5] = ACTIONS(120),
    [aux_sym__relative_opcode_token6] = ACTIONS(120),
    [aux_sym__relative_opcode_token7] = ACTIONS(120),
    [aux_sym__relative_opcode_token8] = ACTIONS(120),
    [aux_sym__relative_opcode_token9] = ACTIONS(120),
    [aux_sym__immediate_opcode_token1] = ACTIONS(120),
    [aux_sym__immediate_opcode_token2] = ACTIONS(120),
    [aux_sym__immediate_opcode_token3] = ACTIONS(120),
    [aux_sym__immediate_opcode_token4] = ACTIONS(120),
    [aux_sym__immediate_opcode_token5] = ACTIONS(120),
    [aux_sym__immediate_opcode_token6] = ACTIONS(120),
    [aux_sym__immediate_opcode_token7] = ACTIONS(120),
    [aux_sym__immediate_opcode_token8] = ACTIONS(120),
    [aux_sym__immediate_opcode_token9] = ACTIONS(120),
    [aux_sym__immediate_opcode_token10] = ACTIONS(120),
    [aux_sym__immediate_opcode_token11] = ACTIONS(120),
    [aux_sym__immediate_opcode_token12] = ACTIONS(120),
    [aux_sym__absolute_opcode_token1] = ACTIONS(120),
    [aux_sym__absolute_opcode_token2] = ACTIONS(120),
    [aux_sym__absolute_opcode_token3] = ACTIONS(120),
    [aux_sym__absolute_opcode_token4] = ACTIONS(120),
    [aux_sym__absolute_opcode_token5] = ACTIONS(120),
    [aux_sym__absolute_opcode_token6] = ACTIONS(120),
    [aux_sym__absolute_opcode_token7] = ACTIONS(120),
    [aux_sym__absolute_opcode_token8] = ACTIONS(120),
    [sym_cheap_local_label] = ACTIONS(118),
    [sym_local_label] = ACTIONS(120),
    [sym_global_label] = ACTIONS(120),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(124),
    [anon_sym_DOTexport] = ACTIONS(124),
    [anon_sym_DOTimport] = ACTIONS(124),
    [anon_sym_DOTsegment] = ACTIONS(124),
    [anon_sym_DOTsection] = ACTIONS(124),
    [anon_sym_word] = ACTIONS(124),
    [anon_sym_DOTbyte] = ACTIONS(124),
    [anon_sym_DOTaddr] = ACTIONS(124),
    [anon_sym_DOTproc] = ACTIONS(124),
    [anon_sym_DOTendproc] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_LT_LT] = ACTIONS(122),
    [anon_sym_GT_GT] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_COMMA] = ACTIONS(122),
    [aux_sym__implied_opcode_token1] = ACTIONS(124),
    [aux_sym__implied_opcode_token2] = ACTIONS(124),
    [aux_sym__implied_opcode_token3] = ACTIONS(124),
    [aux_sym__implied_opcode_token4] = ACTIONS(124),
    [aux_sym__implied_opcode_token5] = ACTIONS(124),
    [aux_sym__implied_opcode_token6] = ACTIONS(124),
    [aux_sym__implied_opcode_token7] = ACTIONS(124),
    [aux_sym__implied_opcode_token8] = ACTIONS(124),
    [aux_sym__implied_opcode_token9] = ACTIONS(124),
    [aux_sym__implied_opcode_token10] = ACTIONS(124),
    [aux_sym__implied_opcode_token11] = ACTIONS(124),
    [aux_sym__implied_opcode_token12] = ACTIONS(124),
    [aux_sym__implied_opcode_token13] = ACTIONS(124),
    [aux_sym__implied_opcode_token14] = ACTIONS(124),
    [aux_sym__implied_opcode_token15] = ACTIONS(124),
    [aux_sym__implied_opcode_token16] = ACTIONS(124),
    [aux_sym__implied_opcode_token17] = ACTIONS(124),
    [aux_sym__implied_opcode_token18] = ACTIONS(124),
    [aux_sym__implied_opcode_token19] = ACTIONS(124),
    [aux_sym__implied_opcode_token20] = ACTIONS(124),
    [aux_sym__implied_opcode_token21] = ACTIONS(124),
    [aux_sym__implied_opcode_token22] = ACTIONS(124),
    [aux_sym__implied_opcode_token23] = ACTIONS(124),
    [aux_sym__implied_opcode_token24] = ACTIONS(124),
    [aux_sym__implied_opcode_token25] = ACTIONS(124),
    [aux_sym__implied_opcode_token26] = ACTIONS(124),
    [aux_sym__implied_opcode_token27] = ACTIONS(124),
    [aux_sym__implied_opcode_token28] = ACTIONS(124),
    [aux_sym__implied_opcode_token29] = ACTIONS(124),
    [aux_sym__implied_opcode_token30] = ACTIONS(124),
    [aux_sym__implied_opcode_token31] = ACTIONS(124),
    [aux_sym__implied_opcode_token32] = ACTIONS(124),
    [aux_sym__implied_opcode_token33] = ACTIONS(124),
    [aux_sym__implied_opcode_token34] = ACTIONS(124),
    [aux_sym__implied_opcode_token35] = ACTIONS(124),
    [aux_sym__implied_opcode_token36] = ACTIONS(124),
    [aux_sym__implied_opcode_token37] = ACTIONS(124),
    [aux_sym__relative_opcode_token1] = ACTIONS(124),
    [aux_sym__relative_opcode_token2] = ACTIONS(124),
    [aux_sym__relative_opcode_token3] = ACTIONS(124),
    [aux_sym__relative_opcode_token4] = ACTIONS(124),
    [aux_sym__relative_opcode_token5] = ACTIONS(124),
    [aux_sym__relative_opcode_token6] = ACTIONS(124),
    [aux_sym__relative_opcode_token7] = ACTIONS(124),
    [aux_sym__relative_opcode_token8] = ACTIONS(124),
    [aux_sym__relative_opcode_token9] = ACTIONS(124),
    [aux_sym__immediate_opcode_token1] = ACTIONS(124),
    [aux_sym__immediate_opcode_token2] = ACTIONS(124),
    [aux_sym__immediate_opcode_token3] = ACTIONS(124),
    [aux_sym__immediate_opcode_token4] = ACTIONS(124),
    [aux_sym__immediate_opcode_token5] = ACTIONS(124),
    [aux_sym__immediate_opcode_token6] = ACTIONS(124),
    [aux_sym__immediate_opcode_token7] = ACTIONS(124),
    [aux_sym__immediate_opcode_token8] = ACTIONS(124),
    [aux_sym__immediate_opcode_token9] = ACTIONS(124),
    [aux_sym__immediate_opcode_token10] = ACTIONS(124),
    [aux_sym__immediate_opcode_token11] = ACTIONS(124),
    [aux_sym__immediate_opcode_token12] = ACTIONS(124),
    [aux_sym__absolute_opcode_token1] = ACTIONS(124),
    [aux_sym__absolute_opcode_token2] = ACTIONS(124),
    [aux_sym__absolute_opcode_token3] = ACTIONS(124),
    [aux_sym__absolute_opcode_token4] = ACTIONS(124),
    [aux_sym__absolute_opcode_token5] = ACTIONS(124),
    [aux_sym__absolute_opcode_token6] = ACTIONS(124),
    [aux_sym__absolute_opcode_token7] = ACTIONS(124),
    [aux_sym__absolute_opcode_token8] = ACTIONS(124),
    [sym_cheap_local_label] = ACTIONS(122),
    [sym_local_label] = ACTIONS(124),
    [sym_global_label] = ACTIONS(124),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(128),
    [anon_sym_DOTexport] = ACTIONS(128),
    [anon_sym_DOTimport] = ACTIONS(128),
    [anon_sym_DOTsegment] = ACTIONS(128),
    [anon_sym_DOTsection] = ACTIONS(128),
    [anon_sym_word] = ACTIONS(128),
    [anon_sym_DOTbyte] = ACTIONS(128),
    [anon_sym_DOTaddr] = ACTIONS(128),
    [anon_sym_DOTproc] = ACTIONS(128),
    [anon_sym_DOTendproc] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_LT_LT] = ACTIONS(110),
    [anon_sym_GT_GT] = ACTIONS(110),
    [anon_sym_AMP] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [aux_sym__implied_opcode_token1] = ACTIONS(128),
    [aux_sym__implied_opcode_token2] = ACTIONS(128),
    [aux_sym__implied_opcode_token3] = ACTIONS(128),
    [aux_sym__implied_opcode_token4] = ACTIONS(128),
    [aux_sym__implied_opcode_token5] = ACTIONS(128),
    [aux_sym__implied_opcode_token6] = ACTIONS(128),
    [aux_sym__implied_opcode_token7] = ACTIONS(128),
    [aux_sym__implied_opcode_token8] = ACTIONS(128),
    [aux_sym__implied_opcode_token9] = ACTIONS(128),
    [aux_sym__implied_opcode_token10] = ACTIONS(128),
    [aux_sym__implied_opcode_token11] = ACTIONS(128),
    [aux_sym__implied_opcode_token12] = ACTIONS(128),
    [aux_sym__implied_opcode_token13] = ACTIONS(128),
    [aux_sym__implied_opcode_token14] = ACTIONS(128),
    [aux_sym__implied_opcode_token15] = ACTIONS(128),
    [aux_sym__implied_opcode_token16] = ACTIONS(128),
    [aux_sym__implied_opcode_token17] = ACTIONS(128),
    [aux_sym__implied_opcode_token18] = ACTIONS(128),
    [aux_sym__implied_opcode_token19] = ACTIONS(128),
    [aux_sym__implied_opcode_token20] = ACTIONS(128),
    [aux_sym__implied_opcode_token21] = ACTIONS(128),
    [aux_sym__implied_opcode_token22] = ACTIONS(128),
    [aux_sym__implied_opcode_token23] = ACTIONS(128),
    [aux_sym__implied_opcode_token24] = ACTIONS(128),
    [aux_sym__implied_opcode_token25] = ACTIONS(128),
    [aux_sym__implied_opcode_token26] = ACTIONS(128),
    [aux_sym__implied_opcode_token27] = ACTIONS(128),
    [aux_sym__implied_opcode_token28] = ACTIONS(128),
    [aux_sym__implied_opcode_token29] = ACTIONS(128),
    [aux_sym__implied_opcode_token30] = ACTIONS(128),
    [aux_sym__implied_opcode_token31] = ACTIONS(128),
    [aux_sym__implied_opcode_token32] = ACTIONS(128),
    [aux_sym__implied_opcode_token33] = ACTIONS(128),
    [aux_sym__implied_opcode_token34] = ACTIONS(128),
    [aux_sym__implied_opcode_token35] = ACTIONS(128),
    [aux_sym__implied_opcode_token36] = ACTIONS(128),
    [aux_sym__implied_opcode_token37] = ACTIONS(128),
    [aux_sym__relative_opcode_token1] = ACTIONS(128),
    [aux_sym__relative_opcode_token2] = ACTIONS(128),
    [aux_sym__relative_opcode_token3] = ACTIONS(128),
    [aux_sym__relative_opcode_token4] = ACTIONS(128),
    [aux_sym__relative_opcode_token5] = ACTIONS(128),
    [aux_sym__relative_opcode_token6] = ACTIONS(128),
    [aux_sym__relative_opcode_token7] = ACTIONS(128),
    [aux_sym__relative_opcode_token8] = ACTIONS(128),
    [aux_sym__relative_opcode_token9] = ACTIONS(128),
    [aux_sym__immediate_opcode_token1] = ACTIONS(128),
    [aux_sym__immediate_opcode_token2] = ACTIONS(128),
    [aux_sym__immediate_opcode_token3] = ACTIONS(128),
    [aux_sym__immediate_opcode_token4] = ACTIONS(128),
    [aux_sym__immediate_opcode_token5] = ACTIONS(128),
    [aux_sym__immediate_opcode_token6] = ACTIONS(128),
    [aux_sym__immediate_opcode_token7] = ACTIONS(128),
    [aux_sym__immediate_opcode_token8] = ACTIONS(128),
    [aux_sym__immediate_opcode_token9] = ACTIONS(128),
    [aux_sym__immediate_opcode_token10] = ACTIONS(128),
    [aux_sym__immediate_opcode_token11] = ACTIONS(128),
    [aux_sym__immediate_opcode_token12] = ACTIONS(128),
    [aux_sym__absolute_opcode_token1] = ACTIONS(128),
    [aux_sym__absolute_opcode_token2] = ACTIONS(128),
    [aux_sym__absolute_opcode_token3] = ACTIONS(128),
    [aux_sym__absolute_opcode_token4] = ACTIONS(128),
    [aux_sym__absolute_opcode_token5] = ACTIONS(128),
    [aux_sym__absolute_opcode_token6] = ACTIONS(128),
    [aux_sym__absolute_opcode_token7] = ACTIONS(128),
    [aux_sym__absolute_opcode_token8] = ACTIONS(128),
    [sym_cheap_local_label] = ACTIONS(126),
    [sym_local_label] = ACTIONS(128),
    [sym_global_label] = ACTIONS(128),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(132),
    [anon_sym_DOTexport] = ACTIONS(132),
    [anon_sym_DOTimport] = ACTIONS(132),
    [anon_sym_DOTsegment] = ACTIONS(132),
    [anon_sym_DOTsection] = ACTIONS(132),
    [anon_sym_word] = ACTIONS(132),
    [anon_sym_DOTbyte] = ACTIONS(132),
    [anon_sym_DOTaddr] = ACTIONS(132),
    [anon_sym_DOTproc] = ACTIONS(132),
    [anon_sym_DOTendproc] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_LT_LT] = ACTIONS(110),
    [anon_sym_GT_GT] = ACTIONS(110),
    [anon_sym_AMP] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [aux_sym__implied_opcode_token1] = ACTIONS(132),
    [aux_sym__implied_opcode_token2] = ACTIONS(132),
    [aux_sym__implied_opcode_token3] = ACTIONS(132),
    [aux_sym__implied_opcode_token4] = ACTIONS(132),
    [aux_sym__implied_opcode_token5] = ACTIONS(132),
    [aux_sym__implied_opcode_token6] = ACTIONS(132),
    [aux_sym__implied_opcode_token7] = ACTIONS(132),
    [aux_sym__implied_opcode_token8] = ACTIONS(132),
    [aux_sym__implied_opcode_token9] = ACTIONS(132),
    [aux_sym__implied_opcode_token10] = ACTIONS(132),
    [aux_sym__implied_opcode_token11] = ACTIONS(132),
    [aux_sym__implied_opcode_token12] = ACTIONS(132),
    [aux_sym__implied_opcode_token13] = ACTIONS(132),
    [aux_sym__implied_opcode_token14] = ACTIONS(132),
    [aux_sym__implied_opcode_token15] = ACTIONS(132),
    [aux_sym__implied_opcode_token16] = ACTIONS(132),
    [aux_sym__implied_opcode_token17] = ACTIONS(132),
    [aux_sym__implied_opcode_token18] = ACTIONS(132),
    [aux_sym__implied_opcode_token19] = ACTIONS(132),
    [aux_sym__implied_opcode_token20] = ACTIONS(132),
    [aux_sym__implied_opcode_token21] = ACTIONS(132),
    [aux_sym__implied_opcode_token22] = ACTIONS(132),
    [aux_sym__implied_opcode_token23] = ACTIONS(132),
    [aux_sym__implied_opcode_token24] = ACTIONS(132),
    [aux_sym__implied_opcode_token25] = ACTIONS(132),
    [aux_sym__implied_opcode_token26] = ACTIONS(132),
    [aux_sym__implied_opcode_token27] = ACTIONS(132),
    [aux_sym__implied_opcode_token28] = ACTIONS(132),
    [aux_sym__implied_opcode_token29] = ACTIONS(132),
    [aux_sym__implied_opcode_token30] = ACTIONS(132),
    [aux_sym__implied_opcode_token31] = ACTIONS(132),
    [aux_sym__implied_opcode_token32] = ACTIONS(132),
    [aux_sym__implied_opcode_token33] = ACTIONS(132),
    [aux_sym__implied_opcode_token34] = ACTIONS(132),
    [aux_sym__implied_opcode_token35] = ACTIONS(132),
    [aux_sym__implied_opcode_token36] = ACTIONS(132),
    [aux_sym__implied_opcode_token37] = ACTIONS(132),
    [aux_sym__relative_opcode_token1] = ACTIONS(132),
    [aux_sym__relative_opcode_token2] = ACTIONS(132),
    [aux_sym__relative_opcode_token3] = ACTIONS(132),
    [aux_sym__relative_opcode_token4] = ACTIONS(132),
    [aux_sym__relative_opcode_token5] = ACTIONS(132),
    [aux_sym__relative_opcode_token6] = ACTIONS(132),
    [aux_sym__relative_opcode_token7] = ACTIONS(132),
    [aux_sym__relative_opcode_token8] = ACTIONS(132),
    [aux_sym__relative_opcode_token9] = ACTIONS(132),
    [aux_sym__immediate_opcode_token1] = ACTIONS(132),
    [aux_sym__immediate_opcode_token2] = ACTIONS(132),
    [aux_sym__immediate_opcode_token3] = ACTIONS(132),
    [aux_sym__immediate_opcode_token4] = ACTIONS(132),
    [aux_sym__immediate_opcode_token5] = ACTIONS(132),
    [aux_sym__immediate_opcode_token6] = ACTIONS(132),
    [aux_sym__immediate_opcode_token7] = ACTIONS(132),
    [aux_sym__immediate_opcode_token8] = ACTIONS(132),
    [aux_sym__immediate_opcode_token9] = ACTIONS(132),
    [aux_sym__immediate_opcode_token10] = ACTIONS(132),
    [aux_sym__immediate_opcode_token11] = ACTIONS(132),
    [aux_sym__immediate_opcode_token12] = ACTIONS(132),
    [aux_sym__absolute_opcode_token1] = ACTIONS(132),
    [aux_sym__absolute_opcode_token2] = ACTIONS(132),
    [aux_sym__absolute_opcode_token3] = ACTIONS(132),
    [aux_sym__absolute_opcode_token4] = ACTIONS(132),
    [aux_sym__absolute_opcode_token5] = ACTIONS(132),
    [aux_sym__absolute_opcode_token6] = ACTIONS(132),
    [aux_sym__absolute_opcode_token7] = ACTIONS(132),
    [aux_sym__absolute_opcode_token8] = ACTIONS(132),
    [sym_cheap_local_label] = ACTIONS(130),
    [sym_local_label] = ACTIONS(132),
    [sym_global_label] = ACTIONS(132),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(136),
    [anon_sym_DOTexport] = ACTIONS(136),
    [anon_sym_DOTimport] = ACTIONS(136),
    [anon_sym_DOTsegment] = ACTIONS(136),
    [anon_sym_DOTsection] = ACTIONS(136),
    [anon_sym_word] = ACTIONS(136),
    [anon_sym_DOTbyte] = ACTIONS(136),
    [anon_sym_DOTaddr] = ACTIONS(136),
    [anon_sym_DOTproc] = ACTIONS(136),
    [anon_sym_DOTendproc] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_LT_LT] = ACTIONS(110),
    [anon_sym_GT_GT] = ACTIONS(110),
    [anon_sym_AMP] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [aux_sym__implied_opcode_token1] = ACTIONS(136),
    [aux_sym__implied_opcode_token2] = ACTIONS(136),
    [aux_sym__implied_opcode_token3] = ACTIONS(136),
    [aux_sym__implied_opcode_token4] = ACTIONS(136),
    [aux_sym__implied_opcode_token5] = ACTIONS(136),
    [aux_sym__implied_opcode_token6] = ACTIONS(136),
    [aux_sym__implied_opcode_token7] = ACTIONS(136),
    [aux_sym__implied_opcode_token8] = ACTIONS(136),
    [aux_sym__implied_opcode_token9] = ACTIONS(136),
    [aux_sym__implied_opcode_token10] = ACTIONS(136),
    [aux_sym__implied_opcode_token11] = ACTIONS(136),
    [aux_sym__implied_opcode_token12] = ACTIONS(136),
    [aux_sym__implied_opcode_token13] = ACTIONS(136),
    [aux_sym__implied_opcode_token14] = ACTIONS(136),
    [aux_sym__implied_opcode_token15] = ACTIONS(136),
    [aux_sym__implied_opcode_token16] = ACTIONS(136),
    [aux_sym__implied_opcode_token17] = ACTIONS(136),
    [aux_sym__implied_opcode_token18] = ACTIONS(136),
    [aux_sym__implied_opcode_token19] = ACTIONS(136),
    [aux_sym__implied_opcode_token20] = ACTIONS(136),
    [aux_sym__implied_opcode_token21] = ACTIONS(136),
    [aux_sym__implied_opcode_token22] = ACTIONS(136),
    [aux_sym__implied_opcode_token23] = ACTIONS(136),
    [aux_sym__implied_opcode_token24] = ACTIONS(136),
    [aux_sym__implied_opcode_token25] = ACTIONS(136),
    [aux_sym__implied_opcode_token26] = ACTIONS(136),
    [aux_sym__implied_opcode_token27] = ACTIONS(136),
    [aux_sym__implied_opcode_token28] = ACTIONS(136),
    [aux_sym__implied_opcode_token29] = ACTIONS(136),
    [aux_sym__implied_opcode_token30] = ACTIONS(136),
    [aux_sym__implied_opcode_token31] = ACTIONS(136),
    [aux_sym__implied_opcode_token32] = ACTIONS(136),
    [aux_sym__implied_opcode_token33] = ACTIONS(136),
    [aux_sym__implied_opcode_token34] = ACTIONS(136),
    [aux_sym__implied_opcode_token35] = ACTIONS(136),
    [aux_sym__implied_opcode_token36] = ACTIONS(136),
    [aux_sym__implied_opcode_token37] = ACTIONS(136),
    [aux_sym__relative_opcode_token1] = ACTIONS(136),
    [aux_sym__relative_opcode_token2] = ACTIONS(136),
    [aux_sym__relative_opcode_token3] = ACTIONS(136),
    [aux_sym__relative_opcode_token4] = ACTIONS(136),
    [aux_sym__relative_opcode_token5] = ACTIONS(136),
    [aux_sym__relative_opcode_token6] = ACTIONS(136),
    [aux_sym__relative_opcode_token7] = ACTIONS(136),
    [aux_sym__relative_opcode_token8] = ACTIONS(136),
    [aux_sym__relative_opcode_token9] = ACTIONS(136),
    [aux_sym__immediate_opcode_token1] = ACTIONS(136),
    [aux_sym__immediate_opcode_token2] = ACTIONS(136),
    [aux_sym__immediate_opcode_token3] = ACTIONS(136),
    [aux_sym__immediate_opcode_token4] = ACTIONS(136),
    [aux_sym__immediate_opcode_token5] = ACTIONS(136),
    [aux_sym__immediate_opcode_token6] = ACTIONS(136),
    [aux_sym__immediate_opcode_token7] = ACTIONS(136),
    [aux_sym__immediate_opcode_token8] = ACTIONS(136),
    [aux_sym__immediate_opcode_token9] = ACTIONS(136),
    [aux_sym__immediate_opcode_token10] = ACTIONS(136),
    [aux_sym__immediate_opcode_token11] = ACTIONS(136),
    [aux_sym__immediate_opcode_token12] = ACTIONS(136),
    [aux_sym__absolute_opcode_token1] = ACTIONS(136),
    [aux_sym__absolute_opcode_token2] = ACTIONS(136),
    [aux_sym__absolute_opcode_token3] = ACTIONS(136),
    [aux_sym__absolute_opcode_token4] = ACTIONS(136),
    [aux_sym__absolute_opcode_token5] = ACTIONS(136),
    [aux_sym__absolute_opcode_token6] = ACTIONS(136),
    [aux_sym__absolute_opcode_token7] = ACTIONS(136),
    [aux_sym__absolute_opcode_token8] = ACTIONS(136),
    [sym_cheap_local_label] = ACTIONS(134),
    [sym_local_label] = ACTIONS(136),
    [sym_global_label] = ACTIONS(136),
  },
  [11] = {
    [aux_sym__byte_list] = STATE(12),
    [sym__byte_literal] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(138),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(140),
    [anon_sym_DOTexport] = ACTIONS(140),
    [anon_sym_DOTimport] = ACTIONS(140),
    [anon_sym_DOTsegment] = ACTIONS(140),
    [anon_sym_DOTsection] = ACTIONS(140),
    [anon_sym_word] = ACTIONS(140),
    [anon_sym_DOTbyte] = ACTIONS(140),
    [anon_sym_DOTaddr] = ACTIONS(140),
    [anon_sym_DOTproc] = ACTIONS(140),
    [anon_sym_DOTendproc] = ACTIONS(140),
    [sym_num_literal] = ACTIONS(142),
    [sym_char_literal] = ACTIONS(142),
    [aux_sym__implied_opcode_token1] = ACTIONS(140),
    [aux_sym__implied_opcode_token2] = ACTIONS(140),
    [aux_sym__implied_opcode_token3] = ACTIONS(140),
    [aux_sym__implied_opcode_token4] = ACTIONS(140),
    [aux_sym__implied_opcode_token5] = ACTIONS(140),
    [aux_sym__implied_opcode_token6] = ACTIONS(140),
    [aux_sym__implied_opcode_token7] = ACTIONS(140),
    [aux_sym__implied_opcode_token8] = ACTIONS(140),
    [aux_sym__implied_opcode_token9] = ACTIONS(140),
    [aux_sym__implied_opcode_token10] = ACTIONS(140),
    [aux_sym__implied_opcode_token11] = ACTIONS(140),
    [aux_sym__implied_opcode_token12] = ACTIONS(140),
    [aux_sym__implied_opcode_token13] = ACTIONS(140),
    [aux_sym__implied_opcode_token14] = ACTIONS(140),
    [aux_sym__implied_opcode_token15] = ACTIONS(140),
    [aux_sym__implied_opcode_token16] = ACTIONS(140),
    [aux_sym__implied_opcode_token17] = ACTIONS(140),
    [aux_sym__implied_opcode_token18] = ACTIONS(140),
    [aux_sym__implied_opcode_token19] = ACTIONS(140),
    [aux_sym__implied_opcode_token20] = ACTIONS(140),
    [aux_sym__implied_opcode_token21] = ACTIONS(140),
    [aux_sym__implied_opcode_token22] = ACTIONS(140),
    [aux_sym__implied_opcode_token23] = ACTIONS(140),
    [aux_sym__implied_opcode_token24] = ACTIONS(140),
    [aux_sym__implied_opcode_token25] = ACTIONS(140),
    [aux_sym__implied_opcode_token26] = ACTIONS(140),
    [aux_sym__implied_opcode_token27] = ACTIONS(140),
    [aux_sym__implied_opcode_token28] = ACTIONS(140),
    [aux_sym__implied_opcode_token29] = ACTIONS(140),
    [aux_sym__implied_opcode_token30] = ACTIONS(140),
    [aux_sym__implied_opcode_token31] = ACTIONS(140),
    [aux_sym__implied_opcode_token32] = ACTIONS(140),
    [aux_sym__implied_opcode_token33] = ACTIONS(140),
    [aux_sym__implied_opcode_token34] = ACTIONS(140),
    [aux_sym__implied_opcode_token35] = ACTIONS(140),
    [aux_sym__implied_opcode_token36] = ACTIONS(140),
    [aux_sym__implied_opcode_token37] = ACTIONS(140),
    [aux_sym__relative_opcode_token1] = ACTIONS(140),
    [aux_sym__relative_opcode_token2] = ACTIONS(140),
    [aux_sym__relative_opcode_token3] = ACTIONS(140),
    [aux_sym__relative_opcode_token4] = ACTIONS(140),
    [aux_sym__relative_opcode_token5] = ACTIONS(140),
    [aux_sym__relative_opcode_token6] = ACTIONS(140),
    [aux_sym__relative_opcode_token7] = ACTIONS(140),
    [aux_sym__relative_opcode_token8] = ACTIONS(140),
    [aux_sym__relative_opcode_token9] = ACTIONS(140),
    [aux_sym__immediate_opcode_token1] = ACTIONS(140),
    [aux_sym__immediate_opcode_token2] = ACTIONS(140),
    [aux_sym__immediate_opcode_token3] = ACTIONS(140),
    [aux_sym__immediate_opcode_token4] = ACTIONS(140),
    [aux_sym__immediate_opcode_token5] = ACTIONS(140),
    [aux_sym__immediate_opcode_token6] = ACTIONS(140),
    [aux_sym__immediate_opcode_token7] = ACTIONS(140),
    [aux_sym__immediate_opcode_token8] = ACTIONS(140),
    [aux_sym__immediate_opcode_token9] = ACTIONS(140),
    [aux_sym__immediate_opcode_token10] = ACTIONS(140),
    [aux_sym__immediate_opcode_token11] = ACTIONS(140),
    [aux_sym__immediate_opcode_token12] = ACTIONS(140),
    [aux_sym__absolute_opcode_token1] = ACTIONS(140),
    [aux_sym__absolute_opcode_token2] = ACTIONS(140),
    [aux_sym__absolute_opcode_token3] = ACTIONS(140),
    [aux_sym__absolute_opcode_token4] = ACTIONS(140),
    [aux_sym__absolute_opcode_token5] = ACTIONS(140),
    [aux_sym__absolute_opcode_token6] = ACTIONS(140),
    [aux_sym__absolute_opcode_token7] = ACTIONS(140),
    [aux_sym__absolute_opcode_token8] = ACTIONS(140),
    [sym_cheap_local_label] = ACTIONS(138),
    [sym_local_label] = ACTIONS(140),
    [sym_global_label] = ACTIONS(140),
  },
  [12] = {
    [aux_sym__byte_list] = STATE(12),
    [sym__byte_literal] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(146),
    [anon_sym_DOTexport] = ACTIONS(146),
    [anon_sym_DOTimport] = ACTIONS(146),
    [anon_sym_DOTsegment] = ACTIONS(146),
    [anon_sym_DOTsection] = ACTIONS(146),
    [anon_sym_word] = ACTIONS(146),
    [anon_sym_DOTbyte] = ACTIONS(146),
    [anon_sym_DOTaddr] = ACTIONS(146),
    [anon_sym_DOTproc] = ACTIONS(146),
    [anon_sym_DOTendproc] = ACTIONS(146),
    [sym_num_literal] = ACTIONS(148),
    [sym_char_literal] = ACTIONS(148),
    [aux_sym__implied_opcode_token1] = ACTIONS(146),
    [aux_sym__implied_opcode_token2] = ACTIONS(146),
    [aux_sym__implied_opcode_token3] = ACTIONS(146),
    [aux_sym__implied_opcode_token4] = ACTIONS(146),
    [aux_sym__implied_opcode_token5] = ACTIONS(146),
    [aux_sym__implied_opcode_token6] = ACTIONS(146),
    [aux_sym__implied_opcode_token7] = ACTIONS(146),
    [aux_sym__implied_opcode_token8] = ACTIONS(146),
    [aux_sym__implied_opcode_token9] = ACTIONS(146),
    [aux_sym__implied_opcode_token10] = ACTIONS(146),
    [aux_sym__implied_opcode_token11] = ACTIONS(146),
    [aux_sym__implied_opcode_token12] = ACTIONS(146),
    [aux_sym__implied_opcode_token13] = ACTIONS(146),
    [aux_sym__implied_opcode_token14] = ACTIONS(146),
    [aux_sym__implied_opcode_token15] = ACTIONS(146),
    [aux_sym__implied_opcode_token16] = ACTIONS(146),
    [aux_sym__implied_opcode_token17] = ACTIONS(146),
    [aux_sym__implied_opcode_token18] = ACTIONS(146),
    [aux_sym__implied_opcode_token19] = ACTIONS(146),
    [aux_sym__implied_opcode_token20] = ACTIONS(146),
    [aux_sym__implied_opcode_token21] = ACTIONS(146),
    [aux_sym__implied_opcode_token22] = ACTIONS(146),
    [aux_sym__implied_opcode_token23] = ACTIONS(146),
    [aux_sym__implied_opcode_token24] = ACTIONS(146),
    [aux_sym__implied_opcode_token25] = ACTIONS(146),
    [aux_sym__implied_opcode_token26] = ACTIONS(146),
    [aux_sym__implied_opcode_token27] = ACTIONS(146),
    [aux_sym__implied_opcode_token28] = ACTIONS(146),
    [aux_sym__implied_opcode_token29] = ACTIONS(146),
    [aux_sym__implied_opcode_token30] = ACTIONS(146),
    [aux_sym__implied_opcode_token31] = ACTIONS(146),
    [aux_sym__implied_opcode_token32] = ACTIONS(146),
    [aux_sym__implied_opcode_token33] = ACTIONS(146),
    [aux_sym__implied_opcode_token34] = ACTIONS(146),
    [aux_sym__implied_opcode_token35] = ACTIONS(146),
    [aux_sym__implied_opcode_token36] = ACTIONS(146),
    [aux_sym__implied_opcode_token37] = ACTIONS(146),
    [aux_sym__relative_opcode_token1] = ACTIONS(146),
    [aux_sym__relative_opcode_token2] = ACTIONS(146),
    [aux_sym__relative_opcode_token3] = ACTIONS(146),
    [aux_sym__relative_opcode_token4] = ACTIONS(146),
    [aux_sym__relative_opcode_token5] = ACTIONS(146),
    [aux_sym__relative_opcode_token6] = ACTIONS(146),
    [aux_sym__relative_opcode_token7] = ACTIONS(146),
    [aux_sym__relative_opcode_token8] = ACTIONS(146),
    [aux_sym__relative_opcode_token9] = ACTIONS(146),
    [aux_sym__immediate_opcode_token1] = ACTIONS(146),
    [aux_sym__immediate_opcode_token2] = ACTIONS(146),
    [aux_sym__immediate_opcode_token3] = ACTIONS(146),
    [aux_sym__immediate_opcode_token4] = ACTIONS(146),
    [aux_sym__immediate_opcode_token5] = ACTIONS(146),
    [aux_sym__immediate_opcode_token6] = ACTIONS(146),
    [aux_sym__immediate_opcode_token7] = ACTIONS(146),
    [aux_sym__immediate_opcode_token8] = ACTIONS(146),
    [aux_sym__immediate_opcode_token9] = ACTIONS(146),
    [aux_sym__immediate_opcode_token10] = ACTIONS(146),
    [aux_sym__immediate_opcode_token11] = ACTIONS(146),
    [aux_sym__immediate_opcode_token12] = ACTIONS(146),
    [aux_sym__absolute_opcode_token1] = ACTIONS(146),
    [aux_sym__absolute_opcode_token2] = ACTIONS(146),
    [aux_sym__absolute_opcode_token3] = ACTIONS(146),
    [aux_sym__absolute_opcode_token4] = ACTIONS(146),
    [aux_sym__absolute_opcode_token5] = ACTIONS(146),
    [aux_sym__absolute_opcode_token6] = ACTIONS(146),
    [aux_sym__absolute_opcode_token7] = ACTIONS(146),
    [aux_sym__absolute_opcode_token8] = ACTIONS(146),
    [sym_cheap_local_label] = ACTIONS(144),
    [sym_local_label] = ACTIONS(146),
    [sym_global_label] = ACTIONS(146),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(153),
    [anon_sym_DOTexport] = ACTIONS(153),
    [anon_sym_DOTimport] = ACTIONS(153),
    [anon_sym_DOTsegment] = ACTIONS(153),
    [anon_sym_DOTsection] = ACTIONS(153),
    [anon_sym_word] = ACTIONS(153),
    [anon_sym_DOTbyte] = ACTIONS(153),
    [anon_sym_DOTaddr] = ACTIONS(153),
    [anon_sym_DOTproc] = ACTIONS(153),
    [anon_sym_DOTendproc] = ACTIONS(153),
    [sym_num_literal] = ACTIONS(151),
    [sym_char_literal] = ACTIONS(151),
    [aux_sym__implied_opcode_token1] = ACTIONS(153),
    [aux_sym__implied_opcode_token2] = ACTIONS(153),
    [aux_sym__implied_opcode_token3] = ACTIONS(153),
    [aux_sym__implied_opcode_token4] = ACTIONS(153),
    [aux_sym__implied_opcode_token5] = ACTIONS(153),
    [aux_sym__implied_opcode_token6] = ACTIONS(153),
    [aux_sym__implied_opcode_token7] = ACTIONS(153),
    [aux_sym__implied_opcode_token8] = ACTIONS(153),
    [aux_sym__implied_opcode_token9] = ACTIONS(153),
    [aux_sym__implied_opcode_token10] = ACTIONS(153),
    [aux_sym__implied_opcode_token11] = ACTIONS(153),
    [aux_sym__implied_opcode_token12] = ACTIONS(153),
    [aux_sym__implied_opcode_token13] = ACTIONS(153),
    [aux_sym__implied_opcode_token14] = ACTIONS(153),
    [aux_sym__implied_opcode_token15] = ACTIONS(153),
    [aux_sym__implied_opcode_token16] = ACTIONS(153),
    [aux_sym__implied_opcode_token17] = ACTIONS(153),
    [aux_sym__implied_opcode_token18] = ACTIONS(153),
    [aux_sym__implied_opcode_token19] = ACTIONS(153),
    [aux_sym__implied_opcode_token20] = ACTIONS(153),
    [aux_sym__implied_opcode_token21] = ACTIONS(153),
    [aux_sym__implied_opcode_token22] = ACTIONS(153),
    [aux_sym__implied_opcode_token23] = ACTIONS(153),
    [aux_sym__implied_opcode_token24] = ACTIONS(153),
    [aux_sym__implied_opcode_token25] = ACTIONS(153),
    [aux_sym__implied_opcode_token26] = ACTIONS(153),
    [aux_sym__implied_opcode_token27] = ACTIONS(153),
    [aux_sym__implied_opcode_token28] = ACTIONS(153),
    [aux_sym__implied_opcode_token29] = ACTIONS(153),
    [aux_sym__implied_opcode_token30] = ACTIONS(153),
    [aux_sym__implied_opcode_token31] = ACTIONS(153),
    [aux_sym__implied_opcode_token32] = ACTIONS(153),
    [aux_sym__implied_opcode_token33] = ACTIONS(153),
    [aux_sym__implied_opcode_token34] = ACTIONS(153),
    [aux_sym__implied_opcode_token35] = ACTIONS(153),
    [aux_sym__implied_opcode_token36] = ACTIONS(153),
    [aux_sym__implied_opcode_token37] = ACTIONS(153),
    [aux_sym__relative_opcode_token1] = ACTIONS(153),
    [aux_sym__relative_opcode_token2] = ACTIONS(153),
    [aux_sym__relative_opcode_token3] = ACTIONS(153),
    [aux_sym__relative_opcode_token4] = ACTIONS(153),
    [aux_sym__relative_opcode_token5] = ACTIONS(153),
    [aux_sym__relative_opcode_token6] = ACTIONS(153),
    [aux_sym__relative_opcode_token7] = ACTIONS(153),
    [aux_sym__relative_opcode_token8] = ACTIONS(153),
    [aux_sym__relative_opcode_token9] = ACTIONS(153),
    [aux_sym__immediate_opcode_token1] = ACTIONS(153),
    [aux_sym__immediate_opcode_token2] = ACTIONS(153),
    [aux_sym__immediate_opcode_token3] = ACTIONS(153),
    [aux_sym__immediate_opcode_token4] = ACTIONS(153),
    [aux_sym__immediate_opcode_token5] = ACTIONS(153),
    [aux_sym__immediate_opcode_token6] = ACTIONS(153),
    [aux_sym__immediate_opcode_token7] = ACTIONS(153),
    [aux_sym__immediate_opcode_token8] = ACTIONS(153),
    [aux_sym__immediate_opcode_token9] = ACTIONS(153),
    [aux_sym__immediate_opcode_token10] = ACTIONS(153),
    [aux_sym__immediate_opcode_token11] = ACTIONS(153),
    [aux_sym__immediate_opcode_token12] = ACTIONS(153),
    [aux_sym__absolute_opcode_token1] = ACTIONS(153),
    [aux_sym__absolute_opcode_token2] = ACTIONS(153),
    [aux_sym__absolute_opcode_token3] = ACTIONS(153),
    [aux_sym__absolute_opcode_token4] = ACTIONS(153),
    [aux_sym__absolute_opcode_token5] = ACTIONS(153),
    [aux_sym__absolute_opcode_token6] = ACTIONS(153),
    [aux_sym__absolute_opcode_token7] = ACTIONS(153),
    [aux_sym__absolute_opcode_token8] = ACTIONS(153),
    [sym_comma] = ACTIONS(155),
    [sym_cheap_local_label] = ACTIONS(151),
    [sym_local_label] = ACTIONS(153),
    [sym_global_label] = ACTIONS(153),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(146),
    [anon_sym_DOTexport] = ACTIONS(146),
    [anon_sym_DOTimport] = ACTIONS(146),
    [anon_sym_DOTsegment] = ACTIONS(146),
    [anon_sym_DOTsection] = ACTIONS(146),
    [anon_sym_word] = ACTIONS(146),
    [anon_sym_DOTbyte] = ACTIONS(146),
    [anon_sym_DOTaddr] = ACTIONS(146),
    [anon_sym_DOTproc] = ACTIONS(146),
    [anon_sym_DOTendproc] = ACTIONS(146),
    [sym_num_literal] = ACTIONS(144),
    [sym_char_literal] = ACTIONS(144),
    [aux_sym__implied_opcode_token1] = ACTIONS(146),
    [aux_sym__implied_opcode_token2] = ACTIONS(146),
    [aux_sym__implied_opcode_token3] = ACTIONS(146),
    [aux_sym__implied_opcode_token4] = ACTIONS(146),
    [aux_sym__implied_opcode_token5] = ACTIONS(146),
    [aux_sym__implied_opcode_token6] = ACTIONS(146),
    [aux_sym__implied_opcode_token7] = ACTIONS(146),
    [aux_sym__implied_opcode_token8] = ACTIONS(146),
    [aux_sym__implied_opcode_token9] = ACTIONS(146),
    [aux_sym__implied_opcode_token10] = ACTIONS(146),
    [aux_sym__implied_opcode_token11] = ACTIONS(146),
    [aux_sym__implied_opcode_token12] = ACTIONS(146),
    [aux_sym__implied_opcode_token13] = ACTIONS(146),
    [aux_sym__implied_opcode_token14] = ACTIONS(146),
    [aux_sym__implied_opcode_token15] = ACTIONS(146),
    [aux_sym__implied_opcode_token16] = ACTIONS(146),
    [aux_sym__implied_opcode_token17] = ACTIONS(146),
    [aux_sym__implied_opcode_token18] = ACTIONS(146),
    [aux_sym__implied_opcode_token19] = ACTIONS(146),
    [aux_sym__implied_opcode_token20] = ACTIONS(146),
    [aux_sym__implied_opcode_token21] = ACTIONS(146),
    [aux_sym__implied_opcode_token22] = ACTIONS(146),
    [aux_sym__implied_opcode_token23] = ACTIONS(146),
    [aux_sym__implied_opcode_token24] = ACTIONS(146),
    [aux_sym__implied_opcode_token25] = ACTIONS(146),
    [aux_sym__implied_opcode_token26] = ACTIONS(146),
    [aux_sym__implied_opcode_token27] = ACTIONS(146),
    [aux_sym__implied_opcode_token28] = ACTIONS(146),
    [aux_sym__implied_opcode_token29] = ACTIONS(146),
    [aux_sym__implied_opcode_token30] = ACTIONS(146),
    [aux_sym__implied_opcode_token31] = ACTIONS(146),
    [aux_sym__implied_opcode_token32] = ACTIONS(146),
    [aux_sym__implied_opcode_token33] = ACTIONS(146),
    [aux_sym__implied_opcode_token34] = ACTIONS(146),
    [aux_sym__implied_opcode_token35] = ACTIONS(146),
    [aux_sym__implied_opcode_token36] = ACTIONS(146),
    [aux_sym__implied_opcode_token37] = ACTIONS(146),
    [aux_sym__relative_opcode_token1] = ACTIONS(146),
    [aux_sym__relative_opcode_token2] = ACTIONS(146),
    [aux_sym__relative_opcode_token3] = ACTIONS(146),
    [aux_sym__relative_opcode_token4] = ACTIONS(146),
    [aux_sym__relative_opcode_token5] = ACTIONS(146),
    [aux_sym__relative_opcode_token6] = ACTIONS(146),
    [aux_sym__relative_opcode_token7] = ACTIONS(146),
    [aux_sym__relative_opcode_token8] = ACTIONS(146),
    [aux_sym__relative_opcode_token9] = ACTIONS(146),
    [aux_sym__immediate_opcode_token1] = ACTIONS(146),
    [aux_sym__immediate_opcode_token2] = ACTIONS(146),
    [aux_sym__immediate_opcode_token3] = ACTIONS(146),
    [aux_sym__immediate_opcode_token4] = ACTIONS(146),
    [aux_sym__immediate_opcode_token5] = ACTIONS(146),
    [aux_sym__immediate_opcode_token6] = ACTIONS(146),
    [aux_sym__immediate_opcode_token7] = ACTIONS(146),
    [aux_sym__immediate_opcode_token8] = ACTIONS(146),
    [aux_sym__immediate_opcode_token9] = ACTIONS(146),
    [aux_sym__immediate_opcode_token10] = ACTIONS(146),
    [aux_sym__immediate_opcode_token11] = ACTIONS(146),
    [aux_sym__immediate_opcode_token12] = ACTIONS(146),
    [aux_sym__absolute_opcode_token1] = ACTIONS(146),
    [aux_sym__absolute_opcode_token2] = ACTIONS(146),
    [aux_sym__absolute_opcode_token3] = ACTIONS(146),
    [aux_sym__absolute_opcode_token4] = ACTIONS(146),
    [aux_sym__absolute_opcode_token5] = ACTIONS(146),
    [aux_sym__absolute_opcode_token6] = ACTIONS(146),
    [aux_sym__absolute_opcode_token7] = ACTIONS(146),
    [aux_sym__absolute_opcode_token8] = ACTIONS(146),
    [sym_cheap_local_label] = ACTIONS(144),
    [sym_local_label] = ACTIONS(146),
    [sym_global_label] = ACTIONS(146),
  },
  [15] = {
    [sym__reg_y] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(159),
    [anon_sym_DOTexport] = ACTIONS(159),
    [anon_sym_DOTimport] = ACTIONS(159),
    [anon_sym_DOTsegment] = ACTIONS(159),
    [anon_sym_DOTsection] = ACTIONS(159),
    [anon_sym_word] = ACTIONS(159),
    [anon_sym_DOTbyte] = ACTIONS(159),
    [anon_sym_DOTaddr] = ACTIONS(159),
    [anon_sym_DOTproc] = ACTIONS(159),
    [anon_sym_DOTendproc] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(161),
    [aux_sym__implied_opcode_token1] = ACTIONS(159),
    [aux_sym__implied_opcode_token2] = ACTIONS(159),
    [aux_sym__implied_opcode_token3] = ACTIONS(159),
    [aux_sym__implied_opcode_token4] = ACTIONS(159),
    [aux_sym__implied_opcode_token5] = ACTIONS(159),
    [aux_sym__implied_opcode_token6] = ACTIONS(159),
    [aux_sym__implied_opcode_token7] = ACTIONS(159),
    [aux_sym__implied_opcode_token8] = ACTIONS(159),
    [aux_sym__implied_opcode_token9] = ACTIONS(159),
    [aux_sym__implied_opcode_token10] = ACTIONS(159),
    [aux_sym__implied_opcode_token11] = ACTIONS(159),
    [aux_sym__implied_opcode_token12] = ACTIONS(159),
    [aux_sym__implied_opcode_token13] = ACTIONS(159),
    [aux_sym__implied_opcode_token14] = ACTIONS(159),
    [aux_sym__implied_opcode_token15] = ACTIONS(159),
    [aux_sym__implied_opcode_token16] = ACTIONS(159),
    [aux_sym__implied_opcode_token17] = ACTIONS(159),
    [aux_sym__implied_opcode_token18] = ACTIONS(159),
    [aux_sym__implied_opcode_token19] = ACTIONS(159),
    [aux_sym__implied_opcode_token20] = ACTIONS(159),
    [aux_sym__implied_opcode_token21] = ACTIONS(159),
    [aux_sym__implied_opcode_token22] = ACTIONS(159),
    [aux_sym__implied_opcode_token23] = ACTIONS(159),
    [aux_sym__implied_opcode_token24] = ACTIONS(159),
    [aux_sym__implied_opcode_token25] = ACTIONS(159),
    [aux_sym__implied_opcode_token26] = ACTIONS(159),
    [aux_sym__implied_opcode_token27] = ACTIONS(159),
    [aux_sym__implied_opcode_token28] = ACTIONS(159),
    [aux_sym__implied_opcode_token29] = ACTIONS(159),
    [aux_sym__implied_opcode_token30] = ACTIONS(159),
    [aux_sym__implied_opcode_token31] = ACTIONS(159),
    [aux_sym__implied_opcode_token32] = ACTIONS(159),
    [aux_sym__implied_opcode_token33] = ACTIONS(159),
    [aux_sym__implied_opcode_token34] = ACTIONS(159),
    [aux_sym__implied_opcode_token35] = ACTIONS(159),
    [aux_sym__implied_opcode_token36] = ACTIONS(159),
    [aux_sym__implied_opcode_token37] = ACTIONS(159),
    [aux_sym__relative_opcode_token1] = ACTIONS(159),
    [aux_sym__relative_opcode_token2] = ACTIONS(159),
    [aux_sym__relative_opcode_token3] = ACTIONS(159),
    [aux_sym__relative_opcode_token4] = ACTIONS(159),
    [aux_sym__relative_opcode_token5] = ACTIONS(159),
    [aux_sym__relative_opcode_token6] = ACTIONS(159),
    [aux_sym__relative_opcode_token7] = ACTIONS(159),
    [aux_sym__relative_opcode_token8] = ACTIONS(159),
    [aux_sym__relative_opcode_token9] = ACTIONS(159),
    [aux_sym__immediate_opcode_token1] = ACTIONS(159),
    [aux_sym__immediate_opcode_token2] = ACTIONS(159),
    [aux_sym__immediate_opcode_token3] = ACTIONS(159),
    [aux_sym__immediate_opcode_token4] = ACTIONS(159),
    [aux_sym__immediate_opcode_token5] = ACTIONS(159),
    [aux_sym__immediate_opcode_token6] = ACTIONS(159),
    [aux_sym__immediate_opcode_token7] = ACTIONS(159),
    [aux_sym__immediate_opcode_token8] = ACTIONS(159),
    [aux_sym__immediate_opcode_token9] = ACTIONS(159),
    [aux_sym__immediate_opcode_token10] = ACTIONS(159),
    [aux_sym__immediate_opcode_token11] = ACTIONS(159),
    [aux_sym__immediate_opcode_token12] = ACTIONS(159),
    [aux_sym__absolute_opcode_token1] = ACTIONS(159),
    [aux_sym__absolute_opcode_token2] = ACTIONS(159),
    [aux_sym__absolute_opcode_token3] = ACTIONS(159),
    [aux_sym__absolute_opcode_token4] = ACTIONS(159),
    [aux_sym__absolute_opcode_token5] = ACTIONS(159),
    [aux_sym__absolute_opcode_token6] = ACTIONS(159),
    [aux_sym__absolute_opcode_token7] = ACTIONS(159),
    [aux_sym__absolute_opcode_token8] = ACTIONS(159),
    [sym_cheap_local_label] = ACTIONS(157),
    [sym_local_label] = ACTIONS(159),
    [sym_global_label] = ACTIONS(159),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(165),
    [anon_sym_DOTexport] = ACTIONS(165),
    [anon_sym_DOTimport] = ACTIONS(165),
    [anon_sym_DOTsegment] = ACTIONS(165),
    [anon_sym_DOTsection] = ACTIONS(165),
    [anon_sym_word] = ACTIONS(165),
    [anon_sym_DOTbyte] = ACTIONS(165),
    [anon_sym_DOTaddr] = ACTIONS(165),
    [anon_sym_DOTproc] = ACTIONS(165),
    [anon_sym_DOTendproc] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(163),
    [aux_sym__implied_opcode_token1] = ACTIONS(165),
    [aux_sym__implied_opcode_token2] = ACTIONS(165),
    [aux_sym__implied_opcode_token3] = ACTIONS(165),
    [aux_sym__implied_opcode_token4] = ACTIONS(165),
    [aux_sym__implied_opcode_token5] = ACTIONS(165),
    [aux_sym__implied_opcode_token6] = ACTIONS(165),
    [aux_sym__implied_opcode_token7] = ACTIONS(165),
    [aux_sym__implied_opcode_token8] = ACTIONS(165),
    [aux_sym__implied_opcode_token9] = ACTIONS(165),
    [aux_sym__implied_opcode_token10] = ACTIONS(165),
    [aux_sym__implied_opcode_token11] = ACTIONS(165),
    [aux_sym__implied_opcode_token12] = ACTIONS(165),
    [aux_sym__implied_opcode_token13] = ACTIONS(165),
    [aux_sym__implied_opcode_token14] = ACTIONS(165),
    [aux_sym__implied_opcode_token15] = ACTIONS(165),
    [aux_sym__implied_opcode_token16] = ACTIONS(165),
    [aux_sym__implied_opcode_token17] = ACTIONS(165),
    [aux_sym__implied_opcode_token18] = ACTIONS(165),
    [aux_sym__implied_opcode_token19] = ACTIONS(165),
    [aux_sym__implied_opcode_token20] = ACTIONS(165),
    [aux_sym__implied_opcode_token21] = ACTIONS(165),
    [aux_sym__implied_opcode_token22] = ACTIONS(165),
    [aux_sym__implied_opcode_token23] = ACTIONS(165),
    [aux_sym__implied_opcode_token24] = ACTIONS(165),
    [aux_sym__implied_opcode_token25] = ACTIONS(165),
    [aux_sym__implied_opcode_token26] = ACTIONS(165),
    [aux_sym__implied_opcode_token27] = ACTIONS(165),
    [aux_sym__implied_opcode_token28] = ACTIONS(165),
    [aux_sym__implied_opcode_token29] = ACTIONS(165),
    [aux_sym__implied_opcode_token30] = ACTIONS(165),
    [aux_sym__implied_opcode_token31] = ACTIONS(165),
    [aux_sym__implied_opcode_token32] = ACTIONS(165),
    [aux_sym__implied_opcode_token33] = ACTIONS(165),
    [aux_sym__implied_opcode_token34] = ACTIONS(165),
    [aux_sym__implied_opcode_token35] = ACTIONS(165),
    [aux_sym__implied_opcode_token36] = ACTIONS(165),
    [aux_sym__implied_opcode_token37] = ACTIONS(165),
    [aux_sym__relative_opcode_token1] = ACTIONS(165),
    [aux_sym__relative_opcode_token2] = ACTIONS(165),
    [aux_sym__relative_opcode_token3] = ACTIONS(165),
    [aux_sym__relative_opcode_token4] = ACTIONS(165),
    [aux_sym__relative_opcode_token5] = ACTIONS(165),
    [aux_sym__relative_opcode_token6] = ACTIONS(165),
    [aux_sym__relative_opcode_token7] = ACTIONS(165),
    [aux_sym__relative_opcode_token8] = ACTIONS(165),
    [aux_sym__relative_opcode_token9] = ACTIONS(165),
    [aux_sym__immediate_opcode_token1] = ACTIONS(165),
    [aux_sym__immediate_opcode_token2] = ACTIONS(165),
    [aux_sym__immediate_opcode_token3] = ACTIONS(165),
    [aux_sym__immediate_opcode_token4] = ACTIONS(165),
    [aux_sym__immediate_opcode_token5] = ACTIONS(165),
    [aux_sym__immediate_opcode_token6] = ACTIONS(165),
    [aux_sym__immediate_opcode_token7] = ACTIONS(165),
    [aux_sym__immediate_opcode_token8] = ACTIONS(165),
    [aux_sym__immediate_opcode_token9] = ACTIONS(165),
    [aux_sym__immediate_opcode_token10] = ACTIONS(165),
    [aux_sym__immediate_opcode_token11] = ACTIONS(165),
    [aux_sym__immediate_opcode_token12] = ACTIONS(165),
    [aux_sym__absolute_opcode_token1] = ACTIONS(165),
    [aux_sym__absolute_opcode_token2] = ACTIONS(165),
    [aux_sym__absolute_opcode_token3] = ACTIONS(165),
    [aux_sym__absolute_opcode_token4] = ACTIONS(165),
    [aux_sym__absolute_opcode_token5] = ACTIONS(165),
    [aux_sym__absolute_opcode_token6] = ACTIONS(165),
    [aux_sym__absolute_opcode_token7] = ACTIONS(165),
    [aux_sym__absolute_opcode_token8] = ACTIONS(165),
    [sym_cheap_local_label] = ACTIONS(163),
    [sym_local_label] = ACTIONS(165),
    [sym_global_label] = ACTIONS(165),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_comment] = ACTIONS(169),
    [sym__ws_sep] = ACTIONS(171),
    [anon_sym_DOTinclude] = ACTIONS(173),
    [anon_sym_DOTexport] = ACTIONS(173),
    [anon_sym_DOTimport] = ACTIONS(173),
    [anon_sym_DOTsegment] = ACTIONS(173),
    [anon_sym_DOTsection] = ACTIONS(173),
    [anon_sym_word] = ACTIONS(173),
    [anon_sym_DOTbyte] = ACTIONS(173),
    [anon_sym_DOTaddr] = ACTIONS(173),
    [anon_sym_DOTproc] = ACTIONS(173),
    [anon_sym_DOTendproc] = ACTIONS(173),
    [aux_sym__implied_opcode_token1] = ACTIONS(173),
    [aux_sym__implied_opcode_token2] = ACTIONS(173),
    [aux_sym__implied_opcode_token3] = ACTIONS(173),
    [aux_sym__implied_opcode_token4] = ACTIONS(173),
    [aux_sym__implied_opcode_token5] = ACTIONS(173),
    [aux_sym__implied_opcode_token6] = ACTIONS(173),
    [aux_sym__implied_opcode_token7] = ACTIONS(173),
    [aux_sym__implied_opcode_token8] = ACTIONS(173),
    [aux_sym__implied_opcode_token9] = ACTIONS(173),
    [aux_sym__implied_opcode_token10] = ACTIONS(173),
    [aux_sym__implied_opcode_token11] = ACTIONS(173),
    [aux_sym__implied_opcode_token12] = ACTIONS(173),
    [aux_sym__implied_opcode_token13] = ACTIONS(173),
    [aux_sym__implied_opcode_token14] = ACTIONS(173),
    [aux_sym__implied_opcode_token15] = ACTIONS(173),
    [aux_sym__implied_opcode_token16] = ACTIONS(173),
    [aux_sym__implied_opcode_token17] = ACTIONS(173),
    [aux_sym__implied_opcode_token18] = ACTIONS(173),
    [aux_sym__implied_opcode_token19] = ACTIONS(173),
    [aux_sym__implied_opcode_token20] = ACTIONS(173),
    [aux_sym__implied_opcode_token21] = ACTIONS(173),
    [aux_sym__implied_opcode_token22] = ACTIONS(173),
    [aux_sym__implied_opcode_token23] = ACTIONS(173),
    [aux_sym__implied_opcode_token24] = ACTIONS(173),
    [aux_sym__implied_opcode_token25] = ACTIONS(173),
    [aux_sym__implied_opcode_token26] = ACTIONS(173),
    [aux_sym__implied_opcode_token27] = ACTIONS(173),
    [aux_sym__implied_opcode_token28] = ACTIONS(173),
    [aux_sym__implied_opcode_token29] = ACTIONS(173),
    [aux_sym__implied_opcode_token30] = ACTIONS(173),
    [aux_sym__implied_opcode_token31] = ACTIONS(173),
    [aux_sym__implied_opcode_token32] = ACTIONS(173),
    [aux_sym__implied_opcode_token33] = ACTIONS(173),
    [aux_sym__implied_opcode_token34] = ACTIONS(173),
    [aux_sym__implied_opcode_token35] = ACTIONS(173),
    [aux_sym__implied_opcode_token36] = ACTIONS(173),
    [aux_sym__implied_opcode_token37] = ACTIONS(173),
    [aux_sym__relative_opcode_token1] = ACTIONS(173),
    [aux_sym__relative_opcode_token2] = ACTIONS(173),
    [aux_sym__relative_opcode_token3] = ACTIONS(173),
    [aux_sym__relative_opcode_token4] = ACTIONS(173),
    [aux_sym__relative_opcode_token5] = ACTIONS(173),
    [aux_sym__relative_opcode_token6] = ACTIONS(173),
    [aux_sym__relative_opcode_token7] = ACTIONS(173),
    [aux_sym__relative_opcode_token8] = ACTIONS(173),
    [aux_sym__relative_opcode_token9] = ACTIONS(173),
    [aux_sym__immediate_opcode_token1] = ACTIONS(173),
    [aux_sym__immediate_opcode_token2] = ACTIONS(173),
    [aux_sym__immediate_opcode_token3] = ACTIONS(173),
    [aux_sym__immediate_opcode_token4] = ACTIONS(173),
    [aux_sym__immediate_opcode_token5] = ACTIONS(173),
    [aux_sym__immediate_opcode_token6] = ACTIONS(173),
    [aux_sym__immediate_opcode_token7] = ACTIONS(173),
    [aux_sym__immediate_opcode_token8] = ACTIONS(173),
    [aux_sym__immediate_opcode_token9] = ACTIONS(173),
    [aux_sym__immediate_opcode_token10] = ACTIONS(173),
    [aux_sym__immediate_opcode_token11] = ACTIONS(173),
    [aux_sym__immediate_opcode_token12] = ACTIONS(173),
    [aux_sym__absolute_opcode_token1] = ACTIONS(173),
    [aux_sym__absolute_opcode_token2] = ACTIONS(173),
    [aux_sym__absolute_opcode_token3] = ACTIONS(173),
    [aux_sym__absolute_opcode_token4] = ACTIONS(173),
    [aux_sym__absolute_opcode_token5] = ACTIONS(173),
    [aux_sym__absolute_opcode_token6] = ACTIONS(173),
    [aux_sym__absolute_opcode_token7] = ACTIONS(173),
    [aux_sym__absolute_opcode_token8] = ACTIONS(173),
    [sym_cheap_local_label] = ACTIONS(173),
    [sym_local_label] = ACTIONS(173),
    [sym_global_label] = ACTIONS(173),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(177),
    [anon_sym_DOTexport] = ACTIONS(177),
    [anon_sym_DOTimport] = ACTIONS(177),
    [anon_sym_DOTsegment] = ACTIONS(177),
    [anon_sym_DOTsection] = ACTIONS(177),
    [anon_sym_word] = ACTIONS(177),
    [anon_sym_DOTbyte] = ACTIONS(177),
    [anon_sym_DOTaddr] = ACTIONS(177),
    [anon_sym_DOTproc] = ACTIONS(177),
    [anon_sym_DOTendproc] = ACTIONS(177),
    [aux_sym__implied_opcode_token1] = ACTIONS(177),
    [aux_sym__implied_opcode_token2] = ACTIONS(177),
    [aux_sym__implied_opcode_token3] = ACTIONS(177),
    [aux_sym__implied_opcode_token4] = ACTIONS(177),
    [aux_sym__implied_opcode_token5] = ACTIONS(177),
    [aux_sym__implied_opcode_token6] = ACTIONS(177),
    [aux_sym__implied_opcode_token7] = ACTIONS(177),
    [aux_sym__implied_opcode_token8] = ACTIONS(177),
    [aux_sym__implied_opcode_token9] = ACTIONS(177),
    [aux_sym__implied_opcode_token10] = ACTIONS(177),
    [aux_sym__implied_opcode_token11] = ACTIONS(177),
    [aux_sym__implied_opcode_token12] = ACTIONS(177),
    [aux_sym__implied_opcode_token13] = ACTIONS(177),
    [aux_sym__implied_opcode_token14] = ACTIONS(177),
    [aux_sym__implied_opcode_token15] = ACTIONS(177),
    [aux_sym__implied_opcode_token16] = ACTIONS(177),
    [aux_sym__implied_opcode_token17] = ACTIONS(177),
    [aux_sym__implied_opcode_token18] = ACTIONS(177),
    [aux_sym__implied_opcode_token19] = ACTIONS(177),
    [aux_sym__implied_opcode_token20] = ACTIONS(177),
    [aux_sym__implied_opcode_token21] = ACTIONS(177),
    [aux_sym__implied_opcode_token22] = ACTIONS(177),
    [aux_sym__implied_opcode_token23] = ACTIONS(177),
    [aux_sym__implied_opcode_token24] = ACTIONS(177),
    [aux_sym__implied_opcode_token25] = ACTIONS(177),
    [aux_sym__implied_opcode_token26] = ACTIONS(177),
    [aux_sym__implied_opcode_token27] = ACTIONS(177),
    [aux_sym__implied_opcode_token28] = ACTIONS(177),
    [aux_sym__implied_opcode_token29] = ACTIONS(177),
    [aux_sym__implied_opcode_token30] = ACTIONS(177),
    [aux_sym__implied_opcode_token31] = ACTIONS(177),
    [aux_sym__implied_opcode_token32] = ACTIONS(177),
    [aux_sym__implied_opcode_token33] = ACTIONS(177),
    [aux_sym__implied_opcode_token34] = ACTIONS(177),
    [aux_sym__implied_opcode_token35] = ACTIONS(177),
    [aux_sym__implied_opcode_token36] = ACTIONS(177),
    [aux_sym__implied_opcode_token37] = ACTIONS(177),
    [aux_sym__relative_opcode_token1] = ACTIONS(177),
    [aux_sym__relative_opcode_token2] = ACTIONS(177),
    [aux_sym__relative_opcode_token3] = ACTIONS(177),
    [aux_sym__relative_opcode_token4] = ACTIONS(177),
    [aux_sym__relative_opcode_token5] = ACTIONS(177),
    [aux_sym__relative_opcode_token6] = ACTIONS(177),
    [aux_sym__relative_opcode_token7] = ACTIONS(177),
    [aux_sym__relative_opcode_token8] = ACTIONS(177),
    [aux_sym__relative_opcode_token9] = ACTIONS(177),
    [aux_sym__immediate_opcode_token1] = ACTIONS(177),
    [aux_sym__immediate_opcode_token2] = ACTIONS(177),
    [aux_sym__immediate_opcode_token3] = ACTIONS(177),
    [aux_sym__immediate_opcode_token4] = ACTIONS(177),
    [aux_sym__immediate_opcode_token5] = ACTIONS(177),
    [aux_sym__immediate_opcode_token6] = ACTIONS(177),
    [aux_sym__immediate_opcode_token7] = ACTIONS(177),
    [aux_sym__immediate_opcode_token8] = ACTIONS(177),
    [aux_sym__immediate_opcode_token9] = ACTIONS(177),
    [aux_sym__immediate_opcode_token10] = ACTIONS(177),
    [aux_sym__immediate_opcode_token11] = ACTIONS(177),
    [aux_sym__immediate_opcode_token12] = ACTIONS(177),
    [aux_sym__absolute_opcode_token1] = ACTIONS(177),
    [aux_sym__absolute_opcode_token2] = ACTIONS(177),
    [aux_sym__absolute_opcode_token3] = ACTIONS(177),
    [aux_sym__absolute_opcode_token4] = ACTIONS(177),
    [aux_sym__absolute_opcode_token5] = ACTIONS(177),
    [aux_sym__absolute_opcode_token6] = ACTIONS(177),
    [aux_sym__absolute_opcode_token7] = ACTIONS(177),
    [aux_sym__absolute_opcode_token8] = ACTIONS(177),
    [sym_cheap_local_label] = ACTIONS(175),
    [sym_local_label] = ACTIONS(177),
    [sym_global_label] = ACTIONS(177),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(181),
    [anon_sym_DOTexport] = ACTIONS(181),
    [anon_sym_DOTimport] = ACTIONS(181),
    [anon_sym_DOTsegment] = ACTIONS(181),
    [anon_sym_DOTsection] = ACTIONS(181),
    [anon_sym_word] = ACTIONS(181),
    [anon_sym_DOTbyte] = ACTIONS(181),
    [anon_sym_DOTaddr] = ACTIONS(181),
    [anon_sym_DOTproc] = ACTIONS(181),
    [anon_sym_DOTendproc] = ACTIONS(181),
    [aux_sym__implied_opcode_token1] = ACTIONS(181),
    [aux_sym__implied_opcode_token2] = ACTIONS(181),
    [aux_sym__implied_opcode_token3] = ACTIONS(181),
    [aux_sym__implied_opcode_token4] = ACTIONS(181),
    [aux_sym__implied_opcode_token5] = ACTIONS(181),
    [aux_sym__implied_opcode_token6] = ACTIONS(181),
    [aux_sym__implied_opcode_token7] = ACTIONS(181),
    [aux_sym__implied_opcode_token8] = ACTIONS(181),
    [aux_sym__implied_opcode_token9] = ACTIONS(181),
    [aux_sym__implied_opcode_token10] = ACTIONS(181),
    [aux_sym__implied_opcode_token11] = ACTIONS(181),
    [aux_sym__implied_opcode_token12] = ACTIONS(181),
    [aux_sym__implied_opcode_token13] = ACTIONS(181),
    [aux_sym__implied_opcode_token14] = ACTIONS(181),
    [aux_sym__implied_opcode_token15] = ACTIONS(181),
    [aux_sym__implied_opcode_token16] = ACTIONS(181),
    [aux_sym__implied_opcode_token17] = ACTIONS(181),
    [aux_sym__implied_opcode_token18] = ACTIONS(181),
    [aux_sym__implied_opcode_token19] = ACTIONS(181),
    [aux_sym__implied_opcode_token20] = ACTIONS(181),
    [aux_sym__implied_opcode_token21] = ACTIONS(181),
    [aux_sym__implied_opcode_token22] = ACTIONS(181),
    [aux_sym__implied_opcode_token23] = ACTIONS(181),
    [aux_sym__implied_opcode_token24] = ACTIONS(181),
    [aux_sym__implied_opcode_token25] = ACTIONS(181),
    [aux_sym__implied_opcode_token26] = ACTIONS(181),
    [aux_sym__implied_opcode_token27] = ACTIONS(181),
    [aux_sym__implied_opcode_token28] = ACTIONS(181),
    [aux_sym__implied_opcode_token29] = ACTIONS(181),
    [aux_sym__implied_opcode_token30] = ACTIONS(181),
    [aux_sym__implied_opcode_token31] = ACTIONS(181),
    [aux_sym__implied_opcode_token32] = ACTIONS(181),
    [aux_sym__implied_opcode_token33] = ACTIONS(181),
    [aux_sym__implied_opcode_token34] = ACTIONS(181),
    [aux_sym__implied_opcode_token35] = ACTIONS(181),
    [aux_sym__implied_opcode_token36] = ACTIONS(181),
    [aux_sym__implied_opcode_token37] = ACTIONS(181),
    [aux_sym__relative_opcode_token1] = ACTIONS(181),
    [aux_sym__relative_opcode_token2] = ACTIONS(181),
    [aux_sym__relative_opcode_token3] = ACTIONS(181),
    [aux_sym__relative_opcode_token4] = ACTIONS(181),
    [aux_sym__relative_opcode_token5] = ACTIONS(181),
    [aux_sym__relative_opcode_token6] = ACTIONS(181),
    [aux_sym__relative_opcode_token7] = ACTIONS(181),
    [aux_sym__relative_opcode_token8] = ACTIONS(181),
    [aux_sym__relative_opcode_token9] = ACTIONS(181),
    [aux_sym__immediate_opcode_token1] = ACTIONS(181),
    [aux_sym__immediate_opcode_token2] = ACTIONS(181),
    [aux_sym__immediate_opcode_token3] = ACTIONS(181),
    [aux_sym__immediate_opcode_token4] = ACTIONS(181),
    [aux_sym__immediate_opcode_token5] = ACTIONS(181),
    [aux_sym__immediate_opcode_token6] = ACTIONS(181),
    [aux_sym__immediate_opcode_token7] = ACTIONS(181),
    [aux_sym__immediate_opcode_token8] = ACTIONS(181),
    [aux_sym__immediate_opcode_token9] = ACTIONS(181),
    [aux_sym__immediate_opcode_token10] = ACTIONS(181),
    [aux_sym__immediate_opcode_token11] = ACTIONS(181),
    [aux_sym__immediate_opcode_token12] = ACTIONS(181),
    [aux_sym__absolute_opcode_token1] = ACTIONS(181),
    [aux_sym__absolute_opcode_token2] = ACTIONS(181),
    [aux_sym__absolute_opcode_token3] = ACTIONS(181),
    [aux_sym__absolute_opcode_token4] = ACTIONS(181),
    [aux_sym__absolute_opcode_token5] = ACTIONS(181),
    [aux_sym__absolute_opcode_token6] = ACTIONS(181),
    [aux_sym__absolute_opcode_token7] = ACTIONS(181),
    [aux_sym__absolute_opcode_token8] = ACTIONS(181),
    [sym_cheap_local_label] = ACTIONS(179),
    [sym_local_label] = ACTIONS(181),
    [sym_global_label] = ACTIONS(181),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(173),
    [anon_sym_DOTexport] = ACTIONS(173),
    [anon_sym_DOTimport] = ACTIONS(173),
    [anon_sym_DOTsegment] = ACTIONS(173),
    [anon_sym_DOTsection] = ACTIONS(173),
    [anon_sym_word] = ACTIONS(173),
    [anon_sym_DOTbyte] = ACTIONS(173),
    [anon_sym_DOTaddr] = ACTIONS(173),
    [anon_sym_DOTproc] = ACTIONS(173),
    [anon_sym_DOTendproc] = ACTIONS(173),
    [aux_sym__implied_opcode_token1] = ACTIONS(173),
    [aux_sym__implied_opcode_token2] = ACTIONS(173),
    [aux_sym__implied_opcode_token3] = ACTIONS(173),
    [aux_sym__implied_opcode_token4] = ACTIONS(173),
    [aux_sym__implied_opcode_token5] = ACTIONS(173),
    [aux_sym__implied_opcode_token6] = ACTIONS(173),
    [aux_sym__implied_opcode_token7] = ACTIONS(173),
    [aux_sym__implied_opcode_token8] = ACTIONS(173),
    [aux_sym__implied_opcode_token9] = ACTIONS(173),
    [aux_sym__implied_opcode_token10] = ACTIONS(173),
    [aux_sym__implied_opcode_token11] = ACTIONS(173),
    [aux_sym__implied_opcode_token12] = ACTIONS(173),
    [aux_sym__implied_opcode_token13] = ACTIONS(173),
    [aux_sym__implied_opcode_token14] = ACTIONS(173),
    [aux_sym__implied_opcode_token15] = ACTIONS(173),
    [aux_sym__implied_opcode_token16] = ACTIONS(173),
    [aux_sym__implied_opcode_token17] = ACTIONS(173),
    [aux_sym__implied_opcode_token18] = ACTIONS(173),
    [aux_sym__implied_opcode_token19] = ACTIONS(173),
    [aux_sym__implied_opcode_token20] = ACTIONS(173),
    [aux_sym__implied_opcode_token21] = ACTIONS(173),
    [aux_sym__implied_opcode_token22] = ACTIONS(173),
    [aux_sym__implied_opcode_token23] = ACTIONS(173),
    [aux_sym__implied_opcode_token24] = ACTIONS(173),
    [aux_sym__implied_opcode_token25] = ACTIONS(173),
    [aux_sym__implied_opcode_token26] = ACTIONS(173),
    [aux_sym__implied_opcode_token27] = ACTIONS(173),
    [aux_sym__implied_opcode_token28] = ACTIONS(173),
    [aux_sym__implied_opcode_token29] = ACTIONS(173),
    [aux_sym__implied_opcode_token30] = ACTIONS(173),
    [aux_sym__implied_opcode_token31] = ACTIONS(173),
    [aux_sym__implied_opcode_token32] = ACTIONS(173),
    [aux_sym__implied_opcode_token33] = ACTIONS(173),
    [aux_sym__implied_opcode_token34] = ACTIONS(173),
    [aux_sym__implied_opcode_token35] = ACTIONS(173),
    [aux_sym__implied_opcode_token36] = ACTIONS(173),
    [aux_sym__implied_opcode_token37] = ACTIONS(173),
    [aux_sym__relative_opcode_token1] = ACTIONS(173),
    [aux_sym__relative_opcode_token2] = ACTIONS(173),
    [aux_sym__relative_opcode_token3] = ACTIONS(173),
    [aux_sym__relative_opcode_token4] = ACTIONS(173),
    [aux_sym__relative_opcode_token5] = ACTIONS(173),
    [aux_sym__relative_opcode_token6] = ACTIONS(173),
    [aux_sym__relative_opcode_token7] = ACTIONS(173),
    [aux_sym__relative_opcode_token8] = ACTIONS(173),
    [aux_sym__relative_opcode_token9] = ACTIONS(173),
    [aux_sym__immediate_opcode_token1] = ACTIONS(173),
    [aux_sym__immediate_opcode_token2] = ACTIONS(173),
    [aux_sym__immediate_opcode_token3] = ACTIONS(173),
    [aux_sym__immediate_opcode_token4] = ACTIONS(173),
    [aux_sym__immediate_opcode_token5] = ACTIONS(173),
    [aux_sym__immediate_opcode_token6] = ACTIONS(173),
    [aux_sym__immediate_opcode_token7] = ACTIONS(173),
    [aux_sym__immediate_opcode_token8] = ACTIONS(173),
    [aux_sym__immediate_opcode_token9] = ACTIONS(173),
    [aux_sym__immediate_opcode_token10] = ACTIONS(173),
    [aux_sym__immediate_opcode_token11] = ACTIONS(173),
    [aux_sym__immediate_opcode_token12] = ACTIONS(173),
    [aux_sym__absolute_opcode_token1] = ACTIONS(173),
    [aux_sym__absolute_opcode_token2] = ACTIONS(173),
    [aux_sym__absolute_opcode_token3] = ACTIONS(173),
    [aux_sym__absolute_opcode_token4] = ACTIONS(173),
    [aux_sym__absolute_opcode_token5] = ACTIONS(173),
    [aux_sym__absolute_opcode_token6] = ACTIONS(173),
    [aux_sym__absolute_opcode_token7] = ACTIONS(173),
    [aux_sym__absolute_opcode_token8] = ACTIONS(173),
    [sym_cheap_local_label] = ACTIONS(167),
    [sym_local_label] = ACTIONS(173),
    [sym_global_label] = ACTIONS(173),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(185),
    [anon_sym_DOTexport] = ACTIONS(185),
    [anon_sym_DOTimport] = ACTIONS(185),
    [anon_sym_DOTsegment] = ACTIONS(185),
    [anon_sym_DOTsection] = ACTIONS(185),
    [anon_sym_word] = ACTIONS(185),
    [anon_sym_DOTbyte] = ACTIONS(185),
    [anon_sym_DOTaddr] = ACTIONS(185),
    [anon_sym_DOTproc] = ACTIONS(185),
    [anon_sym_DOTendproc] = ACTIONS(185),
    [aux_sym__implied_opcode_token1] = ACTIONS(185),
    [aux_sym__implied_opcode_token2] = ACTIONS(185),
    [aux_sym__implied_opcode_token3] = ACTIONS(185),
    [aux_sym__implied_opcode_token4] = ACTIONS(185),
    [aux_sym__implied_opcode_token5] = ACTIONS(185),
    [aux_sym__implied_opcode_token6] = ACTIONS(185),
    [aux_sym__implied_opcode_token7] = ACTIONS(185),
    [aux_sym__implied_opcode_token8] = ACTIONS(185),
    [aux_sym__implied_opcode_token9] = ACTIONS(185),
    [aux_sym__implied_opcode_token10] = ACTIONS(185),
    [aux_sym__implied_opcode_token11] = ACTIONS(185),
    [aux_sym__implied_opcode_token12] = ACTIONS(185),
    [aux_sym__implied_opcode_token13] = ACTIONS(185),
    [aux_sym__implied_opcode_token14] = ACTIONS(185),
    [aux_sym__implied_opcode_token15] = ACTIONS(185),
    [aux_sym__implied_opcode_token16] = ACTIONS(185),
    [aux_sym__implied_opcode_token17] = ACTIONS(185),
    [aux_sym__implied_opcode_token18] = ACTIONS(185),
    [aux_sym__implied_opcode_token19] = ACTIONS(185),
    [aux_sym__implied_opcode_token20] = ACTIONS(185),
    [aux_sym__implied_opcode_token21] = ACTIONS(185),
    [aux_sym__implied_opcode_token22] = ACTIONS(185),
    [aux_sym__implied_opcode_token23] = ACTIONS(185),
    [aux_sym__implied_opcode_token24] = ACTIONS(185),
    [aux_sym__implied_opcode_token25] = ACTIONS(185),
    [aux_sym__implied_opcode_token26] = ACTIONS(185),
    [aux_sym__implied_opcode_token27] = ACTIONS(185),
    [aux_sym__implied_opcode_token28] = ACTIONS(185),
    [aux_sym__implied_opcode_token29] = ACTIONS(185),
    [aux_sym__implied_opcode_token30] = ACTIONS(185),
    [aux_sym__implied_opcode_token31] = ACTIONS(185),
    [aux_sym__implied_opcode_token32] = ACTIONS(185),
    [aux_sym__implied_opcode_token33] = ACTIONS(185),
    [aux_sym__implied_opcode_token34] = ACTIONS(185),
    [aux_sym__implied_opcode_token35] = ACTIONS(185),
    [aux_sym__implied_opcode_token36] = ACTIONS(185),
    [aux_sym__implied_opcode_token37] = ACTIONS(185),
    [aux_sym__relative_opcode_token1] = ACTIONS(185),
    [aux_sym__relative_opcode_token2] = ACTIONS(185),
    [aux_sym__relative_opcode_token3] = ACTIONS(185),
    [aux_sym__relative_opcode_token4] = ACTIONS(185),
    [aux_sym__relative_opcode_token5] = ACTIONS(185),
    [aux_sym__relative_opcode_token6] = ACTIONS(185),
    [aux_sym__relative_opcode_token7] = ACTIONS(185),
    [aux_sym__relative_opcode_token8] = ACTIONS(185),
    [aux_sym__relative_opcode_token9] = ACTIONS(185),
    [aux_sym__immediate_opcode_token1] = ACTIONS(185),
    [aux_sym__immediate_opcode_token2] = ACTIONS(185),
    [aux_sym__immediate_opcode_token3] = ACTIONS(185),
    [aux_sym__immediate_opcode_token4] = ACTIONS(185),
    [aux_sym__immediate_opcode_token5] = ACTIONS(185),
    [aux_sym__immediate_opcode_token6] = ACTIONS(185),
    [aux_sym__immediate_opcode_token7] = ACTIONS(185),
    [aux_sym__immediate_opcode_token8] = ACTIONS(185),
    [aux_sym__immediate_opcode_token9] = ACTIONS(185),
    [aux_sym__immediate_opcode_token10] = ACTIONS(185),
    [aux_sym__immediate_opcode_token11] = ACTIONS(185),
    [aux_sym__immediate_opcode_token12] = ACTIONS(185),
    [aux_sym__absolute_opcode_token1] = ACTIONS(185),
    [aux_sym__absolute_opcode_token2] = ACTIONS(185),
    [aux_sym__absolute_opcode_token3] = ACTIONS(185),
    [aux_sym__absolute_opcode_token4] = ACTIONS(185),
    [aux_sym__absolute_opcode_token5] = ACTIONS(185),
    [aux_sym__absolute_opcode_token6] = ACTIONS(185),
    [aux_sym__absolute_opcode_token7] = ACTIONS(185),
    [aux_sym__absolute_opcode_token8] = ACTIONS(185),
    [sym_cheap_local_label] = ACTIONS(183),
    [sym_local_label] = ACTIONS(185),
    [sym_global_label] = ACTIONS(185),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(189),
    [anon_sym_DOTexport] = ACTIONS(189),
    [anon_sym_DOTimport] = ACTIONS(189),
    [anon_sym_DOTsegment] = ACTIONS(189),
    [anon_sym_DOTsection] = ACTIONS(189),
    [anon_sym_word] = ACTIONS(189),
    [anon_sym_DOTbyte] = ACTIONS(189),
    [anon_sym_DOTaddr] = ACTIONS(189),
    [anon_sym_DOTproc] = ACTIONS(189),
    [anon_sym_DOTendproc] = ACTIONS(189),
    [aux_sym__implied_opcode_token1] = ACTIONS(189),
    [aux_sym__implied_opcode_token2] = ACTIONS(189),
    [aux_sym__implied_opcode_token3] = ACTIONS(189),
    [aux_sym__implied_opcode_token4] = ACTIONS(189),
    [aux_sym__implied_opcode_token5] = ACTIONS(189),
    [aux_sym__implied_opcode_token6] = ACTIONS(189),
    [aux_sym__implied_opcode_token7] = ACTIONS(189),
    [aux_sym__implied_opcode_token8] = ACTIONS(189),
    [aux_sym__implied_opcode_token9] = ACTIONS(189),
    [aux_sym__implied_opcode_token10] = ACTIONS(189),
    [aux_sym__implied_opcode_token11] = ACTIONS(189),
    [aux_sym__implied_opcode_token12] = ACTIONS(189),
    [aux_sym__implied_opcode_token13] = ACTIONS(189),
    [aux_sym__implied_opcode_token14] = ACTIONS(189),
    [aux_sym__implied_opcode_token15] = ACTIONS(189),
    [aux_sym__implied_opcode_token16] = ACTIONS(189),
    [aux_sym__implied_opcode_token17] = ACTIONS(189),
    [aux_sym__implied_opcode_token18] = ACTIONS(189),
    [aux_sym__implied_opcode_token19] = ACTIONS(189),
    [aux_sym__implied_opcode_token20] = ACTIONS(189),
    [aux_sym__implied_opcode_token21] = ACTIONS(189),
    [aux_sym__implied_opcode_token22] = ACTIONS(189),
    [aux_sym__implied_opcode_token23] = ACTIONS(189),
    [aux_sym__implied_opcode_token24] = ACTIONS(189),
    [aux_sym__implied_opcode_token25] = ACTIONS(189),
    [aux_sym__implied_opcode_token26] = ACTIONS(189),
    [aux_sym__implied_opcode_token27] = ACTIONS(189),
    [aux_sym__implied_opcode_token28] = ACTIONS(189),
    [aux_sym__implied_opcode_token29] = ACTIONS(189),
    [aux_sym__implied_opcode_token30] = ACTIONS(189),
    [aux_sym__implied_opcode_token31] = ACTIONS(189),
    [aux_sym__implied_opcode_token32] = ACTIONS(189),
    [aux_sym__implied_opcode_token33] = ACTIONS(189),
    [aux_sym__implied_opcode_token34] = ACTIONS(189),
    [aux_sym__implied_opcode_token35] = ACTIONS(189),
    [aux_sym__implied_opcode_token36] = ACTIONS(189),
    [aux_sym__implied_opcode_token37] = ACTIONS(189),
    [aux_sym__relative_opcode_token1] = ACTIONS(189),
    [aux_sym__relative_opcode_token2] = ACTIONS(189),
    [aux_sym__relative_opcode_token3] = ACTIONS(189),
    [aux_sym__relative_opcode_token4] = ACTIONS(189),
    [aux_sym__relative_opcode_token5] = ACTIONS(189),
    [aux_sym__relative_opcode_token6] = ACTIONS(189),
    [aux_sym__relative_opcode_token7] = ACTIONS(189),
    [aux_sym__relative_opcode_token8] = ACTIONS(189),
    [aux_sym__relative_opcode_token9] = ACTIONS(189),
    [aux_sym__immediate_opcode_token1] = ACTIONS(189),
    [aux_sym__immediate_opcode_token2] = ACTIONS(189),
    [aux_sym__immediate_opcode_token3] = ACTIONS(189),
    [aux_sym__immediate_opcode_token4] = ACTIONS(189),
    [aux_sym__immediate_opcode_token5] = ACTIONS(189),
    [aux_sym__immediate_opcode_token6] = ACTIONS(189),
    [aux_sym__immediate_opcode_token7] = ACTIONS(189),
    [aux_sym__immediate_opcode_token8] = ACTIONS(189),
    [aux_sym__immediate_opcode_token9] = ACTIONS(189),
    [aux_sym__immediate_opcode_token10] = ACTIONS(189),
    [aux_sym__immediate_opcode_token11] = ACTIONS(189),
    [aux_sym__immediate_opcode_token12] = ACTIONS(189),
    [aux_sym__absolute_opcode_token1] = ACTIONS(189),
    [aux_sym__absolute_opcode_token2] = ACTIONS(189),
    [aux_sym__absolute_opcode_token3] = ACTIONS(189),
    [aux_sym__absolute_opcode_token4] = ACTIONS(189),
    [aux_sym__absolute_opcode_token5] = ACTIONS(189),
    [aux_sym__absolute_opcode_token6] = ACTIONS(189),
    [aux_sym__absolute_opcode_token7] = ACTIONS(189),
    [aux_sym__absolute_opcode_token8] = ACTIONS(189),
    [sym_cheap_local_label] = ACTIONS(187),
    [sym_local_label] = ACTIONS(189),
    [sym_global_label] = ACTIONS(189),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(193),
    [anon_sym_DOTexport] = ACTIONS(193),
    [anon_sym_DOTimport] = ACTIONS(193),
    [anon_sym_DOTsegment] = ACTIONS(193),
    [anon_sym_DOTsection] = ACTIONS(193),
    [anon_sym_word] = ACTIONS(193),
    [anon_sym_DOTbyte] = ACTIONS(193),
    [anon_sym_DOTaddr] = ACTIONS(193),
    [anon_sym_DOTproc] = ACTIONS(193),
    [anon_sym_DOTendproc] = ACTIONS(193),
    [aux_sym__implied_opcode_token1] = ACTIONS(193),
    [aux_sym__implied_opcode_token2] = ACTIONS(193),
    [aux_sym__implied_opcode_token3] = ACTIONS(193),
    [aux_sym__implied_opcode_token4] = ACTIONS(193),
    [aux_sym__implied_opcode_token5] = ACTIONS(193),
    [aux_sym__implied_opcode_token6] = ACTIONS(193),
    [aux_sym__implied_opcode_token7] = ACTIONS(193),
    [aux_sym__implied_opcode_token8] = ACTIONS(193),
    [aux_sym__implied_opcode_token9] = ACTIONS(193),
    [aux_sym__implied_opcode_token10] = ACTIONS(193),
    [aux_sym__implied_opcode_token11] = ACTIONS(193),
    [aux_sym__implied_opcode_token12] = ACTIONS(193),
    [aux_sym__implied_opcode_token13] = ACTIONS(193),
    [aux_sym__implied_opcode_token14] = ACTIONS(193),
    [aux_sym__implied_opcode_token15] = ACTIONS(193),
    [aux_sym__implied_opcode_token16] = ACTIONS(193),
    [aux_sym__implied_opcode_token17] = ACTIONS(193),
    [aux_sym__implied_opcode_token18] = ACTIONS(193),
    [aux_sym__implied_opcode_token19] = ACTIONS(193),
    [aux_sym__implied_opcode_token20] = ACTIONS(193),
    [aux_sym__implied_opcode_token21] = ACTIONS(193),
    [aux_sym__implied_opcode_token22] = ACTIONS(193),
    [aux_sym__implied_opcode_token23] = ACTIONS(193),
    [aux_sym__implied_opcode_token24] = ACTIONS(193),
    [aux_sym__implied_opcode_token25] = ACTIONS(193),
    [aux_sym__implied_opcode_token26] = ACTIONS(193),
    [aux_sym__implied_opcode_token27] = ACTIONS(193),
    [aux_sym__implied_opcode_token28] = ACTIONS(193),
    [aux_sym__implied_opcode_token29] = ACTIONS(193),
    [aux_sym__implied_opcode_token30] = ACTIONS(193),
    [aux_sym__implied_opcode_token31] = ACTIONS(193),
    [aux_sym__implied_opcode_token32] = ACTIONS(193),
    [aux_sym__implied_opcode_token33] = ACTIONS(193),
    [aux_sym__implied_opcode_token34] = ACTIONS(193),
    [aux_sym__implied_opcode_token35] = ACTIONS(193),
    [aux_sym__implied_opcode_token36] = ACTIONS(193),
    [aux_sym__implied_opcode_token37] = ACTIONS(193),
    [aux_sym__relative_opcode_token1] = ACTIONS(193),
    [aux_sym__relative_opcode_token2] = ACTIONS(193),
    [aux_sym__relative_opcode_token3] = ACTIONS(193),
    [aux_sym__relative_opcode_token4] = ACTIONS(193),
    [aux_sym__relative_opcode_token5] = ACTIONS(193),
    [aux_sym__relative_opcode_token6] = ACTIONS(193),
    [aux_sym__relative_opcode_token7] = ACTIONS(193),
    [aux_sym__relative_opcode_token8] = ACTIONS(193),
    [aux_sym__relative_opcode_token9] = ACTIONS(193),
    [aux_sym__immediate_opcode_token1] = ACTIONS(193),
    [aux_sym__immediate_opcode_token2] = ACTIONS(193),
    [aux_sym__immediate_opcode_token3] = ACTIONS(193),
    [aux_sym__immediate_opcode_token4] = ACTIONS(193),
    [aux_sym__immediate_opcode_token5] = ACTIONS(193),
    [aux_sym__immediate_opcode_token6] = ACTIONS(193),
    [aux_sym__immediate_opcode_token7] = ACTIONS(193),
    [aux_sym__immediate_opcode_token8] = ACTIONS(193),
    [aux_sym__immediate_opcode_token9] = ACTIONS(193),
    [aux_sym__immediate_opcode_token10] = ACTIONS(193),
    [aux_sym__immediate_opcode_token11] = ACTIONS(193),
    [aux_sym__immediate_opcode_token12] = ACTIONS(193),
    [aux_sym__absolute_opcode_token1] = ACTIONS(193),
    [aux_sym__absolute_opcode_token2] = ACTIONS(193),
    [aux_sym__absolute_opcode_token3] = ACTIONS(193),
    [aux_sym__absolute_opcode_token4] = ACTIONS(193),
    [aux_sym__absolute_opcode_token5] = ACTIONS(193),
    [aux_sym__absolute_opcode_token6] = ACTIONS(193),
    [aux_sym__absolute_opcode_token7] = ACTIONS(193),
    [aux_sym__absolute_opcode_token8] = ACTIONS(193),
    [sym_cheap_local_label] = ACTIONS(191),
    [sym_local_label] = ACTIONS(193),
    [sym_global_label] = ACTIONS(193),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(197),
    [anon_sym_DOTexport] = ACTIONS(197),
    [anon_sym_DOTimport] = ACTIONS(197),
    [anon_sym_DOTsegment] = ACTIONS(197),
    [anon_sym_DOTsection] = ACTIONS(197),
    [anon_sym_word] = ACTIONS(197),
    [anon_sym_DOTbyte] = ACTIONS(197),
    [anon_sym_DOTaddr] = ACTIONS(197),
    [anon_sym_DOTproc] = ACTIONS(197),
    [anon_sym_DOTendproc] = ACTIONS(197),
    [aux_sym__implied_opcode_token1] = ACTIONS(197),
    [aux_sym__implied_opcode_token2] = ACTIONS(197),
    [aux_sym__implied_opcode_token3] = ACTIONS(197),
    [aux_sym__implied_opcode_token4] = ACTIONS(197),
    [aux_sym__implied_opcode_token5] = ACTIONS(197),
    [aux_sym__implied_opcode_token6] = ACTIONS(197),
    [aux_sym__implied_opcode_token7] = ACTIONS(197),
    [aux_sym__implied_opcode_token8] = ACTIONS(197),
    [aux_sym__implied_opcode_token9] = ACTIONS(197),
    [aux_sym__implied_opcode_token10] = ACTIONS(197),
    [aux_sym__implied_opcode_token11] = ACTIONS(197),
    [aux_sym__implied_opcode_token12] = ACTIONS(197),
    [aux_sym__implied_opcode_token13] = ACTIONS(197),
    [aux_sym__implied_opcode_token14] = ACTIONS(197),
    [aux_sym__implied_opcode_token15] = ACTIONS(197),
    [aux_sym__implied_opcode_token16] = ACTIONS(197),
    [aux_sym__implied_opcode_token17] = ACTIONS(197),
    [aux_sym__implied_opcode_token18] = ACTIONS(197),
    [aux_sym__implied_opcode_token19] = ACTIONS(197),
    [aux_sym__implied_opcode_token20] = ACTIONS(197),
    [aux_sym__implied_opcode_token21] = ACTIONS(197),
    [aux_sym__implied_opcode_token22] = ACTIONS(197),
    [aux_sym__implied_opcode_token23] = ACTIONS(197),
    [aux_sym__implied_opcode_token24] = ACTIONS(197),
    [aux_sym__implied_opcode_token25] = ACTIONS(197),
    [aux_sym__implied_opcode_token26] = ACTIONS(197),
    [aux_sym__implied_opcode_token27] = ACTIONS(197),
    [aux_sym__implied_opcode_token28] = ACTIONS(197),
    [aux_sym__implied_opcode_token29] = ACTIONS(197),
    [aux_sym__implied_opcode_token30] = ACTIONS(197),
    [aux_sym__implied_opcode_token31] = ACTIONS(197),
    [aux_sym__implied_opcode_token32] = ACTIONS(197),
    [aux_sym__implied_opcode_token33] = ACTIONS(197),
    [aux_sym__implied_opcode_token34] = ACTIONS(197),
    [aux_sym__implied_opcode_token35] = ACTIONS(197),
    [aux_sym__implied_opcode_token36] = ACTIONS(197),
    [aux_sym__implied_opcode_token37] = ACTIONS(197),
    [aux_sym__relative_opcode_token1] = ACTIONS(197),
    [aux_sym__relative_opcode_token2] = ACTIONS(197),
    [aux_sym__relative_opcode_token3] = ACTIONS(197),
    [aux_sym__relative_opcode_token4] = ACTIONS(197),
    [aux_sym__relative_opcode_token5] = ACTIONS(197),
    [aux_sym__relative_opcode_token6] = ACTIONS(197),
    [aux_sym__relative_opcode_token7] = ACTIONS(197),
    [aux_sym__relative_opcode_token8] = ACTIONS(197),
    [aux_sym__relative_opcode_token9] = ACTIONS(197),
    [aux_sym__immediate_opcode_token1] = ACTIONS(197),
    [aux_sym__immediate_opcode_token2] = ACTIONS(197),
    [aux_sym__immediate_opcode_token3] = ACTIONS(197),
    [aux_sym__immediate_opcode_token4] = ACTIONS(197),
    [aux_sym__immediate_opcode_token5] = ACTIONS(197),
    [aux_sym__immediate_opcode_token6] = ACTIONS(197),
    [aux_sym__immediate_opcode_token7] = ACTIONS(197),
    [aux_sym__immediate_opcode_token8] = ACTIONS(197),
    [aux_sym__immediate_opcode_token9] = ACTIONS(197),
    [aux_sym__immediate_opcode_token10] = ACTIONS(197),
    [aux_sym__immediate_opcode_token11] = ACTIONS(197),
    [aux_sym__immediate_opcode_token12] = ACTIONS(197),
    [aux_sym__absolute_opcode_token1] = ACTIONS(197),
    [aux_sym__absolute_opcode_token2] = ACTIONS(197),
    [aux_sym__absolute_opcode_token3] = ACTIONS(197),
    [aux_sym__absolute_opcode_token4] = ACTIONS(197),
    [aux_sym__absolute_opcode_token5] = ACTIONS(197),
    [aux_sym__absolute_opcode_token6] = ACTIONS(197),
    [aux_sym__absolute_opcode_token7] = ACTIONS(197),
    [aux_sym__absolute_opcode_token8] = ACTIONS(197),
    [sym_cheap_local_label] = ACTIONS(195),
    [sym_local_label] = ACTIONS(197),
    [sym_global_label] = ACTIONS(197),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(201),
    [anon_sym_DOTexport] = ACTIONS(201),
    [anon_sym_DOTimport] = ACTIONS(201),
    [anon_sym_DOTsegment] = ACTIONS(201),
    [anon_sym_DOTsection] = ACTIONS(201),
    [anon_sym_word] = ACTIONS(201),
    [anon_sym_DOTbyte] = ACTIONS(201),
    [anon_sym_DOTaddr] = ACTIONS(201),
    [anon_sym_DOTproc] = ACTIONS(201),
    [anon_sym_DOTendproc] = ACTIONS(201),
    [aux_sym__implied_opcode_token1] = ACTIONS(201),
    [aux_sym__implied_opcode_token2] = ACTIONS(201),
    [aux_sym__implied_opcode_token3] = ACTIONS(201),
    [aux_sym__implied_opcode_token4] = ACTIONS(201),
    [aux_sym__implied_opcode_token5] = ACTIONS(201),
    [aux_sym__implied_opcode_token6] = ACTIONS(201),
    [aux_sym__implied_opcode_token7] = ACTIONS(201),
    [aux_sym__implied_opcode_token8] = ACTIONS(201),
    [aux_sym__implied_opcode_token9] = ACTIONS(201),
    [aux_sym__implied_opcode_token10] = ACTIONS(201),
    [aux_sym__implied_opcode_token11] = ACTIONS(201),
    [aux_sym__implied_opcode_token12] = ACTIONS(201),
    [aux_sym__implied_opcode_token13] = ACTIONS(201),
    [aux_sym__implied_opcode_token14] = ACTIONS(201),
    [aux_sym__implied_opcode_token15] = ACTIONS(201),
    [aux_sym__implied_opcode_token16] = ACTIONS(201),
    [aux_sym__implied_opcode_token17] = ACTIONS(201),
    [aux_sym__implied_opcode_token18] = ACTIONS(201),
    [aux_sym__implied_opcode_token19] = ACTIONS(201),
    [aux_sym__implied_opcode_token20] = ACTIONS(201),
    [aux_sym__implied_opcode_token21] = ACTIONS(201),
    [aux_sym__implied_opcode_token22] = ACTIONS(201),
    [aux_sym__implied_opcode_token23] = ACTIONS(201),
    [aux_sym__implied_opcode_token24] = ACTIONS(201),
    [aux_sym__implied_opcode_token25] = ACTIONS(201),
    [aux_sym__implied_opcode_token26] = ACTIONS(201),
    [aux_sym__implied_opcode_token27] = ACTIONS(201),
    [aux_sym__implied_opcode_token28] = ACTIONS(201),
    [aux_sym__implied_opcode_token29] = ACTIONS(201),
    [aux_sym__implied_opcode_token30] = ACTIONS(201),
    [aux_sym__implied_opcode_token31] = ACTIONS(201),
    [aux_sym__implied_opcode_token32] = ACTIONS(201),
    [aux_sym__implied_opcode_token33] = ACTIONS(201),
    [aux_sym__implied_opcode_token34] = ACTIONS(201),
    [aux_sym__implied_opcode_token35] = ACTIONS(201),
    [aux_sym__implied_opcode_token36] = ACTIONS(201),
    [aux_sym__implied_opcode_token37] = ACTIONS(201),
    [aux_sym__relative_opcode_token1] = ACTIONS(201),
    [aux_sym__relative_opcode_token2] = ACTIONS(201),
    [aux_sym__relative_opcode_token3] = ACTIONS(201),
    [aux_sym__relative_opcode_token4] = ACTIONS(201),
    [aux_sym__relative_opcode_token5] = ACTIONS(201),
    [aux_sym__relative_opcode_token6] = ACTIONS(201),
    [aux_sym__relative_opcode_token7] = ACTIONS(201),
    [aux_sym__relative_opcode_token8] = ACTIONS(201),
    [aux_sym__relative_opcode_token9] = ACTIONS(201),
    [aux_sym__immediate_opcode_token1] = ACTIONS(201),
    [aux_sym__immediate_opcode_token2] = ACTIONS(201),
    [aux_sym__immediate_opcode_token3] = ACTIONS(201),
    [aux_sym__immediate_opcode_token4] = ACTIONS(201),
    [aux_sym__immediate_opcode_token5] = ACTIONS(201),
    [aux_sym__immediate_opcode_token6] = ACTIONS(201),
    [aux_sym__immediate_opcode_token7] = ACTIONS(201),
    [aux_sym__immediate_opcode_token8] = ACTIONS(201),
    [aux_sym__immediate_opcode_token9] = ACTIONS(201),
    [aux_sym__immediate_opcode_token10] = ACTIONS(201),
    [aux_sym__immediate_opcode_token11] = ACTIONS(201),
    [aux_sym__immediate_opcode_token12] = ACTIONS(201),
    [aux_sym__absolute_opcode_token1] = ACTIONS(201),
    [aux_sym__absolute_opcode_token2] = ACTIONS(201),
    [aux_sym__absolute_opcode_token3] = ACTIONS(201),
    [aux_sym__absolute_opcode_token4] = ACTIONS(201),
    [aux_sym__absolute_opcode_token5] = ACTIONS(201),
    [aux_sym__absolute_opcode_token6] = ACTIONS(201),
    [aux_sym__absolute_opcode_token7] = ACTIONS(201),
    [aux_sym__absolute_opcode_token8] = ACTIONS(201),
    [sym_cheap_local_label] = ACTIONS(199),
    [sym_local_label] = ACTIONS(201),
    [sym_global_label] = ACTIONS(201),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(205),
    [anon_sym_DOTexport] = ACTIONS(205),
    [anon_sym_DOTimport] = ACTIONS(205),
    [anon_sym_DOTsegment] = ACTIONS(205),
    [anon_sym_DOTsection] = ACTIONS(205),
    [anon_sym_word] = ACTIONS(205),
    [anon_sym_DOTbyte] = ACTIONS(205),
    [anon_sym_DOTaddr] = ACTIONS(205),
    [anon_sym_DOTproc] = ACTIONS(205),
    [anon_sym_DOTendproc] = ACTIONS(205),
    [aux_sym__implied_opcode_token1] = ACTIONS(205),
    [aux_sym__implied_opcode_token2] = ACTIONS(205),
    [aux_sym__implied_opcode_token3] = ACTIONS(205),
    [aux_sym__implied_opcode_token4] = ACTIONS(205),
    [aux_sym__implied_opcode_token5] = ACTIONS(205),
    [aux_sym__implied_opcode_token6] = ACTIONS(205),
    [aux_sym__implied_opcode_token7] = ACTIONS(205),
    [aux_sym__implied_opcode_token8] = ACTIONS(205),
    [aux_sym__implied_opcode_token9] = ACTIONS(205),
    [aux_sym__implied_opcode_token10] = ACTIONS(205),
    [aux_sym__implied_opcode_token11] = ACTIONS(205),
    [aux_sym__implied_opcode_token12] = ACTIONS(205),
    [aux_sym__implied_opcode_token13] = ACTIONS(205),
    [aux_sym__implied_opcode_token14] = ACTIONS(205),
    [aux_sym__implied_opcode_token15] = ACTIONS(205),
    [aux_sym__implied_opcode_token16] = ACTIONS(205),
    [aux_sym__implied_opcode_token17] = ACTIONS(205),
    [aux_sym__implied_opcode_token18] = ACTIONS(205),
    [aux_sym__implied_opcode_token19] = ACTIONS(205),
    [aux_sym__implied_opcode_token20] = ACTIONS(205),
    [aux_sym__implied_opcode_token21] = ACTIONS(205),
    [aux_sym__implied_opcode_token22] = ACTIONS(205),
    [aux_sym__implied_opcode_token23] = ACTIONS(205),
    [aux_sym__implied_opcode_token24] = ACTIONS(205),
    [aux_sym__implied_opcode_token25] = ACTIONS(205),
    [aux_sym__implied_opcode_token26] = ACTIONS(205),
    [aux_sym__implied_opcode_token27] = ACTIONS(205),
    [aux_sym__implied_opcode_token28] = ACTIONS(205),
    [aux_sym__implied_opcode_token29] = ACTIONS(205),
    [aux_sym__implied_opcode_token30] = ACTIONS(205),
    [aux_sym__implied_opcode_token31] = ACTIONS(205),
    [aux_sym__implied_opcode_token32] = ACTIONS(205),
    [aux_sym__implied_opcode_token33] = ACTIONS(205),
    [aux_sym__implied_opcode_token34] = ACTIONS(205),
    [aux_sym__implied_opcode_token35] = ACTIONS(205),
    [aux_sym__implied_opcode_token36] = ACTIONS(205),
    [aux_sym__implied_opcode_token37] = ACTIONS(205),
    [aux_sym__relative_opcode_token1] = ACTIONS(205),
    [aux_sym__relative_opcode_token2] = ACTIONS(205),
    [aux_sym__relative_opcode_token3] = ACTIONS(205),
    [aux_sym__relative_opcode_token4] = ACTIONS(205),
    [aux_sym__relative_opcode_token5] = ACTIONS(205),
    [aux_sym__relative_opcode_token6] = ACTIONS(205),
    [aux_sym__relative_opcode_token7] = ACTIONS(205),
    [aux_sym__relative_opcode_token8] = ACTIONS(205),
    [aux_sym__relative_opcode_token9] = ACTIONS(205),
    [aux_sym__immediate_opcode_token1] = ACTIONS(205),
    [aux_sym__immediate_opcode_token2] = ACTIONS(205),
    [aux_sym__immediate_opcode_token3] = ACTIONS(205),
    [aux_sym__immediate_opcode_token4] = ACTIONS(205),
    [aux_sym__immediate_opcode_token5] = ACTIONS(205),
    [aux_sym__immediate_opcode_token6] = ACTIONS(205),
    [aux_sym__immediate_opcode_token7] = ACTIONS(205),
    [aux_sym__immediate_opcode_token8] = ACTIONS(205),
    [aux_sym__immediate_opcode_token9] = ACTIONS(205),
    [aux_sym__immediate_opcode_token10] = ACTIONS(205),
    [aux_sym__immediate_opcode_token11] = ACTIONS(205),
    [aux_sym__immediate_opcode_token12] = ACTIONS(205),
    [aux_sym__absolute_opcode_token1] = ACTIONS(205),
    [aux_sym__absolute_opcode_token2] = ACTIONS(205),
    [aux_sym__absolute_opcode_token3] = ACTIONS(205),
    [aux_sym__absolute_opcode_token4] = ACTIONS(205),
    [aux_sym__absolute_opcode_token5] = ACTIONS(205),
    [aux_sym__absolute_opcode_token6] = ACTIONS(205),
    [aux_sym__absolute_opcode_token7] = ACTIONS(205),
    [aux_sym__absolute_opcode_token8] = ACTIONS(205),
    [sym_cheap_local_label] = ACTIONS(203),
    [sym_local_label] = ACTIONS(205),
    [sym_global_label] = ACTIONS(205),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(209),
    [anon_sym_DOTexport] = ACTIONS(209),
    [anon_sym_DOTimport] = ACTIONS(209),
    [anon_sym_DOTsegment] = ACTIONS(209),
    [anon_sym_DOTsection] = ACTIONS(209),
    [anon_sym_word] = ACTIONS(209),
    [anon_sym_DOTbyte] = ACTIONS(209),
    [anon_sym_DOTaddr] = ACTIONS(209),
    [anon_sym_DOTproc] = ACTIONS(209),
    [anon_sym_DOTendproc] = ACTIONS(209),
    [aux_sym__implied_opcode_token1] = ACTIONS(209),
    [aux_sym__implied_opcode_token2] = ACTIONS(209),
    [aux_sym__implied_opcode_token3] = ACTIONS(209),
    [aux_sym__implied_opcode_token4] = ACTIONS(209),
    [aux_sym__implied_opcode_token5] = ACTIONS(209),
    [aux_sym__implied_opcode_token6] = ACTIONS(209),
    [aux_sym__implied_opcode_token7] = ACTIONS(209),
    [aux_sym__implied_opcode_token8] = ACTIONS(209),
    [aux_sym__implied_opcode_token9] = ACTIONS(209),
    [aux_sym__implied_opcode_token10] = ACTIONS(209),
    [aux_sym__implied_opcode_token11] = ACTIONS(209),
    [aux_sym__implied_opcode_token12] = ACTIONS(209),
    [aux_sym__implied_opcode_token13] = ACTIONS(209),
    [aux_sym__implied_opcode_token14] = ACTIONS(209),
    [aux_sym__implied_opcode_token15] = ACTIONS(209),
    [aux_sym__implied_opcode_token16] = ACTIONS(209),
    [aux_sym__implied_opcode_token17] = ACTIONS(209),
    [aux_sym__implied_opcode_token18] = ACTIONS(209),
    [aux_sym__implied_opcode_token19] = ACTIONS(209),
    [aux_sym__implied_opcode_token20] = ACTIONS(209),
    [aux_sym__implied_opcode_token21] = ACTIONS(209),
    [aux_sym__implied_opcode_token22] = ACTIONS(209),
    [aux_sym__implied_opcode_token23] = ACTIONS(209),
    [aux_sym__implied_opcode_token24] = ACTIONS(209),
    [aux_sym__implied_opcode_token25] = ACTIONS(209),
    [aux_sym__implied_opcode_token26] = ACTIONS(209),
    [aux_sym__implied_opcode_token27] = ACTIONS(209),
    [aux_sym__implied_opcode_token28] = ACTIONS(209),
    [aux_sym__implied_opcode_token29] = ACTIONS(209),
    [aux_sym__implied_opcode_token30] = ACTIONS(209),
    [aux_sym__implied_opcode_token31] = ACTIONS(209),
    [aux_sym__implied_opcode_token32] = ACTIONS(209),
    [aux_sym__implied_opcode_token33] = ACTIONS(209),
    [aux_sym__implied_opcode_token34] = ACTIONS(209),
    [aux_sym__implied_opcode_token35] = ACTIONS(209),
    [aux_sym__implied_opcode_token36] = ACTIONS(209),
    [aux_sym__implied_opcode_token37] = ACTIONS(209),
    [aux_sym__relative_opcode_token1] = ACTIONS(209),
    [aux_sym__relative_opcode_token2] = ACTIONS(209),
    [aux_sym__relative_opcode_token3] = ACTIONS(209),
    [aux_sym__relative_opcode_token4] = ACTIONS(209),
    [aux_sym__relative_opcode_token5] = ACTIONS(209),
    [aux_sym__relative_opcode_token6] = ACTIONS(209),
    [aux_sym__relative_opcode_token7] = ACTIONS(209),
    [aux_sym__relative_opcode_token8] = ACTIONS(209),
    [aux_sym__relative_opcode_token9] = ACTIONS(209),
    [aux_sym__immediate_opcode_token1] = ACTIONS(209),
    [aux_sym__immediate_opcode_token2] = ACTIONS(209),
    [aux_sym__immediate_opcode_token3] = ACTIONS(209),
    [aux_sym__immediate_opcode_token4] = ACTIONS(209),
    [aux_sym__immediate_opcode_token5] = ACTIONS(209),
    [aux_sym__immediate_opcode_token6] = ACTIONS(209),
    [aux_sym__immediate_opcode_token7] = ACTIONS(209),
    [aux_sym__immediate_opcode_token8] = ACTIONS(209),
    [aux_sym__immediate_opcode_token9] = ACTIONS(209),
    [aux_sym__immediate_opcode_token10] = ACTIONS(209),
    [aux_sym__immediate_opcode_token11] = ACTIONS(209),
    [aux_sym__immediate_opcode_token12] = ACTIONS(209),
    [aux_sym__absolute_opcode_token1] = ACTIONS(209),
    [aux_sym__absolute_opcode_token2] = ACTIONS(209),
    [aux_sym__absolute_opcode_token3] = ACTIONS(209),
    [aux_sym__absolute_opcode_token4] = ACTIONS(209),
    [aux_sym__absolute_opcode_token5] = ACTIONS(209),
    [aux_sym__absolute_opcode_token6] = ACTIONS(209),
    [aux_sym__absolute_opcode_token7] = ACTIONS(209),
    [aux_sym__absolute_opcode_token8] = ACTIONS(209),
    [sym_cheap_local_label] = ACTIONS(207),
    [sym_local_label] = ACTIONS(209),
    [sym_global_label] = ACTIONS(209),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(213),
    [anon_sym_DOTexport] = ACTIONS(213),
    [anon_sym_DOTimport] = ACTIONS(213),
    [anon_sym_DOTsegment] = ACTIONS(213),
    [anon_sym_DOTsection] = ACTIONS(213),
    [anon_sym_word] = ACTIONS(213),
    [anon_sym_DOTbyte] = ACTIONS(213),
    [anon_sym_DOTaddr] = ACTIONS(213),
    [anon_sym_DOTproc] = ACTIONS(213),
    [anon_sym_DOTendproc] = ACTIONS(213),
    [aux_sym__implied_opcode_token1] = ACTIONS(213),
    [aux_sym__implied_opcode_token2] = ACTIONS(213),
    [aux_sym__implied_opcode_token3] = ACTIONS(213),
    [aux_sym__implied_opcode_token4] = ACTIONS(213),
    [aux_sym__implied_opcode_token5] = ACTIONS(213),
    [aux_sym__implied_opcode_token6] = ACTIONS(213),
    [aux_sym__implied_opcode_token7] = ACTIONS(213),
    [aux_sym__implied_opcode_token8] = ACTIONS(213),
    [aux_sym__implied_opcode_token9] = ACTIONS(213),
    [aux_sym__implied_opcode_token10] = ACTIONS(213),
    [aux_sym__implied_opcode_token11] = ACTIONS(213),
    [aux_sym__implied_opcode_token12] = ACTIONS(213),
    [aux_sym__implied_opcode_token13] = ACTIONS(213),
    [aux_sym__implied_opcode_token14] = ACTIONS(213),
    [aux_sym__implied_opcode_token15] = ACTIONS(213),
    [aux_sym__implied_opcode_token16] = ACTIONS(213),
    [aux_sym__implied_opcode_token17] = ACTIONS(213),
    [aux_sym__implied_opcode_token18] = ACTIONS(213),
    [aux_sym__implied_opcode_token19] = ACTIONS(213),
    [aux_sym__implied_opcode_token20] = ACTIONS(213),
    [aux_sym__implied_opcode_token21] = ACTIONS(213),
    [aux_sym__implied_opcode_token22] = ACTIONS(213),
    [aux_sym__implied_opcode_token23] = ACTIONS(213),
    [aux_sym__implied_opcode_token24] = ACTIONS(213),
    [aux_sym__implied_opcode_token25] = ACTIONS(213),
    [aux_sym__implied_opcode_token26] = ACTIONS(213),
    [aux_sym__implied_opcode_token27] = ACTIONS(213),
    [aux_sym__implied_opcode_token28] = ACTIONS(213),
    [aux_sym__implied_opcode_token29] = ACTIONS(213),
    [aux_sym__implied_opcode_token30] = ACTIONS(213),
    [aux_sym__implied_opcode_token31] = ACTIONS(213),
    [aux_sym__implied_opcode_token32] = ACTIONS(213),
    [aux_sym__implied_opcode_token33] = ACTIONS(213),
    [aux_sym__implied_opcode_token34] = ACTIONS(213),
    [aux_sym__implied_opcode_token35] = ACTIONS(213),
    [aux_sym__implied_opcode_token36] = ACTIONS(213),
    [aux_sym__implied_opcode_token37] = ACTIONS(213),
    [aux_sym__relative_opcode_token1] = ACTIONS(213),
    [aux_sym__relative_opcode_token2] = ACTIONS(213),
    [aux_sym__relative_opcode_token3] = ACTIONS(213),
    [aux_sym__relative_opcode_token4] = ACTIONS(213),
    [aux_sym__relative_opcode_token5] = ACTIONS(213),
    [aux_sym__relative_opcode_token6] = ACTIONS(213),
    [aux_sym__relative_opcode_token7] = ACTIONS(213),
    [aux_sym__relative_opcode_token8] = ACTIONS(213),
    [aux_sym__relative_opcode_token9] = ACTIONS(213),
    [aux_sym__immediate_opcode_token1] = ACTIONS(213),
    [aux_sym__immediate_opcode_token2] = ACTIONS(213),
    [aux_sym__immediate_opcode_token3] = ACTIONS(213),
    [aux_sym__immediate_opcode_token4] = ACTIONS(213),
    [aux_sym__immediate_opcode_token5] = ACTIONS(213),
    [aux_sym__immediate_opcode_token6] = ACTIONS(213),
    [aux_sym__immediate_opcode_token7] = ACTIONS(213),
    [aux_sym__immediate_opcode_token8] = ACTIONS(213),
    [aux_sym__immediate_opcode_token9] = ACTIONS(213),
    [aux_sym__immediate_opcode_token10] = ACTIONS(213),
    [aux_sym__immediate_opcode_token11] = ACTIONS(213),
    [aux_sym__immediate_opcode_token12] = ACTIONS(213),
    [aux_sym__absolute_opcode_token1] = ACTIONS(213),
    [aux_sym__absolute_opcode_token2] = ACTIONS(213),
    [aux_sym__absolute_opcode_token3] = ACTIONS(213),
    [aux_sym__absolute_opcode_token4] = ACTIONS(213),
    [aux_sym__absolute_opcode_token5] = ACTIONS(213),
    [aux_sym__absolute_opcode_token6] = ACTIONS(213),
    [aux_sym__absolute_opcode_token7] = ACTIONS(213),
    [aux_sym__absolute_opcode_token8] = ACTIONS(213),
    [sym_cheap_local_label] = ACTIONS(211),
    [sym_local_label] = ACTIONS(213),
    [sym_global_label] = ACTIONS(213),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(217),
    [anon_sym_DOTexport] = ACTIONS(217),
    [anon_sym_DOTimport] = ACTIONS(217),
    [anon_sym_DOTsegment] = ACTIONS(217),
    [anon_sym_DOTsection] = ACTIONS(217),
    [anon_sym_word] = ACTIONS(217),
    [anon_sym_DOTbyte] = ACTIONS(217),
    [anon_sym_DOTaddr] = ACTIONS(217),
    [anon_sym_DOTproc] = ACTIONS(217),
    [anon_sym_DOTendproc] = ACTIONS(217),
    [aux_sym__implied_opcode_token1] = ACTIONS(217),
    [aux_sym__implied_opcode_token2] = ACTIONS(217),
    [aux_sym__implied_opcode_token3] = ACTIONS(217),
    [aux_sym__implied_opcode_token4] = ACTIONS(217),
    [aux_sym__implied_opcode_token5] = ACTIONS(217),
    [aux_sym__implied_opcode_token6] = ACTIONS(217),
    [aux_sym__implied_opcode_token7] = ACTIONS(217),
    [aux_sym__implied_opcode_token8] = ACTIONS(217),
    [aux_sym__implied_opcode_token9] = ACTIONS(217),
    [aux_sym__implied_opcode_token10] = ACTIONS(217),
    [aux_sym__implied_opcode_token11] = ACTIONS(217),
    [aux_sym__implied_opcode_token12] = ACTIONS(217),
    [aux_sym__implied_opcode_token13] = ACTIONS(217),
    [aux_sym__implied_opcode_token14] = ACTIONS(217),
    [aux_sym__implied_opcode_token15] = ACTIONS(217),
    [aux_sym__implied_opcode_token16] = ACTIONS(217),
    [aux_sym__implied_opcode_token17] = ACTIONS(217),
    [aux_sym__implied_opcode_token18] = ACTIONS(217),
    [aux_sym__implied_opcode_token19] = ACTIONS(217),
    [aux_sym__implied_opcode_token20] = ACTIONS(217),
    [aux_sym__implied_opcode_token21] = ACTIONS(217),
    [aux_sym__implied_opcode_token22] = ACTIONS(217),
    [aux_sym__implied_opcode_token23] = ACTIONS(217),
    [aux_sym__implied_opcode_token24] = ACTIONS(217),
    [aux_sym__implied_opcode_token25] = ACTIONS(217),
    [aux_sym__implied_opcode_token26] = ACTIONS(217),
    [aux_sym__implied_opcode_token27] = ACTIONS(217),
    [aux_sym__implied_opcode_token28] = ACTIONS(217),
    [aux_sym__implied_opcode_token29] = ACTIONS(217),
    [aux_sym__implied_opcode_token30] = ACTIONS(217),
    [aux_sym__implied_opcode_token31] = ACTIONS(217),
    [aux_sym__implied_opcode_token32] = ACTIONS(217),
    [aux_sym__implied_opcode_token33] = ACTIONS(217),
    [aux_sym__implied_opcode_token34] = ACTIONS(217),
    [aux_sym__implied_opcode_token35] = ACTIONS(217),
    [aux_sym__implied_opcode_token36] = ACTIONS(217),
    [aux_sym__implied_opcode_token37] = ACTIONS(217),
    [aux_sym__relative_opcode_token1] = ACTIONS(217),
    [aux_sym__relative_opcode_token2] = ACTIONS(217),
    [aux_sym__relative_opcode_token3] = ACTIONS(217),
    [aux_sym__relative_opcode_token4] = ACTIONS(217),
    [aux_sym__relative_opcode_token5] = ACTIONS(217),
    [aux_sym__relative_opcode_token6] = ACTIONS(217),
    [aux_sym__relative_opcode_token7] = ACTIONS(217),
    [aux_sym__relative_opcode_token8] = ACTIONS(217),
    [aux_sym__relative_opcode_token9] = ACTIONS(217),
    [aux_sym__immediate_opcode_token1] = ACTIONS(217),
    [aux_sym__immediate_opcode_token2] = ACTIONS(217),
    [aux_sym__immediate_opcode_token3] = ACTIONS(217),
    [aux_sym__immediate_opcode_token4] = ACTIONS(217),
    [aux_sym__immediate_opcode_token5] = ACTIONS(217),
    [aux_sym__immediate_opcode_token6] = ACTIONS(217),
    [aux_sym__immediate_opcode_token7] = ACTIONS(217),
    [aux_sym__immediate_opcode_token8] = ACTIONS(217),
    [aux_sym__immediate_opcode_token9] = ACTIONS(217),
    [aux_sym__immediate_opcode_token10] = ACTIONS(217),
    [aux_sym__immediate_opcode_token11] = ACTIONS(217),
    [aux_sym__immediate_opcode_token12] = ACTIONS(217),
    [aux_sym__absolute_opcode_token1] = ACTIONS(217),
    [aux_sym__absolute_opcode_token2] = ACTIONS(217),
    [aux_sym__absolute_opcode_token3] = ACTIONS(217),
    [aux_sym__absolute_opcode_token4] = ACTIONS(217),
    [aux_sym__absolute_opcode_token5] = ACTIONS(217),
    [aux_sym__absolute_opcode_token6] = ACTIONS(217),
    [aux_sym__absolute_opcode_token7] = ACTIONS(217),
    [aux_sym__absolute_opcode_token8] = ACTIONS(217),
    [sym_cheap_local_label] = ACTIONS(215),
    [sym_local_label] = ACTIONS(217),
    [sym_global_label] = ACTIONS(217),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(221),
    [anon_sym_DOTexport] = ACTIONS(221),
    [anon_sym_DOTimport] = ACTIONS(221),
    [anon_sym_DOTsegment] = ACTIONS(221),
    [anon_sym_DOTsection] = ACTIONS(221),
    [anon_sym_word] = ACTIONS(221),
    [anon_sym_DOTbyte] = ACTIONS(221),
    [anon_sym_DOTaddr] = ACTIONS(221),
    [anon_sym_DOTproc] = ACTIONS(221),
    [anon_sym_DOTendproc] = ACTIONS(221),
    [aux_sym__implied_opcode_token1] = ACTIONS(221),
    [aux_sym__implied_opcode_token2] = ACTIONS(221),
    [aux_sym__implied_opcode_token3] = ACTIONS(221),
    [aux_sym__implied_opcode_token4] = ACTIONS(221),
    [aux_sym__implied_opcode_token5] = ACTIONS(221),
    [aux_sym__implied_opcode_token6] = ACTIONS(221),
    [aux_sym__implied_opcode_token7] = ACTIONS(221),
    [aux_sym__implied_opcode_token8] = ACTIONS(221),
    [aux_sym__implied_opcode_token9] = ACTIONS(221),
    [aux_sym__implied_opcode_token10] = ACTIONS(221),
    [aux_sym__implied_opcode_token11] = ACTIONS(221),
    [aux_sym__implied_opcode_token12] = ACTIONS(221),
    [aux_sym__implied_opcode_token13] = ACTIONS(221),
    [aux_sym__implied_opcode_token14] = ACTIONS(221),
    [aux_sym__implied_opcode_token15] = ACTIONS(221),
    [aux_sym__implied_opcode_token16] = ACTIONS(221),
    [aux_sym__implied_opcode_token17] = ACTIONS(221),
    [aux_sym__implied_opcode_token18] = ACTIONS(221),
    [aux_sym__implied_opcode_token19] = ACTIONS(221),
    [aux_sym__implied_opcode_token20] = ACTIONS(221),
    [aux_sym__implied_opcode_token21] = ACTIONS(221),
    [aux_sym__implied_opcode_token22] = ACTIONS(221),
    [aux_sym__implied_opcode_token23] = ACTIONS(221),
    [aux_sym__implied_opcode_token24] = ACTIONS(221),
    [aux_sym__implied_opcode_token25] = ACTIONS(221),
    [aux_sym__implied_opcode_token26] = ACTIONS(221),
    [aux_sym__implied_opcode_token27] = ACTIONS(221),
    [aux_sym__implied_opcode_token28] = ACTIONS(221),
    [aux_sym__implied_opcode_token29] = ACTIONS(221),
    [aux_sym__implied_opcode_token30] = ACTIONS(221),
    [aux_sym__implied_opcode_token31] = ACTIONS(221),
    [aux_sym__implied_opcode_token32] = ACTIONS(221),
    [aux_sym__implied_opcode_token33] = ACTIONS(221),
    [aux_sym__implied_opcode_token34] = ACTIONS(221),
    [aux_sym__implied_opcode_token35] = ACTIONS(221),
    [aux_sym__implied_opcode_token36] = ACTIONS(221),
    [aux_sym__implied_opcode_token37] = ACTIONS(221),
    [aux_sym__relative_opcode_token1] = ACTIONS(221),
    [aux_sym__relative_opcode_token2] = ACTIONS(221),
    [aux_sym__relative_opcode_token3] = ACTIONS(221),
    [aux_sym__relative_opcode_token4] = ACTIONS(221),
    [aux_sym__relative_opcode_token5] = ACTIONS(221),
    [aux_sym__relative_opcode_token6] = ACTIONS(221),
    [aux_sym__relative_opcode_token7] = ACTIONS(221),
    [aux_sym__relative_opcode_token8] = ACTIONS(221),
    [aux_sym__relative_opcode_token9] = ACTIONS(221),
    [aux_sym__immediate_opcode_token1] = ACTIONS(221),
    [aux_sym__immediate_opcode_token2] = ACTIONS(221),
    [aux_sym__immediate_opcode_token3] = ACTIONS(221),
    [aux_sym__immediate_opcode_token4] = ACTIONS(221),
    [aux_sym__immediate_opcode_token5] = ACTIONS(221),
    [aux_sym__immediate_opcode_token6] = ACTIONS(221),
    [aux_sym__immediate_opcode_token7] = ACTIONS(221),
    [aux_sym__immediate_opcode_token8] = ACTIONS(221),
    [aux_sym__immediate_opcode_token9] = ACTIONS(221),
    [aux_sym__immediate_opcode_token10] = ACTIONS(221),
    [aux_sym__immediate_opcode_token11] = ACTIONS(221),
    [aux_sym__immediate_opcode_token12] = ACTIONS(221),
    [aux_sym__absolute_opcode_token1] = ACTIONS(221),
    [aux_sym__absolute_opcode_token2] = ACTIONS(221),
    [aux_sym__absolute_opcode_token3] = ACTIONS(221),
    [aux_sym__absolute_opcode_token4] = ACTIONS(221),
    [aux_sym__absolute_opcode_token5] = ACTIONS(221),
    [aux_sym__absolute_opcode_token6] = ACTIONS(221),
    [aux_sym__absolute_opcode_token7] = ACTIONS(221),
    [aux_sym__absolute_opcode_token8] = ACTIONS(221),
    [sym_cheap_local_label] = ACTIONS(219),
    [sym_local_label] = ACTIONS(221),
    [sym_global_label] = ACTIONS(221),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(225),
    [anon_sym_DOTexport] = ACTIONS(225),
    [anon_sym_DOTimport] = ACTIONS(225),
    [anon_sym_DOTsegment] = ACTIONS(225),
    [anon_sym_DOTsection] = ACTIONS(225),
    [anon_sym_word] = ACTIONS(225),
    [anon_sym_DOTbyte] = ACTIONS(225),
    [anon_sym_DOTaddr] = ACTIONS(225),
    [anon_sym_DOTproc] = ACTIONS(225),
    [anon_sym_DOTendproc] = ACTIONS(225),
    [aux_sym__implied_opcode_token1] = ACTIONS(225),
    [aux_sym__implied_opcode_token2] = ACTIONS(225),
    [aux_sym__implied_opcode_token3] = ACTIONS(225),
    [aux_sym__implied_opcode_token4] = ACTIONS(225),
    [aux_sym__implied_opcode_token5] = ACTIONS(225),
    [aux_sym__implied_opcode_token6] = ACTIONS(225),
    [aux_sym__implied_opcode_token7] = ACTIONS(225),
    [aux_sym__implied_opcode_token8] = ACTIONS(225),
    [aux_sym__implied_opcode_token9] = ACTIONS(225),
    [aux_sym__implied_opcode_token10] = ACTIONS(225),
    [aux_sym__implied_opcode_token11] = ACTIONS(225),
    [aux_sym__implied_opcode_token12] = ACTIONS(225),
    [aux_sym__implied_opcode_token13] = ACTIONS(225),
    [aux_sym__implied_opcode_token14] = ACTIONS(225),
    [aux_sym__implied_opcode_token15] = ACTIONS(225),
    [aux_sym__implied_opcode_token16] = ACTIONS(225),
    [aux_sym__implied_opcode_token17] = ACTIONS(225),
    [aux_sym__implied_opcode_token18] = ACTIONS(225),
    [aux_sym__implied_opcode_token19] = ACTIONS(225),
    [aux_sym__implied_opcode_token20] = ACTIONS(225),
    [aux_sym__implied_opcode_token21] = ACTIONS(225),
    [aux_sym__implied_opcode_token22] = ACTIONS(225),
    [aux_sym__implied_opcode_token23] = ACTIONS(225),
    [aux_sym__implied_opcode_token24] = ACTIONS(225),
    [aux_sym__implied_opcode_token25] = ACTIONS(225),
    [aux_sym__implied_opcode_token26] = ACTIONS(225),
    [aux_sym__implied_opcode_token27] = ACTIONS(225),
    [aux_sym__implied_opcode_token28] = ACTIONS(225),
    [aux_sym__implied_opcode_token29] = ACTIONS(225),
    [aux_sym__implied_opcode_token30] = ACTIONS(225),
    [aux_sym__implied_opcode_token31] = ACTIONS(225),
    [aux_sym__implied_opcode_token32] = ACTIONS(225),
    [aux_sym__implied_opcode_token33] = ACTIONS(225),
    [aux_sym__implied_opcode_token34] = ACTIONS(225),
    [aux_sym__implied_opcode_token35] = ACTIONS(225),
    [aux_sym__implied_opcode_token36] = ACTIONS(225),
    [aux_sym__implied_opcode_token37] = ACTIONS(225),
    [aux_sym__relative_opcode_token1] = ACTIONS(225),
    [aux_sym__relative_opcode_token2] = ACTIONS(225),
    [aux_sym__relative_opcode_token3] = ACTIONS(225),
    [aux_sym__relative_opcode_token4] = ACTIONS(225),
    [aux_sym__relative_opcode_token5] = ACTIONS(225),
    [aux_sym__relative_opcode_token6] = ACTIONS(225),
    [aux_sym__relative_opcode_token7] = ACTIONS(225),
    [aux_sym__relative_opcode_token8] = ACTIONS(225),
    [aux_sym__relative_opcode_token9] = ACTIONS(225),
    [aux_sym__immediate_opcode_token1] = ACTIONS(225),
    [aux_sym__immediate_opcode_token2] = ACTIONS(225),
    [aux_sym__immediate_opcode_token3] = ACTIONS(225),
    [aux_sym__immediate_opcode_token4] = ACTIONS(225),
    [aux_sym__immediate_opcode_token5] = ACTIONS(225),
    [aux_sym__immediate_opcode_token6] = ACTIONS(225),
    [aux_sym__immediate_opcode_token7] = ACTIONS(225),
    [aux_sym__immediate_opcode_token8] = ACTIONS(225),
    [aux_sym__immediate_opcode_token9] = ACTIONS(225),
    [aux_sym__immediate_opcode_token10] = ACTIONS(225),
    [aux_sym__immediate_opcode_token11] = ACTIONS(225),
    [aux_sym__immediate_opcode_token12] = ACTIONS(225),
    [aux_sym__absolute_opcode_token1] = ACTIONS(225),
    [aux_sym__absolute_opcode_token2] = ACTIONS(225),
    [aux_sym__absolute_opcode_token3] = ACTIONS(225),
    [aux_sym__absolute_opcode_token4] = ACTIONS(225),
    [aux_sym__absolute_opcode_token5] = ACTIONS(225),
    [aux_sym__absolute_opcode_token6] = ACTIONS(225),
    [aux_sym__absolute_opcode_token7] = ACTIONS(225),
    [aux_sym__absolute_opcode_token8] = ACTIONS(225),
    [sym_cheap_local_label] = ACTIONS(223),
    [sym_local_label] = ACTIONS(225),
    [sym_global_label] = ACTIONS(225),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(229),
    [anon_sym_DOTexport] = ACTIONS(229),
    [anon_sym_DOTimport] = ACTIONS(229),
    [anon_sym_DOTsegment] = ACTIONS(229),
    [anon_sym_DOTsection] = ACTIONS(229),
    [anon_sym_word] = ACTIONS(229),
    [anon_sym_DOTbyte] = ACTIONS(229),
    [anon_sym_DOTaddr] = ACTIONS(229),
    [anon_sym_DOTproc] = ACTIONS(229),
    [anon_sym_DOTendproc] = ACTIONS(229),
    [aux_sym__implied_opcode_token1] = ACTIONS(229),
    [aux_sym__implied_opcode_token2] = ACTIONS(229),
    [aux_sym__implied_opcode_token3] = ACTIONS(229),
    [aux_sym__implied_opcode_token4] = ACTIONS(229),
    [aux_sym__implied_opcode_token5] = ACTIONS(229),
    [aux_sym__implied_opcode_token6] = ACTIONS(229),
    [aux_sym__implied_opcode_token7] = ACTIONS(229),
    [aux_sym__implied_opcode_token8] = ACTIONS(229),
    [aux_sym__implied_opcode_token9] = ACTIONS(229),
    [aux_sym__implied_opcode_token10] = ACTIONS(229),
    [aux_sym__implied_opcode_token11] = ACTIONS(229),
    [aux_sym__implied_opcode_token12] = ACTIONS(229),
    [aux_sym__implied_opcode_token13] = ACTIONS(229),
    [aux_sym__implied_opcode_token14] = ACTIONS(229),
    [aux_sym__implied_opcode_token15] = ACTIONS(229),
    [aux_sym__implied_opcode_token16] = ACTIONS(229),
    [aux_sym__implied_opcode_token17] = ACTIONS(229),
    [aux_sym__implied_opcode_token18] = ACTIONS(229),
    [aux_sym__implied_opcode_token19] = ACTIONS(229),
    [aux_sym__implied_opcode_token20] = ACTIONS(229),
    [aux_sym__implied_opcode_token21] = ACTIONS(229),
    [aux_sym__implied_opcode_token22] = ACTIONS(229),
    [aux_sym__implied_opcode_token23] = ACTIONS(229),
    [aux_sym__implied_opcode_token24] = ACTIONS(229),
    [aux_sym__implied_opcode_token25] = ACTIONS(229),
    [aux_sym__implied_opcode_token26] = ACTIONS(229),
    [aux_sym__implied_opcode_token27] = ACTIONS(229),
    [aux_sym__implied_opcode_token28] = ACTIONS(229),
    [aux_sym__implied_opcode_token29] = ACTIONS(229),
    [aux_sym__implied_opcode_token30] = ACTIONS(229),
    [aux_sym__implied_opcode_token31] = ACTIONS(229),
    [aux_sym__implied_opcode_token32] = ACTIONS(229),
    [aux_sym__implied_opcode_token33] = ACTIONS(229),
    [aux_sym__implied_opcode_token34] = ACTIONS(229),
    [aux_sym__implied_opcode_token35] = ACTIONS(229),
    [aux_sym__implied_opcode_token36] = ACTIONS(229),
    [aux_sym__implied_opcode_token37] = ACTIONS(229),
    [aux_sym__relative_opcode_token1] = ACTIONS(229),
    [aux_sym__relative_opcode_token2] = ACTIONS(229),
    [aux_sym__relative_opcode_token3] = ACTIONS(229),
    [aux_sym__relative_opcode_token4] = ACTIONS(229),
    [aux_sym__relative_opcode_token5] = ACTIONS(229),
    [aux_sym__relative_opcode_token6] = ACTIONS(229),
    [aux_sym__relative_opcode_token7] = ACTIONS(229),
    [aux_sym__relative_opcode_token8] = ACTIONS(229),
    [aux_sym__relative_opcode_token9] = ACTIONS(229),
    [aux_sym__immediate_opcode_token1] = ACTIONS(229),
    [aux_sym__immediate_opcode_token2] = ACTIONS(229),
    [aux_sym__immediate_opcode_token3] = ACTIONS(229),
    [aux_sym__immediate_opcode_token4] = ACTIONS(229),
    [aux_sym__immediate_opcode_token5] = ACTIONS(229),
    [aux_sym__immediate_opcode_token6] = ACTIONS(229),
    [aux_sym__immediate_opcode_token7] = ACTIONS(229),
    [aux_sym__immediate_opcode_token8] = ACTIONS(229),
    [aux_sym__immediate_opcode_token9] = ACTIONS(229),
    [aux_sym__immediate_opcode_token10] = ACTIONS(229),
    [aux_sym__immediate_opcode_token11] = ACTIONS(229),
    [aux_sym__immediate_opcode_token12] = ACTIONS(229),
    [aux_sym__absolute_opcode_token1] = ACTIONS(229),
    [aux_sym__absolute_opcode_token2] = ACTIONS(229),
    [aux_sym__absolute_opcode_token3] = ACTIONS(229),
    [aux_sym__absolute_opcode_token4] = ACTIONS(229),
    [aux_sym__absolute_opcode_token5] = ACTIONS(229),
    [aux_sym__absolute_opcode_token6] = ACTIONS(229),
    [aux_sym__absolute_opcode_token7] = ACTIONS(229),
    [aux_sym__absolute_opcode_token8] = ACTIONS(229),
    [sym_cheap_local_label] = ACTIONS(227),
    [sym_local_label] = ACTIONS(229),
    [sym_global_label] = ACTIONS(229),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(233),
    [anon_sym_DOTexport] = ACTIONS(233),
    [anon_sym_DOTimport] = ACTIONS(233),
    [anon_sym_DOTsegment] = ACTIONS(233),
    [anon_sym_DOTsection] = ACTIONS(233),
    [anon_sym_word] = ACTIONS(233),
    [anon_sym_DOTbyte] = ACTIONS(233),
    [anon_sym_DOTaddr] = ACTIONS(233),
    [anon_sym_DOTproc] = ACTIONS(233),
    [anon_sym_DOTendproc] = ACTIONS(233),
    [aux_sym__implied_opcode_token1] = ACTIONS(233),
    [aux_sym__implied_opcode_token2] = ACTIONS(233),
    [aux_sym__implied_opcode_token3] = ACTIONS(233),
    [aux_sym__implied_opcode_token4] = ACTIONS(233),
    [aux_sym__implied_opcode_token5] = ACTIONS(233),
    [aux_sym__implied_opcode_token6] = ACTIONS(233),
    [aux_sym__implied_opcode_token7] = ACTIONS(233),
    [aux_sym__implied_opcode_token8] = ACTIONS(233),
    [aux_sym__implied_opcode_token9] = ACTIONS(233),
    [aux_sym__implied_opcode_token10] = ACTIONS(233),
    [aux_sym__implied_opcode_token11] = ACTIONS(233),
    [aux_sym__implied_opcode_token12] = ACTIONS(233),
    [aux_sym__implied_opcode_token13] = ACTIONS(233),
    [aux_sym__implied_opcode_token14] = ACTIONS(233),
    [aux_sym__implied_opcode_token15] = ACTIONS(233),
    [aux_sym__implied_opcode_token16] = ACTIONS(233),
    [aux_sym__implied_opcode_token17] = ACTIONS(233),
    [aux_sym__implied_opcode_token18] = ACTIONS(233),
    [aux_sym__implied_opcode_token19] = ACTIONS(233),
    [aux_sym__implied_opcode_token20] = ACTIONS(233),
    [aux_sym__implied_opcode_token21] = ACTIONS(233),
    [aux_sym__implied_opcode_token22] = ACTIONS(233),
    [aux_sym__implied_opcode_token23] = ACTIONS(233),
    [aux_sym__implied_opcode_token24] = ACTIONS(233),
    [aux_sym__implied_opcode_token25] = ACTIONS(233),
    [aux_sym__implied_opcode_token26] = ACTIONS(233),
    [aux_sym__implied_opcode_token27] = ACTIONS(233),
    [aux_sym__implied_opcode_token28] = ACTIONS(233),
    [aux_sym__implied_opcode_token29] = ACTIONS(233),
    [aux_sym__implied_opcode_token30] = ACTIONS(233),
    [aux_sym__implied_opcode_token31] = ACTIONS(233),
    [aux_sym__implied_opcode_token32] = ACTIONS(233),
    [aux_sym__implied_opcode_token33] = ACTIONS(233),
    [aux_sym__implied_opcode_token34] = ACTIONS(233),
    [aux_sym__implied_opcode_token35] = ACTIONS(233),
    [aux_sym__implied_opcode_token36] = ACTIONS(233),
    [aux_sym__implied_opcode_token37] = ACTIONS(233),
    [aux_sym__relative_opcode_token1] = ACTIONS(233),
    [aux_sym__relative_opcode_token2] = ACTIONS(233),
    [aux_sym__relative_opcode_token3] = ACTIONS(233),
    [aux_sym__relative_opcode_token4] = ACTIONS(233),
    [aux_sym__relative_opcode_token5] = ACTIONS(233),
    [aux_sym__relative_opcode_token6] = ACTIONS(233),
    [aux_sym__relative_opcode_token7] = ACTIONS(233),
    [aux_sym__relative_opcode_token8] = ACTIONS(233),
    [aux_sym__relative_opcode_token9] = ACTIONS(233),
    [aux_sym__immediate_opcode_token1] = ACTIONS(233),
    [aux_sym__immediate_opcode_token2] = ACTIONS(233),
    [aux_sym__immediate_opcode_token3] = ACTIONS(233),
    [aux_sym__immediate_opcode_token4] = ACTIONS(233),
    [aux_sym__immediate_opcode_token5] = ACTIONS(233),
    [aux_sym__immediate_opcode_token6] = ACTIONS(233),
    [aux_sym__immediate_opcode_token7] = ACTIONS(233),
    [aux_sym__immediate_opcode_token8] = ACTIONS(233),
    [aux_sym__immediate_opcode_token9] = ACTIONS(233),
    [aux_sym__immediate_opcode_token10] = ACTIONS(233),
    [aux_sym__immediate_opcode_token11] = ACTIONS(233),
    [aux_sym__immediate_opcode_token12] = ACTIONS(233),
    [aux_sym__absolute_opcode_token1] = ACTIONS(233),
    [aux_sym__absolute_opcode_token2] = ACTIONS(233),
    [aux_sym__absolute_opcode_token3] = ACTIONS(233),
    [aux_sym__absolute_opcode_token4] = ACTIONS(233),
    [aux_sym__absolute_opcode_token5] = ACTIONS(233),
    [aux_sym__absolute_opcode_token6] = ACTIONS(233),
    [aux_sym__absolute_opcode_token7] = ACTIONS(233),
    [aux_sym__absolute_opcode_token8] = ACTIONS(233),
    [sym_cheap_local_label] = ACTIONS(231),
    [sym_local_label] = ACTIONS(233),
    [sym_global_label] = ACTIONS(233),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      sym__reg_x,
    ACTIONS(110), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [23] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(241), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(9), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [44] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(245), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(10), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [65] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(247), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(4), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [86] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(249), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(5), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [107] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(251), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(42), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [128] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(253), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(7), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [149] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(255), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(8), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(110), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [187] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(259), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(34), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [208] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_string_repeat1,
    ACTIONS(263), 2,
      sym_string_content,
      sym_escape_sequence,
  [222] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(267), 2,
      sym_string_content,
      sym_escape_sequence,
  [236] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(272), 2,
      sym_string_content,
      sym_escape_sequence,
  [250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__byte_list,
    STATE(13), 1,
      sym__byte_literal,
    ACTIONS(142), 2,
      sym_num_literal,
      sym_char_literal,
  [264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      sym_num_literal,
      sym_global_label,
  [272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_EQ,
    ACTIONS(278), 1,
      anon_sym_COLON,
  [282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_x,
    ACTIONS(282), 1,
      anon_sym_y,
  [292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym_string,
  [302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 2,
      aux_sym_file_control_command_token1,
      aux_sym_file_control_command_token2,
  [310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_global_label,
  [317] = 2,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym__ws_sep,
  [324] = 2,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym__ws_sep,
  [331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym_section_control_command_token1,
  [338] = 2,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym__ws_sep,
  [345] = 2,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym__ws_sep,
  [352] = 2,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym__ws_sep,
  [359] = 2,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym__ws_sep,
  [366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_global_label,
  [373] = 2,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__ws_sep,
  [380] = 2,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym__ws_sep,
  [387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym_global_label,
  [394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LPAREN2,
  [401] = 2,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__ws_sep,
  [408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
  [415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_POUND,
  [422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_COLON,
  [429] = 2,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym__ws_sep,
  [436] = 2,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym__ws_sep,
  [443] = 2,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym__ws_sep,
  [450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_x,
  [457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
  [464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_y,
  [471] = 2,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym__ws_sep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(34)] = 0,
  [SMALL_STATE(35)] = 23,
  [SMALL_STATE(36)] = 44,
  [SMALL_STATE(37)] = 65,
  [SMALL_STATE(38)] = 86,
  [SMALL_STATE(39)] = 107,
  [SMALL_STATE(40)] = 128,
  [SMALL_STATE(41)] = 149,
  [SMALL_STATE(42)] = 170,
  [SMALL_STATE(43)] = 187,
  [SMALL_STATE(44)] = 208,
  [SMALL_STATE(45)] = 222,
  [SMALL_STATE(46)] = 236,
  [SMALL_STATE(47)] = 250,
  [SMALL_STATE(48)] = 264,
  [SMALL_STATE(49)] = 272,
  [SMALL_STATE(50)] = 282,
  [SMALL_STATE(51)] = 292,
  [SMALL_STATE(52)] = 302,
  [SMALL_STATE(53)] = 310,
  [SMALL_STATE(54)] = 317,
  [SMALL_STATE(55)] = 324,
  [SMALL_STATE(56)] = 331,
  [SMALL_STATE(57)] = 338,
  [SMALL_STATE(58)] = 345,
  [SMALL_STATE(59)] = 352,
  [SMALL_STATE(60)] = 359,
  [SMALL_STATE(61)] = 366,
  [SMALL_STATE(62)] = 373,
  [SMALL_STATE(63)] = 380,
  [SMALL_STATE(64)] = 387,
  [SMALL_STATE(65)] = 394,
  [SMALL_STATE(66)] = 401,
  [SMALL_STATE(67)] = 408,
  [SMALL_STATE(68)] = 415,
  [SMALL_STATE(69)] = 422,
  [SMALL_STATE(70)] = 429,
  [SMALL_STATE(71)] = 436,
  [SMALL_STATE(72)] = 443,
  [SMALL_STATE(73)] = 450,
  [SMALL_STATE(74)] = 457,
  [SMALL_STATE(75)] = 464,
  [SMALL_STATE(76)] = 471,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .dynamic_precedence = 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 3, .dynamic_precedence = 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 4),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_control_command, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_control_command, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__byte_list, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__byte_list, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__byte_list, 2), SHIFT_REPEAT(13),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__byte_list, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__byte_list, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 5, .dynamic_precedence = 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect, 5, .dynamic_precedence = 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg_x, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reg_x, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implied_opcode, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_opcode, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implied_opcode, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_control_command, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_control_command, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg_y, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reg_y, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implied, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implied, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_control_command, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_control_command, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_control_command, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_control_command, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_control_command, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_control_command, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 6, .dynamic_precedence = 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect, 6, .dynamic_precedence = 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_control_command, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_control_command, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .dynamic_precedence = 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .dynamic_precedence = 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address_control_command, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address_control_command, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment_control_command, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment_control_command, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_control_command, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_control_command, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(45),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_opcode, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [316] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__absolute_opcode, 1), REDUCE(sym__indirect_opcode, 1),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__immediate_opcode, 1), REDUCE(sym__absolute_opcode, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [328] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__immediate_opcode, 1), REDUCE(sym__absolute_opcode, 1), REDUCE(sym__indirect_opcode, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_asm6502(void) {
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
