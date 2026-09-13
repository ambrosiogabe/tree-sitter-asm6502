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
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 33
#define SYMBOL_COUNT 150
#define ALIAS_COUNT 0
#define TOKEN_COUNT 107
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
  anon_sym_DOTsegment = 8,
  anon_sym_DOTsection = 9,
  anon_sym_word = 10,
  anon_sym_DOTbyte = 11,
  anon_sym_DOTaddr = 12,
  anon_sym_DOTproc = 13,
  anon_sym_DOTendproc = 14,
  anon_sym_EQ = 15,
  anon_sym_COLON = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  sym_num_literal = 19,
  sym_char_literal = 20,
  anon_sym_PLUS = 21,
  anon_sym_DASH = 22,
  anon_sym_STAR = 23,
  anon_sym_SLASH = 24,
  anon_sym_LT_LT = 25,
  anon_sym_GT_GT = 26,
  anon_sym_AMP = 27,
  anon_sym_PIPE = 28,
  aux_sym_unary_expr_token1 = 29,
  anon_sym_POUND = 30,
  anon_sym_LPAREN2 = 31,
  anon_sym_COMMA = 32,
  anon_sym_x = 33,
  anon_sym_y = 34,
  aux_sym__implied_opcode_token1 = 35,
  aux_sym__implied_opcode_token2 = 36,
  aux_sym__implied_opcode_token3 = 37,
  aux_sym__implied_opcode_token4 = 38,
  aux_sym__implied_opcode_token5 = 39,
  aux_sym__implied_opcode_token6 = 40,
  aux_sym__implied_opcode_token7 = 41,
  aux_sym__implied_opcode_token8 = 42,
  aux_sym__implied_opcode_token9 = 43,
  aux_sym__implied_opcode_token10 = 44,
  aux_sym__implied_opcode_token11 = 45,
  aux_sym__implied_opcode_token12 = 46,
  aux_sym__implied_opcode_token13 = 47,
  aux_sym__implied_opcode_token14 = 48,
  aux_sym__implied_opcode_token15 = 49,
  aux_sym__implied_opcode_token16 = 50,
  aux_sym__implied_opcode_token17 = 51,
  aux_sym__implied_opcode_token18 = 52,
  aux_sym__implied_opcode_token19 = 53,
  aux_sym__implied_opcode_token20 = 54,
  aux_sym__implied_opcode_token21 = 55,
  aux_sym__implied_opcode_token22 = 56,
  aux_sym__implied_opcode_token23 = 57,
  aux_sym__implied_opcode_token24 = 58,
  aux_sym__implied_opcode_token25 = 59,
  aux_sym__implied_opcode_token26 = 60,
  aux_sym__implied_opcode_token27 = 61,
  aux_sym__implied_opcode_token28 = 62,
  aux_sym__implied_opcode_token29 = 63,
  aux_sym__implied_opcode_token30 = 64,
  aux_sym__implied_opcode_token31 = 65,
  aux_sym__implied_opcode_token32 = 66,
  aux_sym__implied_opcode_token33 = 67,
  aux_sym__implied_opcode_token34 = 68,
  aux_sym__implied_opcode_token35 = 69,
  aux_sym__implied_opcode_token36 = 70,
  aux_sym__implied_opcode_token37 = 71,
  aux_sym__relative_opcode_token1 = 72,
  aux_sym__relative_opcode_token2 = 73,
  aux_sym__relative_opcode_token3 = 74,
  aux_sym__relative_opcode_token4 = 75,
  aux_sym__relative_opcode_token5 = 76,
  aux_sym__relative_opcode_token6 = 77,
  aux_sym__relative_opcode_token7 = 78,
  aux_sym__relative_opcode_token8 = 79,
  aux_sym__relative_opcode_token9 = 80,
  aux_sym__immediate_opcode_token1 = 81,
  aux_sym__immediate_opcode_token2 = 82,
  aux_sym__immediate_opcode_token3 = 83,
  aux_sym__immediate_opcode_token4 = 84,
  aux_sym__immediate_opcode_token5 = 85,
  aux_sym__immediate_opcode_token6 = 86,
  aux_sym__immediate_opcode_token7 = 87,
  aux_sym__immediate_opcode_token8 = 88,
  aux_sym__immediate_opcode_token9 = 89,
  aux_sym__immediate_opcode_token10 = 90,
  aux_sym__immediate_opcode_token11 = 91,
  aux_sym__immediate_opcode_token12 = 92,
  aux_sym__absolute_opcode_token1 = 93,
  aux_sym__absolute_opcode_token2 = 94,
  aux_sym__absolute_opcode_token3 = 95,
  aux_sym__absolute_opcode_token4 = 96,
  aux_sym__absolute_opcode_token5 = 97,
  aux_sym__absolute_opcode_token6 = 98,
  aux_sym__absolute_opcode_token7 = 99,
  aux_sym__absolute_opcode_token8 = 100,
  anon_sym_DQUOTE = 101,
  sym_string_content = 102,
  sym_escape_sequence = 103,
  sym_comma = 104,
  sym_local_label = 105,
  sym_global_label = 106,
  sym_source_file = 107,
  sym__statement = 108,
  sym__control_command = 109,
  sym_file_control_command = 110,
  sym_export_control_command = 111,
  sym_segment_control_command = 112,
  sym_section_control_command = 113,
  sym_byte_control_command = 114,
  sym_address_control_command = 115,
  sym_proc_control_command = 116,
  sym__inc_name = 117,
  sym__export_name = 118,
  sym__segment_name = 119,
  sym__sec_name = 120,
  sym__word_name = 121,
  sym__byte_name = 122,
  sym__address_name = 123,
  sym__proc_name = 124,
  sym__endproc_name = 125,
  sym_assignment = 126,
  sym_label = 127,
  aux_sym__byte_list = 128,
  sym__byte_literal = 129,
  sym__expr = 130,
  sym__identifier = 131,
  sym_binary_expr = 132,
  sym_unary_expr = 133,
  sym__operation = 134,
  sym_implied = 135,
  sym_relative = 136,
  sym_immediate = 137,
  sym_absolute = 138,
  sym_indirect = 139,
  sym__reg_x = 140,
  sym__reg_y = 141,
  sym__implied_opcode = 142,
  sym__relative_opcode = 143,
  sym__immediate_opcode = 144,
  sym__absolute_opcode = 145,
  sym__indirect_opcode = 146,
  sym_string = 147,
  aux_sym_source_file_repeat1 = 148,
  aux_sym_string_repeat1 = 149,
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
  [sym_local_label] = "local_label",
  [sym_global_label] = "global_label",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__control_command] = "_control_command",
  [sym_file_control_command] = "file_control_command",
  [sym_export_control_command] = "export_control_command",
  [sym_segment_control_command] = "segment_control_command",
  [sym_section_control_command] = "section_control_command",
  [sym_byte_control_command] = "byte_control_command",
  [sym_address_control_command] = "address_control_command",
  [sym_proc_control_command] = "proc_control_command",
  [sym__inc_name] = "_inc_name",
  [sym__export_name] = "_export_name",
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
  [sym_local_label] = sym_local_label,
  [sym_global_label] = sym_global_label,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__control_command] = sym__control_command,
  [sym_file_control_command] = sym_file_control_command,
  [sym_export_control_command] = sym_export_control_command,
  [sym_segment_control_command] = sym_segment_control_command,
  [sym_section_control_command] = sym_section_control_command,
  [sym_byte_control_command] = sym_byte_control_command,
  [sym_address_control_command] = sym_address_control_command,
  [sym_proc_control_command] = sym_proc_control_command,
  [sym__inc_name] = sym__inc_name,
  [sym__export_name] = sym__export_name,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(98);
      if (lookahead == '"') ADVANCE(269);
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(91);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == 'W') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(135);
      if (lookahead == 'y') ADVANCE(136);
      if (lookahead == '|') ADVANCE(130);
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
          lookahead == '~') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(92)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(269);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '~') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(122);
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(127);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(128);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead == 'b') ADVANCE(308);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead == 'p') ADVANCE(299);
      if (lookahead == 's') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(311);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(86);
      if (lookahead == 'x') ADVANCE(84);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(189);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(243);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(245);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(247);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(191);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(193);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(195);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(197);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(201);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(203);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(205);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(161);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(259);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(261);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(263);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(169);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(348);
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
          lookahead == 'a') ADVANCE(347);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(320);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(321);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(318);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 27:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(265);
      END_STATE();
    case 28:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(267);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(167);
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
          lookahead == 'b') ADVANCE(328);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
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
          lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(211);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      END_STATE();
    case 34:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(225);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(227);
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(139);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(141);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 36:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(179);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(147);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 37:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(181);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(151);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 38:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(251);
      END_STATE();
    case 39:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(155);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(157);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(323);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(345);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(333);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(331);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
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
          lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 44:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(322);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 45:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(313);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 49:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(19);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 50:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(315);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 51:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 52:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 53:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(207);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(209);
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
          lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 56:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 57:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 58:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(325);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(338);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 59:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(339);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 61:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 62:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 63:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 64:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 65:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(337);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
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
          lookahead == 'o') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 69:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(235);
      END_STATE();
    case 70:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 71:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 72:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(215);
      END_STATE();
    case 73:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 74:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 75:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 76:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 77:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 78:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 79:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(237);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(239);
      END_STATE();
    case 80:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(163);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 81:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 89:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 90:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 91:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(5);
      END_STATE();
    case 92:
      if (eof) ADVANCE(98);
      if (lookahead == '"') ADVANCE(269);
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(91);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == 'W') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(135);
      if (lookahead == 'y') ADVANCE(136);
      if (lookahead == '|') ADVANCE(130);
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
          lookahead == '~') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(92)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 93:
      if (eof) ADVANCE(98);
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(91);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == 'W') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(12);
      if (lookahead == '|') ADVANCE(130);
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
          lookahead == ' ') SKIP(94)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 94:
      if (eof) ADVANCE(98);
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(91);
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == 'W') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(12);
      if (lookahead == '|') ADVANCE(130);
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
          lookahead == ' ') SKIP(94)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 95:
      if (eof) ADVANCE(98);
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(91);
      if (lookahead == ',') ADVANCE(273);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ';') ADVANCE(100);
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
          lookahead == ' ') SKIP(95)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 96:
      if (eof) ADVANCE(98);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ';') ADVANCE(100);
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
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 97:
      if (eof) ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == 'W') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(96)
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
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__ws_sep);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_file_control_command_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_file_control_command_token2);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_section_control_command_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DOTinclude);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOTexport);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOTsegment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DOTsection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOTaddr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DOTproc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOTendproc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_num_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_num_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_num_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_unary_expr_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token2);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token3);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token4);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token5);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token6);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token7);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token8);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token9);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token11);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token12);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token13);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token14);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token15);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token16);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token17);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token18);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token19);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token20);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token21);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token22);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token24);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token25);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token26);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token27);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token28);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token29);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token30);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token31);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token32);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token33);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token34);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token35);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token36);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token37);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token2);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token3);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token4);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token5);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token6);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token7);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token8);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token9);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token1);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token2);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token3);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token4);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token5);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token6);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token7);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token8);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token9);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token10);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token11);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token12);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token1);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token2);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token3);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token4);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token5);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token6);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token7);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token8);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(303);
      if (lookahead == 'g') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'd') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'd') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'd') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'd') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'i') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'l') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'm') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead == 'x') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'p') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'p') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'u') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'y') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_local_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'd') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'r') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(246);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(194);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(196);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(202);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(204);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(162);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(260);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(262);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'w')) ADVANCE(348);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(268);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(212);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(226);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(142);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(180);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(148);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(152);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(156);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(158);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(238);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(164);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_global_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 93},
  [2] = {.lex_state = 93},
  [3] = {.lex_state = 93},
  [4] = {.lex_state = 93},
  [5] = {.lex_state = 93},
  [6] = {.lex_state = 93},
  [7] = {.lex_state = 93},
  [8] = {.lex_state = 93},
  [9] = {.lex_state = 93},
  [10] = {.lex_state = 93},
  [11] = {.lex_state = 93},
  [12] = {.lex_state = 93},
  [13] = {.lex_state = 95},
  [14] = {.lex_state = 93},
  [15] = {.lex_state = 93},
  [16] = {.lex_state = 93},
  [17] = {.lex_state = 97},
  [18] = {.lex_state = 93},
  [19] = {.lex_state = 93},
  [20] = {.lex_state = 93},
  [21] = {.lex_state = 93},
  [22] = {.lex_state = 93},
  [23] = {.lex_state = 93},
  [24] = {.lex_state = 93},
  [25] = {.lex_state = 93},
  [26] = {.lex_state = 93},
  [27] = {.lex_state = 93},
  [28] = {.lex_state = 93},
  [29] = {.lex_state = 93},
  [30] = {.lex_state = 93},
  [31] = {.lex_state = 93},
  [32] = {.lex_state = 93},
  [33] = {.lex_state = 93},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 93},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 93},
  [53] = {.lex_state = 97},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 97},
  [58] = {.lex_state = 97},
  [59] = {.lex_state = 97},
  [60] = {.lex_state = 97},
  [61] = {.lex_state = 97},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 97},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 97},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 97},
  [68] = {.lex_state = 97},
  [69] = {.lex_state = 97},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 97},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(1),
    [anon_sym_DOTexport] = ACTIONS(1),
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
    [sym_local_label] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(64),
    [sym__statement] = STATE(3),
    [sym__control_command] = STATE(3),
    [sym_file_control_command] = STATE(3),
    [sym_export_control_command] = STATE(3),
    [sym_segment_control_command] = STATE(3),
    [sym_section_control_command] = STATE(3),
    [sym_byte_control_command] = STATE(3),
    [sym_address_control_command] = STATE(3),
    [sym_proc_control_command] = STATE(3),
    [sym__inc_name] = STATE(53),
    [sym__export_name] = STATE(61),
    [sym__segment_name] = STATE(50),
    [sym__sec_name] = STATE(57),
    [sym__word_name] = STATE(46),
    [sym__byte_name] = STATE(46),
    [sym__address_name] = STATE(51),
    [sym__proc_name] = STATE(54),
    [sym__endproc_name] = STATE(19),
    [sym_assignment] = STATE(3),
    [sym_label] = STATE(3),
    [sym__operation] = STATE(3),
    [sym_implied] = STATE(3),
    [sym_relative] = STATE(3),
    [sym_immediate] = STATE(3),
    [sym_absolute] = STATE(3),
    [sym_indirect] = STATE(3),
    [sym__implied_opcode] = STATE(18),
    [sym__relative_opcode] = STATE(63),
    [sym__immediate_opcode] = STATE(65),
    [sym__absolute_opcode] = STATE(59),
    [sym__indirect_opcode] = STATE(60),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(7),
    [anon_sym_DOTexport] = ACTIONS(9),
    [anon_sym_DOTsegment] = ACTIONS(11),
    [anon_sym_DOTsection] = ACTIONS(13),
    [anon_sym_word] = ACTIONS(15),
    [anon_sym_DOTbyte] = ACTIONS(15),
    [anon_sym_DOTaddr] = ACTIONS(17),
    [anon_sym_DOTproc] = ACTIONS(19),
    [anon_sym_DOTendproc] = ACTIONS(21),
    [aux_sym__implied_opcode_token1] = ACTIONS(23),
    [aux_sym__implied_opcode_token2] = ACTIONS(23),
    [aux_sym__implied_opcode_token3] = ACTIONS(23),
    [aux_sym__implied_opcode_token4] = ACTIONS(23),
    [aux_sym__implied_opcode_token5] = ACTIONS(23),
    [aux_sym__implied_opcode_token6] = ACTIONS(23),
    [aux_sym__implied_opcode_token7] = ACTIONS(23),
    [aux_sym__implied_opcode_token8] = ACTIONS(23),
    [aux_sym__implied_opcode_token9] = ACTIONS(23),
    [aux_sym__implied_opcode_token10] = ACTIONS(23),
    [aux_sym__implied_opcode_token11] = ACTIONS(23),
    [aux_sym__implied_opcode_token12] = ACTIONS(23),
    [aux_sym__implied_opcode_token13] = ACTIONS(23),
    [aux_sym__implied_opcode_token14] = ACTIONS(23),
    [aux_sym__implied_opcode_token15] = ACTIONS(23),
    [aux_sym__implied_opcode_token16] = ACTIONS(23),
    [aux_sym__implied_opcode_token17] = ACTIONS(23),
    [aux_sym__implied_opcode_token18] = ACTIONS(23),
    [aux_sym__implied_opcode_token19] = ACTIONS(23),
    [aux_sym__implied_opcode_token20] = ACTIONS(23),
    [aux_sym__implied_opcode_token21] = ACTIONS(25),
    [aux_sym__implied_opcode_token22] = ACTIONS(25),
    [aux_sym__implied_opcode_token23] = ACTIONS(25),
    [aux_sym__implied_opcode_token24] = ACTIONS(25),
    [aux_sym__implied_opcode_token25] = ACTIONS(25),
    [aux_sym__implied_opcode_token26] = ACTIONS(25),
    [aux_sym__implied_opcode_token27] = ACTIONS(23),
    [aux_sym__implied_opcode_token28] = ACTIONS(23),
    [aux_sym__implied_opcode_token29] = ACTIONS(23),
    [aux_sym__implied_opcode_token30] = ACTIONS(23),
    [aux_sym__implied_opcode_token31] = ACTIONS(23),
    [aux_sym__implied_opcode_token32] = ACTIONS(23),
    [aux_sym__implied_opcode_token33] = ACTIONS(23),
    [aux_sym__implied_opcode_token34] = ACTIONS(23),
    [aux_sym__implied_opcode_token35] = ACTIONS(23),
    [aux_sym__implied_opcode_token36] = ACTIONS(23),
    [aux_sym__implied_opcode_token37] = ACTIONS(23),
    [aux_sym__relative_opcode_token1] = ACTIONS(27),
    [aux_sym__relative_opcode_token2] = ACTIONS(27),
    [aux_sym__relative_opcode_token3] = ACTIONS(27),
    [aux_sym__relative_opcode_token4] = ACTIONS(27),
    [aux_sym__relative_opcode_token5] = ACTIONS(27),
    [aux_sym__relative_opcode_token6] = ACTIONS(27),
    [aux_sym__relative_opcode_token7] = ACTIONS(27),
    [aux_sym__relative_opcode_token8] = ACTIONS(27),
    [aux_sym__relative_opcode_token9] = ACTIONS(27),
    [aux_sym__immediate_opcode_token1] = ACTIONS(29),
    [aux_sym__immediate_opcode_token2] = ACTIONS(29),
    [aux_sym__immediate_opcode_token3] = ACTIONS(31),
    [aux_sym__immediate_opcode_token4] = ACTIONS(29),
    [aux_sym__immediate_opcode_token5] = ACTIONS(31),
    [aux_sym__immediate_opcode_token6] = ACTIONS(31),
    [aux_sym__immediate_opcode_token7] = ACTIONS(29),
    [aux_sym__immediate_opcode_token8] = ACTIONS(29),
    [aux_sym__immediate_opcode_token9] = ACTIONS(31),
    [aux_sym__immediate_opcode_token10] = ACTIONS(31),
    [aux_sym__immediate_opcode_token11] = ACTIONS(29),
    [aux_sym__immediate_opcode_token12] = ACTIONS(29),
    [aux_sym__absolute_opcode_token1] = ACTIONS(33),
    [aux_sym__absolute_opcode_token2] = ACTIONS(35),
    [aux_sym__absolute_opcode_token3] = ACTIONS(33),
    [aux_sym__absolute_opcode_token4] = ACTIONS(35),
    [aux_sym__absolute_opcode_token5] = ACTIONS(35),
    [aux_sym__absolute_opcode_token6] = ACTIONS(35),
    [aux_sym__absolute_opcode_token7] = ACTIONS(35),
    [aux_sym__absolute_opcode_token8] = ACTIONS(35),
    [sym_local_label] = ACTIONS(37),
    [sym_global_label] = ACTIONS(39),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__control_command] = STATE(2),
    [sym_file_control_command] = STATE(2),
    [sym_export_control_command] = STATE(2),
    [sym_segment_control_command] = STATE(2),
    [sym_section_control_command] = STATE(2),
    [sym_byte_control_command] = STATE(2),
    [sym_address_control_command] = STATE(2),
    [sym_proc_control_command] = STATE(2),
    [sym__inc_name] = STATE(53),
    [sym__export_name] = STATE(61),
    [sym__segment_name] = STATE(50),
    [sym__sec_name] = STATE(57),
    [sym__word_name] = STATE(46),
    [sym__byte_name] = STATE(46),
    [sym__address_name] = STATE(51),
    [sym__proc_name] = STATE(54),
    [sym__endproc_name] = STATE(19),
    [sym_assignment] = STATE(2),
    [sym_label] = STATE(2),
    [sym__operation] = STATE(2),
    [sym_implied] = STATE(2),
    [sym_relative] = STATE(2),
    [sym_immediate] = STATE(2),
    [sym_absolute] = STATE(2),
    [sym_indirect] = STATE(2),
    [sym__implied_opcode] = STATE(18),
    [sym__relative_opcode] = STATE(63),
    [sym__immediate_opcode] = STATE(65),
    [sym__absolute_opcode] = STATE(59),
    [sym__indirect_opcode] = STATE(60),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(43),
    [anon_sym_DOTexport] = ACTIONS(46),
    [anon_sym_DOTsegment] = ACTIONS(49),
    [anon_sym_DOTsection] = ACTIONS(52),
    [anon_sym_word] = ACTIONS(55),
    [anon_sym_DOTbyte] = ACTIONS(55),
    [anon_sym_DOTaddr] = ACTIONS(58),
    [anon_sym_DOTproc] = ACTIONS(61),
    [anon_sym_DOTendproc] = ACTIONS(64),
    [aux_sym__implied_opcode_token1] = ACTIONS(67),
    [aux_sym__implied_opcode_token2] = ACTIONS(67),
    [aux_sym__implied_opcode_token3] = ACTIONS(67),
    [aux_sym__implied_opcode_token4] = ACTIONS(67),
    [aux_sym__implied_opcode_token5] = ACTIONS(67),
    [aux_sym__implied_opcode_token6] = ACTIONS(67),
    [aux_sym__implied_opcode_token7] = ACTIONS(67),
    [aux_sym__implied_opcode_token8] = ACTIONS(67),
    [aux_sym__implied_opcode_token9] = ACTIONS(67),
    [aux_sym__implied_opcode_token10] = ACTIONS(67),
    [aux_sym__implied_opcode_token11] = ACTIONS(67),
    [aux_sym__implied_opcode_token12] = ACTIONS(67),
    [aux_sym__implied_opcode_token13] = ACTIONS(67),
    [aux_sym__implied_opcode_token14] = ACTIONS(67),
    [aux_sym__implied_opcode_token15] = ACTIONS(67),
    [aux_sym__implied_opcode_token16] = ACTIONS(67),
    [aux_sym__implied_opcode_token17] = ACTIONS(67),
    [aux_sym__implied_opcode_token18] = ACTIONS(67),
    [aux_sym__implied_opcode_token19] = ACTIONS(67),
    [aux_sym__implied_opcode_token20] = ACTIONS(67),
    [aux_sym__implied_opcode_token21] = ACTIONS(70),
    [aux_sym__implied_opcode_token22] = ACTIONS(70),
    [aux_sym__implied_opcode_token23] = ACTIONS(70),
    [aux_sym__implied_opcode_token24] = ACTIONS(70),
    [aux_sym__implied_opcode_token25] = ACTIONS(70),
    [aux_sym__implied_opcode_token26] = ACTIONS(70),
    [aux_sym__implied_opcode_token27] = ACTIONS(67),
    [aux_sym__implied_opcode_token28] = ACTIONS(67),
    [aux_sym__implied_opcode_token29] = ACTIONS(67),
    [aux_sym__implied_opcode_token30] = ACTIONS(67),
    [aux_sym__implied_opcode_token31] = ACTIONS(67),
    [aux_sym__implied_opcode_token32] = ACTIONS(67),
    [aux_sym__implied_opcode_token33] = ACTIONS(67),
    [aux_sym__implied_opcode_token34] = ACTIONS(67),
    [aux_sym__implied_opcode_token35] = ACTIONS(67),
    [aux_sym__implied_opcode_token36] = ACTIONS(67),
    [aux_sym__implied_opcode_token37] = ACTIONS(67),
    [aux_sym__relative_opcode_token1] = ACTIONS(73),
    [aux_sym__relative_opcode_token2] = ACTIONS(73),
    [aux_sym__relative_opcode_token3] = ACTIONS(73),
    [aux_sym__relative_opcode_token4] = ACTIONS(73),
    [aux_sym__relative_opcode_token5] = ACTIONS(73),
    [aux_sym__relative_opcode_token6] = ACTIONS(73),
    [aux_sym__relative_opcode_token7] = ACTIONS(73),
    [aux_sym__relative_opcode_token8] = ACTIONS(73),
    [aux_sym__relative_opcode_token9] = ACTIONS(73),
    [aux_sym__immediate_opcode_token1] = ACTIONS(76),
    [aux_sym__immediate_opcode_token2] = ACTIONS(76),
    [aux_sym__immediate_opcode_token3] = ACTIONS(79),
    [aux_sym__immediate_opcode_token4] = ACTIONS(76),
    [aux_sym__immediate_opcode_token5] = ACTIONS(79),
    [aux_sym__immediate_opcode_token6] = ACTIONS(79),
    [aux_sym__immediate_opcode_token7] = ACTIONS(76),
    [aux_sym__immediate_opcode_token8] = ACTIONS(76),
    [aux_sym__immediate_opcode_token9] = ACTIONS(79),
    [aux_sym__immediate_opcode_token10] = ACTIONS(79),
    [aux_sym__immediate_opcode_token11] = ACTIONS(76),
    [aux_sym__immediate_opcode_token12] = ACTIONS(76),
    [aux_sym__absolute_opcode_token1] = ACTIONS(82),
    [aux_sym__absolute_opcode_token2] = ACTIONS(85),
    [aux_sym__absolute_opcode_token3] = ACTIONS(82),
    [aux_sym__absolute_opcode_token4] = ACTIONS(85),
    [aux_sym__absolute_opcode_token5] = ACTIONS(85),
    [aux_sym__absolute_opcode_token6] = ACTIONS(85),
    [aux_sym__absolute_opcode_token7] = ACTIONS(85),
    [aux_sym__absolute_opcode_token8] = ACTIONS(85),
    [sym_local_label] = ACTIONS(88),
    [sym_global_label] = ACTIONS(91),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym__control_command] = STATE(2),
    [sym_file_control_command] = STATE(2),
    [sym_export_control_command] = STATE(2),
    [sym_segment_control_command] = STATE(2),
    [sym_section_control_command] = STATE(2),
    [sym_byte_control_command] = STATE(2),
    [sym_address_control_command] = STATE(2),
    [sym_proc_control_command] = STATE(2),
    [sym__inc_name] = STATE(53),
    [sym__export_name] = STATE(61),
    [sym__segment_name] = STATE(50),
    [sym__sec_name] = STATE(57),
    [sym__word_name] = STATE(46),
    [sym__byte_name] = STATE(46),
    [sym__address_name] = STATE(51),
    [sym__proc_name] = STATE(54),
    [sym__endproc_name] = STATE(19),
    [sym_assignment] = STATE(2),
    [sym_label] = STATE(2),
    [sym__operation] = STATE(2),
    [sym_implied] = STATE(2),
    [sym_relative] = STATE(2),
    [sym_immediate] = STATE(2),
    [sym_absolute] = STATE(2),
    [sym_indirect] = STATE(2),
    [sym__implied_opcode] = STATE(18),
    [sym__relative_opcode] = STATE(63),
    [sym__immediate_opcode] = STATE(65),
    [sym__absolute_opcode] = STATE(59),
    [sym__indirect_opcode] = STATE(60),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(7),
    [anon_sym_DOTexport] = ACTIONS(9),
    [anon_sym_DOTsegment] = ACTIONS(11),
    [anon_sym_DOTsection] = ACTIONS(13),
    [anon_sym_word] = ACTIONS(15),
    [anon_sym_DOTbyte] = ACTIONS(15),
    [anon_sym_DOTaddr] = ACTIONS(17),
    [anon_sym_DOTproc] = ACTIONS(19),
    [anon_sym_DOTendproc] = ACTIONS(21),
    [aux_sym__implied_opcode_token1] = ACTIONS(23),
    [aux_sym__implied_opcode_token2] = ACTIONS(23),
    [aux_sym__implied_opcode_token3] = ACTIONS(23),
    [aux_sym__implied_opcode_token4] = ACTIONS(23),
    [aux_sym__implied_opcode_token5] = ACTIONS(23),
    [aux_sym__implied_opcode_token6] = ACTIONS(23),
    [aux_sym__implied_opcode_token7] = ACTIONS(23),
    [aux_sym__implied_opcode_token8] = ACTIONS(23),
    [aux_sym__implied_opcode_token9] = ACTIONS(23),
    [aux_sym__implied_opcode_token10] = ACTIONS(23),
    [aux_sym__implied_opcode_token11] = ACTIONS(23),
    [aux_sym__implied_opcode_token12] = ACTIONS(23),
    [aux_sym__implied_opcode_token13] = ACTIONS(23),
    [aux_sym__implied_opcode_token14] = ACTIONS(23),
    [aux_sym__implied_opcode_token15] = ACTIONS(23),
    [aux_sym__implied_opcode_token16] = ACTIONS(23),
    [aux_sym__implied_opcode_token17] = ACTIONS(23),
    [aux_sym__implied_opcode_token18] = ACTIONS(23),
    [aux_sym__implied_opcode_token19] = ACTIONS(23),
    [aux_sym__implied_opcode_token20] = ACTIONS(23),
    [aux_sym__implied_opcode_token21] = ACTIONS(25),
    [aux_sym__implied_opcode_token22] = ACTIONS(25),
    [aux_sym__implied_opcode_token23] = ACTIONS(25),
    [aux_sym__implied_opcode_token24] = ACTIONS(25),
    [aux_sym__implied_opcode_token25] = ACTIONS(25),
    [aux_sym__implied_opcode_token26] = ACTIONS(25),
    [aux_sym__implied_opcode_token27] = ACTIONS(23),
    [aux_sym__implied_opcode_token28] = ACTIONS(23),
    [aux_sym__implied_opcode_token29] = ACTIONS(23),
    [aux_sym__implied_opcode_token30] = ACTIONS(23),
    [aux_sym__implied_opcode_token31] = ACTIONS(23),
    [aux_sym__implied_opcode_token32] = ACTIONS(23),
    [aux_sym__implied_opcode_token33] = ACTIONS(23),
    [aux_sym__implied_opcode_token34] = ACTIONS(23),
    [aux_sym__implied_opcode_token35] = ACTIONS(23),
    [aux_sym__implied_opcode_token36] = ACTIONS(23),
    [aux_sym__implied_opcode_token37] = ACTIONS(23),
    [aux_sym__relative_opcode_token1] = ACTIONS(27),
    [aux_sym__relative_opcode_token2] = ACTIONS(27),
    [aux_sym__relative_opcode_token3] = ACTIONS(27),
    [aux_sym__relative_opcode_token4] = ACTIONS(27),
    [aux_sym__relative_opcode_token5] = ACTIONS(27),
    [aux_sym__relative_opcode_token6] = ACTIONS(27),
    [aux_sym__relative_opcode_token7] = ACTIONS(27),
    [aux_sym__relative_opcode_token8] = ACTIONS(27),
    [aux_sym__relative_opcode_token9] = ACTIONS(27),
    [aux_sym__immediate_opcode_token1] = ACTIONS(29),
    [aux_sym__immediate_opcode_token2] = ACTIONS(29),
    [aux_sym__immediate_opcode_token3] = ACTIONS(31),
    [aux_sym__immediate_opcode_token4] = ACTIONS(29),
    [aux_sym__immediate_opcode_token5] = ACTIONS(31),
    [aux_sym__immediate_opcode_token6] = ACTIONS(31),
    [aux_sym__immediate_opcode_token7] = ACTIONS(29),
    [aux_sym__immediate_opcode_token8] = ACTIONS(29),
    [aux_sym__immediate_opcode_token9] = ACTIONS(31),
    [aux_sym__immediate_opcode_token10] = ACTIONS(31),
    [aux_sym__immediate_opcode_token11] = ACTIONS(29),
    [aux_sym__immediate_opcode_token12] = ACTIONS(29),
    [aux_sym__absolute_opcode_token1] = ACTIONS(33),
    [aux_sym__absolute_opcode_token2] = ACTIONS(35),
    [aux_sym__absolute_opcode_token3] = ACTIONS(33),
    [aux_sym__absolute_opcode_token4] = ACTIONS(35),
    [aux_sym__absolute_opcode_token5] = ACTIONS(35),
    [aux_sym__absolute_opcode_token6] = ACTIONS(35),
    [aux_sym__absolute_opcode_token7] = ACTIONS(35),
    [aux_sym__absolute_opcode_token8] = ACTIONS(35),
    [sym_local_label] = ACTIONS(37),
    [sym_global_label] = ACTIONS(39),
  },
  [4] = {
    [sym__reg_x] = STATE(29),
    [sym__reg_y] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(98),
    [anon_sym_DOTexport] = ACTIONS(98),
    [anon_sym_DOTsegment] = ACTIONS(98),
    [anon_sym_DOTsection] = ACTIONS(98),
    [anon_sym_word] = ACTIONS(98),
    [anon_sym_DOTbyte] = ACTIONS(98),
    [anon_sym_DOTaddr] = ACTIONS(98),
    [anon_sym_DOTproc] = ACTIONS(98),
    [anon_sym_DOTendproc] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(100),
    [anon_sym_LT_LT] = ACTIONS(100),
    [anon_sym_GT_GT] = ACTIONS(100),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(102),
    [aux_sym__implied_opcode_token1] = ACTIONS(98),
    [aux_sym__implied_opcode_token2] = ACTIONS(98),
    [aux_sym__implied_opcode_token3] = ACTIONS(98),
    [aux_sym__implied_opcode_token4] = ACTIONS(98),
    [aux_sym__implied_opcode_token5] = ACTIONS(98),
    [aux_sym__implied_opcode_token6] = ACTIONS(98),
    [aux_sym__implied_opcode_token7] = ACTIONS(98),
    [aux_sym__implied_opcode_token8] = ACTIONS(98),
    [aux_sym__implied_opcode_token9] = ACTIONS(98),
    [aux_sym__implied_opcode_token10] = ACTIONS(98),
    [aux_sym__implied_opcode_token11] = ACTIONS(98),
    [aux_sym__implied_opcode_token12] = ACTIONS(98),
    [aux_sym__implied_opcode_token13] = ACTIONS(98),
    [aux_sym__implied_opcode_token14] = ACTIONS(98),
    [aux_sym__implied_opcode_token15] = ACTIONS(98),
    [aux_sym__implied_opcode_token16] = ACTIONS(98),
    [aux_sym__implied_opcode_token17] = ACTIONS(98),
    [aux_sym__implied_opcode_token18] = ACTIONS(98),
    [aux_sym__implied_opcode_token19] = ACTIONS(98),
    [aux_sym__implied_opcode_token20] = ACTIONS(98),
    [aux_sym__implied_opcode_token21] = ACTIONS(98),
    [aux_sym__implied_opcode_token22] = ACTIONS(98),
    [aux_sym__implied_opcode_token23] = ACTIONS(98),
    [aux_sym__implied_opcode_token24] = ACTIONS(98),
    [aux_sym__implied_opcode_token25] = ACTIONS(98),
    [aux_sym__implied_opcode_token26] = ACTIONS(98),
    [aux_sym__implied_opcode_token27] = ACTIONS(98),
    [aux_sym__implied_opcode_token28] = ACTIONS(98),
    [aux_sym__implied_opcode_token29] = ACTIONS(98),
    [aux_sym__implied_opcode_token30] = ACTIONS(98),
    [aux_sym__implied_opcode_token31] = ACTIONS(98),
    [aux_sym__implied_opcode_token32] = ACTIONS(98),
    [aux_sym__implied_opcode_token33] = ACTIONS(98),
    [aux_sym__implied_opcode_token34] = ACTIONS(98),
    [aux_sym__implied_opcode_token35] = ACTIONS(98),
    [aux_sym__implied_opcode_token36] = ACTIONS(98),
    [aux_sym__implied_opcode_token37] = ACTIONS(98),
    [aux_sym__relative_opcode_token1] = ACTIONS(98),
    [aux_sym__relative_opcode_token2] = ACTIONS(98),
    [aux_sym__relative_opcode_token3] = ACTIONS(98),
    [aux_sym__relative_opcode_token4] = ACTIONS(98),
    [aux_sym__relative_opcode_token5] = ACTIONS(98),
    [aux_sym__relative_opcode_token6] = ACTIONS(98),
    [aux_sym__relative_opcode_token7] = ACTIONS(98),
    [aux_sym__relative_opcode_token8] = ACTIONS(98),
    [aux_sym__relative_opcode_token9] = ACTIONS(98),
    [aux_sym__immediate_opcode_token1] = ACTIONS(98),
    [aux_sym__immediate_opcode_token2] = ACTIONS(98),
    [aux_sym__immediate_opcode_token3] = ACTIONS(98),
    [aux_sym__immediate_opcode_token4] = ACTIONS(98),
    [aux_sym__immediate_opcode_token5] = ACTIONS(98),
    [aux_sym__immediate_opcode_token6] = ACTIONS(98),
    [aux_sym__immediate_opcode_token7] = ACTIONS(98),
    [aux_sym__immediate_opcode_token8] = ACTIONS(98),
    [aux_sym__immediate_opcode_token9] = ACTIONS(98),
    [aux_sym__immediate_opcode_token10] = ACTIONS(98),
    [aux_sym__immediate_opcode_token11] = ACTIONS(98),
    [aux_sym__immediate_opcode_token12] = ACTIONS(98),
    [aux_sym__absolute_opcode_token1] = ACTIONS(98),
    [aux_sym__absolute_opcode_token2] = ACTIONS(98),
    [aux_sym__absolute_opcode_token3] = ACTIONS(98),
    [aux_sym__absolute_opcode_token4] = ACTIONS(98),
    [aux_sym__absolute_opcode_token5] = ACTIONS(98),
    [aux_sym__absolute_opcode_token6] = ACTIONS(98),
    [aux_sym__absolute_opcode_token7] = ACTIONS(98),
    [aux_sym__absolute_opcode_token8] = ACTIONS(98),
    [sym_local_label] = ACTIONS(98),
    [sym_global_label] = ACTIONS(98),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(106),
    [anon_sym_DOTexport] = ACTIONS(106),
    [anon_sym_DOTsegment] = ACTIONS(106),
    [anon_sym_DOTsection] = ACTIONS(106),
    [anon_sym_word] = ACTIONS(106),
    [anon_sym_DOTbyte] = ACTIONS(106),
    [anon_sym_DOTaddr] = ACTIONS(106),
    [anon_sym_DOTproc] = ACTIONS(106),
    [anon_sym_DOTendproc] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(104),
    [anon_sym_LT_LT] = ACTIONS(104),
    [anon_sym_GT_GT] = ACTIONS(104),
    [anon_sym_AMP] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(104),
    [aux_sym__implied_opcode_token1] = ACTIONS(106),
    [aux_sym__implied_opcode_token2] = ACTIONS(106),
    [aux_sym__implied_opcode_token3] = ACTIONS(106),
    [aux_sym__implied_opcode_token4] = ACTIONS(106),
    [aux_sym__implied_opcode_token5] = ACTIONS(106),
    [aux_sym__implied_opcode_token6] = ACTIONS(106),
    [aux_sym__implied_opcode_token7] = ACTIONS(106),
    [aux_sym__implied_opcode_token8] = ACTIONS(106),
    [aux_sym__implied_opcode_token9] = ACTIONS(106),
    [aux_sym__implied_opcode_token10] = ACTIONS(106),
    [aux_sym__implied_opcode_token11] = ACTIONS(106),
    [aux_sym__implied_opcode_token12] = ACTIONS(106),
    [aux_sym__implied_opcode_token13] = ACTIONS(106),
    [aux_sym__implied_opcode_token14] = ACTIONS(106),
    [aux_sym__implied_opcode_token15] = ACTIONS(106),
    [aux_sym__implied_opcode_token16] = ACTIONS(106),
    [aux_sym__implied_opcode_token17] = ACTIONS(106),
    [aux_sym__implied_opcode_token18] = ACTIONS(106),
    [aux_sym__implied_opcode_token19] = ACTIONS(106),
    [aux_sym__implied_opcode_token20] = ACTIONS(106),
    [aux_sym__implied_opcode_token21] = ACTIONS(106),
    [aux_sym__implied_opcode_token22] = ACTIONS(106),
    [aux_sym__implied_opcode_token23] = ACTIONS(106),
    [aux_sym__implied_opcode_token24] = ACTIONS(106),
    [aux_sym__implied_opcode_token25] = ACTIONS(106),
    [aux_sym__implied_opcode_token26] = ACTIONS(106),
    [aux_sym__implied_opcode_token27] = ACTIONS(106),
    [aux_sym__implied_opcode_token28] = ACTIONS(106),
    [aux_sym__implied_opcode_token29] = ACTIONS(106),
    [aux_sym__implied_opcode_token30] = ACTIONS(106),
    [aux_sym__implied_opcode_token31] = ACTIONS(106),
    [aux_sym__implied_opcode_token32] = ACTIONS(106),
    [aux_sym__implied_opcode_token33] = ACTIONS(106),
    [aux_sym__implied_opcode_token34] = ACTIONS(106),
    [aux_sym__implied_opcode_token35] = ACTIONS(106),
    [aux_sym__implied_opcode_token36] = ACTIONS(106),
    [aux_sym__implied_opcode_token37] = ACTIONS(106),
    [aux_sym__relative_opcode_token1] = ACTIONS(106),
    [aux_sym__relative_opcode_token2] = ACTIONS(106),
    [aux_sym__relative_opcode_token3] = ACTIONS(106),
    [aux_sym__relative_opcode_token4] = ACTIONS(106),
    [aux_sym__relative_opcode_token5] = ACTIONS(106),
    [aux_sym__relative_opcode_token6] = ACTIONS(106),
    [aux_sym__relative_opcode_token7] = ACTIONS(106),
    [aux_sym__relative_opcode_token8] = ACTIONS(106),
    [aux_sym__relative_opcode_token9] = ACTIONS(106),
    [aux_sym__immediate_opcode_token1] = ACTIONS(106),
    [aux_sym__immediate_opcode_token2] = ACTIONS(106),
    [aux_sym__immediate_opcode_token3] = ACTIONS(106),
    [aux_sym__immediate_opcode_token4] = ACTIONS(106),
    [aux_sym__immediate_opcode_token5] = ACTIONS(106),
    [aux_sym__immediate_opcode_token6] = ACTIONS(106),
    [aux_sym__immediate_opcode_token7] = ACTIONS(106),
    [aux_sym__immediate_opcode_token8] = ACTIONS(106),
    [aux_sym__immediate_opcode_token9] = ACTIONS(106),
    [aux_sym__immediate_opcode_token10] = ACTIONS(106),
    [aux_sym__immediate_opcode_token11] = ACTIONS(106),
    [aux_sym__immediate_opcode_token12] = ACTIONS(106),
    [aux_sym__absolute_opcode_token1] = ACTIONS(106),
    [aux_sym__absolute_opcode_token2] = ACTIONS(106),
    [aux_sym__absolute_opcode_token3] = ACTIONS(106),
    [aux_sym__absolute_opcode_token4] = ACTIONS(106),
    [aux_sym__absolute_opcode_token5] = ACTIONS(106),
    [aux_sym__absolute_opcode_token6] = ACTIONS(106),
    [aux_sym__absolute_opcode_token7] = ACTIONS(106),
    [aux_sym__absolute_opcode_token8] = ACTIONS(106),
    [sym_local_label] = ACTIONS(106),
    [sym_global_label] = ACTIONS(106),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(110),
    [anon_sym_DOTexport] = ACTIONS(110),
    [anon_sym_DOTsegment] = ACTIONS(110),
    [anon_sym_DOTsection] = ACTIONS(110),
    [anon_sym_word] = ACTIONS(110),
    [anon_sym_DOTbyte] = ACTIONS(110),
    [anon_sym_DOTaddr] = ACTIONS(110),
    [anon_sym_DOTproc] = ACTIONS(110),
    [anon_sym_DOTendproc] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_STAR] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_LT_LT] = ACTIONS(108),
    [anon_sym_GT_GT] = ACTIONS(108),
    [anon_sym_AMP] = ACTIONS(108),
    [anon_sym_PIPE] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(108),
    [aux_sym__implied_opcode_token1] = ACTIONS(110),
    [aux_sym__implied_opcode_token2] = ACTIONS(110),
    [aux_sym__implied_opcode_token3] = ACTIONS(110),
    [aux_sym__implied_opcode_token4] = ACTIONS(110),
    [aux_sym__implied_opcode_token5] = ACTIONS(110),
    [aux_sym__implied_opcode_token6] = ACTIONS(110),
    [aux_sym__implied_opcode_token7] = ACTIONS(110),
    [aux_sym__implied_opcode_token8] = ACTIONS(110),
    [aux_sym__implied_opcode_token9] = ACTIONS(110),
    [aux_sym__implied_opcode_token10] = ACTIONS(110),
    [aux_sym__implied_opcode_token11] = ACTIONS(110),
    [aux_sym__implied_opcode_token12] = ACTIONS(110),
    [aux_sym__implied_opcode_token13] = ACTIONS(110),
    [aux_sym__implied_opcode_token14] = ACTIONS(110),
    [aux_sym__implied_opcode_token15] = ACTIONS(110),
    [aux_sym__implied_opcode_token16] = ACTIONS(110),
    [aux_sym__implied_opcode_token17] = ACTIONS(110),
    [aux_sym__implied_opcode_token18] = ACTIONS(110),
    [aux_sym__implied_opcode_token19] = ACTIONS(110),
    [aux_sym__implied_opcode_token20] = ACTIONS(110),
    [aux_sym__implied_opcode_token21] = ACTIONS(110),
    [aux_sym__implied_opcode_token22] = ACTIONS(110),
    [aux_sym__implied_opcode_token23] = ACTIONS(110),
    [aux_sym__implied_opcode_token24] = ACTIONS(110),
    [aux_sym__implied_opcode_token25] = ACTIONS(110),
    [aux_sym__implied_opcode_token26] = ACTIONS(110),
    [aux_sym__implied_opcode_token27] = ACTIONS(110),
    [aux_sym__implied_opcode_token28] = ACTIONS(110),
    [aux_sym__implied_opcode_token29] = ACTIONS(110),
    [aux_sym__implied_opcode_token30] = ACTIONS(110),
    [aux_sym__implied_opcode_token31] = ACTIONS(110),
    [aux_sym__implied_opcode_token32] = ACTIONS(110),
    [aux_sym__implied_opcode_token33] = ACTIONS(110),
    [aux_sym__implied_opcode_token34] = ACTIONS(110),
    [aux_sym__implied_opcode_token35] = ACTIONS(110),
    [aux_sym__implied_opcode_token36] = ACTIONS(110),
    [aux_sym__implied_opcode_token37] = ACTIONS(110),
    [aux_sym__relative_opcode_token1] = ACTIONS(110),
    [aux_sym__relative_opcode_token2] = ACTIONS(110),
    [aux_sym__relative_opcode_token3] = ACTIONS(110),
    [aux_sym__relative_opcode_token4] = ACTIONS(110),
    [aux_sym__relative_opcode_token5] = ACTIONS(110),
    [aux_sym__relative_opcode_token6] = ACTIONS(110),
    [aux_sym__relative_opcode_token7] = ACTIONS(110),
    [aux_sym__relative_opcode_token8] = ACTIONS(110),
    [aux_sym__relative_opcode_token9] = ACTIONS(110),
    [aux_sym__immediate_opcode_token1] = ACTIONS(110),
    [aux_sym__immediate_opcode_token2] = ACTIONS(110),
    [aux_sym__immediate_opcode_token3] = ACTIONS(110),
    [aux_sym__immediate_opcode_token4] = ACTIONS(110),
    [aux_sym__immediate_opcode_token5] = ACTIONS(110),
    [aux_sym__immediate_opcode_token6] = ACTIONS(110),
    [aux_sym__immediate_opcode_token7] = ACTIONS(110),
    [aux_sym__immediate_opcode_token8] = ACTIONS(110),
    [aux_sym__immediate_opcode_token9] = ACTIONS(110),
    [aux_sym__immediate_opcode_token10] = ACTIONS(110),
    [aux_sym__immediate_opcode_token11] = ACTIONS(110),
    [aux_sym__immediate_opcode_token12] = ACTIONS(110),
    [aux_sym__absolute_opcode_token1] = ACTIONS(110),
    [aux_sym__absolute_opcode_token2] = ACTIONS(110),
    [aux_sym__absolute_opcode_token3] = ACTIONS(110),
    [aux_sym__absolute_opcode_token4] = ACTIONS(110),
    [aux_sym__absolute_opcode_token5] = ACTIONS(110),
    [aux_sym__absolute_opcode_token6] = ACTIONS(110),
    [aux_sym__absolute_opcode_token7] = ACTIONS(110),
    [aux_sym__absolute_opcode_token8] = ACTIONS(110),
    [sym_local_label] = ACTIONS(110),
    [sym_global_label] = ACTIONS(110),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(114),
    [anon_sym_DOTexport] = ACTIONS(114),
    [anon_sym_DOTsegment] = ACTIONS(114),
    [anon_sym_DOTsection] = ACTIONS(114),
    [anon_sym_word] = ACTIONS(114),
    [anon_sym_DOTbyte] = ACTIONS(114),
    [anon_sym_DOTaddr] = ACTIONS(114),
    [anon_sym_DOTproc] = ACTIONS(114),
    [anon_sym_DOTendproc] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_LT_LT] = ACTIONS(112),
    [anon_sym_GT_GT] = ACTIONS(112),
    [anon_sym_AMP] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(112),
    [aux_sym__implied_opcode_token1] = ACTIONS(114),
    [aux_sym__implied_opcode_token2] = ACTIONS(114),
    [aux_sym__implied_opcode_token3] = ACTIONS(114),
    [aux_sym__implied_opcode_token4] = ACTIONS(114),
    [aux_sym__implied_opcode_token5] = ACTIONS(114),
    [aux_sym__implied_opcode_token6] = ACTIONS(114),
    [aux_sym__implied_opcode_token7] = ACTIONS(114),
    [aux_sym__implied_opcode_token8] = ACTIONS(114),
    [aux_sym__implied_opcode_token9] = ACTIONS(114),
    [aux_sym__implied_opcode_token10] = ACTIONS(114),
    [aux_sym__implied_opcode_token11] = ACTIONS(114),
    [aux_sym__implied_opcode_token12] = ACTIONS(114),
    [aux_sym__implied_opcode_token13] = ACTIONS(114),
    [aux_sym__implied_opcode_token14] = ACTIONS(114),
    [aux_sym__implied_opcode_token15] = ACTIONS(114),
    [aux_sym__implied_opcode_token16] = ACTIONS(114),
    [aux_sym__implied_opcode_token17] = ACTIONS(114),
    [aux_sym__implied_opcode_token18] = ACTIONS(114),
    [aux_sym__implied_opcode_token19] = ACTIONS(114),
    [aux_sym__implied_opcode_token20] = ACTIONS(114),
    [aux_sym__implied_opcode_token21] = ACTIONS(114),
    [aux_sym__implied_opcode_token22] = ACTIONS(114),
    [aux_sym__implied_opcode_token23] = ACTIONS(114),
    [aux_sym__implied_opcode_token24] = ACTIONS(114),
    [aux_sym__implied_opcode_token25] = ACTIONS(114),
    [aux_sym__implied_opcode_token26] = ACTIONS(114),
    [aux_sym__implied_opcode_token27] = ACTIONS(114),
    [aux_sym__implied_opcode_token28] = ACTIONS(114),
    [aux_sym__implied_opcode_token29] = ACTIONS(114),
    [aux_sym__implied_opcode_token30] = ACTIONS(114),
    [aux_sym__implied_opcode_token31] = ACTIONS(114),
    [aux_sym__implied_opcode_token32] = ACTIONS(114),
    [aux_sym__implied_opcode_token33] = ACTIONS(114),
    [aux_sym__implied_opcode_token34] = ACTIONS(114),
    [aux_sym__implied_opcode_token35] = ACTIONS(114),
    [aux_sym__implied_opcode_token36] = ACTIONS(114),
    [aux_sym__implied_opcode_token37] = ACTIONS(114),
    [aux_sym__relative_opcode_token1] = ACTIONS(114),
    [aux_sym__relative_opcode_token2] = ACTIONS(114),
    [aux_sym__relative_opcode_token3] = ACTIONS(114),
    [aux_sym__relative_opcode_token4] = ACTIONS(114),
    [aux_sym__relative_opcode_token5] = ACTIONS(114),
    [aux_sym__relative_opcode_token6] = ACTIONS(114),
    [aux_sym__relative_opcode_token7] = ACTIONS(114),
    [aux_sym__relative_opcode_token8] = ACTIONS(114),
    [aux_sym__relative_opcode_token9] = ACTIONS(114),
    [aux_sym__immediate_opcode_token1] = ACTIONS(114),
    [aux_sym__immediate_opcode_token2] = ACTIONS(114),
    [aux_sym__immediate_opcode_token3] = ACTIONS(114),
    [aux_sym__immediate_opcode_token4] = ACTIONS(114),
    [aux_sym__immediate_opcode_token5] = ACTIONS(114),
    [aux_sym__immediate_opcode_token6] = ACTIONS(114),
    [aux_sym__immediate_opcode_token7] = ACTIONS(114),
    [aux_sym__immediate_opcode_token8] = ACTIONS(114),
    [aux_sym__immediate_opcode_token9] = ACTIONS(114),
    [aux_sym__immediate_opcode_token10] = ACTIONS(114),
    [aux_sym__immediate_opcode_token11] = ACTIONS(114),
    [aux_sym__immediate_opcode_token12] = ACTIONS(114),
    [aux_sym__absolute_opcode_token1] = ACTIONS(114),
    [aux_sym__absolute_opcode_token2] = ACTIONS(114),
    [aux_sym__absolute_opcode_token3] = ACTIONS(114),
    [aux_sym__absolute_opcode_token4] = ACTIONS(114),
    [aux_sym__absolute_opcode_token5] = ACTIONS(114),
    [aux_sym__absolute_opcode_token6] = ACTIONS(114),
    [aux_sym__absolute_opcode_token7] = ACTIONS(114),
    [aux_sym__absolute_opcode_token8] = ACTIONS(114),
    [sym_local_label] = ACTIONS(114),
    [sym_global_label] = ACTIONS(114),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(118),
    [anon_sym_DOTexport] = ACTIONS(118),
    [anon_sym_DOTsegment] = ACTIONS(118),
    [anon_sym_DOTsection] = ACTIONS(118),
    [anon_sym_word] = ACTIONS(118),
    [anon_sym_DOTbyte] = ACTIONS(118),
    [anon_sym_DOTaddr] = ACTIONS(118),
    [anon_sym_DOTproc] = ACTIONS(118),
    [anon_sym_DOTendproc] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(100),
    [anon_sym_LT_LT] = ACTIONS(100),
    [anon_sym_GT_GT] = ACTIONS(100),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(100),
    [aux_sym__implied_opcode_token1] = ACTIONS(118),
    [aux_sym__implied_opcode_token2] = ACTIONS(118),
    [aux_sym__implied_opcode_token3] = ACTIONS(118),
    [aux_sym__implied_opcode_token4] = ACTIONS(118),
    [aux_sym__implied_opcode_token5] = ACTIONS(118),
    [aux_sym__implied_opcode_token6] = ACTIONS(118),
    [aux_sym__implied_opcode_token7] = ACTIONS(118),
    [aux_sym__implied_opcode_token8] = ACTIONS(118),
    [aux_sym__implied_opcode_token9] = ACTIONS(118),
    [aux_sym__implied_opcode_token10] = ACTIONS(118),
    [aux_sym__implied_opcode_token11] = ACTIONS(118),
    [aux_sym__implied_opcode_token12] = ACTIONS(118),
    [aux_sym__implied_opcode_token13] = ACTIONS(118),
    [aux_sym__implied_opcode_token14] = ACTIONS(118),
    [aux_sym__implied_opcode_token15] = ACTIONS(118),
    [aux_sym__implied_opcode_token16] = ACTIONS(118),
    [aux_sym__implied_opcode_token17] = ACTIONS(118),
    [aux_sym__implied_opcode_token18] = ACTIONS(118),
    [aux_sym__implied_opcode_token19] = ACTIONS(118),
    [aux_sym__implied_opcode_token20] = ACTIONS(118),
    [aux_sym__implied_opcode_token21] = ACTIONS(118),
    [aux_sym__implied_opcode_token22] = ACTIONS(118),
    [aux_sym__implied_opcode_token23] = ACTIONS(118),
    [aux_sym__implied_opcode_token24] = ACTIONS(118),
    [aux_sym__implied_opcode_token25] = ACTIONS(118),
    [aux_sym__implied_opcode_token26] = ACTIONS(118),
    [aux_sym__implied_opcode_token27] = ACTIONS(118),
    [aux_sym__implied_opcode_token28] = ACTIONS(118),
    [aux_sym__implied_opcode_token29] = ACTIONS(118),
    [aux_sym__implied_opcode_token30] = ACTIONS(118),
    [aux_sym__implied_opcode_token31] = ACTIONS(118),
    [aux_sym__implied_opcode_token32] = ACTIONS(118),
    [aux_sym__implied_opcode_token33] = ACTIONS(118),
    [aux_sym__implied_opcode_token34] = ACTIONS(118),
    [aux_sym__implied_opcode_token35] = ACTIONS(118),
    [aux_sym__implied_opcode_token36] = ACTIONS(118),
    [aux_sym__implied_opcode_token37] = ACTIONS(118),
    [aux_sym__relative_opcode_token1] = ACTIONS(118),
    [aux_sym__relative_opcode_token2] = ACTIONS(118),
    [aux_sym__relative_opcode_token3] = ACTIONS(118),
    [aux_sym__relative_opcode_token4] = ACTIONS(118),
    [aux_sym__relative_opcode_token5] = ACTIONS(118),
    [aux_sym__relative_opcode_token6] = ACTIONS(118),
    [aux_sym__relative_opcode_token7] = ACTIONS(118),
    [aux_sym__relative_opcode_token8] = ACTIONS(118),
    [aux_sym__relative_opcode_token9] = ACTIONS(118),
    [aux_sym__immediate_opcode_token1] = ACTIONS(118),
    [aux_sym__immediate_opcode_token2] = ACTIONS(118),
    [aux_sym__immediate_opcode_token3] = ACTIONS(118),
    [aux_sym__immediate_opcode_token4] = ACTIONS(118),
    [aux_sym__immediate_opcode_token5] = ACTIONS(118),
    [aux_sym__immediate_opcode_token6] = ACTIONS(118),
    [aux_sym__immediate_opcode_token7] = ACTIONS(118),
    [aux_sym__immediate_opcode_token8] = ACTIONS(118),
    [aux_sym__immediate_opcode_token9] = ACTIONS(118),
    [aux_sym__immediate_opcode_token10] = ACTIONS(118),
    [aux_sym__immediate_opcode_token11] = ACTIONS(118),
    [aux_sym__immediate_opcode_token12] = ACTIONS(118),
    [aux_sym__absolute_opcode_token1] = ACTIONS(118),
    [aux_sym__absolute_opcode_token2] = ACTIONS(118),
    [aux_sym__absolute_opcode_token3] = ACTIONS(118),
    [aux_sym__absolute_opcode_token4] = ACTIONS(118),
    [aux_sym__absolute_opcode_token5] = ACTIONS(118),
    [aux_sym__absolute_opcode_token6] = ACTIONS(118),
    [aux_sym__absolute_opcode_token7] = ACTIONS(118),
    [aux_sym__absolute_opcode_token8] = ACTIONS(118),
    [sym_local_label] = ACTIONS(118),
    [sym_global_label] = ACTIONS(118),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(122),
    [anon_sym_DOTexport] = ACTIONS(122),
    [anon_sym_DOTsegment] = ACTIONS(122),
    [anon_sym_DOTsection] = ACTIONS(122),
    [anon_sym_word] = ACTIONS(122),
    [anon_sym_DOTbyte] = ACTIONS(122),
    [anon_sym_DOTaddr] = ACTIONS(122),
    [anon_sym_DOTproc] = ACTIONS(122),
    [anon_sym_DOTendproc] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(100),
    [anon_sym_LT_LT] = ACTIONS(100),
    [anon_sym_GT_GT] = ACTIONS(100),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(100),
    [aux_sym__implied_opcode_token1] = ACTIONS(122),
    [aux_sym__implied_opcode_token2] = ACTIONS(122),
    [aux_sym__implied_opcode_token3] = ACTIONS(122),
    [aux_sym__implied_opcode_token4] = ACTIONS(122),
    [aux_sym__implied_opcode_token5] = ACTIONS(122),
    [aux_sym__implied_opcode_token6] = ACTIONS(122),
    [aux_sym__implied_opcode_token7] = ACTIONS(122),
    [aux_sym__implied_opcode_token8] = ACTIONS(122),
    [aux_sym__implied_opcode_token9] = ACTIONS(122),
    [aux_sym__implied_opcode_token10] = ACTIONS(122),
    [aux_sym__implied_opcode_token11] = ACTIONS(122),
    [aux_sym__implied_opcode_token12] = ACTIONS(122),
    [aux_sym__implied_opcode_token13] = ACTIONS(122),
    [aux_sym__implied_opcode_token14] = ACTIONS(122),
    [aux_sym__implied_opcode_token15] = ACTIONS(122),
    [aux_sym__implied_opcode_token16] = ACTIONS(122),
    [aux_sym__implied_opcode_token17] = ACTIONS(122),
    [aux_sym__implied_opcode_token18] = ACTIONS(122),
    [aux_sym__implied_opcode_token19] = ACTIONS(122),
    [aux_sym__implied_opcode_token20] = ACTIONS(122),
    [aux_sym__implied_opcode_token21] = ACTIONS(122),
    [aux_sym__implied_opcode_token22] = ACTIONS(122),
    [aux_sym__implied_opcode_token23] = ACTIONS(122),
    [aux_sym__implied_opcode_token24] = ACTIONS(122),
    [aux_sym__implied_opcode_token25] = ACTIONS(122),
    [aux_sym__implied_opcode_token26] = ACTIONS(122),
    [aux_sym__implied_opcode_token27] = ACTIONS(122),
    [aux_sym__implied_opcode_token28] = ACTIONS(122),
    [aux_sym__implied_opcode_token29] = ACTIONS(122),
    [aux_sym__implied_opcode_token30] = ACTIONS(122),
    [aux_sym__implied_opcode_token31] = ACTIONS(122),
    [aux_sym__implied_opcode_token32] = ACTIONS(122),
    [aux_sym__implied_opcode_token33] = ACTIONS(122),
    [aux_sym__implied_opcode_token34] = ACTIONS(122),
    [aux_sym__implied_opcode_token35] = ACTIONS(122),
    [aux_sym__implied_opcode_token36] = ACTIONS(122),
    [aux_sym__implied_opcode_token37] = ACTIONS(122),
    [aux_sym__relative_opcode_token1] = ACTIONS(122),
    [aux_sym__relative_opcode_token2] = ACTIONS(122),
    [aux_sym__relative_opcode_token3] = ACTIONS(122),
    [aux_sym__relative_opcode_token4] = ACTIONS(122),
    [aux_sym__relative_opcode_token5] = ACTIONS(122),
    [aux_sym__relative_opcode_token6] = ACTIONS(122),
    [aux_sym__relative_opcode_token7] = ACTIONS(122),
    [aux_sym__relative_opcode_token8] = ACTIONS(122),
    [aux_sym__relative_opcode_token9] = ACTIONS(122),
    [aux_sym__immediate_opcode_token1] = ACTIONS(122),
    [aux_sym__immediate_opcode_token2] = ACTIONS(122),
    [aux_sym__immediate_opcode_token3] = ACTIONS(122),
    [aux_sym__immediate_opcode_token4] = ACTIONS(122),
    [aux_sym__immediate_opcode_token5] = ACTIONS(122),
    [aux_sym__immediate_opcode_token6] = ACTIONS(122),
    [aux_sym__immediate_opcode_token7] = ACTIONS(122),
    [aux_sym__immediate_opcode_token8] = ACTIONS(122),
    [aux_sym__immediate_opcode_token9] = ACTIONS(122),
    [aux_sym__immediate_opcode_token10] = ACTIONS(122),
    [aux_sym__immediate_opcode_token11] = ACTIONS(122),
    [aux_sym__immediate_opcode_token12] = ACTIONS(122),
    [aux_sym__absolute_opcode_token1] = ACTIONS(122),
    [aux_sym__absolute_opcode_token2] = ACTIONS(122),
    [aux_sym__absolute_opcode_token3] = ACTIONS(122),
    [aux_sym__absolute_opcode_token4] = ACTIONS(122),
    [aux_sym__absolute_opcode_token5] = ACTIONS(122),
    [aux_sym__absolute_opcode_token6] = ACTIONS(122),
    [aux_sym__absolute_opcode_token7] = ACTIONS(122),
    [aux_sym__absolute_opcode_token8] = ACTIONS(122),
    [sym_local_label] = ACTIONS(122),
    [sym_global_label] = ACTIONS(122),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(126),
    [anon_sym_DOTexport] = ACTIONS(126),
    [anon_sym_DOTsegment] = ACTIONS(126),
    [anon_sym_DOTsection] = ACTIONS(126),
    [anon_sym_word] = ACTIONS(126),
    [anon_sym_DOTbyte] = ACTIONS(126),
    [anon_sym_DOTaddr] = ACTIONS(126),
    [anon_sym_DOTproc] = ACTIONS(126),
    [anon_sym_DOTendproc] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(100),
    [anon_sym_LT_LT] = ACTIONS(100),
    [anon_sym_GT_GT] = ACTIONS(100),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(100),
    [aux_sym__implied_opcode_token1] = ACTIONS(126),
    [aux_sym__implied_opcode_token2] = ACTIONS(126),
    [aux_sym__implied_opcode_token3] = ACTIONS(126),
    [aux_sym__implied_opcode_token4] = ACTIONS(126),
    [aux_sym__implied_opcode_token5] = ACTIONS(126),
    [aux_sym__implied_opcode_token6] = ACTIONS(126),
    [aux_sym__implied_opcode_token7] = ACTIONS(126),
    [aux_sym__implied_opcode_token8] = ACTIONS(126),
    [aux_sym__implied_opcode_token9] = ACTIONS(126),
    [aux_sym__implied_opcode_token10] = ACTIONS(126),
    [aux_sym__implied_opcode_token11] = ACTIONS(126),
    [aux_sym__implied_opcode_token12] = ACTIONS(126),
    [aux_sym__implied_opcode_token13] = ACTIONS(126),
    [aux_sym__implied_opcode_token14] = ACTIONS(126),
    [aux_sym__implied_opcode_token15] = ACTIONS(126),
    [aux_sym__implied_opcode_token16] = ACTIONS(126),
    [aux_sym__implied_opcode_token17] = ACTIONS(126),
    [aux_sym__implied_opcode_token18] = ACTIONS(126),
    [aux_sym__implied_opcode_token19] = ACTIONS(126),
    [aux_sym__implied_opcode_token20] = ACTIONS(126),
    [aux_sym__implied_opcode_token21] = ACTIONS(126),
    [aux_sym__implied_opcode_token22] = ACTIONS(126),
    [aux_sym__implied_opcode_token23] = ACTIONS(126),
    [aux_sym__implied_opcode_token24] = ACTIONS(126),
    [aux_sym__implied_opcode_token25] = ACTIONS(126),
    [aux_sym__implied_opcode_token26] = ACTIONS(126),
    [aux_sym__implied_opcode_token27] = ACTIONS(126),
    [aux_sym__implied_opcode_token28] = ACTIONS(126),
    [aux_sym__implied_opcode_token29] = ACTIONS(126),
    [aux_sym__implied_opcode_token30] = ACTIONS(126),
    [aux_sym__implied_opcode_token31] = ACTIONS(126),
    [aux_sym__implied_opcode_token32] = ACTIONS(126),
    [aux_sym__implied_opcode_token33] = ACTIONS(126),
    [aux_sym__implied_opcode_token34] = ACTIONS(126),
    [aux_sym__implied_opcode_token35] = ACTIONS(126),
    [aux_sym__implied_opcode_token36] = ACTIONS(126),
    [aux_sym__implied_opcode_token37] = ACTIONS(126),
    [aux_sym__relative_opcode_token1] = ACTIONS(126),
    [aux_sym__relative_opcode_token2] = ACTIONS(126),
    [aux_sym__relative_opcode_token3] = ACTIONS(126),
    [aux_sym__relative_opcode_token4] = ACTIONS(126),
    [aux_sym__relative_opcode_token5] = ACTIONS(126),
    [aux_sym__relative_opcode_token6] = ACTIONS(126),
    [aux_sym__relative_opcode_token7] = ACTIONS(126),
    [aux_sym__relative_opcode_token8] = ACTIONS(126),
    [aux_sym__relative_opcode_token9] = ACTIONS(126),
    [aux_sym__immediate_opcode_token1] = ACTIONS(126),
    [aux_sym__immediate_opcode_token2] = ACTIONS(126),
    [aux_sym__immediate_opcode_token3] = ACTIONS(126),
    [aux_sym__immediate_opcode_token4] = ACTIONS(126),
    [aux_sym__immediate_opcode_token5] = ACTIONS(126),
    [aux_sym__immediate_opcode_token6] = ACTIONS(126),
    [aux_sym__immediate_opcode_token7] = ACTIONS(126),
    [aux_sym__immediate_opcode_token8] = ACTIONS(126),
    [aux_sym__immediate_opcode_token9] = ACTIONS(126),
    [aux_sym__immediate_opcode_token10] = ACTIONS(126),
    [aux_sym__immediate_opcode_token11] = ACTIONS(126),
    [aux_sym__immediate_opcode_token12] = ACTIONS(126),
    [aux_sym__absolute_opcode_token1] = ACTIONS(126),
    [aux_sym__absolute_opcode_token2] = ACTIONS(126),
    [aux_sym__absolute_opcode_token3] = ACTIONS(126),
    [aux_sym__absolute_opcode_token4] = ACTIONS(126),
    [aux_sym__absolute_opcode_token5] = ACTIONS(126),
    [aux_sym__absolute_opcode_token6] = ACTIONS(126),
    [aux_sym__absolute_opcode_token7] = ACTIONS(126),
    [aux_sym__absolute_opcode_token8] = ACTIONS(126),
    [sym_local_label] = ACTIONS(126),
    [sym_global_label] = ACTIONS(126),
  },
  [11] = {
    [aux_sym__byte_list] = STATE(12),
    [sym__byte_literal] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(130),
    [anon_sym_DOTexport] = ACTIONS(130),
    [anon_sym_DOTsegment] = ACTIONS(130),
    [anon_sym_DOTsection] = ACTIONS(130),
    [anon_sym_word] = ACTIONS(130),
    [anon_sym_DOTbyte] = ACTIONS(130),
    [anon_sym_DOTaddr] = ACTIONS(130),
    [anon_sym_DOTproc] = ACTIONS(130),
    [anon_sym_DOTendproc] = ACTIONS(130),
    [sym_num_literal] = ACTIONS(132),
    [sym_char_literal] = ACTIONS(132),
    [aux_sym__implied_opcode_token1] = ACTIONS(130),
    [aux_sym__implied_opcode_token2] = ACTIONS(130),
    [aux_sym__implied_opcode_token3] = ACTIONS(130),
    [aux_sym__implied_opcode_token4] = ACTIONS(130),
    [aux_sym__implied_opcode_token5] = ACTIONS(130),
    [aux_sym__implied_opcode_token6] = ACTIONS(130),
    [aux_sym__implied_opcode_token7] = ACTIONS(130),
    [aux_sym__implied_opcode_token8] = ACTIONS(130),
    [aux_sym__implied_opcode_token9] = ACTIONS(130),
    [aux_sym__implied_opcode_token10] = ACTIONS(130),
    [aux_sym__implied_opcode_token11] = ACTIONS(130),
    [aux_sym__implied_opcode_token12] = ACTIONS(130),
    [aux_sym__implied_opcode_token13] = ACTIONS(130),
    [aux_sym__implied_opcode_token14] = ACTIONS(130),
    [aux_sym__implied_opcode_token15] = ACTIONS(130),
    [aux_sym__implied_opcode_token16] = ACTIONS(130),
    [aux_sym__implied_opcode_token17] = ACTIONS(130),
    [aux_sym__implied_opcode_token18] = ACTIONS(130),
    [aux_sym__implied_opcode_token19] = ACTIONS(130),
    [aux_sym__implied_opcode_token20] = ACTIONS(130),
    [aux_sym__implied_opcode_token21] = ACTIONS(130),
    [aux_sym__implied_opcode_token22] = ACTIONS(130),
    [aux_sym__implied_opcode_token23] = ACTIONS(130),
    [aux_sym__implied_opcode_token24] = ACTIONS(130),
    [aux_sym__implied_opcode_token25] = ACTIONS(130),
    [aux_sym__implied_opcode_token26] = ACTIONS(130),
    [aux_sym__implied_opcode_token27] = ACTIONS(130),
    [aux_sym__implied_opcode_token28] = ACTIONS(130),
    [aux_sym__implied_opcode_token29] = ACTIONS(130),
    [aux_sym__implied_opcode_token30] = ACTIONS(130),
    [aux_sym__implied_opcode_token31] = ACTIONS(130),
    [aux_sym__implied_opcode_token32] = ACTIONS(130),
    [aux_sym__implied_opcode_token33] = ACTIONS(130),
    [aux_sym__implied_opcode_token34] = ACTIONS(130),
    [aux_sym__implied_opcode_token35] = ACTIONS(130),
    [aux_sym__implied_opcode_token36] = ACTIONS(130),
    [aux_sym__implied_opcode_token37] = ACTIONS(130),
    [aux_sym__relative_opcode_token1] = ACTIONS(130),
    [aux_sym__relative_opcode_token2] = ACTIONS(130),
    [aux_sym__relative_opcode_token3] = ACTIONS(130),
    [aux_sym__relative_opcode_token4] = ACTIONS(130),
    [aux_sym__relative_opcode_token5] = ACTIONS(130),
    [aux_sym__relative_opcode_token6] = ACTIONS(130),
    [aux_sym__relative_opcode_token7] = ACTIONS(130),
    [aux_sym__relative_opcode_token8] = ACTIONS(130),
    [aux_sym__relative_opcode_token9] = ACTIONS(130),
    [aux_sym__immediate_opcode_token1] = ACTIONS(130),
    [aux_sym__immediate_opcode_token2] = ACTIONS(130),
    [aux_sym__immediate_opcode_token3] = ACTIONS(130),
    [aux_sym__immediate_opcode_token4] = ACTIONS(130),
    [aux_sym__immediate_opcode_token5] = ACTIONS(130),
    [aux_sym__immediate_opcode_token6] = ACTIONS(130),
    [aux_sym__immediate_opcode_token7] = ACTIONS(130),
    [aux_sym__immediate_opcode_token8] = ACTIONS(130),
    [aux_sym__immediate_opcode_token9] = ACTIONS(130),
    [aux_sym__immediate_opcode_token10] = ACTIONS(130),
    [aux_sym__immediate_opcode_token11] = ACTIONS(130),
    [aux_sym__immediate_opcode_token12] = ACTIONS(130),
    [aux_sym__absolute_opcode_token1] = ACTIONS(130),
    [aux_sym__absolute_opcode_token2] = ACTIONS(130),
    [aux_sym__absolute_opcode_token3] = ACTIONS(130),
    [aux_sym__absolute_opcode_token4] = ACTIONS(130),
    [aux_sym__absolute_opcode_token5] = ACTIONS(130),
    [aux_sym__absolute_opcode_token6] = ACTIONS(130),
    [aux_sym__absolute_opcode_token7] = ACTIONS(130),
    [aux_sym__absolute_opcode_token8] = ACTIONS(130),
    [sym_local_label] = ACTIONS(130),
    [sym_global_label] = ACTIONS(130),
  },
  [12] = {
    [aux_sym__byte_list] = STATE(12),
    [sym__byte_literal] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(136),
    [anon_sym_DOTexport] = ACTIONS(136),
    [anon_sym_DOTsegment] = ACTIONS(136),
    [anon_sym_DOTsection] = ACTIONS(136),
    [anon_sym_word] = ACTIONS(136),
    [anon_sym_DOTbyte] = ACTIONS(136),
    [anon_sym_DOTaddr] = ACTIONS(136),
    [anon_sym_DOTproc] = ACTIONS(136),
    [anon_sym_DOTendproc] = ACTIONS(136),
    [sym_num_literal] = ACTIONS(138),
    [sym_char_literal] = ACTIONS(138),
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
    [sym_local_label] = ACTIONS(136),
    [sym_global_label] = ACTIONS(136),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(143),
    [anon_sym_DOTexport] = ACTIONS(143),
    [anon_sym_DOTsegment] = ACTIONS(143),
    [anon_sym_DOTsection] = ACTIONS(143),
    [anon_sym_word] = ACTIONS(143),
    [anon_sym_DOTbyte] = ACTIONS(143),
    [anon_sym_DOTaddr] = ACTIONS(143),
    [anon_sym_DOTproc] = ACTIONS(143),
    [anon_sym_DOTendproc] = ACTIONS(143),
    [sym_num_literal] = ACTIONS(141),
    [sym_char_literal] = ACTIONS(141),
    [aux_sym__implied_opcode_token1] = ACTIONS(143),
    [aux_sym__implied_opcode_token2] = ACTIONS(143),
    [aux_sym__implied_opcode_token3] = ACTIONS(143),
    [aux_sym__implied_opcode_token4] = ACTIONS(143),
    [aux_sym__implied_opcode_token5] = ACTIONS(143),
    [aux_sym__implied_opcode_token6] = ACTIONS(143),
    [aux_sym__implied_opcode_token7] = ACTIONS(143),
    [aux_sym__implied_opcode_token8] = ACTIONS(143),
    [aux_sym__implied_opcode_token9] = ACTIONS(143),
    [aux_sym__implied_opcode_token10] = ACTIONS(143),
    [aux_sym__implied_opcode_token11] = ACTIONS(143),
    [aux_sym__implied_opcode_token12] = ACTIONS(143),
    [aux_sym__implied_opcode_token13] = ACTIONS(143),
    [aux_sym__implied_opcode_token14] = ACTIONS(143),
    [aux_sym__implied_opcode_token15] = ACTIONS(143),
    [aux_sym__implied_opcode_token16] = ACTIONS(143),
    [aux_sym__implied_opcode_token17] = ACTIONS(143),
    [aux_sym__implied_opcode_token18] = ACTIONS(143),
    [aux_sym__implied_opcode_token19] = ACTIONS(143),
    [aux_sym__implied_opcode_token20] = ACTIONS(143),
    [aux_sym__implied_opcode_token21] = ACTIONS(143),
    [aux_sym__implied_opcode_token22] = ACTIONS(143),
    [aux_sym__implied_opcode_token23] = ACTIONS(143),
    [aux_sym__implied_opcode_token24] = ACTIONS(143),
    [aux_sym__implied_opcode_token25] = ACTIONS(143),
    [aux_sym__implied_opcode_token26] = ACTIONS(143),
    [aux_sym__implied_opcode_token27] = ACTIONS(143),
    [aux_sym__implied_opcode_token28] = ACTIONS(143),
    [aux_sym__implied_opcode_token29] = ACTIONS(143),
    [aux_sym__implied_opcode_token30] = ACTIONS(143),
    [aux_sym__implied_opcode_token31] = ACTIONS(143),
    [aux_sym__implied_opcode_token32] = ACTIONS(143),
    [aux_sym__implied_opcode_token33] = ACTIONS(143),
    [aux_sym__implied_opcode_token34] = ACTIONS(143),
    [aux_sym__implied_opcode_token35] = ACTIONS(143),
    [aux_sym__implied_opcode_token36] = ACTIONS(143),
    [aux_sym__implied_opcode_token37] = ACTIONS(143),
    [aux_sym__relative_opcode_token1] = ACTIONS(143),
    [aux_sym__relative_opcode_token2] = ACTIONS(143),
    [aux_sym__relative_opcode_token3] = ACTIONS(143),
    [aux_sym__relative_opcode_token4] = ACTIONS(143),
    [aux_sym__relative_opcode_token5] = ACTIONS(143),
    [aux_sym__relative_opcode_token6] = ACTIONS(143),
    [aux_sym__relative_opcode_token7] = ACTIONS(143),
    [aux_sym__relative_opcode_token8] = ACTIONS(143),
    [aux_sym__relative_opcode_token9] = ACTIONS(143),
    [aux_sym__immediate_opcode_token1] = ACTIONS(143),
    [aux_sym__immediate_opcode_token2] = ACTIONS(143),
    [aux_sym__immediate_opcode_token3] = ACTIONS(143),
    [aux_sym__immediate_opcode_token4] = ACTIONS(143),
    [aux_sym__immediate_opcode_token5] = ACTIONS(143),
    [aux_sym__immediate_opcode_token6] = ACTIONS(143),
    [aux_sym__immediate_opcode_token7] = ACTIONS(143),
    [aux_sym__immediate_opcode_token8] = ACTIONS(143),
    [aux_sym__immediate_opcode_token9] = ACTIONS(143),
    [aux_sym__immediate_opcode_token10] = ACTIONS(143),
    [aux_sym__immediate_opcode_token11] = ACTIONS(143),
    [aux_sym__immediate_opcode_token12] = ACTIONS(143),
    [aux_sym__absolute_opcode_token1] = ACTIONS(143),
    [aux_sym__absolute_opcode_token2] = ACTIONS(143),
    [aux_sym__absolute_opcode_token3] = ACTIONS(143),
    [aux_sym__absolute_opcode_token4] = ACTIONS(143),
    [aux_sym__absolute_opcode_token5] = ACTIONS(143),
    [aux_sym__absolute_opcode_token6] = ACTIONS(143),
    [aux_sym__absolute_opcode_token7] = ACTIONS(143),
    [aux_sym__absolute_opcode_token8] = ACTIONS(143),
    [sym_comma] = ACTIONS(145),
    [sym_local_label] = ACTIONS(143),
    [sym_global_label] = ACTIONS(143),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(136),
    [anon_sym_DOTexport] = ACTIONS(136),
    [anon_sym_DOTsegment] = ACTIONS(136),
    [anon_sym_DOTsection] = ACTIONS(136),
    [anon_sym_word] = ACTIONS(136),
    [anon_sym_DOTbyte] = ACTIONS(136),
    [anon_sym_DOTaddr] = ACTIONS(136),
    [anon_sym_DOTproc] = ACTIONS(136),
    [anon_sym_DOTendproc] = ACTIONS(136),
    [sym_num_literal] = ACTIONS(134),
    [sym_char_literal] = ACTIONS(134),
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
    [sym_local_label] = ACTIONS(136),
    [sym_global_label] = ACTIONS(136),
  },
  [15] = {
    [sym__reg_y] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(149),
    [anon_sym_DOTexport] = ACTIONS(149),
    [anon_sym_DOTsegment] = ACTIONS(149),
    [anon_sym_DOTsection] = ACTIONS(149),
    [anon_sym_word] = ACTIONS(149),
    [anon_sym_DOTbyte] = ACTIONS(149),
    [anon_sym_DOTaddr] = ACTIONS(149),
    [anon_sym_DOTproc] = ACTIONS(149),
    [anon_sym_DOTendproc] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(151),
    [aux_sym__implied_opcode_token1] = ACTIONS(149),
    [aux_sym__implied_opcode_token2] = ACTIONS(149),
    [aux_sym__implied_opcode_token3] = ACTIONS(149),
    [aux_sym__implied_opcode_token4] = ACTIONS(149),
    [aux_sym__implied_opcode_token5] = ACTIONS(149),
    [aux_sym__implied_opcode_token6] = ACTIONS(149),
    [aux_sym__implied_opcode_token7] = ACTIONS(149),
    [aux_sym__implied_opcode_token8] = ACTIONS(149),
    [aux_sym__implied_opcode_token9] = ACTIONS(149),
    [aux_sym__implied_opcode_token10] = ACTIONS(149),
    [aux_sym__implied_opcode_token11] = ACTIONS(149),
    [aux_sym__implied_opcode_token12] = ACTIONS(149),
    [aux_sym__implied_opcode_token13] = ACTIONS(149),
    [aux_sym__implied_opcode_token14] = ACTIONS(149),
    [aux_sym__implied_opcode_token15] = ACTIONS(149),
    [aux_sym__implied_opcode_token16] = ACTIONS(149),
    [aux_sym__implied_opcode_token17] = ACTIONS(149),
    [aux_sym__implied_opcode_token18] = ACTIONS(149),
    [aux_sym__implied_opcode_token19] = ACTIONS(149),
    [aux_sym__implied_opcode_token20] = ACTIONS(149),
    [aux_sym__implied_opcode_token21] = ACTIONS(149),
    [aux_sym__implied_opcode_token22] = ACTIONS(149),
    [aux_sym__implied_opcode_token23] = ACTIONS(149),
    [aux_sym__implied_opcode_token24] = ACTIONS(149),
    [aux_sym__implied_opcode_token25] = ACTIONS(149),
    [aux_sym__implied_opcode_token26] = ACTIONS(149),
    [aux_sym__implied_opcode_token27] = ACTIONS(149),
    [aux_sym__implied_opcode_token28] = ACTIONS(149),
    [aux_sym__implied_opcode_token29] = ACTIONS(149),
    [aux_sym__implied_opcode_token30] = ACTIONS(149),
    [aux_sym__implied_opcode_token31] = ACTIONS(149),
    [aux_sym__implied_opcode_token32] = ACTIONS(149),
    [aux_sym__implied_opcode_token33] = ACTIONS(149),
    [aux_sym__implied_opcode_token34] = ACTIONS(149),
    [aux_sym__implied_opcode_token35] = ACTIONS(149),
    [aux_sym__implied_opcode_token36] = ACTIONS(149),
    [aux_sym__implied_opcode_token37] = ACTIONS(149),
    [aux_sym__relative_opcode_token1] = ACTIONS(149),
    [aux_sym__relative_opcode_token2] = ACTIONS(149),
    [aux_sym__relative_opcode_token3] = ACTIONS(149),
    [aux_sym__relative_opcode_token4] = ACTIONS(149),
    [aux_sym__relative_opcode_token5] = ACTIONS(149),
    [aux_sym__relative_opcode_token6] = ACTIONS(149),
    [aux_sym__relative_opcode_token7] = ACTIONS(149),
    [aux_sym__relative_opcode_token8] = ACTIONS(149),
    [aux_sym__relative_opcode_token9] = ACTIONS(149),
    [aux_sym__immediate_opcode_token1] = ACTIONS(149),
    [aux_sym__immediate_opcode_token2] = ACTIONS(149),
    [aux_sym__immediate_opcode_token3] = ACTIONS(149),
    [aux_sym__immediate_opcode_token4] = ACTIONS(149),
    [aux_sym__immediate_opcode_token5] = ACTIONS(149),
    [aux_sym__immediate_opcode_token6] = ACTIONS(149),
    [aux_sym__immediate_opcode_token7] = ACTIONS(149),
    [aux_sym__immediate_opcode_token8] = ACTIONS(149),
    [aux_sym__immediate_opcode_token9] = ACTIONS(149),
    [aux_sym__immediate_opcode_token10] = ACTIONS(149),
    [aux_sym__immediate_opcode_token11] = ACTIONS(149),
    [aux_sym__immediate_opcode_token12] = ACTIONS(149),
    [aux_sym__absolute_opcode_token1] = ACTIONS(149),
    [aux_sym__absolute_opcode_token2] = ACTIONS(149),
    [aux_sym__absolute_opcode_token3] = ACTIONS(149),
    [aux_sym__absolute_opcode_token4] = ACTIONS(149),
    [aux_sym__absolute_opcode_token5] = ACTIONS(149),
    [aux_sym__absolute_opcode_token6] = ACTIONS(149),
    [aux_sym__absolute_opcode_token7] = ACTIONS(149),
    [aux_sym__absolute_opcode_token8] = ACTIONS(149),
    [sym_local_label] = ACTIONS(149),
    [sym_global_label] = ACTIONS(149),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(155),
    [anon_sym_DOTexport] = ACTIONS(155),
    [anon_sym_DOTsegment] = ACTIONS(155),
    [anon_sym_DOTsection] = ACTIONS(155),
    [anon_sym_word] = ACTIONS(155),
    [anon_sym_DOTbyte] = ACTIONS(155),
    [anon_sym_DOTaddr] = ACTIONS(155),
    [anon_sym_DOTproc] = ACTIONS(155),
    [anon_sym_DOTendproc] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(153),
    [aux_sym__implied_opcode_token1] = ACTIONS(155),
    [aux_sym__implied_opcode_token2] = ACTIONS(155),
    [aux_sym__implied_opcode_token3] = ACTIONS(155),
    [aux_sym__implied_opcode_token4] = ACTIONS(155),
    [aux_sym__implied_opcode_token5] = ACTIONS(155),
    [aux_sym__implied_opcode_token6] = ACTIONS(155),
    [aux_sym__implied_opcode_token7] = ACTIONS(155),
    [aux_sym__implied_opcode_token8] = ACTIONS(155),
    [aux_sym__implied_opcode_token9] = ACTIONS(155),
    [aux_sym__implied_opcode_token10] = ACTIONS(155),
    [aux_sym__implied_opcode_token11] = ACTIONS(155),
    [aux_sym__implied_opcode_token12] = ACTIONS(155),
    [aux_sym__implied_opcode_token13] = ACTIONS(155),
    [aux_sym__implied_opcode_token14] = ACTIONS(155),
    [aux_sym__implied_opcode_token15] = ACTIONS(155),
    [aux_sym__implied_opcode_token16] = ACTIONS(155),
    [aux_sym__implied_opcode_token17] = ACTIONS(155),
    [aux_sym__implied_opcode_token18] = ACTIONS(155),
    [aux_sym__implied_opcode_token19] = ACTIONS(155),
    [aux_sym__implied_opcode_token20] = ACTIONS(155),
    [aux_sym__implied_opcode_token21] = ACTIONS(155),
    [aux_sym__implied_opcode_token22] = ACTIONS(155),
    [aux_sym__implied_opcode_token23] = ACTIONS(155),
    [aux_sym__implied_opcode_token24] = ACTIONS(155),
    [aux_sym__implied_opcode_token25] = ACTIONS(155),
    [aux_sym__implied_opcode_token26] = ACTIONS(155),
    [aux_sym__implied_opcode_token27] = ACTIONS(155),
    [aux_sym__implied_opcode_token28] = ACTIONS(155),
    [aux_sym__implied_opcode_token29] = ACTIONS(155),
    [aux_sym__implied_opcode_token30] = ACTIONS(155),
    [aux_sym__implied_opcode_token31] = ACTIONS(155),
    [aux_sym__implied_opcode_token32] = ACTIONS(155),
    [aux_sym__implied_opcode_token33] = ACTIONS(155),
    [aux_sym__implied_opcode_token34] = ACTIONS(155),
    [aux_sym__implied_opcode_token35] = ACTIONS(155),
    [aux_sym__implied_opcode_token36] = ACTIONS(155),
    [aux_sym__implied_opcode_token37] = ACTIONS(155),
    [aux_sym__relative_opcode_token1] = ACTIONS(155),
    [aux_sym__relative_opcode_token2] = ACTIONS(155),
    [aux_sym__relative_opcode_token3] = ACTIONS(155),
    [aux_sym__relative_opcode_token4] = ACTIONS(155),
    [aux_sym__relative_opcode_token5] = ACTIONS(155),
    [aux_sym__relative_opcode_token6] = ACTIONS(155),
    [aux_sym__relative_opcode_token7] = ACTIONS(155),
    [aux_sym__relative_opcode_token8] = ACTIONS(155),
    [aux_sym__relative_opcode_token9] = ACTIONS(155),
    [aux_sym__immediate_opcode_token1] = ACTIONS(155),
    [aux_sym__immediate_opcode_token2] = ACTIONS(155),
    [aux_sym__immediate_opcode_token3] = ACTIONS(155),
    [aux_sym__immediate_opcode_token4] = ACTIONS(155),
    [aux_sym__immediate_opcode_token5] = ACTIONS(155),
    [aux_sym__immediate_opcode_token6] = ACTIONS(155),
    [aux_sym__immediate_opcode_token7] = ACTIONS(155),
    [aux_sym__immediate_opcode_token8] = ACTIONS(155),
    [aux_sym__immediate_opcode_token9] = ACTIONS(155),
    [aux_sym__immediate_opcode_token10] = ACTIONS(155),
    [aux_sym__immediate_opcode_token11] = ACTIONS(155),
    [aux_sym__immediate_opcode_token12] = ACTIONS(155),
    [aux_sym__absolute_opcode_token1] = ACTIONS(155),
    [aux_sym__absolute_opcode_token2] = ACTIONS(155),
    [aux_sym__absolute_opcode_token3] = ACTIONS(155),
    [aux_sym__absolute_opcode_token4] = ACTIONS(155),
    [aux_sym__absolute_opcode_token5] = ACTIONS(155),
    [aux_sym__absolute_opcode_token6] = ACTIONS(155),
    [aux_sym__absolute_opcode_token7] = ACTIONS(155),
    [aux_sym__absolute_opcode_token8] = ACTIONS(155),
    [sym_local_label] = ACTIONS(155),
    [sym_global_label] = ACTIONS(155),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_comment] = ACTIONS(159),
    [sym__ws_sep] = ACTIONS(161),
    [anon_sym_DOTinclude] = ACTIONS(163),
    [anon_sym_DOTexport] = ACTIONS(163),
    [anon_sym_DOTsegment] = ACTIONS(163),
    [anon_sym_DOTsection] = ACTIONS(163),
    [anon_sym_word] = ACTIONS(163),
    [anon_sym_DOTbyte] = ACTIONS(163),
    [anon_sym_DOTaddr] = ACTIONS(163),
    [anon_sym_DOTproc] = ACTIONS(163),
    [anon_sym_DOTendproc] = ACTIONS(163),
    [aux_sym__implied_opcode_token1] = ACTIONS(163),
    [aux_sym__implied_opcode_token2] = ACTIONS(163),
    [aux_sym__implied_opcode_token3] = ACTIONS(163),
    [aux_sym__implied_opcode_token4] = ACTIONS(163),
    [aux_sym__implied_opcode_token5] = ACTIONS(163),
    [aux_sym__implied_opcode_token6] = ACTIONS(163),
    [aux_sym__implied_opcode_token7] = ACTIONS(163),
    [aux_sym__implied_opcode_token8] = ACTIONS(163),
    [aux_sym__implied_opcode_token9] = ACTIONS(163),
    [aux_sym__implied_opcode_token10] = ACTIONS(163),
    [aux_sym__implied_opcode_token11] = ACTIONS(163),
    [aux_sym__implied_opcode_token12] = ACTIONS(163),
    [aux_sym__implied_opcode_token13] = ACTIONS(163),
    [aux_sym__implied_opcode_token14] = ACTIONS(163),
    [aux_sym__implied_opcode_token15] = ACTIONS(163),
    [aux_sym__implied_opcode_token16] = ACTIONS(163),
    [aux_sym__implied_opcode_token17] = ACTIONS(163),
    [aux_sym__implied_opcode_token18] = ACTIONS(163),
    [aux_sym__implied_opcode_token19] = ACTIONS(163),
    [aux_sym__implied_opcode_token20] = ACTIONS(163),
    [aux_sym__implied_opcode_token21] = ACTIONS(163),
    [aux_sym__implied_opcode_token22] = ACTIONS(163),
    [aux_sym__implied_opcode_token23] = ACTIONS(163),
    [aux_sym__implied_opcode_token24] = ACTIONS(163),
    [aux_sym__implied_opcode_token25] = ACTIONS(163),
    [aux_sym__implied_opcode_token26] = ACTIONS(163),
    [aux_sym__implied_opcode_token27] = ACTIONS(163),
    [aux_sym__implied_opcode_token28] = ACTIONS(163),
    [aux_sym__implied_opcode_token29] = ACTIONS(163),
    [aux_sym__implied_opcode_token30] = ACTIONS(163),
    [aux_sym__implied_opcode_token31] = ACTIONS(163),
    [aux_sym__implied_opcode_token32] = ACTIONS(163),
    [aux_sym__implied_opcode_token33] = ACTIONS(163),
    [aux_sym__implied_opcode_token34] = ACTIONS(163),
    [aux_sym__implied_opcode_token35] = ACTIONS(163),
    [aux_sym__implied_opcode_token36] = ACTIONS(163),
    [aux_sym__implied_opcode_token37] = ACTIONS(163),
    [aux_sym__relative_opcode_token1] = ACTIONS(163),
    [aux_sym__relative_opcode_token2] = ACTIONS(163),
    [aux_sym__relative_opcode_token3] = ACTIONS(163),
    [aux_sym__relative_opcode_token4] = ACTIONS(163),
    [aux_sym__relative_opcode_token5] = ACTIONS(163),
    [aux_sym__relative_opcode_token6] = ACTIONS(163),
    [aux_sym__relative_opcode_token7] = ACTIONS(163),
    [aux_sym__relative_opcode_token8] = ACTIONS(163),
    [aux_sym__relative_opcode_token9] = ACTIONS(163),
    [aux_sym__immediate_opcode_token1] = ACTIONS(163),
    [aux_sym__immediate_opcode_token2] = ACTIONS(163),
    [aux_sym__immediate_opcode_token3] = ACTIONS(163),
    [aux_sym__immediate_opcode_token4] = ACTIONS(163),
    [aux_sym__immediate_opcode_token5] = ACTIONS(163),
    [aux_sym__immediate_opcode_token6] = ACTIONS(163),
    [aux_sym__immediate_opcode_token7] = ACTIONS(163),
    [aux_sym__immediate_opcode_token8] = ACTIONS(163),
    [aux_sym__immediate_opcode_token9] = ACTIONS(163),
    [aux_sym__immediate_opcode_token10] = ACTIONS(163),
    [aux_sym__immediate_opcode_token11] = ACTIONS(163),
    [aux_sym__immediate_opcode_token12] = ACTIONS(163),
    [aux_sym__absolute_opcode_token1] = ACTIONS(163),
    [aux_sym__absolute_opcode_token2] = ACTIONS(163),
    [aux_sym__absolute_opcode_token3] = ACTIONS(163),
    [aux_sym__absolute_opcode_token4] = ACTIONS(163),
    [aux_sym__absolute_opcode_token5] = ACTIONS(163),
    [aux_sym__absolute_opcode_token6] = ACTIONS(163),
    [aux_sym__absolute_opcode_token7] = ACTIONS(163),
    [aux_sym__absolute_opcode_token8] = ACTIONS(163),
    [sym_local_label] = ACTIONS(163),
    [sym_global_label] = ACTIONS(163),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(167),
    [anon_sym_DOTexport] = ACTIONS(167),
    [anon_sym_DOTsegment] = ACTIONS(167),
    [anon_sym_DOTsection] = ACTIONS(167),
    [anon_sym_word] = ACTIONS(167),
    [anon_sym_DOTbyte] = ACTIONS(167),
    [anon_sym_DOTaddr] = ACTIONS(167),
    [anon_sym_DOTproc] = ACTIONS(167),
    [anon_sym_DOTendproc] = ACTIONS(167),
    [aux_sym__implied_opcode_token1] = ACTIONS(167),
    [aux_sym__implied_opcode_token2] = ACTIONS(167),
    [aux_sym__implied_opcode_token3] = ACTIONS(167),
    [aux_sym__implied_opcode_token4] = ACTIONS(167),
    [aux_sym__implied_opcode_token5] = ACTIONS(167),
    [aux_sym__implied_opcode_token6] = ACTIONS(167),
    [aux_sym__implied_opcode_token7] = ACTIONS(167),
    [aux_sym__implied_opcode_token8] = ACTIONS(167),
    [aux_sym__implied_opcode_token9] = ACTIONS(167),
    [aux_sym__implied_opcode_token10] = ACTIONS(167),
    [aux_sym__implied_opcode_token11] = ACTIONS(167),
    [aux_sym__implied_opcode_token12] = ACTIONS(167),
    [aux_sym__implied_opcode_token13] = ACTIONS(167),
    [aux_sym__implied_opcode_token14] = ACTIONS(167),
    [aux_sym__implied_opcode_token15] = ACTIONS(167),
    [aux_sym__implied_opcode_token16] = ACTIONS(167),
    [aux_sym__implied_opcode_token17] = ACTIONS(167),
    [aux_sym__implied_opcode_token18] = ACTIONS(167),
    [aux_sym__implied_opcode_token19] = ACTIONS(167),
    [aux_sym__implied_opcode_token20] = ACTIONS(167),
    [aux_sym__implied_opcode_token21] = ACTIONS(167),
    [aux_sym__implied_opcode_token22] = ACTIONS(167),
    [aux_sym__implied_opcode_token23] = ACTIONS(167),
    [aux_sym__implied_opcode_token24] = ACTIONS(167),
    [aux_sym__implied_opcode_token25] = ACTIONS(167),
    [aux_sym__implied_opcode_token26] = ACTIONS(167),
    [aux_sym__implied_opcode_token27] = ACTIONS(167),
    [aux_sym__implied_opcode_token28] = ACTIONS(167),
    [aux_sym__implied_opcode_token29] = ACTIONS(167),
    [aux_sym__implied_opcode_token30] = ACTIONS(167),
    [aux_sym__implied_opcode_token31] = ACTIONS(167),
    [aux_sym__implied_opcode_token32] = ACTIONS(167),
    [aux_sym__implied_opcode_token33] = ACTIONS(167),
    [aux_sym__implied_opcode_token34] = ACTIONS(167),
    [aux_sym__implied_opcode_token35] = ACTIONS(167),
    [aux_sym__implied_opcode_token36] = ACTIONS(167),
    [aux_sym__implied_opcode_token37] = ACTIONS(167),
    [aux_sym__relative_opcode_token1] = ACTIONS(167),
    [aux_sym__relative_opcode_token2] = ACTIONS(167),
    [aux_sym__relative_opcode_token3] = ACTIONS(167),
    [aux_sym__relative_opcode_token4] = ACTIONS(167),
    [aux_sym__relative_opcode_token5] = ACTIONS(167),
    [aux_sym__relative_opcode_token6] = ACTIONS(167),
    [aux_sym__relative_opcode_token7] = ACTIONS(167),
    [aux_sym__relative_opcode_token8] = ACTIONS(167),
    [aux_sym__relative_opcode_token9] = ACTIONS(167),
    [aux_sym__immediate_opcode_token1] = ACTIONS(167),
    [aux_sym__immediate_opcode_token2] = ACTIONS(167),
    [aux_sym__immediate_opcode_token3] = ACTIONS(167),
    [aux_sym__immediate_opcode_token4] = ACTIONS(167),
    [aux_sym__immediate_opcode_token5] = ACTIONS(167),
    [aux_sym__immediate_opcode_token6] = ACTIONS(167),
    [aux_sym__immediate_opcode_token7] = ACTIONS(167),
    [aux_sym__immediate_opcode_token8] = ACTIONS(167),
    [aux_sym__immediate_opcode_token9] = ACTIONS(167),
    [aux_sym__immediate_opcode_token10] = ACTIONS(167),
    [aux_sym__immediate_opcode_token11] = ACTIONS(167),
    [aux_sym__immediate_opcode_token12] = ACTIONS(167),
    [aux_sym__absolute_opcode_token1] = ACTIONS(167),
    [aux_sym__absolute_opcode_token2] = ACTIONS(167),
    [aux_sym__absolute_opcode_token3] = ACTIONS(167),
    [aux_sym__absolute_opcode_token4] = ACTIONS(167),
    [aux_sym__absolute_opcode_token5] = ACTIONS(167),
    [aux_sym__absolute_opcode_token6] = ACTIONS(167),
    [aux_sym__absolute_opcode_token7] = ACTIONS(167),
    [aux_sym__absolute_opcode_token8] = ACTIONS(167),
    [sym_local_label] = ACTIONS(167),
    [sym_global_label] = ACTIONS(167),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(171),
    [anon_sym_DOTexport] = ACTIONS(171),
    [anon_sym_DOTsegment] = ACTIONS(171),
    [anon_sym_DOTsection] = ACTIONS(171),
    [anon_sym_word] = ACTIONS(171),
    [anon_sym_DOTbyte] = ACTIONS(171),
    [anon_sym_DOTaddr] = ACTIONS(171),
    [anon_sym_DOTproc] = ACTIONS(171),
    [anon_sym_DOTendproc] = ACTIONS(171),
    [aux_sym__implied_opcode_token1] = ACTIONS(171),
    [aux_sym__implied_opcode_token2] = ACTIONS(171),
    [aux_sym__implied_opcode_token3] = ACTIONS(171),
    [aux_sym__implied_opcode_token4] = ACTIONS(171),
    [aux_sym__implied_opcode_token5] = ACTIONS(171),
    [aux_sym__implied_opcode_token6] = ACTIONS(171),
    [aux_sym__implied_opcode_token7] = ACTIONS(171),
    [aux_sym__implied_opcode_token8] = ACTIONS(171),
    [aux_sym__implied_opcode_token9] = ACTIONS(171),
    [aux_sym__implied_opcode_token10] = ACTIONS(171),
    [aux_sym__implied_opcode_token11] = ACTIONS(171),
    [aux_sym__implied_opcode_token12] = ACTIONS(171),
    [aux_sym__implied_opcode_token13] = ACTIONS(171),
    [aux_sym__implied_opcode_token14] = ACTIONS(171),
    [aux_sym__implied_opcode_token15] = ACTIONS(171),
    [aux_sym__implied_opcode_token16] = ACTIONS(171),
    [aux_sym__implied_opcode_token17] = ACTIONS(171),
    [aux_sym__implied_opcode_token18] = ACTIONS(171),
    [aux_sym__implied_opcode_token19] = ACTIONS(171),
    [aux_sym__implied_opcode_token20] = ACTIONS(171),
    [aux_sym__implied_opcode_token21] = ACTIONS(171),
    [aux_sym__implied_opcode_token22] = ACTIONS(171),
    [aux_sym__implied_opcode_token23] = ACTIONS(171),
    [aux_sym__implied_opcode_token24] = ACTIONS(171),
    [aux_sym__implied_opcode_token25] = ACTIONS(171),
    [aux_sym__implied_opcode_token26] = ACTIONS(171),
    [aux_sym__implied_opcode_token27] = ACTIONS(171),
    [aux_sym__implied_opcode_token28] = ACTIONS(171),
    [aux_sym__implied_opcode_token29] = ACTIONS(171),
    [aux_sym__implied_opcode_token30] = ACTIONS(171),
    [aux_sym__implied_opcode_token31] = ACTIONS(171),
    [aux_sym__implied_opcode_token32] = ACTIONS(171),
    [aux_sym__implied_opcode_token33] = ACTIONS(171),
    [aux_sym__implied_opcode_token34] = ACTIONS(171),
    [aux_sym__implied_opcode_token35] = ACTIONS(171),
    [aux_sym__implied_opcode_token36] = ACTIONS(171),
    [aux_sym__implied_opcode_token37] = ACTIONS(171),
    [aux_sym__relative_opcode_token1] = ACTIONS(171),
    [aux_sym__relative_opcode_token2] = ACTIONS(171),
    [aux_sym__relative_opcode_token3] = ACTIONS(171),
    [aux_sym__relative_opcode_token4] = ACTIONS(171),
    [aux_sym__relative_opcode_token5] = ACTIONS(171),
    [aux_sym__relative_opcode_token6] = ACTIONS(171),
    [aux_sym__relative_opcode_token7] = ACTIONS(171),
    [aux_sym__relative_opcode_token8] = ACTIONS(171),
    [aux_sym__relative_opcode_token9] = ACTIONS(171),
    [aux_sym__immediate_opcode_token1] = ACTIONS(171),
    [aux_sym__immediate_opcode_token2] = ACTIONS(171),
    [aux_sym__immediate_opcode_token3] = ACTIONS(171),
    [aux_sym__immediate_opcode_token4] = ACTIONS(171),
    [aux_sym__immediate_opcode_token5] = ACTIONS(171),
    [aux_sym__immediate_opcode_token6] = ACTIONS(171),
    [aux_sym__immediate_opcode_token7] = ACTIONS(171),
    [aux_sym__immediate_opcode_token8] = ACTIONS(171),
    [aux_sym__immediate_opcode_token9] = ACTIONS(171),
    [aux_sym__immediate_opcode_token10] = ACTIONS(171),
    [aux_sym__immediate_opcode_token11] = ACTIONS(171),
    [aux_sym__immediate_opcode_token12] = ACTIONS(171),
    [aux_sym__absolute_opcode_token1] = ACTIONS(171),
    [aux_sym__absolute_opcode_token2] = ACTIONS(171),
    [aux_sym__absolute_opcode_token3] = ACTIONS(171),
    [aux_sym__absolute_opcode_token4] = ACTIONS(171),
    [aux_sym__absolute_opcode_token5] = ACTIONS(171),
    [aux_sym__absolute_opcode_token6] = ACTIONS(171),
    [aux_sym__absolute_opcode_token7] = ACTIONS(171),
    [aux_sym__absolute_opcode_token8] = ACTIONS(171),
    [sym_local_label] = ACTIONS(171),
    [sym_global_label] = ACTIONS(171),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(175),
    [anon_sym_DOTexport] = ACTIONS(175),
    [anon_sym_DOTsegment] = ACTIONS(175),
    [anon_sym_DOTsection] = ACTIONS(175),
    [anon_sym_word] = ACTIONS(175),
    [anon_sym_DOTbyte] = ACTIONS(175),
    [anon_sym_DOTaddr] = ACTIONS(175),
    [anon_sym_DOTproc] = ACTIONS(175),
    [anon_sym_DOTendproc] = ACTIONS(175),
    [aux_sym__implied_opcode_token1] = ACTIONS(175),
    [aux_sym__implied_opcode_token2] = ACTIONS(175),
    [aux_sym__implied_opcode_token3] = ACTIONS(175),
    [aux_sym__implied_opcode_token4] = ACTIONS(175),
    [aux_sym__implied_opcode_token5] = ACTIONS(175),
    [aux_sym__implied_opcode_token6] = ACTIONS(175),
    [aux_sym__implied_opcode_token7] = ACTIONS(175),
    [aux_sym__implied_opcode_token8] = ACTIONS(175),
    [aux_sym__implied_opcode_token9] = ACTIONS(175),
    [aux_sym__implied_opcode_token10] = ACTIONS(175),
    [aux_sym__implied_opcode_token11] = ACTIONS(175),
    [aux_sym__implied_opcode_token12] = ACTIONS(175),
    [aux_sym__implied_opcode_token13] = ACTIONS(175),
    [aux_sym__implied_opcode_token14] = ACTIONS(175),
    [aux_sym__implied_opcode_token15] = ACTIONS(175),
    [aux_sym__implied_opcode_token16] = ACTIONS(175),
    [aux_sym__implied_opcode_token17] = ACTIONS(175),
    [aux_sym__implied_opcode_token18] = ACTIONS(175),
    [aux_sym__implied_opcode_token19] = ACTIONS(175),
    [aux_sym__implied_opcode_token20] = ACTIONS(175),
    [aux_sym__implied_opcode_token21] = ACTIONS(175),
    [aux_sym__implied_opcode_token22] = ACTIONS(175),
    [aux_sym__implied_opcode_token23] = ACTIONS(175),
    [aux_sym__implied_opcode_token24] = ACTIONS(175),
    [aux_sym__implied_opcode_token25] = ACTIONS(175),
    [aux_sym__implied_opcode_token26] = ACTIONS(175),
    [aux_sym__implied_opcode_token27] = ACTIONS(175),
    [aux_sym__implied_opcode_token28] = ACTIONS(175),
    [aux_sym__implied_opcode_token29] = ACTIONS(175),
    [aux_sym__implied_opcode_token30] = ACTIONS(175),
    [aux_sym__implied_opcode_token31] = ACTIONS(175),
    [aux_sym__implied_opcode_token32] = ACTIONS(175),
    [aux_sym__implied_opcode_token33] = ACTIONS(175),
    [aux_sym__implied_opcode_token34] = ACTIONS(175),
    [aux_sym__implied_opcode_token35] = ACTIONS(175),
    [aux_sym__implied_opcode_token36] = ACTIONS(175),
    [aux_sym__implied_opcode_token37] = ACTIONS(175),
    [aux_sym__relative_opcode_token1] = ACTIONS(175),
    [aux_sym__relative_opcode_token2] = ACTIONS(175),
    [aux_sym__relative_opcode_token3] = ACTIONS(175),
    [aux_sym__relative_opcode_token4] = ACTIONS(175),
    [aux_sym__relative_opcode_token5] = ACTIONS(175),
    [aux_sym__relative_opcode_token6] = ACTIONS(175),
    [aux_sym__relative_opcode_token7] = ACTIONS(175),
    [aux_sym__relative_opcode_token8] = ACTIONS(175),
    [aux_sym__relative_opcode_token9] = ACTIONS(175),
    [aux_sym__immediate_opcode_token1] = ACTIONS(175),
    [aux_sym__immediate_opcode_token2] = ACTIONS(175),
    [aux_sym__immediate_opcode_token3] = ACTIONS(175),
    [aux_sym__immediate_opcode_token4] = ACTIONS(175),
    [aux_sym__immediate_opcode_token5] = ACTIONS(175),
    [aux_sym__immediate_opcode_token6] = ACTIONS(175),
    [aux_sym__immediate_opcode_token7] = ACTIONS(175),
    [aux_sym__immediate_opcode_token8] = ACTIONS(175),
    [aux_sym__immediate_opcode_token9] = ACTIONS(175),
    [aux_sym__immediate_opcode_token10] = ACTIONS(175),
    [aux_sym__immediate_opcode_token11] = ACTIONS(175),
    [aux_sym__immediate_opcode_token12] = ACTIONS(175),
    [aux_sym__absolute_opcode_token1] = ACTIONS(175),
    [aux_sym__absolute_opcode_token2] = ACTIONS(175),
    [aux_sym__absolute_opcode_token3] = ACTIONS(175),
    [aux_sym__absolute_opcode_token4] = ACTIONS(175),
    [aux_sym__absolute_opcode_token5] = ACTIONS(175),
    [aux_sym__absolute_opcode_token6] = ACTIONS(175),
    [aux_sym__absolute_opcode_token7] = ACTIONS(175),
    [aux_sym__absolute_opcode_token8] = ACTIONS(175),
    [sym_local_label] = ACTIONS(175),
    [sym_global_label] = ACTIONS(175),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(163),
    [anon_sym_DOTexport] = ACTIONS(163),
    [anon_sym_DOTsegment] = ACTIONS(163),
    [anon_sym_DOTsection] = ACTIONS(163),
    [anon_sym_word] = ACTIONS(163),
    [anon_sym_DOTbyte] = ACTIONS(163),
    [anon_sym_DOTaddr] = ACTIONS(163),
    [anon_sym_DOTproc] = ACTIONS(163),
    [anon_sym_DOTendproc] = ACTIONS(163),
    [aux_sym__implied_opcode_token1] = ACTIONS(163),
    [aux_sym__implied_opcode_token2] = ACTIONS(163),
    [aux_sym__implied_opcode_token3] = ACTIONS(163),
    [aux_sym__implied_opcode_token4] = ACTIONS(163),
    [aux_sym__implied_opcode_token5] = ACTIONS(163),
    [aux_sym__implied_opcode_token6] = ACTIONS(163),
    [aux_sym__implied_opcode_token7] = ACTIONS(163),
    [aux_sym__implied_opcode_token8] = ACTIONS(163),
    [aux_sym__implied_opcode_token9] = ACTIONS(163),
    [aux_sym__implied_opcode_token10] = ACTIONS(163),
    [aux_sym__implied_opcode_token11] = ACTIONS(163),
    [aux_sym__implied_opcode_token12] = ACTIONS(163),
    [aux_sym__implied_opcode_token13] = ACTIONS(163),
    [aux_sym__implied_opcode_token14] = ACTIONS(163),
    [aux_sym__implied_opcode_token15] = ACTIONS(163),
    [aux_sym__implied_opcode_token16] = ACTIONS(163),
    [aux_sym__implied_opcode_token17] = ACTIONS(163),
    [aux_sym__implied_opcode_token18] = ACTIONS(163),
    [aux_sym__implied_opcode_token19] = ACTIONS(163),
    [aux_sym__implied_opcode_token20] = ACTIONS(163),
    [aux_sym__implied_opcode_token21] = ACTIONS(163),
    [aux_sym__implied_opcode_token22] = ACTIONS(163),
    [aux_sym__implied_opcode_token23] = ACTIONS(163),
    [aux_sym__implied_opcode_token24] = ACTIONS(163),
    [aux_sym__implied_opcode_token25] = ACTIONS(163),
    [aux_sym__implied_opcode_token26] = ACTIONS(163),
    [aux_sym__implied_opcode_token27] = ACTIONS(163),
    [aux_sym__implied_opcode_token28] = ACTIONS(163),
    [aux_sym__implied_opcode_token29] = ACTIONS(163),
    [aux_sym__implied_opcode_token30] = ACTIONS(163),
    [aux_sym__implied_opcode_token31] = ACTIONS(163),
    [aux_sym__implied_opcode_token32] = ACTIONS(163),
    [aux_sym__implied_opcode_token33] = ACTIONS(163),
    [aux_sym__implied_opcode_token34] = ACTIONS(163),
    [aux_sym__implied_opcode_token35] = ACTIONS(163),
    [aux_sym__implied_opcode_token36] = ACTIONS(163),
    [aux_sym__implied_opcode_token37] = ACTIONS(163),
    [aux_sym__relative_opcode_token1] = ACTIONS(163),
    [aux_sym__relative_opcode_token2] = ACTIONS(163),
    [aux_sym__relative_opcode_token3] = ACTIONS(163),
    [aux_sym__relative_opcode_token4] = ACTIONS(163),
    [aux_sym__relative_opcode_token5] = ACTIONS(163),
    [aux_sym__relative_opcode_token6] = ACTIONS(163),
    [aux_sym__relative_opcode_token7] = ACTIONS(163),
    [aux_sym__relative_opcode_token8] = ACTIONS(163),
    [aux_sym__relative_opcode_token9] = ACTIONS(163),
    [aux_sym__immediate_opcode_token1] = ACTIONS(163),
    [aux_sym__immediate_opcode_token2] = ACTIONS(163),
    [aux_sym__immediate_opcode_token3] = ACTIONS(163),
    [aux_sym__immediate_opcode_token4] = ACTIONS(163),
    [aux_sym__immediate_opcode_token5] = ACTIONS(163),
    [aux_sym__immediate_opcode_token6] = ACTIONS(163),
    [aux_sym__immediate_opcode_token7] = ACTIONS(163),
    [aux_sym__immediate_opcode_token8] = ACTIONS(163),
    [aux_sym__immediate_opcode_token9] = ACTIONS(163),
    [aux_sym__immediate_opcode_token10] = ACTIONS(163),
    [aux_sym__immediate_opcode_token11] = ACTIONS(163),
    [aux_sym__immediate_opcode_token12] = ACTIONS(163),
    [aux_sym__absolute_opcode_token1] = ACTIONS(163),
    [aux_sym__absolute_opcode_token2] = ACTIONS(163),
    [aux_sym__absolute_opcode_token3] = ACTIONS(163),
    [aux_sym__absolute_opcode_token4] = ACTIONS(163),
    [aux_sym__absolute_opcode_token5] = ACTIONS(163),
    [aux_sym__absolute_opcode_token6] = ACTIONS(163),
    [aux_sym__absolute_opcode_token7] = ACTIONS(163),
    [aux_sym__absolute_opcode_token8] = ACTIONS(163),
    [sym_local_label] = ACTIONS(163),
    [sym_global_label] = ACTIONS(163),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(179),
    [anon_sym_DOTexport] = ACTIONS(179),
    [anon_sym_DOTsegment] = ACTIONS(179),
    [anon_sym_DOTsection] = ACTIONS(179),
    [anon_sym_word] = ACTIONS(179),
    [anon_sym_DOTbyte] = ACTIONS(179),
    [anon_sym_DOTaddr] = ACTIONS(179),
    [anon_sym_DOTproc] = ACTIONS(179),
    [anon_sym_DOTendproc] = ACTIONS(179),
    [aux_sym__implied_opcode_token1] = ACTIONS(179),
    [aux_sym__implied_opcode_token2] = ACTIONS(179),
    [aux_sym__implied_opcode_token3] = ACTIONS(179),
    [aux_sym__implied_opcode_token4] = ACTIONS(179),
    [aux_sym__implied_opcode_token5] = ACTIONS(179),
    [aux_sym__implied_opcode_token6] = ACTIONS(179),
    [aux_sym__implied_opcode_token7] = ACTIONS(179),
    [aux_sym__implied_opcode_token8] = ACTIONS(179),
    [aux_sym__implied_opcode_token9] = ACTIONS(179),
    [aux_sym__implied_opcode_token10] = ACTIONS(179),
    [aux_sym__implied_opcode_token11] = ACTIONS(179),
    [aux_sym__implied_opcode_token12] = ACTIONS(179),
    [aux_sym__implied_opcode_token13] = ACTIONS(179),
    [aux_sym__implied_opcode_token14] = ACTIONS(179),
    [aux_sym__implied_opcode_token15] = ACTIONS(179),
    [aux_sym__implied_opcode_token16] = ACTIONS(179),
    [aux_sym__implied_opcode_token17] = ACTIONS(179),
    [aux_sym__implied_opcode_token18] = ACTIONS(179),
    [aux_sym__implied_opcode_token19] = ACTIONS(179),
    [aux_sym__implied_opcode_token20] = ACTIONS(179),
    [aux_sym__implied_opcode_token21] = ACTIONS(179),
    [aux_sym__implied_opcode_token22] = ACTIONS(179),
    [aux_sym__implied_opcode_token23] = ACTIONS(179),
    [aux_sym__implied_opcode_token24] = ACTIONS(179),
    [aux_sym__implied_opcode_token25] = ACTIONS(179),
    [aux_sym__implied_opcode_token26] = ACTIONS(179),
    [aux_sym__implied_opcode_token27] = ACTIONS(179),
    [aux_sym__implied_opcode_token28] = ACTIONS(179),
    [aux_sym__implied_opcode_token29] = ACTIONS(179),
    [aux_sym__implied_opcode_token30] = ACTIONS(179),
    [aux_sym__implied_opcode_token31] = ACTIONS(179),
    [aux_sym__implied_opcode_token32] = ACTIONS(179),
    [aux_sym__implied_opcode_token33] = ACTIONS(179),
    [aux_sym__implied_opcode_token34] = ACTIONS(179),
    [aux_sym__implied_opcode_token35] = ACTIONS(179),
    [aux_sym__implied_opcode_token36] = ACTIONS(179),
    [aux_sym__implied_opcode_token37] = ACTIONS(179),
    [aux_sym__relative_opcode_token1] = ACTIONS(179),
    [aux_sym__relative_opcode_token2] = ACTIONS(179),
    [aux_sym__relative_opcode_token3] = ACTIONS(179),
    [aux_sym__relative_opcode_token4] = ACTIONS(179),
    [aux_sym__relative_opcode_token5] = ACTIONS(179),
    [aux_sym__relative_opcode_token6] = ACTIONS(179),
    [aux_sym__relative_opcode_token7] = ACTIONS(179),
    [aux_sym__relative_opcode_token8] = ACTIONS(179),
    [aux_sym__relative_opcode_token9] = ACTIONS(179),
    [aux_sym__immediate_opcode_token1] = ACTIONS(179),
    [aux_sym__immediate_opcode_token2] = ACTIONS(179),
    [aux_sym__immediate_opcode_token3] = ACTIONS(179),
    [aux_sym__immediate_opcode_token4] = ACTIONS(179),
    [aux_sym__immediate_opcode_token5] = ACTIONS(179),
    [aux_sym__immediate_opcode_token6] = ACTIONS(179),
    [aux_sym__immediate_opcode_token7] = ACTIONS(179),
    [aux_sym__immediate_opcode_token8] = ACTIONS(179),
    [aux_sym__immediate_opcode_token9] = ACTIONS(179),
    [aux_sym__immediate_opcode_token10] = ACTIONS(179),
    [aux_sym__immediate_opcode_token11] = ACTIONS(179),
    [aux_sym__immediate_opcode_token12] = ACTIONS(179),
    [aux_sym__absolute_opcode_token1] = ACTIONS(179),
    [aux_sym__absolute_opcode_token2] = ACTIONS(179),
    [aux_sym__absolute_opcode_token3] = ACTIONS(179),
    [aux_sym__absolute_opcode_token4] = ACTIONS(179),
    [aux_sym__absolute_opcode_token5] = ACTIONS(179),
    [aux_sym__absolute_opcode_token6] = ACTIONS(179),
    [aux_sym__absolute_opcode_token7] = ACTIONS(179),
    [aux_sym__absolute_opcode_token8] = ACTIONS(179),
    [sym_local_label] = ACTIONS(179),
    [sym_global_label] = ACTIONS(179),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(183),
    [anon_sym_DOTexport] = ACTIONS(183),
    [anon_sym_DOTsegment] = ACTIONS(183),
    [anon_sym_DOTsection] = ACTIONS(183),
    [anon_sym_word] = ACTIONS(183),
    [anon_sym_DOTbyte] = ACTIONS(183),
    [anon_sym_DOTaddr] = ACTIONS(183),
    [anon_sym_DOTproc] = ACTIONS(183),
    [anon_sym_DOTendproc] = ACTIONS(183),
    [aux_sym__implied_opcode_token1] = ACTIONS(183),
    [aux_sym__implied_opcode_token2] = ACTIONS(183),
    [aux_sym__implied_opcode_token3] = ACTIONS(183),
    [aux_sym__implied_opcode_token4] = ACTIONS(183),
    [aux_sym__implied_opcode_token5] = ACTIONS(183),
    [aux_sym__implied_opcode_token6] = ACTIONS(183),
    [aux_sym__implied_opcode_token7] = ACTIONS(183),
    [aux_sym__implied_opcode_token8] = ACTIONS(183),
    [aux_sym__implied_opcode_token9] = ACTIONS(183),
    [aux_sym__implied_opcode_token10] = ACTIONS(183),
    [aux_sym__implied_opcode_token11] = ACTIONS(183),
    [aux_sym__implied_opcode_token12] = ACTIONS(183),
    [aux_sym__implied_opcode_token13] = ACTIONS(183),
    [aux_sym__implied_opcode_token14] = ACTIONS(183),
    [aux_sym__implied_opcode_token15] = ACTIONS(183),
    [aux_sym__implied_opcode_token16] = ACTIONS(183),
    [aux_sym__implied_opcode_token17] = ACTIONS(183),
    [aux_sym__implied_opcode_token18] = ACTIONS(183),
    [aux_sym__implied_opcode_token19] = ACTIONS(183),
    [aux_sym__implied_opcode_token20] = ACTIONS(183),
    [aux_sym__implied_opcode_token21] = ACTIONS(183),
    [aux_sym__implied_opcode_token22] = ACTIONS(183),
    [aux_sym__implied_opcode_token23] = ACTIONS(183),
    [aux_sym__implied_opcode_token24] = ACTIONS(183),
    [aux_sym__implied_opcode_token25] = ACTIONS(183),
    [aux_sym__implied_opcode_token26] = ACTIONS(183),
    [aux_sym__implied_opcode_token27] = ACTIONS(183),
    [aux_sym__implied_opcode_token28] = ACTIONS(183),
    [aux_sym__implied_opcode_token29] = ACTIONS(183),
    [aux_sym__implied_opcode_token30] = ACTIONS(183),
    [aux_sym__implied_opcode_token31] = ACTIONS(183),
    [aux_sym__implied_opcode_token32] = ACTIONS(183),
    [aux_sym__implied_opcode_token33] = ACTIONS(183),
    [aux_sym__implied_opcode_token34] = ACTIONS(183),
    [aux_sym__implied_opcode_token35] = ACTIONS(183),
    [aux_sym__implied_opcode_token36] = ACTIONS(183),
    [aux_sym__implied_opcode_token37] = ACTIONS(183),
    [aux_sym__relative_opcode_token1] = ACTIONS(183),
    [aux_sym__relative_opcode_token2] = ACTIONS(183),
    [aux_sym__relative_opcode_token3] = ACTIONS(183),
    [aux_sym__relative_opcode_token4] = ACTIONS(183),
    [aux_sym__relative_opcode_token5] = ACTIONS(183),
    [aux_sym__relative_opcode_token6] = ACTIONS(183),
    [aux_sym__relative_opcode_token7] = ACTIONS(183),
    [aux_sym__relative_opcode_token8] = ACTIONS(183),
    [aux_sym__relative_opcode_token9] = ACTIONS(183),
    [aux_sym__immediate_opcode_token1] = ACTIONS(183),
    [aux_sym__immediate_opcode_token2] = ACTIONS(183),
    [aux_sym__immediate_opcode_token3] = ACTIONS(183),
    [aux_sym__immediate_opcode_token4] = ACTIONS(183),
    [aux_sym__immediate_opcode_token5] = ACTIONS(183),
    [aux_sym__immediate_opcode_token6] = ACTIONS(183),
    [aux_sym__immediate_opcode_token7] = ACTIONS(183),
    [aux_sym__immediate_opcode_token8] = ACTIONS(183),
    [aux_sym__immediate_opcode_token9] = ACTIONS(183),
    [aux_sym__immediate_opcode_token10] = ACTIONS(183),
    [aux_sym__immediate_opcode_token11] = ACTIONS(183),
    [aux_sym__immediate_opcode_token12] = ACTIONS(183),
    [aux_sym__absolute_opcode_token1] = ACTIONS(183),
    [aux_sym__absolute_opcode_token2] = ACTIONS(183),
    [aux_sym__absolute_opcode_token3] = ACTIONS(183),
    [aux_sym__absolute_opcode_token4] = ACTIONS(183),
    [aux_sym__absolute_opcode_token5] = ACTIONS(183),
    [aux_sym__absolute_opcode_token6] = ACTIONS(183),
    [aux_sym__absolute_opcode_token7] = ACTIONS(183),
    [aux_sym__absolute_opcode_token8] = ACTIONS(183),
    [sym_local_label] = ACTIONS(183),
    [sym_global_label] = ACTIONS(183),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(187),
    [anon_sym_DOTexport] = ACTIONS(187),
    [anon_sym_DOTsegment] = ACTIONS(187),
    [anon_sym_DOTsection] = ACTIONS(187),
    [anon_sym_word] = ACTIONS(187),
    [anon_sym_DOTbyte] = ACTIONS(187),
    [anon_sym_DOTaddr] = ACTIONS(187),
    [anon_sym_DOTproc] = ACTIONS(187),
    [anon_sym_DOTendproc] = ACTIONS(187),
    [aux_sym__implied_opcode_token1] = ACTIONS(187),
    [aux_sym__implied_opcode_token2] = ACTIONS(187),
    [aux_sym__implied_opcode_token3] = ACTIONS(187),
    [aux_sym__implied_opcode_token4] = ACTIONS(187),
    [aux_sym__implied_opcode_token5] = ACTIONS(187),
    [aux_sym__implied_opcode_token6] = ACTIONS(187),
    [aux_sym__implied_opcode_token7] = ACTIONS(187),
    [aux_sym__implied_opcode_token8] = ACTIONS(187),
    [aux_sym__implied_opcode_token9] = ACTIONS(187),
    [aux_sym__implied_opcode_token10] = ACTIONS(187),
    [aux_sym__implied_opcode_token11] = ACTIONS(187),
    [aux_sym__implied_opcode_token12] = ACTIONS(187),
    [aux_sym__implied_opcode_token13] = ACTIONS(187),
    [aux_sym__implied_opcode_token14] = ACTIONS(187),
    [aux_sym__implied_opcode_token15] = ACTIONS(187),
    [aux_sym__implied_opcode_token16] = ACTIONS(187),
    [aux_sym__implied_opcode_token17] = ACTIONS(187),
    [aux_sym__implied_opcode_token18] = ACTIONS(187),
    [aux_sym__implied_opcode_token19] = ACTIONS(187),
    [aux_sym__implied_opcode_token20] = ACTIONS(187),
    [aux_sym__implied_opcode_token21] = ACTIONS(187),
    [aux_sym__implied_opcode_token22] = ACTIONS(187),
    [aux_sym__implied_opcode_token23] = ACTIONS(187),
    [aux_sym__implied_opcode_token24] = ACTIONS(187),
    [aux_sym__implied_opcode_token25] = ACTIONS(187),
    [aux_sym__implied_opcode_token26] = ACTIONS(187),
    [aux_sym__implied_opcode_token27] = ACTIONS(187),
    [aux_sym__implied_opcode_token28] = ACTIONS(187),
    [aux_sym__implied_opcode_token29] = ACTIONS(187),
    [aux_sym__implied_opcode_token30] = ACTIONS(187),
    [aux_sym__implied_opcode_token31] = ACTIONS(187),
    [aux_sym__implied_opcode_token32] = ACTIONS(187),
    [aux_sym__implied_opcode_token33] = ACTIONS(187),
    [aux_sym__implied_opcode_token34] = ACTIONS(187),
    [aux_sym__implied_opcode_token35] = ACTIONS(187),
    [aux_sym__implied_opcode_token36] = ACTIONS(187),
    [aux_sym__implied_opcode_token37] = ACTIONS(187),
    [aux_sym__relative_opcode_token1] = ACTIONS(187),
    [aux_sym__relative_opcode_token2] = ACTIONS(187),
    [aux_sym__relative_opcode_token3] = ACTIONS(187),
    [aux_sym__relative_opcode_token4] = ACTIONS(187),
    [aux_sym__relative_opcode_token5] = ACTIONS(187),
    [aux_sym__relative_opcode_token6] = ACTIONS(187),
    [aux_sym__relative_opcode_token7] = ACTIONS(187),
    [aux_sym__relative_opcode_token8] = ACTIONS(187),
    [aux_sym__relative_opcode_token9] = ACTIONS(187),
    [aux_sym__immediate_opcode_token1] = ACTIONS(187),
    [aux_sym__immediate_opcode_token2] = ACTIONS(187),
    [aux_sym__immediate_opcode_token3] = ACTIONS(187),
    [aux_sym__immediate_opcode_token4] = ACTIONS(187),
    [aux_sym__immediate_opcode_token5] = ACTIONS(187),
    [aux_sym__immediate_opcode_token6] = ACTIONS(187),
    [aux_sym__immediate_opcode_token7] = ACTIONS(187),
    [aux_sym__immediate_opcode_token8] = ACTIONS(187),
    [aux_sym__immediate_opcode_token9] = ACTIONS(187),
    [aux_sym__immediate_opcode_token10] = ACTIONS(187),
    [aux_sym__immediate_opcode_token11] = ACTIONS(187),
    [aux_sym__immediate_opcode_token12] = ACTIONS(187),
    [aux_sym__absolute_opcode_token1] = ACTIONS(187),
    [aux_sym__absolute_opcode_token2] = ACTIONS(187),
    [aux_sym__absolute_opcode_token3] = ACTIONS(187),
    [aux_sym__absolute_opcode_token4] = ACTIONS(187),
    [aux_sym__absolute_opcode_token5] = ACTIONS(187),
    [aux_sym__absolute_opcode_token6] = ACTIONS(187),
    [aux_sym__absolute_opcode_token7] = ACTIONS(187),
    [aux_sym__absolute_opcode_token8] = ACTIONS(187),
    [sym_local_label] = ACTIONS(187),
    [sym_global_label] = ACTIONS(187),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(191),
    [anon_sym_DOTexport] = ACTIONS(191),
    [anon_sym_DOTsegment] = ACTIONS(191),
    [anon_sym_DOTsection] = ACTIONS(191),
    [anon_sym_word] = ACTIONS(191),
    [anon_sym_DOTbyte] = ACTIONS(191),
    [anon_sym_DOTaddr] = ACTIONS(191),
    [anon_sym_DOTproc] = ACTIONS(191),
    [anon_sym_DOTendproc] = ACTIONS(191),
    [aux_sym__implied_opcode_token1] = ACTIONS(191),
    [aux_sym__implied_opcode_token2] = ACTIONS(191),
    [aux_sym__implied_opcode_token3] = ACTIONS(191),
    [aux_sym__implied_opcode_token4] = ACTIONS(191),
    [aux_sym__implied_opcode_token5] = ACTIONS(191),
    [aux_sym__implied_opcode_token6] = ACTIONS(191),
    [aux_sym__implied_opcode_token7] = ACTIONS(191),
    [aux_sym__implied_opcode_token8] = ACTIONS(191),
    [aux_sym__implied_opcode_token9] = ACTIONS(191),
    [aux_sym__implied_opcode_token10] = ACTIONS(191),
    [aux_sym__implied_opcode_token11] = ACTIONS(191),
    [aux_sym__implied_opcode_token12] = ACTIONS(191),
    [aux_sym__implied_opcode_token13] = ACTIONS(191),
    [aux_sym__implied_opcode_token14] = ACTIONS(191),
    [aux_sym__implied_opcode_token15] = ACTIONS(191),
    [aux_sym__implied_opcode_token16] = ACTIONS(191),
    [aux_sym__implied_opcode_token17] = ACTIONS(191),
    [aux_sym__implied_opcode_token18] = ACTIONS(191),
    [aux_sym__implied_opcode_token19] = ACTIONS(191),
    [aux_sym__implied_opcode_token20] = ACTIONS(191),
    [aux_sym__implied_opcode_token21] = ACTIONS(191),
    [aux_sym__implied_opcode_token22] = ACTIONS(191),
    [aux_sym__implied_opcode_token23] = ACTIONS(191),
    [aux_sym__implied_opcode_token24] = ACTIONS(191),
    [aux_sym__implied_opcode_token25] = ACTIONS(191),
    [aux_sym__implied_opcode_token26] = ACTIONS(191),
    [aux_sym__implied_opcode_token27] = ACTIONS(191),
    [aux_sym__implied_opcode_token28] = ACTIONS(191),
    [aux_sym__implied_opcode_token29] = ACTIONS(191),
    [aux_sym__implied_opcode_token30] = ACTIONS(191),
    [aux_sym__implied_opcode_token31] = ACTIONS(191),
    [aux_sym__implied_opcode_token32] = ACTIONS(191),
    [aux_sym__implied_opcode_token33] = ACTIONS(191),
    [aux_sym__implied_opcode_token34] = ACTIONS(191),
    [aux_sym__implied_opcode_token35] = ACTIONS(191),
    [aux_sym__implied_opcode_token36] = ACTIONS(191),
    [aux_sym__implied_opcode_token37] = ACTIONS(191),
    [aux_sym__relative_opcode_token1] = ACTIONS(191),
    [aux_sym__relative_opcode_token2] = ACTIONS(191),
    [aux_sym__relative_opcode_token3] = ACTIONS(191),
    [aux_sym__relative_opcode_token4] = ACTIONS(191),
    [aux_sym__relative_opcode_token5] = ACTIONS(191),
    [aux_sym__relative_opcode_token6] = ACTIONS(191),
    [aux_sym__relative_opcode_token7] = ACTIONS(191),
    [aux_sym__relative_opcode_token8] = ACTIONS(191),
    [aux_sym__relative_opcode_token9] = ACTIONS(191),
    [aux_sym__immediate_opcode_token1] = ACTIONS(191),
    [aux_sym__immediate_opcode_token2] = ACTIONS(191),
    [aux_sym__immediate_opcode_token3] = ACTIONS(191),
    [aux_sym__immediate_opcode_token4] = ACTIONS(191),
    [aux_sym__immediate_opcode_token5] = ACTIONS(191),
    [aux_sym__immediate_opcode_token6] = ACTIONS(191),
    [aux_sym__immediate_opcode_token7] = ACTIONS(191),
    [aux_sym__immediate_opcode_token8] = ACTIONS(191),
    [aux_sym__immediate_opcode_token9] = ACTIONS(191),
    [aux_sym__immediate_opcode_token10] = ACTIONS(191),
    [aux_sym__immediate_opcode_token11] = ACTIONS(191),
    [aux_sym__immediate_opcode_token12] = ACTIONS(191),
    [aux_sym__absolute_opcode_token1] = ACTIONS(191),
    [aux_sym__absolute_opcode_token2] = ACTIONS(191),
    [aux_sym__absolute_opcode_token3] = ACTIONS(191),
    [aux_sym__absolute_opcode_token4] = ACTIONS(191),
    [aux_sym__absolute_opcode_token5] = ACTIONS(191),
    [aux_sym__absolute_opcode_token6] = ACTIONS(191),
    [aux_sym__absolute_opcode_token7] = ACTIONS(191),
    [aux_sym__absolute_opcode_token8] = ACTIONS(191),
    [sym_local_label] = ACTIONS(191),
    [sym_global_label] = ACTIONS(191),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(195),
    [anon_sym_DOTexport] = ACTIONS(195),
    [anon_sym_DOTsegment] = ACTIONS(195),
    [anon_sym_DOTsection] = ACTIONS(195),
    [anon_sym_word] = ACTIONS(195),
    [anon_sym_DOTbyte] = ACTIONS(195),
    [anon_sym_DOTaddr] = ACTIONS(195),
    [anon_sym_DOTproc] = ACTIONS(195),
    [anon_sym_DOTendproc] = ACTIONS(195),
    [aux_sym__implied_opcode_token1] = ACTIONS(195),
    [aux_sym__implied_opcode_token2] = ACTIONS(195),
    [aux_sym__implied_opcode_token3] = ACTIONS(195),
    [aux_sym__implied_opcode_token4] = ACTIONS(195),
    [aux_sym__implied_opcode_token5] = ACTIONS(195),
    [aux_sym__implied_opcode_token6] = ACTIONS(195),
    [aux_sym__implied_opcode_token7] = ACTIONS(195),
    [aux_sym__implied_opcode_token8] = ACTIONS(195),
    [aux_sym__implied_opcode_token9] = ACTIONS(195),
    [aux_sym__implied_opcode_token10] = ACTIONS(195),
    [aux_sym__implied_opcode_token11] = ACTIONS(195),
    [aux_sym__implied_opcode_token12] = ACTIONS(195),
    [aux_sym__implied_opcode_token13] = ACTIONS(195),
    [aux_sym__implied_opcode_token14] = ACTIONS(195),
    [aux_sym__implied_opcode_token15] = ACTIONS(195),
    [aux_sym__implied_opcode_token16] = ACTIONS(195),
    [aux_sym__implied_opcode_token17] = ACTIONS(195),
    [aux_sym__implied_opcode_token18] = ACTIONS(195),
    [aux_sym__implied_opcode_token19] = ACTIONS(195),
    [aux_sym__implied_opcode_token20] = ACTIONS(195),
    [aux_sym__implied_opcode_token21] = ACTIONS(195),
    [aux_sym__implied_opcode_token22] = ACTIONS(195),
    [aux_sym__implied_opcode_token23] = ACTIONS(195),
    [aux_sym__implied_opcode_token24] = ACTIONS(195),
    [aux_sym__implied_opcode_token25] = ACTIONS(195),
    [aux_sym__implied_opcode_token26] = ACTIONS(195),
    [aux_sym__implied_opcode_token27] = ACTIONS(195),
    [aux_sym__implied_opcode_token28] = ACTIONS(195),
    [aux_sym__implied_opcode_token29] = ACTIONS(195),
    [aux_sym__implied_opcode_token30] = ACTIONS(195),
    [aux_sym__implied_opcode_token31] = ACTIONS(195),
    [aux_sym__implied_opcode_token32] = ACTIONS(195),
    [aux_sym__implied_opcode_token33] = ACTIONS(195),
    [aux_sym__implied_opcode_token34] = ACTIONS(195),
    [aux_sym__implied_opcode_token35] = ACTIONS(195),
    [aux_sym__implied_opcode_token36] = ACTIONS(195),
    [aux_sym__implied_opcode_token37] = ACTIONS(195),
    [aux_sym__relative_opcode_token1] = ACTIONS(195),
    [aux_sym__relative_opcode_token2] = ACTIONS(195),
    [aux_sym__relative_opcode_token3] = ACTIONS(195),
    [aux_sym__relative_opcode_token4] = ACTIONS(195),
    [aux_sym__relative_opcode_token5] = ACTIONS(195),
    [aux_sym__relative_opcode_token6] = ACTIONS(195),
    [aux_sym__relative_opcode_token7] = ACTIONS(195),
    [aux_sym__relative_opcode_token8] = ACTIONS(195),
    [aux_sym__relative_opcode_token9] = ACTIONS(195),
    [aux_sym__immediate_opcode_token1] = ACTIONS(195),
    [aux_sym__immediate_opcode_token2] = ACTIONS(195),
    [aux_sym__immediate_opcode_token3] = ACTIONS(195),
    [aux_sym__immediate_opcode_token4] = ACTIONS(195),
    [aux_sym__immediate_opcode_token5] = ACTIONS(195),
    [aux_sym__immediate_opcode_token6] = ACTIONS(195),
    [aux_sym__immediate_opcode_token7] = ACTIONS(195),
    [aux_sym__immediate_opcode_token8] = ACTIONS(195),
    [aux_sym__immediate_opcode_token9] = ACTIONS(195),
    [aux_sym__immediate_opcode_token10] = ACTIONS(195),
    [aux_sym__immediate_opcode_token11] = ACTIONS(195),
    [aux_sym__immediate_opcode_token12] = ACTIONS(195),
    [aux_sym__absolute_opcode_token1] = ACTIONS(195),
    [aux_sym__absolute_opcode_token2] = ACTIONS(195),
    [aux_sym__absolute_opcode_token3] = ACTIONS(195),
    [aux_sym__absolute_opcode_token4] = ACTIONS(195),
    [aux_sym__absolute_opcode_token5] = ACTIONS(195),
    [aux_sym__absolute_opcode_token6] = ACTIONS(195),
    [aux_sym__absolute_opcode_token7] = ACTIONS(195),
    [aux_sym__absolute_opcode_token8] = ACTIONS(195),
    [sym_local_label] = ACTIONS(195),
    [sym_global_label] = ACTIONS(195),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(199),
    [anon_sym_DOTexport] = ACTIONS(199),
    [anon_sym_DOTsegment] = ACTIONS(199),
    [anon_sym_DOTsection] = ACTIONS(199),
    [anon_sym_word] = ACTIONS(199),
    [anon_sym_DOTbyte] = ACTIONS(199),
    [anon_sym_DOTaddr] = ACTIONS(199),
    [anon_sym_DOTproc] = ACTIONS(199),
    [anon_sym_DOTendproc] = ACTIONS(199),
    [aux_sym__implied_opcode_token1] = ACTIONS(199),
    [aux_sym__implied_opcode_token2] = ACTIONS(199),
    [aux_sym__implied_opcode_token3] = ACTIONS(199),
    [aux_sym__implied_opcode_token4] = ACTIONS(199),
    [aux_sym__implied_opcode_token5] = ACTIONS(199),
    [aux_sym__implied_opcode_token6] = ACTIONS(199),
    [aux_sym__implied_opcode_token7] = ACTIONS(199),
    [aux_sym__implied_opcode_token8] = ACTIONS(199),
    [aux_sym__implied_opcode_token9] = ACTIONS(199),
    [aux_sym__implied_opcode_token10] = ACTIONS(199),
    [aux_sym__implied_opcode_token11] = ACTIONS(199),
    [aux_sym__implied_opcode_token12] = ACTIONS(199),
    [aux_sym__implied_opcode_token13] = ACTIONS(199),
    [aux_sym__implied_opcode_token14] = ACTIONS(199),
    [aux_sym__implied_opcode_token15] = ACTIONS(199),
    [aux_sym__implied_opcode_token16] = ACTIONS(199),
    [aux_sym__implied_opcode_token17] = ACTIONS(199),
    [aux_sym__implied_opcode_token18] = ACTIONS(199),
    [aux_sym__implied_opcode_token19] = ACTIONS(199),
    [aux_sym__implied_opcode_token20] = ACTIONS(199),
    [aux_sym__implied_opcode_token21] = ACTIONS(199),
    [aux_sym__implied_opcode_token22] = ACTIONS(199),
    [aux_sym__implied_opcode_token23] = ACTIONS(199),
    [aux_sym__implied_opcode_token24] = ACTIONS(199),
    [aux_sym__implied_opcode_token25] = ACTIONS(199),
    [aux_sym__implied_opcode_token26] = ACTIONS(199),
    [aux_sym__implied_opcode_token27] = ACTIONS(199),
    [aux_sym__implied_opcode_token28] = ACTIONS(199),
    [aux_sym__implied_opcode_token29] = ACTIONS(199),
    [aux_sym__implied_opcode_token30] = ACTIONS(199),
    [aux_sym__implied_opcode_token31] = ACTIONS(199),
    [aux_sym__implied_opcode_token32] = ACTIONS(199),
    [aux_sym__implied_opcode_token33] = ACTIONS(199),
    [aux_sym__implied_opcode_token34] = ACTIONS(199),
    [aux_sym__implied_opcode_token35] = ACTIONS(199),
    [aux_sym__implied_opcode_token36] = ACTIONS(199),
    [aux_sym__implied_opcode_token37] = ACTIONS(199),
    [aux_sym__relative_opcode_token1] = ACTIONS(199),
    [aux_sym__relative_opcode_token2] = ACTIONS(199),
    [aux_sym__relative_opcode_token3] = ACTIONS(199),
    [aux_sym__relative_opcode_token4] = ACTIONS(199),
    [aux_sym__relative_opcode_token5] = ACTIONS(199),
    [aux_sym__relative_opcode_token6] = ACTIONS(199),
    [aux_sym__relative_opcode_token7] = ACTIONS(199),
    [aux_sym__relative_opcode_token8] = ACTIONS(199),
    [aux_sym__relative_opcode_token9] = ACTIONS(199),
    [aux_sym__immediate_opcode_token1] = ACTIONS(199),
    [aux_sym__immediate_opcode_token2] = ACTIONS(199),
    [aux_sym__immediate_opcode_token3] = ACTIONS(199),
    [aux_sym__immediate_opcode_token4] = ACTIONS(199),
    [aux_sym__immediate_opcode_token5] = ACTIONS(199),
    [aux_sym__immediate_opcode_token6] = ACTIONS(199),
    [aux_sym__immediate_opcode_token7] = ACTIONS(199),
    [aux_sym__immediate_opcode_token8] = ACTIONS(199),
    [aux_sym__immediate_opcode_token9] = ACTIONS(199),
    [aux_sym__immediate_opcode_token10] = ACTIONS(199),
    [aux_sym__immediate_opcode_token11] = ACTIONS(199),
    [aux_sym__immediate_opcode_token12] = ACTIONS(199),
    [aux_sym__absolute_opcode_token1] = ACTIONS(199),
    [aux_sym__absolute_opcode_token2] = ACTIONS(199),
    [aux_sym__absolute_opcode_token3] = ACTIONS(199),
    [aux_sym__absolute_opcode_token4] = ACTIONS(199),
    [aux_sym__absolute_opcode_token5] = ACTIONS(199),
    [aux_sym__absolute_opcode_token6] = ACTIONS(199),
    [aux_sym__absolute_opcode_token7] = ACTIONS(199),
    [aux_sym__absolute_opcode_token8] = ACTIONS(199),
    [sym_local_label] = ACTIONS(199),
    [sym_global_label] = ACTIONS(199),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(203),
    [anon_sym_DOTexport] = ACTIONS(203),
    [anon_sym_DOTsegment] = ACTIONS(203),
    [anon_sym_DOTsection] = ACTIONS(203),
    [anon_sym_word] = ACTIONS(203),
    [anon_sym_DOTbyte] = ACTIONS(203),
    [anon_sym_DOTaddr] = ACTIONS(203),
    [anon_sym_DOTproc] = ACTIONS(203),
    [anon_sym_DOTendproc] = ACTIONS(203),
    [aux_sym__implied_opcode_token1] = ACTIONS(203),
    [aux_sym__implied_opcode_token2] = ACTIONS(203),
    [aux_sym__implied_opcode_token3] = ACTIONS(203),
    [aux_sym__implied_opcode_token4] = ACTIONS(203),
    [aux_sym__implied_opcode_token5] = ACTIONS(203),
    [aux_sym__implied_opcode_token6] = ACTIONS(203),
    [aux_sym__implied_opcode_token7] = ACTIONS(203),
    [aux_sym__implied_opcode_token8] = ACTIONS(203),
    [aux_sym__implied_opcode_token9] = ACTIONS(203),
    [aux_sym__implied_opcode_token10] = ACTIONS(203),
    [aux_sym__implied_opcode_token11] = ACTIONS(203),
    [aux_sym__implied_opcode_token12] = ACTIONS(203),
    [aux_sym__implied_opcode_token13] = ACTIONS(203),
    [aux_sym__implied_opcode_token14] = ACTIONS(203),
    [aux_sym__implied_opcode_token15] = ACTIONS(203),
    [aux_sym__implied_opcode_token16] = ACTIONS(203),
    [aux_sym__implied_opcode_token17] = ACTIONS(203),
    [aux_sym__implied_opcode_token18] = ACTIONS(203),
    [aux_sym__implied_opcode_token19] = ACTIONS(203),
    [aux_sym__implied_opcode_token20] = ACTIONS(203),
    [aux_sym__implied_opcode_token21] = ACTIONS(203),
    [aux_sym__implied_opcode_token22] = ACTIONS(203),
    [aux_sym__implied_opcode_token23] = ACTIONS(203),
    [aux_sym__implied_opcode_token24] = ACTIONS(203),
    [aux_sym__implied_opcode_token25] = ACTIONS(203),
    [aux_sym__implied_opcode_token26] = ACTIONS(203),
    [aux_sym__implied_opcode_token27] = ACTIONS(203),
    [aux_sym__implied_opcode_token28] = ACTIONS(203),
    [aux_sym__implied_opcode_token29] = ACTIONS(203),
    [aux_sym__implied_opcode_token30] = ACTIONS(203),
    [aux_sym__implied_opcode_token31] = ACTIONS(203),
    [aux_sym__implied_opcode_token32] = ACTIONS(203),
    [aux_sym__implied_opcode_token33] = ACTIONS(203),
    [aux_sym__implied_opcode_token34] = ACTIONS(203),
    [aux_sym__implied_opcode_token35] = ACTIONS(203),
    [aux_sym__implied_opcode_token36] = ACTIONS(203),
    [aux_sym__implied_opcode_token37] = ACTIONS(203),
    [aux_sym__relative_opcode_token1] = ACTIONS(203),
    [aux_sym__relative_opcode_token2] = ACTIONS(203),
    [aux_sym__relative_opcode_token3] = ACTIONS(203),
    [aux_sym__relative_opcode_token4] = ACTIONS(203),
    [aux_sym__relative_opcode_token5] = ACTIONS(203),
    [aux_sym__relative_opcode_token6] = ACTIONS(203),
    [aux_sym__relative_opcode_token7] = ACTIONS(203),
    [aux_sym__relative_opcode_token8] = ACTIONS(203),
    [aux_sym__relative_opcode_token9] = ACTIONS(203),
    [aux_sym__immediate_opcode_token1] = ACTIONS(203),
    [aux_sym__immediate_opcode_token2] = ACTIONS(203),
    [aux_sym__immediate_opcode_token3] = ACTIONS(203),
    [aux_sym__immediate_opcode_token4] = ACTIONS(203),
    [aux_sym__immediate_opcode_token5] = ACTIONS(203),
    [aux_sym__immediate_opcode_token6] = ACTIONS(203),
    [aux_sym__immediate_opcode_token7] = ACTIONS(203),
    [aux_sym__immediate_opcode_token8] = ACTIONS(203),
    [aux_sym__immediate_opcode_token9] = ACTIONS(203),
    [aux_sym__immediate_opcode_token10] = ACTIONS(203),
    [aux_sym__immediate_opcode_token11] = ACTIONS(203),
    [aux_sym__immediate_opcode_token12] = ACTIONS(203),
    [aux_sym__absolute_opcode_token1] = ACTIONS(203),
    [aux_sym__absolute_opcode_token2] = ACTIONS(203),
    [aux_sym__absolute_opcode_token3] = ACTIONS(203),
    [aux_sym__absolute_opcode_token4] = ACTIONS(203),
    [aux_sym__absolute_opcode_token5] = ACTIONS(203),
    [aux_sym__absolute_opcode_token6] = ACTIONS(203),
    [aux_sym__absolute_opcode_token7] = ACTIONS(203),
    [aux_sym__absolute_opcode_token8] = ACTIONS(203),
    [sym_local_label] = ACTIONS(203),
    [sym_global_label] = ACTIONS(203),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(207),
    [anon_sym_DOTexport] = ACTIONS(207),
    [anon_sym_DOTsegment] = ACTIONS(207),
    [anon_sym_DOTsection] = ACTIONS(207),
    [anon_sym_word] = ACTIONS(207),
    [anon_sym_DOTbyte] = ACTIONS(207),
    [anon_sym_DOTaddr] = ACTIONS(207),
    [anon_sym_DOTproc] = ACTIONS(207),
    [anon_sym_DOTendproc] = ACTIONS(207),
    [aux_sym__implied_opcode_token1] = ACTIONS(207),
    [aux_sym__implied_opcode_token2] = ACTIONS(207),
    [aux_sym__implied_opcode_token3] = ACTIONS(207),
    [aux_sym__implied_opcode_token4] = ACTIONS(207),
    [aux_sym__implied_opcode_token5] = ACTIONS(207),
    [aux_sym__implied_opcode_token6] = ACTIONS(207),
    [aux_sym__implied_opcode_token7] = ACTIONS(207),
    [aux_sym__implied_opcode_token8] = ACTIONS(207),
    [aux_sym__implied_opcode_token9] = ACTIONS(207),
    [aux_sym__implied_opcode_token10] = ACTIONS(207),
    [aux_sym__implied_opcode_token11] = ACTIONS(207),
    [aux_sym__implied_opcode_token12] = ACTIONS(207),
    [aux_sym__implied_opcode_token13] = ACTIONS(207),
    [aux_sym__implied_opcode_token14] = ACTIONS(207),
    [aux_sym__implied_opcode_token15] = ACTIONS(207),
    [aux_sym__implied_opcode_token16] = ACTIONS(207),
    [aux_sym__implied_opcode_token17] = ACTIONS(207),
    [aux_sym__implied_opcode_token18] = ACTIONS(207),
    [aux_sym__implied_opcode_token19] = ACTIONS(207),
    [aux_sym__implied_opcode_token20] = ACTIONS(207),
    [aux_sym__implied_opcode_token21] = ACTIONS(207),
    [aux_sym__implied_opcode_token22] = ACTIONS(207),
    [aux_sym__implied_opcode_token23] = ACTIONS(207),
    [aux_sym__implied_opcode_token24] = ACTIONS(207),
    [aux_sym__implied_opcode_token25] = ACTIONS(207),
    [aux_sym__implied_opcode_token26] = ACTIONS(207),
    [aux_sym__implied_opcode_token27] = ACTIONS(207),
    [aux_sym__implied_opcode_token28] = ACTIONS(207),
    [aux_sym__implied_opcode_token29] = ACTIONS(207),
    [aux_sym__implied_opcode_token30] = ACTIONS(207),
    [aux_sym__implied_opcode_token31] = ACTIONS(207),
    [aux_sym__implied_opcode_token32] = ACTIONS(207),
    [aux_sym__implied_opcode_token33] = ACTIONS(207),
    [aux_sym__implied_opcode_token34] = ACTIONS(207),
    [aux_sym__implied_opcode_token35] = ACTIONS(207),
    [aux_sym__implied_opcode_token36] = ACTIONS(207),
    [aux_sym__implied_opcode_token37] = ACTIONS(207),
    [aux_sym__relative_opcode_token1] = ACTIONS(207),
    [aux_sym__relative_opcode_token2] = ACTIONS(207),
    [aux_sym__relative_opcode_token3] = ACTIONS(207),
    [aux_sym__relative_opcode_token4] = ACTIONS(207),
    [aux_sym__relative_opcode_token5] = ACTIONS(207),
    [aux_sym__relative_opcode_token6] = ACTIONS(207),
    [aux_sym__relative_opcode_token7] = ACTIONS(207),
    [aux_sym__relative_opcode_token8] = ACTIONS(207),
    [aux_sym__relative_opcode_token9] = ACTIONS(207),
    [aux_sym__immediate_opcode_token1] = ACTIONS(207),
    [aux_sym__immediate_opcode_token2] = ACTIONS(207),
    [aux_sym__immediate_opcode_token3] = ACTIONS(207),
    [aux_sym__immediate_opcode_token4] = ACTIONS(207),
    [aux_sym__immediate_opcode_token5] = ACTIONS(207),
    [aux_sym__immediate_opcode_token6] = ACTIONS(207),
    [aux_sym__immediate_opcode_token7] = ACTIONS(207),
    [aux_sym__immediate_opcode_token8] = ACTIONS(207),
    [aux_sym__immediate_opcode_token9] = ACTIONS(207),
    [aux_sym__immediate_opcode_token10] = ACTIONS(207),
    [aux_sym__immediate_opcode_token11] = ACTIONS(207),
    [aux_sym__immediate_opcode_token12] = ACTIONS(207),
    [aux_sym__absolute_opcode_token1] = ACTIONS(207),
    [aux_sym__absolute_opcode_token2] = ACTIONS(207),
    [aux_sym__absolute_opcode_token3] = ACTIONS(207),
    [aux_sym__absolute_opcode_token4] = ACTIONS(207),
    [aux_sym__absolute_opcode_token5] = ACTIONS(207),
    [aux_sym__absolute_opcode_token6] = ACTIONS(207),
    [aux_sym__absolute_opcode_token7] = ACTIONS(207),
    [aux_sym__absolute_opcode_token8] = ACTIONS(207),
    [sym_local_label] = ACTIONS(207),
    [sym_global_label] = ACTIONS(207),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(211),
    [anon_sym_DOTexport] = ACTIONS(211),
    [anon_sym_DOTsegment] = ACTIONS(211),
    [anon_sym_DOTsection] = ACTIONS(211),
    [anon_sym_word] = ACTIONS(211),
    [anon_sym_DOTbyte] = ACTIONS(211),
    [anon_sym_DOTaddr] = ACTIONS(211),
    [anon_sym_DOTproc] = ACTIONS(211),
    [anon_sym_DOTendproc] = ACTIONS(211),
    [aux_sym__implied_opcode_token1] = ACTIONS(211),
    [aux_sym__implied_opcode_token2] = ACTIONS(211),
    [aux_sym__implied_opcode_token3] = ACTIONS(211),
    [aux_sym__implied_opcode_token4] = ACTIONS(211),
    [aux_sym__implied_opcode_token5] = ACTIONS(211),
    [aux_sym__implied_opcode_token6] = ACTIONS(211),
    [aux_sym__implied_opcode_token7] = ACTIONS(211),
    [aux_sym__implied_opcode_token8] = ACTIONS(211),
    [aux_sym__implied_opcode_token9] = ACTIONS(211),
    [aux_sym__implied_opcode_token10] = ACTIONS(211),
    [aux_sym__implied_opcode_token11] = ACTIONS(211),
    [aux_sym__implied_opcode_token12] = ACTIONS(211),
    [aux_sym__implied_opcode_token13] = ACTIONS(211),
    [aux_sym__implied_opcode_token14] = ACTIONS(211),
    [aux_sym__implied_opcode_token15] = ACTIONS(211),
    [aux_sym__implied_opcode_token16] = ACTIONS(211),
    [aux_sym__implied_opcode_token17] = ACTIONS(211),
    [aux_sym__implied_opcode_token18] = ACTIONS(211),
    [aux_sym__implied_opcode_token19] = ACTIONS(211),
    [aux_sym__implied_opcode_token20] = ACTIONS(211),
    [aux_sym__implied_opcode_token21] = ACTIONS(211),
    [aux_sym__implied_opcode_token22] = ACTIONS(211),
    [aux_sym__implied_opcode_token23] = ACTIONS(211),
    [aux_sym__implied_opcode_token24] = ACTIONS(211),
    [aux_sym__implied_opcode_token25] = ACTIONS(211),
    [aux_sym__implied_opcode_token26] = ACTIONS(211),
    [aux_sym__implied_opcode_token27] = ACTIONS(211),
    [aux_sym__implied_opcode_token28] = ACTIONS(211),
    [aux_sym__implied_opcode_token29] = ACTIONS(211),
    [aux_sym__implied_opcode_token30] = ACTIONS(211),
    [aux_sym__implied_opcode_token31] = ACTIONS(211),
    [aux_sym__implied_opcode_token32] = ACTIONS(211),
    [aux_sym__implied_opcode_token33] = ACTIONS(211),
    [aux_sym__implied_opcode_token34] = ACTIONS(211),
    [aux_sym__implied_opcode_token35] = ACTIONS(211),
    [aux_sym__implied_opcode_token36] = ACTIONS(211),
    [aux_sym__implied_opcode_token37] = ACTIONS(211),
    [aux_sym__relative_opcode_token1] = ACTIONS(211),
    [aux_sym__relative_opcode_token2] = ACTIONS(211),
    [aux_sym__relative_opcode_token3] = ACTIONS(211),
    [aux_sym__relative_opcode_token4] = ACTIONS(211),
    [aux_sym__relative_opcode_token5] = ACTIONS(211),
    [aux_sym__relative_opcode_token6] = ACTIONS(211),
    [aux_sym__relative_opcode_token7] = ACTIONS(211),
    [aux_sym__relative_opcode_token8] = ACTIONS(211),
    [aux_sym__relative_opcode_token9] = ACTIONS(211),
    [aux_sym__immediate_opcode_token1] = ACTIONS(211),
    [aux_sym__immediate_opcode_token2] = ACTIONS(211),
    [aux_sym__immediate_opcode_token3] = ACTIONS(211),
    [aux_sym__immediate_opcode_token4] = ACTIONS(211),
    [aux_sym__immediate_opcode_token5] = ACTIONS(211),
    [aux_sym__immediate_opcode_token6] = ACTIONS(211),
    [aux_sym__immediate_opcode_token7] = ACTIONS(211),
    [aux_sym__immediate_opcode_token8] = ACTIONS(211),
    [aux_sym__immediate_opcode_token9] = ACTIONS(211),
    [aux_sym__immediate_opcode_token10] = ACTIONS(211),
    [aux_sym__immediate_opcode_token11] = ACTIONS(211),
    [aux_sym__immediate_opcode_token12] = ACTIONS(211),
    [aux_sym__absolute_opcode_token1] = ACTIONS(211),
    [aux_sym__absolute_opcode_token2] = ACTIONS(211),
    [aux_sym__absolute_opcode_token3] = ACTIONS(211),
    [aux_sym__absolute_opcode_token4] = ACTIONS(211),
    [aux_sym__absolute_opcode_token5] = ACTIONS(211),
    [aux_sym__absolute_opcode_token6] = ACTIONS(211),
    [aux_sym__absolute_opcode_token7] = ACTIONS(211),
    [aux_sym__absolute_opcode_token8] = ACTIONS(211),
    [sym_local_label] = ACTIONS(211),
    [sym_global_label] = ACTIONS(211),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(215),
    [anon_sym_DOTexport] = ACTIONS(215),
    [anon_sym_DOTsegment] = ACTIONS(215),
    [anon_sym_DOTsection] = ACTIONS(215),
    [anon_sym_word] = ACTIONS(215),
    [anon_sym_DOTbyte] = ACTIONS(215),
    [anon_sym_DOTaddr] = ACTIONS(215),
    [anon_sym_DOTproc] = ACTIONS(215),
    [anon_sym_DOTendproc] = ACTIONS(215),
    [aux_sym__implied_opcode_token1] = ACTIONS(215),
    [aux_sym__implied_opcode_token2] = ACTIONS(215),
    [aux_sym__implied_opcode_token3] = ACTIONS(215),
    [aux_sym__implied_opcode_token4] = ACTIONS(215),
    [aux_sym__implied_opcode_token5] = ACTIONS(215),
    [aux_sym__implied_opcode_token6] = ACTIONS(215),
    [aux_sym__implied_opcode_token7] = ACTIONS(215),
    [aux_sym__implied_opcode_token8] = ACTIONS(215),
    [aux_sym__implied_opcode_token9] = ACTIONS(215),
    [aux_sym__implied_opcode_token10] = ACTIONS(215),
    [aux_sym__implied_opcode_token11] = ACTIONS(215),
    [aux_sym__implied_opcode_token12] = ACTIONS(215),
    [aux_sym__implied_opcode_token13] = ACTIONS(215),
    [aux_sym__implied_opcode_token14] = ACTIONS(215),
    [aux_sym__implied_opcode_token15] = ACTIONS(215),
    [aux_sym__implied_opcode_token16] = ACTIONS(215),
    [aux_sym__implied_opcode_token17] = ACTIONS(215),
    [aux_sym__implied_opcode_token18] = ACTIONS(215),
    [aux_sym__implied_opcode_token19] = ACTIONS(215),
    [aux_sym__implied_opcode_token20] = ACTIONS(215),
    [aux_sym__implied_opcode_token21] = ACTIONS(215),
    [aux_sym__implied_opcode_token22] = ACTIONS(215),
    [aux_sym__implied_opcode_token23] = ACTIONS(215),
    [aux_sym__implied_opcode_token24] = ACTIONS(215),
    [aux_sym__implied_opcode_token25] = ACTIONS(215),
    [aux_sym__implied_opcode_token26] = ACTIONS(215),
    [aux_sym__implied_opcode_token27] = ACTIONS(215),
    [aux_sym__implied_opcode_token28] = ACTIONS(215),
    [aux_sym__implied_opcode_token29] = ACTIONS(215),
    [aux_sym__implied_opcode_token30] = ACTIONS(215),
    [aux_sym__implied_opcode_token31] = ACTIONS(215),
    [aux_sym__implied_opcode_token32] = ACTIONS(215),
    [aux_sym__implied_opcode_token33] = ACTIONS(215),
    [aux_sym__implied_opcode_token34] = ACTIONS(215),
    [aux_sym__implied_opcode_token35] = ACTIONS(215),
    [aux_sym__implied_opcode_token36] = ACTIONS(215),
    [aux_sym__implied_opcode_token37] = ACTIONS(215),
    [aux_sym__relative_opcode_token1] = ACTIONS(215),
    [aux_sym__relative_opcode_token2] = ACTIONS(215),
    [aux_sym__relative_opcode_token3] = ACTIONS(215),
    [aux_sym__relative_opcode_token4] = ACTIONS(215),
    [aux_sym__relative_opcode_token5] = ACTIONS(215),
    [aux_sym__relative_opcode_token6] = ACTIONS(215),
    [aux_sym__relative_opcode_token7] = ACTIONS(215),
    [aux_sym__relative_opcode_token8] = ACTIONS(215),
    [aux_sym__relative_opcode_token9] = ACTIONS(215),
    [aux_sym__immediate_opcode_token1] = ACTIONS(215),
    [aux_sym__immediate_opcode_token2] = ACTIONS(215),
    [aux_sym__immediate_opcode_token3] = ACTIONS(215),
    [aux_sym__immediate_opcode_token4] = ACTIONS(215),
    [aux_sym__immediate_opcode_token5] = ACTIONS(215),
    [aux_sym__immediate_opcode_token6] = ACTIONS(215),
    [aux_sym__immediate_opcode_token7] = ACTIONS(215),
    [aux_sym__immediate_opcode_token8] = ACTIONS(215),
    [aux_sym__immediate_opcode_token9] = ACTIONS(215),
    [aux_sym__immediate_opcode_token10] = ACTIONS(215),
    [aux_sym__immediate_opcode_token11] = ACTIONS(215),
    [aux_sym__immediate_opcode_token12] = ACTIONS(215),
    [aux_sym__absolute_opcode_token1] = ACTIONS(215),
    [aux_sym__absolute_opcode_token2] = ACTIONS(215),
    [aux_sym__absolute_opcode_token3] = ACTIONS(215),
    [aux_sym__absolute_opcode_token4] = ACTIONS(215),
    [aux_sym__absolute_opcode_token5] = ACTIONS(215),
    [aux_sym__absolute_opcode_token6] = ACTIONS(215),
    [aux_sym__absolute_opcode_token7] = ACTIONS(215),
    [aux_sym__absolute_opcode_token8] = ACTIONS(215),
    [sym_local_label] = ACTIONS(215),
    [sym_global_label] = ACTIONS(215),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(219),
    [anon_sym_DOTexport] = ACTIONS(219),
    [anon_sym_DOTsegment] = ACTIONS(219),
    [anon_sym_DOTsection] = ACTIONS(219),
    [anon_sym_word] = ACTIONS(219),
    [anon_sym_DOTbyte] = ACTIONS(219),
    [anon_sym_DOTaddr] = ACTIONS(219),
    [anon_sym_DOTproc] = ACTIONS(219),
    [anon_sym_DOTendproc] = ACTIONS(219),
    [aux_sym__implied_opcode_token1] = ACTIONS(219),
    [aux_sym__implied_opcode_token2] = ACTIONS(219),
    [aux_sym__implied_opcode_token3] = ACTIONS(219),
    [aux_sym__implied_opcode_token4] = ACTIONS(219),
    [aux_sym__implied_opcode_token5] = ACTIONS(219),
    [aux_sym__implied_opcode_token6] = ACTIONS(219),
    [aux_sym__implied_opcode_token7] = ACTIONS(219),
    [aux_sym__implied_opcode_token8] = ACTIONS(219),
    [aux_sym__implied_opcode_token9] = ACTIONS(219),
    [aux_sym__implied_opcode_token10] = ACTIONS(219),
    [aux_sym__implied_opcode_token11] = ACTIONS(219),
    [aux_sym__implied_opcode_token12] = ACTIONS(219),
    [aux_sym__implied_opcode_token13] = ACTIONS(219),
    [aux_sym__implied_opcode_token14] = ACTIONS(219),
    [aux_sym__implied_opcode_token15] = ACTIONS(219),
    [aux_sym__implied_opcode_token16] = ACTIONS(219),
    [aux_sym__implied_opcode_token17] = ACTIONS(219),
    [aux_sym__implied_opcode_token18] = ACTIONS(219),
    [aux_sym__implied_opcode_token19] = ACTIONS(219),
    [aux_sym__implied_opcode_token20] = ACTIONS(219),
    [aux_sym__implied_opcode_token21] = ACTIONS(219),
    [aux_sym__implied_opcode_token22] = ACTIONS(219),
    [aux_sym__implied_opcode_token23] = ACTIONS(219),
    [aux_sym__implied_opcode_token24] = ACTIONS(219),
    [aux_sym__implied_opcode_token25] = ACTIONS(219),
    [aux_sym__implied_opcode_token26] = ACTIONS(219),
    [aux_sym__implied_opcode_token27] = ACTIONS(219),
    [aux_sym__implied_opcode_token28] = ACTIONS(219),
    [aux_sym__implied_opcode_token29] = ACTIONS(219),
    [aux_sym__implied_opcode_token30] = ACTIONS(219),
    [aux_sym__implied_opcode_token31] = ACTIONS(219),
    [aux_sym__implied_opcode_token32] = ACTIONS(219),
    [aux_sym__implied_opcode_token33] = ACTIONS(219),
    [aux_sym__implied_opcode_token34] = ACTIONS(219),
    [aux_sym__implied_opcode_token35] = ACTIONS(219),
    [aux_sym__implied_opcode_token36] = ACTIONS(219),
    [aux_sym__implied_opcode_token37] = ACTIONS(219),
    [aux_sym__relative_opcode_token1] = ACTIONS(219),
    [aux_sym__relative_opcode_token2] = ACTIONS(219),
    [aux_sym__relative_opcode_token3] = ACTIONS(219),
    [aux_sym__relative_opcode_token4] = ACTIONS(219),
    [aux_sym__relative_opcode_token5] = ACTIONS(219),
    [aux_sym__relative_opcode_token6] = ACTIONS(219),
    [aux_sym__relative_opcode_token7] = ACTIONS(219),
    [aux_sym__relative_opcode_token8] = ACTIONS(219),
    [aux_sym__relative_opcode_token9] = ACTIONS(219),
    [aux_sym__immediate_opcode_token1] = ACTIONS(219),
    [aux_sym__immediate_opcode_token2] = ACTIONS(219),
    [aux_sym__immediate_opcode_token3] = ACTIONS(219),
    [aux_sym__immediate_opcode_token4] = ACTIONS(219),
    [aux_sym__immediate_opcode_token5] = ACTIONS(219),
    [aux_sym__immediate_opcode_token6] = ACTIONS(219),
    [aux_sym__immediate_opcode_token7] = ACTIONS(219),
    [aux_sym__immediate_opcode_token8] = ACTIONS(219),
    [aux_sym__immediate_opcode_token9] = ACTIONS(219),
    [aux_sym__immediate_opcode_token10] = ACTIONS(219),
    [aux_sym__immediate_opcode_token11] = ACTIONS(219),
    [aux_sym__immediate_opcode_token12] = ACTIONS(219),
    [aux_sym__absolute_opcode_token1] = ACTIONS(219),
    [aux_sym__absolute_opcode_token2] = ACTIONS(219),
    [aux_sym__absolute_opcode_token3] = ACTIONS(219),
    [aux_sym__absolute_opcode_token4] = ACTIONS(219),
    [aux_sym__absolute_opcode_token5] = ACTIONS(219),
    [aux_sym__absolute_opcode_token6] = ACTIONS(219),
    [aux_sym__absolute_opcode_token7] = ACTIONS(219),
    [aux_sym__absolute_opcode_token8] = ACTIONS(219),
    [sym_local_label] = ACTIONS(219),
    [sym_global_label] = ACTIONS(219),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      sym__reg_x,
    ACTIONS(100), 8,
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
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(227), 3,
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
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(231), 3,
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
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(233), 3,
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
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(235), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(5), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [124] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(239), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(38), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [145] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(241), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(7), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [166] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(243), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(33), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [187] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(245), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(8), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [208] = 4,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(249), 2,
      sym_string_content,
      sym_escape_sequence,
  [222] = 4,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_string_repeat1,
    ACTIONS(253), 2,
      sym_string_content,
      sym_escape_sequence,
  [236] = 4,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(257), 2,
      sym_string_content,
      sym_escape_sequence,
  [250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__byte_list,
    STATE(13), 1,
      sym__byte_literal,
    ACTIONS(132), 2,
      sym_num_literal,
      sym_char_literal,
  [264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_x,
    ACTIONS(262), 1,
      anon_sym_y,
  [274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      aux_sym_file_control_command_token1,
      aux_sym_file_control_command_token2,
  [282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_EQ,
    ACTIONS(268), 1,
      anon_sym_COLON,
  [292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_string,
  [302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      sym_num_literal,
      sym_global_label,
  [310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LPAREN2,
  [317] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym__ws_sep,
  [324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_global_label,
  [331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      aux_sym_section_control_command_token1,
  [338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_global_label,
  [345] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym__ws_sep,
  [352] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym__ws_sep,
  [359] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym__ws_sep,
  [366] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym__ws_sep,
  [373] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym__ws_sep,
  [380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_POUND,
  [387] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym__ws_sep,
  [394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
  [401] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym__ws_sep,
  [408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_COLON,
  [415] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__ws_sep,
  [422] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym__ws_sep,
  [429] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__ws_sep,
  [436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_x,
  [443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
  [450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_y,
  [457] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__ws_sep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(33)] = 0,
  [SMALL_STATE(34)] = 23,
  [SMALL_STATE(35)] = 44,
  [SMALL_STATE(36)] = 65,
  [SMALL_STATE(37)] = 86,
  [SMALL_STATE(38)] = 107,
  [SMALL_STATE(39)] = 124,
  [SMALL_STATE(40)] = 145,
  [SMALL_STATE(41)] = 166,
  [SMALL_STATE(42)] = 187,
  [SMALL_STATE(43)] = 208,
  [SMALL_STATE(44)] = 222,
  [SMALL_STATE(45)] = 236,
  [SMALL_STATE(46)] = 250,
  [SMALL_STATE(47)] = 264,
  [SMALL_STATE(48)] = 274,
  [SMALL_STATE(49)] = 282,
  [SMALL_STATE(50)] = 292,
  [SMALL_STATE(51)] = 302,
  [SMALL_STATE(52)] = 310,
  [SMALL_STATE(53)] = 317,
  [SMALL_STATE(54)] = 324,
  [SMALL_STATE(55)] = 331,
  [SMALL_STATE(56)] = 338,
  [SMALL_STATE(57)] = 345,
  [SMALL_STATE(58)] = 352,
  [SMALL_STATE(59)] = 359,
  [SMALL_STATE(60)] = 366,
  [SMALL_STATE(61)] = 373,
  [SMALL_STATE(62)] = 380,
  [SMALL_STATE(63)] = 387,
  [SMALL_STATE(64)] = 394,
  [SMALL_STATE(65)] = 401,
  [SMALL_STATE(66)] = 408,
  [SMALL_STATE(67)] = 415,
  [SMALL_STATE(68)] = 422,
  [SMALL_STATE(69)] = 429,
  [SMALL_STATE(70)] = 436,
  [SMALL_STATE(71)] = 443,
  [SMALL_STATE(72)] = 450,
  [SMALL_STATE(73)] = 457,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .dynamic_precedence = 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 3, .dynamic_precedence = 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_control_command, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_control_command, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__byte_list, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__byte_list, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__byte_list, 2), SHIFT_REPEAT(13),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__byte_list, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__byte_list, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 5, .dynamic_precedence = 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect, 5, .dynamic_precedence = 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg_x, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reg_x, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implied_opcode, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_opcode, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implied_opcode, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implied, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implied, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_control_command, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_control_command, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg_y, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reg_y, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_control_command, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_control_command, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_control_command, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_control_command, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 6, .dynamic_precedence = 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect, 6, .dynamic_precedence = 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_control_command, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_control_command, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .dynamic_precedence = 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .dynamic_precedence = 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address_control_command, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address_control_command, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment_control_command, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment_control_command, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_control_command, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_control_command, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(45),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_opcode, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [298] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__absolute_opcode, 1), REDUCE(sym__indirect_opcode, 1),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__immediate_opcode, 1), REDUCE(sym__absolute_opcode, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [310] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__immediate_opcode, 1), REDUCE(sym__absolute_opcode, 1), REDUCE(sym__indirect_opcode, 1),
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
