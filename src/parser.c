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
#define STATE_COUNT 80
#define LARGE_STATE_COUNT 35
#define SYMBOL_COUNT 157
#define ALIAS_COUNT 0
#define TOKEN_COUNT 110
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  sym_comment = 1,
  sym__ws_sep = 2,
  aux_sym_file_control_command_token1 = 3,
  aux_sym_file_control_command_token2 = 4,
  aux_sym_section_control_command_token1 = 5,
  anon_sym_DOTinclude = 6,
  anon_sym_DOTincbin = 7,
  anon_sym_DOTexport = 8,
  anon_sym_DOTimport = 9,
  anon_sym_DOTsegment = 10,
  anon_sym_DOTsection = 11,
  anon_sym_word = 12,
  anon_sym_DOTbyte = 13,
  anon_sym_DOTaddr = 14,
  anon_sym_DOTproc = 15,
  anon_sym_DOTendproc = 16,
  anon_sym_EQ = 17,
  anon_sym_COLON = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  sym_num_literal = 21,
  sym_char_literal = 22,
  anon_sym_PLUS = 23,
  anon_sym_DASH = 24,
  anon_sym_STAR = 25,
  anon_sym_SLASH = 26,
  anon_sym_LT_LT = 27,
  anon_sym_GT_GT = 28,
  anon_sym_AMP = 29,
  anon_sym_PIPE = 30,
  aux_sym_unary_expr_token1 = 31,
  anon_sym_POUND = 32,
  anon_sym_LPAREN2 = 33,
  anon_sym_COMMA = 34,
  anon_sym_x = 35,
  anon_sym_y = 36,
  aux_sym__implied_opcode_token1 = 37,
  aux_sym__implied_opcode_token2 = 38,
  aux_sym__implied_opcode_token3 = 39,
  aux_sym__implied_opcode_token4 = 40,
  aux_sym__implied_opcode_token5 = 41,
  aux_sym__implied_opcode_token6 = 42,
  aux_sym__implied_opcode_token7 = 43,
  aux_sym__implied_opcode_token8 = 44,
  aux_sym__implied_opcode_token9 = 45,
  aux_sym__implied_opcode_token10 = 46,
  aux_sym__implied_opcode_token11 = 47,
  aux_sym__implied_opcode_token12 = 48,
  aux_sym__implied_opcode_token13 = 49,
  aux_sym__implied_opcode_token14 = 50,
  aux_sym__implied_opcode_token15 = 51,
  aux_sym__implied_opcode_token16 = 52,
  aux_sym__implied_opcode_token17 = 53,
  aux_sym__implied_opcode_token18 = 54,
  aux_sym__implied_opcode_token19 = 55,
  aux_sym__implied_opcode_token20 = 56,
  aux_sym__implied_opcode_token21 = 57,
  aux_sym__implied_opcode_token22 = 58,
  aux_sym__implied_opcode_token23 = 59,
  aux_sym__implied_opcode_token24 = 60,
  aux_sym__implied_opcode_token25 = 61,
  aux_sym__implied_opcode_token26 = 62,
  aux_sym__implied_opcode_token27 = 63,
  aux_sym__implied_opcode_token28 = 64,
  aux_sym__implied_opcode_token29 = 65,
  aux_sym__implied_opcode_token30 = 66,
  aux_sym__implied_opcode_token31 = 67,
  aux_sym__implied_opcode_token32 = 68,
  aux_sym__implied_opcode_token33 = 69,
  aux_sym__implied_opcode_token34 = 70,
  aux_sym__implied_opcode_token35 = 71,
  aux_sym__implied_opcode_token36 = 72,
  aux_sym__implied_opcode_token37 = 73,
  aux_sym__relative_opcode_token1 = 74,
  aux_sym__relative_opcode_token2 = 75,
  aux_sym__relative_opcode_token3 = 76,
  aux_sym__relative_opcode_token4 = 77,
  aux_sym__relative_opcode_token5 = 78,
  aux_sym__relative_opcode_token6 = 79,
  aux_sym__relative_opcode_token7 = 80,
  aux_sym__relative_opcode_token8 = 81,
  aux_sym__relative_opcode_token9 = 82,
  aux_sym__immediate_opcode_token1 = 83,
  aux_sym__immediate_opcode_token2 = 84,
  aux_sym__immediate_opcode_token3 = 85,
  aux_sym__immediate_opcode_token4 = 86,
  aux_sym__immediate_opcode_token5 = 87,
  aux_sym__immediate_opcode_token6 = 88,
  aux_sym__immediate_opcode_token7 = 89,
  aux_sym__immediate_opcode_token8 = 90,
  aux_sym__immediate_opcode_token9 = 91,
  aux_sym__immediate_opcode_token10 = 92,
  aux_sym__immediate_opcode_token11 = 93,
  aux_sym__immediate_opcode_token12 = 94,
  aux_sym__absolute_opcode_token1 = 95,
  aux_sym__absolute_opcode_token2 = 96,
  aux_sym__absolute_opcode_token3 = 97,
  aux_sym__absolute_opcode_token4 = 98,
  aux_sym__absolute_opcode_token5 = 99,
  aux_sym__absolute_opcode_token6 = 100,
  aux_sym__absolute_opcode_token7 = 101,
  aux_sym__absolute_opcode_token8 = 102,
  anon_sym_DQUOTE = 103,
  sym_string_content = 104,
  sym_escape_sequence = 105,
  sym_comma = 106,
  sym_cheap_local_label = 107,
  sym_local_label = 108,
  sym_global_label = 109,
  sym_source_file = 110,
  sym__statement = 111,
  sym__control_command = 112,
  sym_file_control_command = 113,
  sym_incbin_control_command = 114,
  sym_export_control_command = 115,
  sym_import_control_command = 116,
  sym_segment_control_command = 117,
  sym_section_control_command = 118,
  sym_byte_control_command = 119,
  sym_address_control_command = 120,
  sym_proc_control_command = 121,
  sym__inc_name = 122,
  sym__inc_bin_name = 123,
  sym__export_name = 124,
  sym__import_name = 125,
  sym__segment_name = 126,
  sym__sec_name = 127,
  sym__word_name = 128,
  sym__byte_name = 129,
  sym__address_name = 130,
  sym__proc_name = 131,
  sym__endproc_name = 132,
  sym_assignment = 133,
  sym_label = 134,
  aux_sym__byte_list = 135,
  sym__byte_literal = 136,
  sym__expr = 137,
  sym__identifier = 138,
  sym_binary_expr = 139,
  sym_unary_expr = 140,
  sym__operation = 141,
  sym_implied = 142,
  sym_relative = 143,
  sym_immediate = 144,
  sym_absolute = 145,
  sym_indirect = 146,
  sym__reg_x = 147,
  sym__reg_y = 148,
  sym__implied_opcode = 149,
  sym__relative_opcode = 150,
  sym__immediate_opcode = 151,
  sym__absolute_opcode = 152,
  sym__indirect_opcode = 153,
  sym_string = 154,
  aux_sym_source_file_repeat1 = 155,
  aux_sym_string_repeat1 = 156,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym__ws_sep] = "_ws_sep",
  [aux_sym_file_control_command_token1] = "file_name",
  [aux_sym_file_control_command_token2] = "file_name",
  [aux_sym_section_control_command_token1] = "section_name",
  [anon_sym_DOTinclude] = "control_command",
  [anon_sym_DOTincbin] = "control_command",
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
  [sym_incbin_control_command] = "incbin_control_command",
  [sym_export_control_command] = "export_control_command",
  [sym_import_control_command] = "import_control_command",
  [sym_segment_control_command] = "segment_control_command",
  [sym_section_control_command] = "section_control_command",
  [sym_byte_control_command] = "byte_control_command",
  [sym_address_control_command] = "address_control_command",
  [sym_proc_control_command] = "proc_control_command",
  [sym__inc_name] = "_inc_name",
  [sym__inc_bin_name] = "_inc_bin_name",
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
  [anon_sym_DOTincbin] = anon_sym_DOTinclude,
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
  [sym_incbin_control_command] = sym_incbin_control_command,
  [sym_export_control_command] = sym_export_control_command,
  [sym_import_control_command] = sym_import_control_command,
  [sym_segment_control_command] = sym_segment_control_command,
  [sym_section_control_command] = sym_section_control_command,
  [sym_byte_control_command] = sym_byte_control_command,
  [sym_address_control_command] = sym_address_control_command,
  [sym_proc_control_command] = sym_proc_control_command,
  [sym__inc_name] = sym__inc_name,
  [sym__inc_bin_name] = sym__inc_bin_name,
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
  [anon_sym_DOTincbin] = {
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
  [sym_incbin_control_command] = {
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
  [sym__inc_bin_name] = {
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
  [1] = {
    [2] = aux_sym_file_control_command_token1,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_string, 2,
    sym_string,
    aux_sym_file_control_command_token1,
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
  [77] = 77,
  [78] = 78,
  [79] = 79,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(99);
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(132);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '(') ADVANCE(136);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == ',') ADVANCE(137);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '=') ADVANCE(118);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(138);
      if (lookahead == 'y') ADVANCE(139);
      if (lookahead == '|') ADVANCE(133);
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
          lookahead == '~') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(93)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead != 0) ADVANCE(274);
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
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '~') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(125);
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
      if (lookahead == '<') ADVANCE(130);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(131);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'b') ADVANCE(318);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == 'p') ADVANCE(307);
      if (lookahead == 's') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(321);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(86);
      if (lookahead == 'x') ADVANCE(84);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(192);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(248);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(250);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(196);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(198);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(200);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(204);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(206);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(208);
      END_STATE();
    case 21:
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
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(358);
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
          lookahead == 'a') ADVANCE(357);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(331);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(328);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 27:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(268);
      END_STATE();
    case 28:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(270);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(170);
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
          lookahead == 'b') ADVANCE(338);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
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
          lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(214);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(216);
      END_STATE();
    case 34:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(228);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(230);
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(144);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(148);
      END_STATE();
    case 36:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(150);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 37:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(154);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(156);
      END_STATE();
    case 38:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 39:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(158);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(333);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(355);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(343);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(341);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(346);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
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
          lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 44:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(332);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(340);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 45:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(323);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 49:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(19);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 50:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(325);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 51:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 52:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 53:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(210);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(212);
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
          lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 56:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 57:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 58:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(335);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(348);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 59:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(349);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 61:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 62:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 63:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 64:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 65:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
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
          lookahead == 'o') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 69:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(238);
      END_STATE();
    case 70:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 71:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 72:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(218);
      END_STATE();
    case 73:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 74:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 75:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 76:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 77:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 78:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 79:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(240);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(242);
      END_STATE();
    case 80:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(166);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(168);
      END_STATE();
    case 81:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(122);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
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
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(132);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == ',') ADVANCE(137);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '=') ADVANCE(118);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(138);
      if (lookahead == 'y') ADVANCE(139);
      if (lookahead == '|') ADVANCE(133);
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
          lookahead == '~') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(93)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 94:
      if (eof) ADVANCE(99);
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(132);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '(') ADVANCE(136);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == ',') ADVANCE(137);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(12);
      if (lookahead == '|') ADVANCE(133);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 95:
      if (eof) ADVANCE(99);
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(132);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == ',') ADVANCE(137);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(12);
      if (lookahead == '|') ADVANCE(133);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 96:
      if (eof) ADVANCE(99);
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == ',') ADVANCE(276);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOTincbin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DOTexport);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DOTimport);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOTsegment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DOTsection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOTaddr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOTproc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOTendproc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_num_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_num_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_num_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_unary_expr_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token1);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token2);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token3);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token4);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token5);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token6);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token7);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token8);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token9);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token11);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token12);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token13);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token14);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token15);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token16);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token17);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token18);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token19);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token20);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token21);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token22);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token24);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token25);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token26);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token27);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token28);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token29);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token30);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token31);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token32);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token33);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token34);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token35);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token36);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token37);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token2);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token3);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token4);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token5);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token6);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token7);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token8);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token9);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token1);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token2);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token3);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token4);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token5);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token6);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token7);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token8);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token9);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token10);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token11);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token12);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token1);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token2);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token3);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token4);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token5);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token6);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token7);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token8);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_cheap_local_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'b') ADVANCE(291);
      if (lookahead == 'l') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(316);
      if (lookahead == 'g') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'd') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'd') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'd') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'd') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'i') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'i') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'm') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'm') ADVANCE(306);
      if (lookahead == 'n') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 'x') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'p') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'p') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'p') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'u') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'y') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_local_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'd') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'r') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(249);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(197);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(199);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(205);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(207);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(165);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(263);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(265);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'w')) ADVANCE(358);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(271);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(215);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(229);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(143);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(183);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(151);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(155);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(161);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(211);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(189);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(241);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(167);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_global_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
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
  [35] = {.lex_state = 94},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 94},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 98},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 98},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 98},
  [61] = {.lex_state = 98},
  [62] = {.lex_state = 94},
  [63] = {.lex_state = 98},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 98},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 98},
  [68] = {.lex_state = 98},
  [69] = {.lex_state = 98},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 98},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 98},
  [74] = {.lex_state = 98},
  [75] = {.lex_state = 98},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 98},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(1),
    [anon_sym_DOTincbin] = ACTIONS(1),
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
    [sym_source_file] = STATE(70),
    [sym__statement] = STATE(3),
    [sym__control_command] = STATE(3),
    [sym_file_control_command] = STATE(3),
    [sym_incbin_control_command] = STATE(3),
    [sym_export_control_command] = STATE(3),
    [sym_import_control_command] = STATE(3),
    [sym_segment_control_command] = STATE(3),
    [sym_section_control_command] = STATE(3),
    [sym_byte_control_command] = STATE(3),
    [sym_address_control_command] = STATE(3),
    [sym_proc_control_command] = STATE(3),
    [sym__inc_name] = STATE(69),
    [sym__inc_bin_name] = STATE(67),
    [sym__export_name] = STATE(65),
    [sym__import_name] = STATE(63),
    [sym__segment_name] = STATE(53),
    [sym__sec_name] = STATE(60),
    [sym__word_name] = STATE(47),
    [sym__byte_name] = STATE(47),
    [sym__address_name] = STATE(49),
    [sym__proc_name] = STATE(59),
    [sym__endproc_name] = STATE(21),
    [sym_assignment] = STATE(3),
    [sym_label] = STATE(3),
    [sym__operation] = STATE(3),
    [sym_implied] = STATE(3),
    [sym_relative] = STATE(3),
    [sym_immediate] = STATE(3),
    [sym_absolute] = STATE(3),
    [sym_indirect] = STATE(3),
    [sym__implied_opcode] = STATE(22),
    [sym__relative_opcode] = STATE(58),
    [sym__immediate_opcode] = STATE(68),
    [sym__absolute_opcode] = STATE(71),
    [sym__indirect_opcode] = STATE(56),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(7),
    [anon_sym_DOTincbin] = ACTIONS(9),
    [anon_sym_DOTexport] = ACTIONS(11),
    [anon_sym_DOTimport] = ACTIONS(13),
    [anon_sym_DOTsegment] = ACTIONS(15),
    [anon_sym_DOTsection] = ACTIONS(17),
    [anon_sym_word] = ACTIONS(19),
    [anon_sym_DOTbyte] = ACTIONS(19),
    [anon_sym_DOTaddr] = ACTIONS(21),
    [anon_sym_DOTproc] = ACTIONS(23),
    [anon_sym_DOTendproc] = ACTIONS(25),
    [aux_sym__implied_opcode_token1] = ACTIONS(27),
    [aux_sym__implied_opcode_token2] = ACTIONS(27),
    [aux_sym__implied_opcode_token3] = ACTIONS(27),
    [aux_sym__implied_opcode_token4] = ACTIONS(27),
    [aux_sym__implied_opcode_token5] = ACTIONS(27),
    [aux_sym__implied_opcode_token6] = ACTIONS(27),
    [aux_sym__implied_opcode_token7] = ACTIONS(27),
    [aux_sym__implied_opcode_token8] = ACTIONS(27),
    [aux_sym__implied_opcode_token9] = ACTIONS(27),
    [aux_sym__implied_opcode_token10] = ACTIONS(27),
    [aux_sym__implied_opcode_token11] = ACTIONS(27),
    [aux_sym__implied_opcode_token12] = ACTIONS(27),
    [aux_sym__implied_opcode_token13] = ACTIONS(27),
    [aux_sym__implied_opcode_token14] = ACTIONS(27),
    [aux_sym__implied_opcode_token15] = ACTIONS(27),
    [aux_sym__implied_opcode_token16] = ACTIONS(27),
    [aux_sym__implied_opcode_token17] = ACTIONS(27),
    [aux_sym__implied_opcode_token18] = ACTIONS(27),
    [aux_sym__implied_opcode_token19] = ACTIONS(27),
    [aux_sym__implied_opcode_token20] = ACTIONS(27),
    [aux_sym__implied_opcode_token21] = ACTIONS(29),
    [aux_sym__implied_opcode_token22] = ACTIONS(29),
    [aux_sym__implied_opcode_token23] = ACTIONS(29),
    [aux_sym__implied_opcode_token24] = ACTIONS(29),
    [aux_sym__implied_opcode_token25] = ACTIONS(29),
    [aux_sym__implied_opcode_token26] = ACTIONS(29),
    [aux_sym__implied_opcode_token27] = ACTIONS(27),
    [aux_sym__implied_opcode_token28] = ACTIONS(27),
    [aux_sym__implied_opcode_token29] = ACTIONS(27),
    [aux_sym__implied_opcode_token30] = ACTIONS(27),
    [aux_sym__implied_opcode_token31] = ACTIONS(27),
    [aux_sym__implied_opcode_token32] = ACTIONS(27),
    [aux_sym__implied_opcode_token33] = ACTIONS(27),
    [aux_sym__implied_opcode_token34] = ACTIONS(27),
    [aux_sym__implied_opcode_token35] = ACTIONS(27),
    [aux_sym__implied_opcode_token36] = ACTIONS(27),
    [aux_sym__implied_opcode_token37] = ACTIONS(27),
    [aux_sym__relative_opcode_token1] = ACTIONS(31),
    [aux_sym__relative_opcode_token2] = ACTIONS(31),
    [aux_sym__relative_opcode_token3] = ACTIONS(31),
    [aux_sym__relative_opcode_token4] = ACTIONS(31),
    [aux_sym__relative_opcode_token5] = ACTIONS(31),
    [aux_sym__relative_opcode_token6] = ACTIONS(31),
    [aux_sym__relative_opcode_token7] = ACTIONS(31),
    [aux_sym__relative_opcode_token8] = ACTIONS(31),
    [aux_sym__relative_opcode_token9] = ACTIONS(31),
    [aux_sym__immediate_opcode_token1] = ACTIONS(33),
    [aux_sym__immediate_opcode_token2] = ACTIONS(33),
    [aux_sym__immediate_opcode_token3] = ACTIONS(35),
    [aux_sym__immediate_opcode_token4] = ACTIONS(33),
    [aux_sym__immediate_opcode_token5] = ACTIONS(35),
    [aux_sym__immediate_opcode_token6] = ACTIONS(35),
    [aux_sym__immediate_opcode_token7] = ACTIONS(33),
    [aux_sym__immediate_opcode_token8] = ACTIONS(33),
    [aux_sym__immediate_opcode_token9] = ACTIONS(35),
    [aux_sym__immediate_opcode_token10] = ACTIONS(35),
    [aux_sym__immediate_opcode_token11] = ACTIONS(33),
    [aux_sym__immediate_opcode_token12] = ACTIONS(33),
    [aux_sym__absolute_opcode_token1] = ACTIONS(37),
    [aux_sym__absolute_opcode_token2] = ACTIONS(39),
    [aux_sym__absolute_opcode_token3] = ACTIONS(37),
    [aux_sym__absolute_opcode_token4] = ACTIONS(39),
    [aux_sym__absolute_opcode_token5] = ACTIONS(39),
    [aux_sym__absolute_opcode_token6] = ACTIONS(39),
    [aux_sym__absolute_opcode_token7] = ACTIONS(39),
    [aux_sym__absolute_opcode_token8] = ACTIONS(39),
    [sym_cheap_local_label] = ACTIONS(41),
    [sym_local_label] = ACTIONS(43),
    [sym_global_label] = ACTIONS(45),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__control_command] = STATE(2),
    [sym_file_control_command] = STATE(2),
    [sym_incbin_control_command] = STATE(2),
    [sym_export_control_command] = STATE(2),
    [sym_import_control_command] = STATE(2),
    [sym_segment_control_command] = STATE(2),
    [sym_section_control_command] = STATE(2),
    [sym_byte_control_command] = STATE(2),
    [sym_address_control_command] = STATE(2),
    [sym_proc_control_command] = STATE(2),
    [sym__inc_name] = STATE(69),
    [sym__inc_bin_name] = STATE(67),
    [sym__export_name] = STATE(65),
    [sym__import_name] = STATE(63),
    [sym__segment_name] = STATE(53),
    [sym__sec_name] = STATE(60),
    [sym__word_name] = STATE(47),
    [sym__byte_name] = STATE(47),
    [sym__address_name] = STATE(49),
    [sym__proc_name] = STATE(59),
    [sym__endproc_name] = STATE(21),
    [sym_assignment] = STATE(2),
    [sym_label] = STATE(2),
    [sym__operation] = STATE(2),
    [sym_implied] = STATE(2),
    [sym_relative] = STATE(2),
    [sym_immediate] = STATE(2),
    [sym_absolute] = STATE(2),
    [sym_indirect] = STATE(2),
    [sym__implied_opcode] = STATE(22),
    [sym__relative_opcode] = STATE(58),
    [sym__immediate_opcode] = STATE(68),
    [sym__absolute_opcode] = STATE(71),
    [sym__indirect_opcode] = STATE(56),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(49),
    [anon_sym_DOTincbin] = ACTIONS(52),
    [anon_sym_DOTexport] = ACTIONS(55),
    [anon_sym_DOTimport] = ACTIONS(58),
    [anon_sym_DOTsegment] = ACTIONS(61),
    [anon_sym_DOTsection] = ACTIONS(64),
    [anon_sym_word] = ACTIONS(67),
    [anon_sym_DOTbyte] = ACTIONS(67),
    [anon_sym_DOTaddr] = ACTIONS(70),
    [anon_sym_DOTproc] = ACTIONS(73),
    [anon_sym_DOTendproc] = ACTIONS(76),
    [aux_sym__implied_opcode_token1] = ACTIONS(79),
    [aux_sym__implied_opcode_token2] = ACTIONS(79),
    [aux_sym__implied_opcode_token3] = ACTIONS(79),
    [aux_sym__implied_opcode_token4] = ACTIONS(79),
    [aux_sym__implied_opcode_token5] = ACTIONS(79),
    [aux_sym__implied_opcode_token6] = ACTIONS(79),
    [aux_sym__implied_opcode_token7] = ACTIONS(79),
    [aux_sym__implied_opcode_token8] = ACTIONS(79),
    [aux_sym__implied_opcode_token9] = ACTIONS(79),
    [aux_sym__implied_opcode_token10] = ACTIONS(79),
    [aux_sym__implied_opcode_token11] = ACTIONS(79),
    [aux_sym__implied_opcode_token12] = ACTIONS(79),
    [aux_sym__implied_opcode_token13] = ACTIONS(79),
    [aux_sym__implied_opcode_token14] = ACTIONS(79),
    [aux_sym__implied_opcode_token15] = ACTIONS(79),
    [aux_sym__implied_opcode_token16] = ACTIONS(79),
    [aux_sym__implied_opcode_token17] = ACTIONS(79),
    [aux_sym__implied_opcode_token18] = ACTIONS(79),
    [aux_sym__implied_opcode_token19] = ACTIONS(79),
    [aux_sym__implied_opcode_token20] = ACTIONS(79),
    [aux_sym__implied_opcode_token21] = ACTIONS(82),
    [aux_sym__implied_opcode_token22] = ACTIONS(82),
    [aux_sym__implied_opcode_token23] = ACTIONS(82),
    [aux_sym__implied_opcode_token24] = ACTIONS(82),
    [aux_sym__implied_opcode_token25] = ACTIONS(82),
    [aux_sym__implied_opcode_token26] = ACTIONS(82),
    [aux_sym__implied_opcode_token27] = ACTIONS(79),
    [aux_sym__implied_opcode_token28] = ACTIONS(79),
    [aux_sym__implied_opcode_token29] = ACTIONS(79),
    [aux_sym__implied_opcode_token30] = ACTIONS(79),
    [aux_sym__implied_opcode_token31] = ACTIONS(79),
    [aux_sym__implied_opcode_token32] = ACTIONS(79),
    [aux_sym__implied_opcode_token33] = ACTIONS(79),
    [aux_sym__implied_opcode_token34] = ACTIONS(79),
    [aux_sym__implied_opcode_token35] = ACTIONS(79),
    [aux_sym__implied_opcode_token36] = ACTIONS(79),
    [aux_sym__implied_opcode_token37] = ACTIONS(79),
    [aux_sym__relative_opcode_token1] = ACTIONS(85),
    [aux_sym__relative_opcode_token2] = ACTIONS(85),
    [aux_sym__relative_opcode_token3] = ACTIONS(85),
    [aux_sym__relative_opcode_token4] = ACTIONS(85),
    [aux_sym__relative_opcode_token5] = ACTIONS(85),
    [aux_sym__relative_opcode_token6] = ACTIONS(85),
    [aux_sym__relative_opcode_token7] = ACTIONS(85),
    [aux_sym__relative_opcode_token8] = ACTIONS(85),
    [aux_sym__relative_opcode_token9] = ACTIONS(85),
    [aux_sym__immediate_opcode_token1] = ACTIONS(88),
    [aux_sym__immediate_opcode_token2] = ACTIONS(88),
    [aux_sym__immediate_opcode_token3] = ACTIONS(91),
    [aux_sym__immediate_opcode_token4] = ACTIONS(88),
    [aux_sym__immediate_opcode_token5] = ACTIONS(91),
    [aux_sym__immediate_opcode_token6] = ACTIONS(91),
    [aux_sym__immediate_opcode_token7] = ACTIONS(88),
    [aux_sym__immediate_opcode_token8] = ACTIONS(88),
    [aux_sym__immediate_opcode_token9] = ACTIONS(91),
    [aux_sym__immediate_opcode_token10] = ACTIONS(91),
    [aux_sym__immediate_opcode_token11] = ACTIONS(88),
    [aux_sym__immediate_opcode_token12] = ACTIONS(88),
    [aux_sym__absolute_opcode_token1] = ACTIONS(94),
    [aux_sym__absolute_opcode_token2] = ACTIONS(97),
    [aux_sym__absolute_opcode_token3] = ACTIONS(94),
    [aux_sym__absolute_opcode_token4] = ACTIONS(97),
    [aux_sym__absolute_opcode_token5] = ACTIONS(97),
    [aux_sym__absolute_opcode_token6] = ACTIONS(97),
    [aux_sym__absolute_opcode_token7] = ACTIONS(97),
    [aux_sym__absolute_opcode_token8] = ACTIONS(97),
    [sym_cheap_local_label] = ACTIONS(100),
    [sym_local_label] = ACTIONS(103),
    [sym_global_label] = ACTIONS(106),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym__control_command] = STATE(2),
    [sym_file_control_command] = STATE(2),
    [sym_incbin_control_command] = STATE(2),
    [sym_export_control_command] = STATE(2),
    [sym_import_control_command] = STATE(2),
    [sym_segment_control_command] = STATE(2),
    [sym_section_control_command] = STATE(2),
    [sym_byte_control_command] = STATE(2),
    [sym_address_control_command] = STATE(2),
    [sym_proc_control_command] = STATE(2),
    [sym__inc_name] = STATE(69),
    [sym__inc_bin_name] = STATE(67),
    [sym__export_name] = STATE(65),
    [sym__import_name] = STATE(63),
    [sym__segment_name] = STATE(53),
    [sym__sec_name] = STATE(60),
    [sym__word_name] = STATE(47),
    [sym__byte_name] = STATE(47),
    [sym__address_name] = STATE(49),
    [sym__proc_name] = STATE(59),
    [sym__endproc_name] = STATE(21),
    [sym_assignment] = STATE(2),
    [sym_label] = STATE(2),
    [sym__operation] = STATE(2),
    [sym_implied] = STATE(2),
    [sym_relative] = STATE(2),
    [sym_immediate] = STATE(2),
    [sym_absolute] = STATE(2),
    [sym_indirect] = STATE(2),
    [sym__implied_opcode] = STATE(22),
    [sym__relative_opcode] = STATE(58),
    [sym__immediate_opcode] = STATE(68),
    [sym__absolute_opcode] = STATE(71),
    [sym__indirect_opcode] = STATE(56),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(7),
    [anon_sym_DOTincbin] = ACTIONS(9),
    [anon_sym_DOTexport] = ACTIONS(11),
    [anon_sym_DOTimport] = ACTIONS(13),
    [anon_sym_DOTsegment] = ACTIONS(15),
    [anon_sym_DOTsection] = ACTIONS(17),
    [anon_sym_word] = ACTIONS(19),
    [anon_sym_DOTbyte] = ACTIONS(19),
    [anon_sym_DOTaddr] = ACTIONS(21),
    [anon_sym_DOTproc] = ACTIONS(23),
    [anon_sym_DOTendproc] = ACTIONS(25),
    [aux_sym__implied_opcode_token1] = ACTIONS(27),
    [aux_sym__implied_opcode_token2] = ACTIONS(27),
    [aux_sym__implied_opcode_token3] = ACTIONS(27),
    [aux_sym__implied_opcode_token4] = ACTIONS(27),
    [aux_sym__implied_opcode_token5] = ACTIONS(27),
    [aux_sym__implied_opcode_token6] = ACTIONS(27),
    [aux_sym__implied_opcode_token7] = ACTIONS(27),
    [aux_sym__implied_opcode_token8] = ACTIONS(27),
    [aux_sym__implied_opcode_token9] = ACTIONS(27),
    [aux_sym__implied_opcode_token10] = ACTIONS(27),
    [aux_sym__implied_opcode_token11] = ACTIONS(27),
    [aux_sym__implied_opcode_token12] = ACTIONS(27),
    [aux_sym__implied_opcode_token13] = ACTIONS(27),
    [aux_sym__implied_opcode_token14] = ACTIONS(27),
    [aux_sym__implied_opcode_token15] = ACTIONS(27),
    [aux_sym__implied_opcode_token16] = ACTIONS(27),
    [aux_sym__implied_opcode_token17] = ACTIONS(27),
    [aux_sym__implied_opcode_token18] = ACTIONS(27),
    [aux_sym__implied_opcode_token19] = ACTIONS(27),
    [aux_sym__implied_opcode_token20] = ACTIONS(27),
    [aux_sym__implied_opcode_token21] = ACTIONS(29),
    [aux_sym__implied_opcode_token22] = ACTIONS(29),
    [aux_sym__implied_opcode_token23] = ACTIONS(29),
    [aux_sym__implied_opcode_token24] = ACTIONS(29),
    [aux_sym__implied_opcode_token25] = ACTIONS(29),
    [aux_sym__implied_opcode_token26] = ACTIONS(29),
    [aux_sym__implied_opcode_token27] = ACTIONS(27),
    [aux_sym__implied_opcode_token28] = ACTIONS(27),
    [aux_sym__implied_opcode_token29] = ACTIONS(27),
    [aux_sym__implied_opcode_token30] = ACTIONS(27),
    [aux_sym__implied_opcode_token31] = ACTIONS(27),
    [aux_sym__implied_opcode_token32] = ACTIONS(27),
    [aux_sym__implied_opcode_token33] = ACTIONS(27),
    [aux_sym__implied_opcode_token34] = ACTIONS(27),
    [aux_sym__implied_opcode_token35] = ACTIONS(27),
    [aux_sym__implied_opcode_token36] = ACTIONS(27),
    [aux_sym__implied_opcode_token37] = ACTIONS(27),
    [aux_sym__relative_opcode_token1] = ACTIONS(31),
    [aux_sym__relative_opcode_token2] = ACTIONS(31),
    [aux_sym__relative_opcode_token3] = ACTIONS(31),
    [aux_sym__relative_opcode_token4] = ACTIONS(31),
    [aux_sym__relative_opcode_token5] = ACTIONS(31),
    [aux_sym__relative_opcode_token6] = ACTIONS(31),
    [aux_sym__relative_opcode_token7] = ACTIONS(31),
    [aux_sym__relative_opcode_token8] = ACTIONS(31),
    [aux_sym__relative_opcode_token9] = ACTIONS(31),
    [aux_sym__immediate_opcode_token1] = ACTIONS(33),
    [aux_sym__immediate_opcode_token2] = ACTIONS(33),
    [aux_sym__immediate_opcode_token3] = ACTIONS(35),
    [aux_sym__immediate_opcode_token4] = ACTIONS(33),
    [aux_sym__immediate_opcode_token5] = ACTIONS(35),
    [aux_sym__immediate_opcode_token6] = ACTIONS(35),
    [aux_sym__immediate_opcode_token7] = ACTIONS(33),
    [aux_sym__immediate_opcode_token8] = ACTIONS(33),
    [aux_sym__immediate_opcode_token9] = ACTIONS(35),
    [aux_sym__immediate_opcode_token10] = ACTIONS(35),
    [aux_sym__immediate_opcode_token11] = ACTIONS(33),
    [aux_sym__immediate_opcode_token12] = ACTIONS(33),
    [aux_sym__absolute_opcode_token1] = ACTIONS(37),
    [aux_sym__absolute_opcode_token2] = ACTIONS(39),
    [aux_sym__absolute_opcode_token3] = ACTIONS(37),
    [aux_sym__absolute_opcode_token4] = ACTIONS(39),
    [aux_sym__absolute_opcode_token5] = ACTIONS(39),
    [aux_sym__absolute_opcode_token6] = ACTIONS(39),
    [aux_sym__absolute_opcode_token7] = ACTIONS(39),
    [aux_sym__absolute_opcode_token8] = ACTIONS(39),
    [sym_cheap_local_label] = ACTIONS(41),
    [sym_local_label] = ACTIONS(43),
    [sym_global_label] = ACTIONS(45),
  },
  [4] = {
    [sym__reg_x] = STATE(31),
    [sym__reg_y] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(113),
    [anon_sym_DOTincbin] = ACTIONS(113),
    [anon_sym_DOTexport] = ACTIONS(113),
    [anon_sym_DOTimport] = ACTIONS(113),
    [anon_sym_DOTsegment] = ACTIONS(113),
    [anon_sym_DOTsection] = ACTIONS(113),
    [anon_sym_word] = ACTIONS(113),
    [anon_sym_DOTbyte] = ACTIONS(113),
    [anon_sym_DOTaddr] = ACTIONS(113),
    [anon_sym_DOTproc] = ACTIONS(113),
    [anon_sym_DOTendproc] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_LT_LT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(117),
    [aux_sym__implied_opcode_token1] = ACTIONS(113),
    [aux_sym__implied_opcode_token2] = ACTIONS(113),
    [aux_sym__implied_opcode_token3] = ACTIONS(113),
    [aux_sym__implied_opcode_token4] = ACTIONS(113),
    [aux_sym__implied_opcode_token5] = ACTIONS(113),
    [aux_sym__implied_opcode_token6] = ACTIONS(113),
    [aux_sym__implied_opcode_token7] = ACTIONS(113),
    [aux_sym__implied_opcode_token8] = ACTIONS(113),
    [aux_sym__implied_opcode_token9] = ACTIONS(113),
    [aux_sym__implied_opcode_token10] = ACTIONS(113),
    [aux_sym__implied_opcode_token11] = ACTIONS(113),
    [aux_sym__implied_opcode_token12] = ACTIONS(113),
    [aux_sym__implied_opcode_token13] = ACTIONS(113),
    [aux_sym__implied_opcode_token14] = ACTIONS(113),
    [aux_sym__implied_opcode_token15] = ACTIONS(113),
    [aux_sym__implied_opcode_token16] = ACTIONS(113),
    [aux_sym__implied_opcode_token17] = ACTIONS(113),
    [aux_sym__implied_opcode_token18] = ACTIONS(113),
    [aux_sym__implied_opcode_token19] = ACTIONS(113),
    [aux_sym__implied_opcode_token20] = ACTIONS(113),
    [aux_sym__implied_opcode_token21] = ACTIONS(113),
    [aux_sym__implied_opcode_token22] = ACTIONS(113),
    [aux_sym__implied_opcode_token23] = ACTIONS(113),
    [aux_sym__implied_opcode_token24] = ACTIONS(113),
    [aux_sym__implied_opcode_token25] = ACTIONS(113),
    [aux_sym__implied_opcode_token26] = ACTIONS(113),
    [aux_sym__implied_opcode_token27] = ACTIONS(113),
    [aux_sym__implied_opcode_token28] = ACTIONS(113),
    [aux_sym__implied_opcode_token29] = ACTIONS(113),
    [aux_sym__implied_opcode_token30] = ACTIONS(113),
    [aux_sym__implied_opcode_token31] = ACTIONS(113),
    [aux_sym__implied_opcode_token32] = ACTIONS(113),
    [aux_sym__implied_opcode_token33] = ACTIONS(113),
    [aux_sym__implied_opcode_token34] = ACTIONS(113),
    [aux_sym__implied_opcode_token35] = ACTIONS(113),
    [aux_sym__implied_opcode_token36] = ACTIONS(113),
    [aux_sym__implied_opcode_token37] = ACTIONS(113),
    [aux_sym__relative_opcode_token1] = ACTIONS(113),
    [aux_sym__relative_opcode_token2] = ACTIONS(113),
    [aux_sym__relative_opcode_token3] = ACTIONS(113),
    [aux_sym__relative_opcode_token4] = ACTIONS(113),
    [aux_sym__relative_opcode_token5] = ACTIONS(113),
    [aux_sym__relative_opcode_token6] = ACTIONS(113),
    [aux_sym__relative_opcode_token7] = ACTIONS(113),
    [aux_sym__relative_opcode_token8] = ACTIONS(113),
    [aux_sym__relative_opcode_token9] = ACTIONS(113),
    [aux_sym__immediate_opcode_token1] = ACTIONS(113),
    [aux_sym__immediate_opcode_token2] = ACTIONS(113),
    [aux_sym__immediate_opcode_token3] = ACTIONS(113),
    [aux_sym__immediate_opcode_token4] = ACTIONS(113),
    [aux_sym__immediate_opcode_token5] = ACTIONS(113),
    [aux_sym__immediate_opcode_token6] = ACTIONS(113),
    [aux_sym__immediate_opcode_token7] = ACTIONS(113),
    [aux_sym__immediate_opcode_token8] = ACTIONS(113),
    [aux_sym__immediate_opcode_token9] = ACTIONS(113),
    [aux_sym__immediate_opcode_token10] = ACTIONS(113),
    [aux_sym__immediate_opcode_token11] = ACTIONS(113),
    [aux_sym__immediate_opcode_token12] = ACTIONS(113),
    [aux_sym__absolute_opcode_token1] = ACTIONS(113),
    [aux_sym__absolute_opcode_token2] = ACTIONS(113),
    [aux_sym__absolute_opcode_token3] = ACTIONS(113),
    [aux_sym__absolute_opcode_token4] = ACTIONS(113),
    [aux_sym__absolute_opcode_token5] = ACTIONS(113),
    [aux_sym__absolute_opcode_token6] = ACTIONS(113),
    [aux_sym__absolute_opcode_token7] = ACTIONS(113),
    [aux_sym__absolute_opcode_token8] = ACTIONS(113),
    [sym_cheap_local_label] = ACTIONS(111),
    [sym_local_label] = ACTIONS(113),
    [sym_global_label] = ACTIONS(113),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(121),
    [anon_sym_DOTincbin] = ACTIONS(121),
    [anon_sym_DOTexport] = ACTIONS(121),
    [anon_sym_DOTimport] = ACTIONS(121),
    [anon_sym_DOTsegment] = ACTIONS(121),
    [anon_sym_DOTsection] = ACTIONS(121),
    [anon_sym_word] = ACTIONS(121),
    [anon_sym_DOTbyte] = ACTIONS(121),
    [anon_sym_DOTaddr] = ACTIONS(121),
    [anon_sym_DOTproc] = ACTIONS(121),
    [anon_sym_DOTendproc] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_LT_LT] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(119),
    [anon_sym_AMP] = ACTIONS(119),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(119),
    [aux_sym__implied_opcode_token1] = ACTIONS(121),
    [aux_sym__implied_opcode_token2] = ACTIONS(121),
    [aux_sym__implied_opcode_token3] = ACTIONS(121),
    [aux_sym__implied_opcode_token4] = ACTIONS(121),
    [aux_sym__implied_opcode_token5] = ACTIONS(121),
    [aux_sym__implied_opcode_token6] = ACTIONS(121),
    [aux_sym__implied_opcode_token7] = ACTIONS(121),
    [aux_sym__implied_opcode_token8] = ACTIONS(121),
    [aux_sym__implied_opcode_token9] = ACTIONS(121),
    [aux_sym__implied_opcode_token10] = ACTIONS(121),
    [aux_sym__implied_opcode_token11] = ACTIONS(121),
    [aux_sym__implied_opcode_token12] = ACTIONS(121),
    [aux_sym__implied_opcode_token13] = ACTIONS(121),
    [aux_sym__implied_opcode_token14] = ACTIONS(121),
    [aux_sym__implied_opcode_token15] = ACTIONS(121),
    [aux_sym__implied_opcode_token16] = ACTIONS(121),
    [aux_sym__implied_opcode_token17] = ACTIONS(121),
    [aux_sym__implied_opcode_token18] = ACTIONS(121),
    [aux_sym__implied_opcode_token19] = ACTIONS(121),
    [aux_sym__implied_opcode_token20] = ACTIONS(121),
    [aux_sym__implied_opcode_token21] = ACTIONS(121),
    [aux_sym__implied_opcode_token22] = ACTIONS(121),
    [aux_sym__implied_opcode_token23] = ACTIONS(121),
    [aux_sym__implied_opcode_token24] = ACTIONS(121),
    [aux_sym__implied_opcode_token25] = ACTIONS(121),
    [aux_sym__implied_opcode_token26] = ACTIONS(121),
    [aux_sym__implied_opcode_token27] = ACTIONS(121),
    [aux_sym__implied_opcode_token28] = ACTIONS(121),
    [aux_sym__implied_opcode_token29] = ACTIONS(121),
    [aux_sym__implied_opcode_token30] = ACTIONS(121),
    [aux_sym__implied_opcode_token31] = ACTIONS(121),
    [aux_sym__implied_opcode_token32] = ACTIONS(121),
    [aux_sym__implied_opcode_token33] = ACTIONS(121),
    [aux_sym__implied_opcode_token34] = ACTIONS(121),
    [aux_sym__implied_opcode_token35] = ACTIONS(121),
    [aux_sym__implied_opcode_token36] = ACTIONS(121),
    [aux_sym__implied_opcode_token37] = ACTIONS(121),
    [aux_sym__relative_opcode_token1] = ACTIONS(121),
    [aux_sym__relative_opcode_token2] = ACTIONS(121),
    [aux_sym__relative_opcode_token3] = ACTIONS(121),
    [aux_sym__relative_opcode_token4] = ACTIONS(121),
    [aux_sym__relative_opcode_token5] = ACTIONS(121),
    [aux_sym__relative_opcode_token6] = ACTIONS(121),
    [aux_sym__relative_opcode_token7] = ACTIONS(121),
    [aux_sym__relative_opcode_token8] = ACTIONS(121),
    [aux_sym__relative_opcode_token9] = ACTIONS(121),
    [aux_sym__immediate_opcode_token1] = ACTIONS(121),
    [aux_sym__immediate_opcode_token2] = ACTIONS(121),
    [aux_sym__immediate_opcode_token3] = ACTIONS(121),
    [aux_sym__immediate_opcode_token4] = ACTIONS(121),
    [aux_sym__immediate_opcode_token5] = ACTIONS(121),
    [aux_sym__immediate_opcode_token6] = ACTIONS(121),
    [aux_sym__immediate_opcode_token7] = ACTIONS(121),
    [aux_sym__immediate_opcode_token8] = ACTIONS(121),
    [aux_sym__immediate_opcode_token9] = ACTIONS(121),
    [aux_sym__immediate_opcode_token10] = ACTIONS(121),
    [aux_sym__immediate_opcode_token11] = ACTIONS(121),
    [aux_sym__immediate_opcode_token12] = ACTIONS(121),
    [aux_sym__absolute_opcode_token1] = ACTIONS(121),
    [aux_sym__absolute_opcode_token2] = ACTIONS(121),
    [aux_sym__absolute_opcode_token3] = ACTIONS(121),
    [aux_sym__absolute_opcode_token4] = ACTIONS(121),
    [aux_sym__absolute_opcode_token5] = ACTIONS(121),
    [aux_sym__absolute_opcode_token6] = ACTIONS(121),
    [aux_sym__absolute_opcode_token7] = ACTIONS(121),
    [aux_sym__absolute_opcode_token8] = ACTIONS(121),
    [sym_cheap_local_label] = ACTIONS(119),
    [sym_local_label] = ACTIONS(121),
    [sym_global_label] = ACTIONS(121),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(125),
    [anon_sym_DOTincbin] = ACTIONS(125),
    [anon_sym_DOTexport] = ACTIONS(125),
    [anon_sym_DOTimport] = ACTIONS(125),
    [anon_sym_DOTsegment] = ACTIONS(125),
    [anon_sym_DOTsection] = ACTIONS(125),
    [anon_sym_word] = ACTIONS(125),
    [anon_sym_DOTbyte] = ACTIONS(125),
    [anon_sym_DOTaddr] = ACTIONS(125),
    [anon_sym_DOTproc] = ACTIONS(125),
    [anon_sym_DOTendproc] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_LT_LT] = ACTIONS(123),
    [anon_sym_GT_GT] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [aux_sym__implied_opcode_token1] = ACTIONS(125),
    [aux_sym__implied_opcode_token2] = ACTIONS(125),
    [aux_sym__implied_opcode_token3] = ACTIONS(125),
    [aux_sym__implied_opcode_token4] = ACTIONS(125),
    [aux_sym__implied_opcode_token5] = ACTIONS(125),
    [aux_sym__implied_opcode_token6] = ACTIONS(125),
    [aux_sym__implied_opcode_token7] = ACTIONS(125),
    [aux_sym__implied_opcode_token8] = ACTIONS(125),
    [aux_sym__implied_opcode_token9] = ACTIONS(125),
    [aux_sym__implied_opcode_token10] = ACTIONS(125),
    [aux_sym__implied_opcode_token11] = ACTIONS(125),
    [aux_sym__implied_opcode_token12] = ACTIONS(125),
    [aux_sym__implied_opcode_token13] = ACTIONS(125),
    [aux_sym__implied_opcode_token14] = ACTIONS(125),
    [aux_sym__implied_opcode_token15] = ACTIONS(125),
    [aux_sym__implied_opcode_token16] = ACTIONS(125),
    [aux_sym__implied_opcode_token17] = ACTIONS(125),
    [aux_sym__implied_opcode_token18] = ACTIONS(125),
    [aux_sym__implied_opcode_token19] = ACTIONS(125),
    [aux_sym__implied_opcode_token20] = ACTIONS(125),
    [aux_sym__implied_opcode_token21] = ACTIONS(125),
    [aux_sym__implied_opcode_token22] = ACTIONS(125),
    [aux_sym__implied_opcode_token23] = ACTIONS(125),
    [aux_sym__implied_opcode_token24] = ACTIONS(125),
    [aux_sym__implied_opcode_token25] = ACTIONS(125),
    [aux_sym__implied_opcode_token26] = ACTIONS(125),
    [aux_sym__implied_opcode_token27] = ACTIONS(125),
    [aux_sym__implied_opcode_token28] = ACTIONS(125),
    [aux_sym__implied_opcode_token29] = ACTIONS(125),
    [aux_sym__implied_opcode_token30] = ACTIONS(125),
    [aux_sym__implied_opcode_token31] = ACTIONS(125),
    [aux_sym__implied_opcode_token32] = ACTIONS(125),
    [aux_sym__implied_opcode_token33] = ACTIONS(125),
    [aux_sym__implied_opcode_token34] = ACTIONS(125),
    [aux_sym__implied_opcode_token35] = ACTIONS(125),
    [aux_sym__implied_opcode_token36] = ACTIONS(125),
    [aux_sym__implied_opcode_token37] = ACTIONS(125),
    [aux_sym__relative_opcode_token1] = ACTIONS(125),
    [aux_sym__relative_opcode_token2] = ACTIONS(125),
    [aux_sym__relative_opcode_token3] = ACTIONS(125),
    [aux_sym__relative_opcode_token4] = ACTIONS(125),
    [aux_sym__relative_opcode_token5] = ACTIONS(125),
    [aux_sym__relative_opcode_token6] = ACTIONS(125),
    [aux_sym__relative_opcode_token7] = ACTIONS(125),
    [aux_sym__relative_opcode_token8] = ACTIONS(125),
    [aux_sym__relative_opcode_token9] = ACTIONS(125),
    [aux_sym__immediate_opcode_token1] = ACTIONS(125),
    [aux_sym__immediate_opcode_token2] = ACTIONS(125),
    [aux_sym__immediate_opcode_token3] = ACTIONS(125),
    [aux_sym__immediate_opcode_token4] = ACTIONS(125),
    [aux_sym__immediate_opcode_token5] = ACTIONS(125),
    [aux_sym__immediate_opcode_token6] = ACTIONS(125),
    [aux_sym__immediate_opcode_token7] = ACTIONS(125),
    [aux_sym__immediate_opcode_token8] = ACTIONS(125),
    [aux_sym__immediate_opcode_token9] = ACTIONS(125),
    [aux_sym__immediate_opcode_token10] = ACTIONS(125),
    [aux_sym__immediate_opcode_token11] = ACTIONS(125),
    [aux_sym__immediate_opcode_token12] = ACTIONS(125),
    [aux_sym__absolute_opcode_token1] = ACTIONS(125),
    [aux_sym__absolute_opcode_token2] = ACTIONS(125),
    [aux_sym__absolute_opcode_token3] = ACTIONS(125),
    [aux_sym__absolute_opcode_token4] = ACTIONS(125),
    [aux_sym__absolute_opcode_token5] = ACTIONS(125),
    [aux_sym__absolute_opcode_token6] = ACTIONS(125),
    [aux_sym__absolute_opcode_token7] = ACTIONS(125),
    [aux_sym__absolute_opcode_token8] = ACTIONS(125),
    [sym_cheap_local_label] = ACTIONS(123),
    [sym_local_label] = ACTIONS(125),
    [sym_global_label] = ACTIONS(125),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(129),
    [anon_sym_DOTincbin] = ACTIONS(129),
    [anon_sym_DOTexport] = ACTIONS(129),
    [anon_sym_DOTimport] = ACTIONS(129),
    [anon_sym_DOTsegment] = ACTIONS(129),
    [anon_sym_DOTsection] = ACTIONS(129),
    [anon_sym_word] = ACTIONS(129),
    [anon_sym_DOTbyte] = ACTIONS(129),
    [anon_sym_DOTaddr] = ACTIONS(129),
    [anon_sym_DOTproc] = ACTIONS(129),
    [anon_sym_DOTendproc] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_LT_LT] = ACTIONS(127),
    [anon_sym_GT_GT] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [aux_sym__implied_opcode_token1] = ACTIONS(129),
    [aux_sym__implied_opcode_token2] = ACTIONS(129),
    [aux_sym__implied_opcode_token3] = ACTIONS(129),
    [aux_sym__implied_opcode_token4] = ACTIONS(129),
    [aux_sym__implied_opcode_token5] = ACTIONS(129),
    [aux_sym__implied_opcode_token6] = ACTIONS(129),
    [aux_sym__implied_opcode_token7] = ACTIONS(129),
    [aux_sym__implied_opcode_token8] = ACTIONS(129),
    [aux_sym__implied_opcode_token9] = ACTIONS(129),
    [aux_sym__implied_opcode_token10] = ACTIONS(129),
    [aux_sym__implied_opcode_token11] = ACTIONS(129),
    [aux_sym__implied_opcode_token12] = ACTIONS(129),
    [aux_sym__implied_opcode_token13] = ACTIONS(129),
    [aux_sym__implied_opcode_token14] = ACTIONS(129),
    [aux_sym__implied_opcode_token15] = ACTIONS(129),
    [aux_sym__implied_opcode_token16] = ACTIONS(129),
    [aux_sym__implied_opcode_token17] = ACTIONS(129),
    [aux_sym__implied_opcode_token18] = ACTIONS(129),
    [aux_sym__implied_opcode_token19] = ACTIONS(129),
    [aux_sym__implied_opcode_token20] = ACTIONS(129),
    [aux_sym__implied_opcode_token21] = ACTIONS(129),
    [aux_sym__implied_opcode_token22] = ACTIONS(129),
    [aux_sym__implied_opcode_token23] = ACTIONS(129),
    [aux_sym__implied_opcode_token24] = ACTIONS(129),
    [aux_sym__implied_opcode_token25] = ACTIONS(129),
    [aux_sym__implied_opcode_token26] = ACTIONS(129),
    [aux_sym__implied_opcode_token27] = ACTIONS(129),
    [aux_sym__implied_opcode_token28] = ACTIONS(129),
    [aux_sym__implied_opcode_token29] = ACTIONS(129),
    [aux_sym__implied_opcode_token30] = ACTIONS(129),
    [aux_sym__implied_opcode_token31] = ACTIONS(129),
    [aux_sym__implied_opcode_token32] = ACTIONS(129),
    [aux_sym__implied_opcode_token33] = ACTIONS(129),
    [aux_sym__implied_opcode_token34] = ACTIONS(129),
    [aux_sym__implied_opcode_token35] = ACTIONS(129),
    [aux_sym__implied_opcode_token36] = ACTIONS(129),
    [aux_sym__implied_opcode_token37] = ACTIONS(129),
    [aux_sym__relative_opcode_token1] = ACTIONS(129),
    [aux_sym__relative_opcode_token2] = ACTIONS(129),
    [aux_sym__relative_opcode_token3] = ACTIONS(129),
    [aux_sym__relative_opcode_token4] = ACTIONS(129),
    [aux_sym__relative_opcode_token5] = ACTIONS(129),
    [aux_sym__relative_opcode_token6] = ACTIONS(129),
    [aux_sym__relative_opcode_token7] = ACTIONS(129),
    [aux_sym__relative_opcode_token8] = ACTIONS(129),
    [aux_sym__relative_opcode_token9] = ACTIONS(129),
    [aux_sym__immediate_opcode_token1] = ACTIONS(129),
    [aux_sym__immediate_opcode_token2] = ACTIONS(129),
    [aux_sym__immediate_opcode_token3] = ACTIONS(129),
    [aux_sym__immediate_opcode_token4] = ACTIONS(129),
    [aux_sym__immediate_opcode_token5] = ACTIONS(129),
    [aux_sym__immediate_opcode_token6] = ACTIONS(129),
    [aux_sym__immediate_opcode_token7] = ACTIONS(129),
    [aux_sym__immediate_opcode_token8] = ACTIONS(129),
    [aux_sym__immediate_opcode_token9] = ACTIONS(129),
    [aux_sym__immediate_opcode_token10] = ACTIONS(129),
    [aux_sym__immediate_opcode_token11] = ACTIONS(129),
    [aux_sym__immediate_opcode_token12] = ACTIONS(129),
    [aux_sym__absolute_opcode_token1] = ACTIONS(129),
    [aux_sym__absolute_opcode_token2] = ACTIONS(129),
    [aux_sym__absolute_opcode_token3] = ACTIONS(129),
    [aux_sym__absolute_opcode_token4] = ACTIONS(129),
    [aux_sym__absolute_opcode_token5] = ACTIONS(129),
    [aux_sym__absolute_opcode_token6] = ACTIONS(129),
    [aux_sym__absolute_opcode_token7] = ACTIONS(129),
    [aux_sym__absolute_opcode_token8] = ACTIONS(129),
    [sym_cheap_local_label] = ACTIONS(127),
    [sym_local_label] = ACTIONS(129),
    [sym_global_label] = ACTIONS(129),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(133),
    [anon_sym_DOTincbin] = ACTIONS(133),
    [anon_sym_DOTexport] = ACTIONS(133),
    [anon_sym_DOTimport] = ACTIONS(133),
    [anon_sym_DOTsegment] = ACTIONS(133),
    [anon_sym_DOTsection] = ACTIONS(133),
    [anon_sym_word] = ACTIONS(133),
    [anon_sym_DOTbyte] = ACTIONS(133),
    [anon_sym_DOTaddr] = ACTIONS(133),
    [anon_sym_DOTproc] = ACTIONS(133),
    [anon_sym_DOTendproc] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_LT_LT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(115),
    [aux_sym__implied_opcode_token1] = ACTIONS(133),
    [aux_sym__implied_opcode_token2] = ACTIONS(133),
    [aux_sym__implied_opcode_token3] = ACTIONS(133),
    [aux_sym__implied_opcode_token4] = ACTIONS(133),
    [aux_sym__implied_opcode_token5] = ACTIONS(133),
    [aux_sym__implied_opcode_token6] = ACTIONS(133),
    [aux_sym__implied_opcode_token7] = ACTIONS(133),
    [aux_sym__implied_opcode_token8] = ACTIONS(133),
    [aux_sym__implied_opcode_token9] = ACTIONS(133),
    [aux_sym__implied_opcode_token10] = ACTIONS(133),
    [aux_sym__implied_opcode_token11] = ACTIONS(133),
    [aux_sym__implied_opcode_token12] = ACTIONS(133),
    [aux_sym__implied_opcode_token13] = ACTIONS(133),
    [aux_sym__implied_opcode_token14] = ACTIONS(133),
    [aux_sym__implied_opcode_token15] = ACTIONS(133),
    [aux_sym__implied_opcode_token16] = ACTIONS(133),
    [aux_sym__implied_opcode_token17] = ACTIONS(133),
    [aux_sym__implied_opcode_token18] = ACTIONS(133),
    [aux_sym__implied_opcode_token19] = ACTIONS(133),
    [aux_sym__implied_opcode_token20] = ACTIONS(133),
    [aux_sym__implied_opcode_token21] = ACTIONS(133),
    [aux_sym__implied_opcode_token22] = ACTIONS(133),
    [aux_sym__implied_opcode_token23] = ACTIONS(133),
    [aux_sym__implied_opcode_token24] = ACTIONS(133),
    [aux_sym__implied_opcode_token25] = ACTIONS(133),
    [aux_sym__implied_opcode_token26] = ACTIONS(133),
    [aux_sym__implied_opcode_token27] = ACTIONS(133),
    [aux_sym__implied_opcode_token28] = ACTIONS(133),
    [aux_sym__implied_opcode_token29] = ACTIONS(133),
    [aux_sym__implied_opcode_token30] = ACTIONS(133),
    [aux_sym__implied_opcode_token31] = ACTIONS(133),
    [aux_sym__implied_opcode_token32] = ACTIONS(133),
    [aux_sym__implied_opcode_token33] = ACTIONS(133),
    [aux_sym__implied_opcode_token34] = ACTIONS(133),
    [aux_sym__implied_opcode_token35] = ACTIONS(133),
    [aux_sym__implied_opcode_token36] = ACTIONS(133),
    [aux_sym__implied_opcode_token37] = ACTIONS(133),
    [aux_sym__relative_opcode_token1] = ACTIONS(133),
    [aux_sym__relative_opcode_token2] = ACTIONS(133),
    [aux_sym__relative_opcode_token3] = ACTIONS(133),
    [aux_sym__relative_opcode_token4] = ACTIONS(133),
    [aux_sym__relative_opcode_token5] = ACTIONS(133),
    [aux_sym__relative_opcode_token6] = ACTIONS(133),
    [aux_sym__relative_opcode_token7] = ACTIONS(133),
    [aux_sym__relative_opcode_token8] = ACTIONS(133),
    [aux_sym__relative_opcode_token9] = ACTIONS(133),
    [aux_sym__immediate_opcode_token1] = ACTIONS(133),
    [aux_sym__immediate_opcode_token2] = ACTIONS(133),
    [aux_sym__immediate_opcode_token3] = ACTIONS(133),
    [aux_sym__immediate_opcode_token4] = ACTIONS(133),
    [aux_sym__immediate_opcode_token5] = ACTIONS(133),
    [aux_sym__immediate_opcode_token6] = ACTIONS(133),
    [aux_sym__immediate_opcode_token7] = ACTIONS(133),
    [aux_sym__immediate_opcode_token8] = ACTIONS(133),
    [aux_sym__immediate_opcode_token9] = ACTIONS(133),
    [aux_sym__immediate_opcode_token10] = ACTIONS(133),
    [aux_sym__immediate_opcode_token11] = ACTIONS(133),
    [aux_sym__immediate_opcode_token12] = ACTIONS(133),
    [aux_sym__absolute_opcode_token1] = ACTIONS(133),
    [aux_sym__absolute_opcode_token2] = ACTIONS(133),
    [aux_sym__absolute_opcode_token3] = ACTIONS(133),
    [aux_sym__absolute_opcode_token4] = ACTIONS(133),
    [aux_sym__absolute_opcode_token5] = ACTIONS(133),
    [aux_sym__absolute_opcode_token6] = ACTIONS(133),
    [aux_sym__absolute_opcode_token7] = ACTIONS(133),
    [aux_sym__absolute_opcode_token8] = ACTIONS(133),
    [sym_cheap_local_label] = ACTIONS(131),
    [sym_local_label] = ACTIONS(133),
    [sym_global_label] = ACTIONS(133),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(137),
    [anon_sym_DOTincbin] = ACTIONS(137),
    [anon_sym_DOTexport] = ACTIONS(137),
    [anon_sym_DOTimport] = ACTIONS(137),
    [anon_sym_DOTsegment] = ACTIONS(137),
    [anon_sym_DOTsection] = ACTIONS(137),
    [anon_sym_word] = ACTIONS(137),
    [anon_sym_DOTbyte] = ACTIONS(137),
    [anon_sym_DOTaddr] = ACTIONS(137),
    [anon_sym_DOTproc] = ACTIONS(137),
    [anon_sym_DOTendproc] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_LT_LT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(115),
    [aux_sym__implied_opcode_token1] = ACTIONS(137),
    [aux_sym__implied_opcode_token2] = ACTIONS(137),
    [aux_sym__implied_opcode_token3] = ACTIONS(137),
    [aux_sym__implied_opcode_token4] = ACTIONS(137),
    [aux_sym__implied_opcode_token5] = ACTIONS(137),
    [aux_sym__implied_opcode_token6] = ACTIONS(137),
    [aux_sym__implied_opcode_token7] = ACTIONS(137),
    [aux_sym__implied_opcode_token8] = ACTIONS(137),
    [aux_sym__implied_opcode_token9] = ACTIONS(137),
    [aux_sym__implied_opcode_token10] = ACTIONS(137),
    [aux_sym__implied_opcode_token11] = ACTIONS(137),
    [aux_sym__implied_opcode_token12] = ACTIONS(137),
    [aux_sym__implied_opcode_token13] = ACTIONS(137),
    [aux_sym__implied_opcode_token14] = ACTIONS(137),
    [aux_sym__implied_opcode_token15] = ACTIONS(137),
    [aux_sym__implied_opcode_token16] = ACTIONS(137),
    [aux_sym__implied_opcode_token17] = ACTIONS(137),
    [aux_sym__implied_opcode_token18] = ACTIONS(137),
    [aux_sym__implied_opcode_token19] = ACTIONS(137),
    [aux_sym__implied_opcode_token20] = ACTIONS(137),
    [aux_sym__implied_opcode_token21] = ACTIONS(137),
    [aux_sym__implied_opcode_token22] = ACTIONS(137),
    [aux_sym__implied_opcode_token23] = ACTIONS(137),
    [aux_sym__implied_opcode_token24] = ACTIONS(137),
    [aux_sym__implied_opcode_token25] = ACTIONS(137),
    [aux_sym__implied_opcode_token26] = ACTIONS(137),
    [aux_sym__implied_opcode_token27] = ACTIONS(137),
    [aux_sym__implied_opcode_token28] = ACTIONS(137),
    [aux_sym__implied_opcode_token29] = ACTIONS(137),
    [aux_sym__implied_opcode_token30] = ACTIONS(137),
    [aux_sym__implied_opcode_token31] = ACTIONS(137),
    [aux_sym__implied_opcode_token32] = ACTIONS(137),
    [aux_sym__implied_opcode_token33] = ACTIONS(137),
    [aux_sym__implied_opcode_token34] = ACTIONS(137),
    [aux_sym__implied_opcode_token35] = ACTIONS(137),
    [aux_sym__implied_opcode_token36] = ACTIONS(137),
    [aux_sym__implied_opcode_token37] = ACTIONS(137),
    [aux_sym__relative_opcode_token1] = ACTIONS(137),
    [aux_sym__relative_opcode_token2] = ACTIONS(137),
    [aux_sym__relative_opcode_token3] = ACTIONS(137),
    [aux_sym__relative_opcode_token4] = ACTIONS(137),
    [aux_sym__relative_opcode_token5] = ACTIONS(137),
    [aux_sym__relative_opcode_token6] = ACTIONS(137),
    [aux_sym__relative_opcode_token7] = ACTIONS(137),
    [aux_sym__relative_opcode_token8] = ACTIONS(137),
    [aux_sym__relative_opcode_token9] = ACTIONS(137),
    [aux_sym__immediate_opcode_token1] = ACTIONS(137),
    [aux_sym__immediate_opcode_token2] = ACTIONS(137),
    [aux_sym__immediate_opcode_token3] = ACTIONS(137),
    [aux_sym__immediate_opcode_token4] = ACTIONS(137),
    [aux_sym__immediate_opcode_token5] = ACTIONS(137),
    [aux_sym__immediate_opcode_token6] = ACTIONS(137),
    [aux_sym__immediate_opcode_token7] = ACTIONS(137),
    [aux_sym__immediate_opcode_token8] = ACTIONS(137),
    [aux_sym__immediate_opcode_token9] = ACTIONS(137),
    [aux_sym__immediate_opcode_token10] = ACTIONS(137),
    [aux_sym__immediate_opcode_token11] = ACTIONS(137),
    [aux_sym__immediate_opcode_token12] = ACTIONS(137),
    [aux_sym__absolute_opcode_token1] = ACTIONS(137),
    [aux_sym__absolute_opcode_token2] = ACTIONS(137),
    [aux_sym__absolute_opcode_token3] = ACTIONS(137),
    [aux_sym__absolute_opcode_token4] = ACTIONS(137),
    [aux_sym__absolute_opcode_token5] = ACTIONS(137),
    [aux_sym__absolute_opcode_token6] = ACTIONS(137),
    [aux_sym__absolute_opcode_token7] = ACTIONS(137),
    [aux_sym__absolute_opcode_token8] = ACTIONS(137),
    [sym_cheap_local_label] = ACTIONS(135),
    [sym_local_label] = ACTIONS(137),
    [sym_global_label] = ACTIONS(137),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(141),
    [anon_sym_DOTincbin] = ACTIONS(141),
    [anon_sym_DOTexport] = ACTIONS(141),
    [anon_sym_DOTimport] = ACTIONS(141),
    [anon_sym_DOTsegment] = ACTIONS(141),
    [anon_sym_DOTsection] = ACTIONS(141),
    [anon_sym_word] = ACTIONS(141),
    [anon_sym_DOTbyte] = ACTIONS(141),
    [anon_sym_DOTaddr] = ACTIONS(141),
    [anon_sym_DOTproc] = ACTIONS(141),
    [anon_sym_DOTendproc] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_LT_LT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(115),
    [aux_sym__implied_opcode_token1] = ACTIONS(141),
    [aux_sym__implied_opcode_token2] = ACTIONS(141),
    [aux_sym__implied_opcode_token3] = ACTIONS(141),
    [aux_sym__implied_opcode_token4] = ACTIONS(141),
    [aux_sym__implied_opcode_token5] = ACTIONS(141),
    [aux_sym__implied_opcode_token6] = ACTIONS(141),
    [aux_sym__implied_opcode_token7] = ACTIONS(141),
    [aux_sym__implied_opcode_token8] = ACTIONS(141),
    [aux_sym__implied_opcode_token9] = ACTIONS(141),
    [aux_sym__implied_opcode_token10] = ACTIONS(141),
    [aux_sym__implied_opcode_token11] = ACTIONS(141),
    [aux_sym__implied_opcode_token12] = ACTIONS(141),
    [aux_sym__implied_opcode_token13] = ACTIONS(141),
    [aux_sym__implied_opcode_token14] = ACTIONS(141),
    [aux_sym__implied_opcode_token15] = ACTIONS(141),
    [aux_sym__implied_opcode_token16] = ACTIONS(141),
    [aux_sym__implied_opcode_token17] = ACTIONS(141),
    [aux_sym__implied_opcode_token18] = ACTIONS(141),
    [aux_sym__implied_opcode_token19] = ACTIONS(141),
    [aux_sym__implied_opcode_token20] = ACTIONS(141),
    [aux_sym__implied_opcode_token21] = ACTIONS(141),
    [aux_sym__implied_opcode_token22] = ACTIONS(141),
    [aux_sym__implied_opcode_token23] = ACTIONS(141),
    [aux_sym__implied_opcode_token24] = ACTIONS(141),
    [aux_sym__implied_opcode_token25] = ACTIONS(141),
    [aux_sym__implied_opcode_token26] = ACTIONS(141),
    [aux_sym__implied_opcode_token27] = ACTIONS(141),
    [aux_sym__implied_opcode_token28] = ACTIONS(141),
    [aux_sym__implied_opcode_token29] = ACTIONS(141),
    [aux_sym__implied_opcode_token30] = ACTIONS(141),
    [aux_sym__implied_opcode_token31] = ACTIONS(141),
    [aux_sym__implied_opcode_token32] = ACTIONS(141),
    [aux_sym__implied_opcode_token33] = ACTIONS(141),
    [aux_sym__implied_opcode_token34] = ACTIONS(141),
    [aux_sym__implied_opcode_token35] = ACTIONS(141),
    [aux_sym__implied_opcode_token36] = ACTIONS(141),
    [aux_sym__implied_opcode_token37] = ACTIONS(141),
    [aux_sym__relative_opcode_token1] = ACTIONS(141),
    [aux_sym__relative_opcode_token2] = ACTIONS(141),
    [aux_sym__relative_opcode_token3] = ACTIONS(141),
    [aux_sym__relative_opcode_token4] = ACTIONS(141),
    [aux_sym__relative_opcode_token5] = ACTIONS(141),
    [aux_sym__relative_opcode_token6] = ACTIONS(141),
    [aux_sym__relative_opcode_token7] = ACTIONS(141),
    [aux_sym__relative_opcode_token8] = ACTIONS(141),
    [aux_sym__relative_opcode_token9] = ACTIONS(141),
    [aux_sym__immediate_opcode_token1] = ACTIONS(141),
    [aux_sym__immediate_opcode_token2] = ACTIONS(141),
    [aux_sym__immediate_opcode_token3] = ACTIONS(141),
    [aux_sym__immediate_opcode_token4] = ACTIONS(141),
    [aux_sym__immediate_opcode_token5] = ACTIONS(141),
    [aux_sym__immediate_opcode_token6] = ACTIONS(141),
    [aux_sym__immediate_opcode_token7] = ACTIONS(141),
    [aux_sym__immediate_opcode_token8] = ACTIONS(141),
    [aux_sym__immediate_opcode_token9] = ACTIONS(141),
    [aux_sym__immediate_opcode_token10] = ACTIONS(141),
    [aux_sym__immediate_opcode_token11] = ACTIONS(141),
    [aux_sym__immediate_opcode_token12] = ACTIONS(141),
    [aux_sym__absolute_opcode_token1] = ACTIONS(141),
    [aux_sym__absolute_opcode_token2] = ACTIONS(141),
    [aux_sym__absolute_opcode_token3] = ACTIONS(141),
    [aux_sym__absolute_opcode_token4] = ACTIONS(141),
    [aux_sym__absolute_opcode_token5] = ACTIONS(141),
    [aux_sym__absolute_opcode_token6] = ACTIONS(141),
    [aux_sym__absolute_opcode_token7] = ACTIONS(141),
    [aux_sym__absolute_opcode_token8] = ACTIONS(141),
    [sym_cheap_local_label] = ACTIONS(139),
    [sym_local_label] = ACTIONS(141),
    [sym_global_label] = ACTIONS(141),
  },
  [11] = {
    [aux_sym__byte_list] = STATE(12),
    [sym__byte_literal] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(145),
    [anon_sym_DOTincbin] = ACTIONS(145),
    [anon_sym_DOTexport] = ACTIONS(145),
    [anon_sym_DOTimport] = ACTIONS(145),
    [anon_sym_DOTsegment] = ACTIONS(145),
    [anon_sym_DOTsection] = ACTIONS(145),
    [anon_sym_word] = ACTIONS(145),
    [anon_sym_DOTbyte] = ACTIONS(145),
    [anon_sym_DOTaddr] = ACTIONS(145),
    [anon_sym_DOTproc] = ACTIONS(145),
    [anon_sym_DOTendproc] = ACTIONS(145),
    [sym_num_literal] = ACTIONS(147),
    [sym_char_literal] = ACTIONS(147),
    [aux_sym__implied_opcode_token1] = ACTIONS(145),
    [aux_sym__implied_opcode_token2] = ACTIONS(145),
    [aux_sym__implied_opcode_token3] = ACTIONS(145),
    [aux_sym__implied_opcode_token4] = ACTIONS(145),
    [aux_sym__implied_opcode_token5] = ACTIONS(145),
    [aux_sym__implied_opcode_token6] = ACTIONS(145),
    [aux_sym__implied_opcode_token7] = ACTIONS(145),
    [aux_sym__implied_opcode_token8] = ACTIONS(145),
    [aux_sym__implied_opcode_token9] = ACTIONS(145),
    [aux_sym__implied_opcode_token10] = ACTIONS(145),
    [aux_sym__implied_opcode_token11] = ACTIONS(145),
    [aux_sym__implied_opcode_token12] = ACTIONS(145),
    [aux_sym__implied_opcode_token13] = ACTIONS(145),
    [aux_sym__implied_opcode_token14] = ACTIONS(145),
    [aux_sym__implied_opcode_token15] = ACTIONS(145),
    [aux_sym__implied_opcode_token16] = ACTIONS(145),
    [aux_sym__implied_opcode_token17] = ACTIONS(145),
    [aux_sym__implied_opcode_token18] = ACTIONS(145),
    [aux_sym__implied_opcode_token19] = ACTIONS(145),
    [aux_sym__implied_opcode_token20] = ACTIONS(145),
    [aux_sym__implied_opcode_token21] = ACTIONS(145),
    [aux_sym__implied_opcode_token22] = ACTIONS(145),
    [aux_sym__implied_opcode_token23] = ACTIONS(145),
    [aux_sym__implied_opcode_token24] = ACTIONS(145),
    [aux_sym__implied_opcode_token25] = ACTIONS(145),
    [aux_sym__implied_opcode_token26] = ACTIONS(145),
    [aux_sym__implied_opcode_token27] = ACTIONS(145),
    [aux_sym__implied_opcode_token28] = ACTIONS(145),
    [aux_sym__implied_opcode_token29] = ACTIONS(145),
    [aux_sym__implied_opcode_token30] = ACTIONS(145),
    [aux_sym__implied_opcode_token31] = ACTIONS(145),
    [aux_sym__implied_opcode_token32] = ACTIONS(145),
    [aux_sym__implied_opcode_token33] = ACTIONS(145),
    [aux_sym__implied_opcode_token34] = ACTIONS(145),
    [aux_sym__implied_opcode_token35] = ACTIONS(145),
    [aux_sym__implied_opcode_token36] = ACTIONS(145),
    [aux_sym__implied_opcode_token37] = ACTIONS(145),
    [aux_sym__relative_opcode_token1] = ACTIONS(145),
    [aux_sym__relative_opcode_token2] = ACTIONS(145),
    [aux_sym__relative_opcode_token3] = ACTIONS(145),
    [aux_sym__relative_opcode_token4] = ACTIONS(145),
    [aux_sym__relative_opcode_token5] = ACTIONS(145),
    [aux_sym__relative_opcode_token6] = ACTIONS(145),
    [aux_sym__relative_opcode_token7] = ACTIONS(145),
    [aux_sym__relative_opcode_token8] = ACTIONS(145),
    [aux_sym__relative_opcode_token9] = ACTIONS(145),
    [aux_sym__immediate_opcode_token1] = ACTIONS(145),
    [aux_sym__immediate_opcode_token2] = ACTIONS(145),
    [aux_sym__immediate_opcode_token3] = ACTIONS(145),
    [aux_sym__immediate_opcode_token4] = ACTIONS(145),
    [aux_sym__immediate_opcode_token5] = ACTIONS(145),
    [aux_sym__immediate_opcode_token6] = ACTIONS(145),
    [aux_sym__immediate_opcode_token7] = ACTIONS(145),
    [aux_sym__immediate_opcode_token8] = ACTIONS(145),
    [aux_sym__immediate_opcode_token9] = ACTIONS(145),
    [aux_sym__immediate_opcode_token10] = ACTIONS(145),
    [aux_sym__immediate_opcode_token11] = ACTIONS(145),
    [aux_sym__immediate_opcode_token12] = ACTIONS(145),
    [aux_sym__absolute_opcode_token1] = ACTIONS(145),
    [aux_sym__absolute_opcode_token2] = ACTIONS(145),
    [aux_sym__absolute_opcode_token3] = ACTIONS(145),
    [aux_sym__absolute_opcode_token4] = ACTIONS(145),
    [aux_sym__absolute_opcode_token5] = ACTIONS(145),
    [aux_sym__absolute_opcode_token6] = ACTIONS(145),
    [aux_sym__absolute_opcode_token7] = ACTIONS(145),
    [aux_sym__absolute_opcode_token8] = ACTIONS(145),
    [sym_cheap_local_label] = ACTIONS(143),
    [sym_local_label] = ACTIONS(145),
    [sym_global_label] = ACTIONS(145),
  },
  [12] = {
    [aux_sym__byte_list] = STATE(12),
    [sym__byte_literal] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(151),
    [anon_sym_DOTincbin] = ACTIONS(151),
    [anon_sym_DOTexport] = ACTIONS(151),
    [anon_sym_DOTimport] = ACTIONS(151),
    [anon_sym_DOTsegment] = ACTIONS(151),
    [anon_sym_DOTsection] = ACTIONS(151),
    [anon_sym_word] = ACTIONS(151),
    [anon_sym_DOTbyte] = ACTIONS(151),
    [anon_sym_DOTaddr] = ACTIONS(151),
    [anon_sym_DOTproc] = ACTIONS(151),
    [anon_sym_DOTendproc] = ACTIONS(151),
    [sym_num_literal] = ACTIONS(153),
    [sym_char_literal] = ACTIONS(153),
    [aux_sym__implied_opcode_token1] = ACTIONS(151),
    [aux_sym__implied_opcode_token2] = ACTIONS(151),
    [aux_sym__implied_opcode_token3] = ACTIONS(151),
    [aux_sym__implied_opcode_token4] = ACTIONS(151),
    [aux_sym__implied_opcode_token5] = ACTIONS(151),
    [aux_sym__implied_opcode_token6] = ACTIONS(151),
    [aux_sym__implied_opcode_token7] = ACTIONS(151),
    [aux_sym__implied_opcode_token8] = ACTIONS(151),
    [aux_sym__implied_opcode_token9] = ACTIONS(151),
    [aux_sym__implied_opcode_token10] = ACTIONS(151),
    [aux_sym__implied_opcode_token11] = ACTIONS(151),
    [aux_sym__implied_opcode_token12] = ACTIONS(151),
    [aux_sym__implied_opcode_token13] = ACTIONS(151),
    [aux_sym__implied_opcode_token14] = ACTIONS(151),
    [aux_sym__implied_opcode_token15] = ACTIONS(151),
    [aux_sym__implied_opcode_token16] = ACTIONS(151),
    [aux_sym__implied_opcode_token17] = ACTIONS(151),
    [aux_sym__implied_opcode_token18] = ACTIONS(151),
    [aux_sym__implied_opcode_token19] = ACTIONS(151),
    [aux_sym__implied_opcode_token20] = ACTIONS(151),
    [aux_sym__implied_opcode_token21] = ACTIONS(151),
    [aux_sym__implied_opcode_token22] = ACTIONS(151),
    [aux_sym__implied_opcode_token23] = ACTIONS(151),
    [aux_sym__implied_opcode_token24] = ACTIONS(151),
    [aux_sym__implied_opcode_token25] = ACTIONS(151),
    [aux_sym__implied_opcode_token26] = ACTIONS(151),
    [aux_sym__implied_opcode_token27] = ACTIONS(151),
    [aux_sym__implied_opcode_token28] = ACTIONS(151),
    [aux_sym__implied_opcode_token29] = ACTIONS(151),
    [aux_sym__implied_opcode_token30] = ACTIONS(151),
    [aux_sym__implied_opcode_token31] = ACTIONS(151),
    [aux_sym__implied_opcode_token32] = ACTIONS(151),
    [aux_sym__implied_opcode_token33] = ACTIONS(151),
    [aux_sym__implied_opcode_token34] = ACTIONS(151),
    [aux_sym__implied_opcode_token35] = ACTIONS(151),
    [aux_sym__implied_opcode_token36] = ACTIONS(151),
    [aux_sym__implied_opcode_token37] = ACTIONS(151),
    [aux_sym__relative_opcode_token1] = ACTIONS(151),
    [aux_sym__relative_opcode_token2] = ACTIONS(151),
    [aux_sym__relative_opcode_token3] = ACTIONS(151),
    [aux_sym__relative_opcode_token4] = ACTIONS(151),
    [aux_sym__relative_opcode_token5] = ACTIONS(151),
    [aux_sym__relative_opcode_token6] = ACTIONS(151),
    [aux_sym__relative_opcode_token7] = ACTIONS(151),
    [aux_sym__relative_opcode_token8] = ACTIONS(151),
    [aux_sym__relative_opcode_token9] = ACTIONS(151),
    [aux_sym__immediate_opcode_token1] = ACTIONS(151),
    [aux_sym__immediate_opcode_token2] = ACTIONS(151),
    [aux_sym__immediate_opcode_token3] = ACTIONS(151),
    [aux_sym__immediate_opcode_token4] = ACTIONS(151),
    [aux_sym__immediate_opcode_token5] = ACTIONS(151),
    [aux_sym__immediate_opcode_token6] = ACTIONS(151),
    [aux_sym__immediate_opcode_token7] = ACTIONS(151),
    [aux_sym__immediate_opcode_token8] = ACTIONS(151),
    [aux_sym__immediate_opcode_token9] = ACTIONS(151),
    [aux_sym__immediate_opcode_token10] = ACTIONS(151),
    [aux_sym__immediate_opcode_token11] = ACTIONS(151),
    [aux_sym__immediate_opcode_token12] = ACTIONS(151),
    [aux_sym__absolute_opcode_token1] = ACTIONS(151),
    [aux_sym__absolute_opcode_token2] = ACTIONS(151),
    [aux_sym__absolute_opcode_token3] = ACTIONS(151),
    [aux_sym__absolute_opcode_token4] = ACTIONS(151),
    [aux_sym__absolute_opcode_token5] = ACTIONS(151),
    [aux_sym__absolute_opcode_token6] = ACTIONS(151),
    [aux_sym__absolute_opcode_token7] = ACTIONS(151),
    [aux_sym__absolute_opcode_token8] = ACTIONS(151),
    [sym_cheap_local_label] = ACTIONS(149),
    [sym_local_label] = ACTIONS(151),
    [sym_global_label] = ACTIONS(151),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(158),
    [anon_sym_DOTincbin] = ACTIONS(158),
    [anon_sym_DOTexport] = ACTIONS(158),
    [anon_sym_DOTimport] = ACTIONS(158),
    [anon_sym_DOTsegment] = ACTIONS(158),
    [anon_sym_DOTsection] = ACTIONS(158),
    [anon_sym_word] = ACTIONS(158),
    [anon_sym_DOTbyte] = ACTIONS(158),
    [anon_sym_DOTaddr] = ACTIONS(158),
    [anon_sym_DOTproc] = ACTIONS(158),
    [anon_sym_DOTendproc] = ACTIONS(158),
    [sym_num_literal] = ACTIONS(156),
    [sym_char_literal] = ACTIONS(156),
    [aux_sym__implied_opcode_token1] = ACTIONS(158),
    [aux_sym__implied_opcode_token2] = ACTIONS(158),
    [aux_sym__implied_opcode_token3] = ACTIONS(158),
    [aux_sym__implied_opcode_token4] = ACTIONS(158),
    [aux_sym__implied_opcode_token5] = ACTIONS(158),
    [aux_sym__implied_opcode_token6] = ACTIONS(158),
    [aux_sym__implied_opcode_token7] = ACTIONS(158),
    [aux_sym__implied_opcode_token8] = ACTIONS(158),
    [aux_sym__implied_opcode_token9] = ACTIONS(158),
    [aux_sym__implied_opcode_token10] = ACTIONS(158),
    [aux_sym__implied_opcode_token11] = ACTIONS(158),
    [aux_sym__implied_opcode_token12] = ACTIONS(158),
    [aux_sym__implied_opcode_token13] = ACTIONS(158),
    [aux_sym__implied_opcode_token14] = ACTIONS(158),
    [aux_sym__implied_opcode_token15] = ACTIONS(158),
    [aux_sym__implied_opcode_token16] = ACTIONS(158),
    [aux_sym__implied_opcode_token17] = ACTIONS(158),
    [aux_sym__implied_opcode_token18] = ACTIONS(158),
    [aux_sym__implied_opcode_token19] = ACTIONS(158),
    [aux_sym__implied_opcode_token20] = ACTIONS(158),
    [aux_sym__implied_opcode_token21] = ACTIONS(158),
    [aux_sym__implied_opcode_token22] = ACTIONS(158),
    [aux_sym__implied_opcode_token23] = ACTIONS(158),
    [aux_sym__implied_opcode_token24] = ACTIONS(158),
    [aux_sym__implied_opcode_token25] = ACTIONS(158),
    [aux_sym__implied_opcode_token26] = ACTIONS(158),
    [aux_sym__implied_opcode_token27] = ACTIONS(158),
    [aux_sym__implied_opcode_token28] = ACTIONS(158),
    [aux_sym__implied_opcode_token29] = ACTIONS(158),
    [aux_sym__implied_opcode_token30] = ACTIONS(158),
    [aux_sym__implied_opcode_token31] = ACTIONS(158),
    [aux_sym__implied_opcode_token32] = ACTIONS(158),
    [aux_sym__implied_opcode_token33] = ACTIONS(158),
    [aux_sym__implied_opcode_token34] = ACTIONS(158),
    [aux_sym__implied_opcode_token35] = ACTIONS(158),
    [aux_sym__implied_opcode_token36] = ACTIONS(158),
    [aux_sym__implied_opcode_token37] = ACTIONS(158),
    [aux_sym__relative_opcode_token1] = ACTIONS(158),
    [aux_sym__relative_opcode_token2] = ACTIONS(158),
    [aux_sym__relative_opcode_token3] = ACTIONS(158),
    [aux_sym__relative_opcode_token4] = ACTIONS(158),
    [aux_sym__relative_opcode_token5] = ACTIONS(158),
    [aux_sym__relative_opcode_token6] = ACTIONS(158),
    [aux_sym__relative_opcode_token7] = ACTIONS(158),
    [aux_sym__relative_opcode_token8] = ACTIONS(158),
    [aux_sym__relative_opcode_token9] = ACTIONS(158),
    [aux_sym__immediate_opcode_token1] = ACTIONS(158),
    [aux_sym__immediate_opcode_token2] = ACTIONS(158),
    [aux_sym__immediate_opcode_token3] = ACTIONS(158),
    [aux_sym__immediate_opcode_token4] = ACTIONS(158),
    [aux_sym__immediate_opcode_token5] = ACTIONS(158),
    [aux_sym__immediate_opcode_token6] = ACTIONS(158),
    [aux_sym__immediate_opcode_token7] = ACTIONS(158),
    [aux_sym__immediate_opcode_token8] = ACTIONS(158),
    [aux_sym__immediate_opcode_token9] = ACTIONS(158),
    [aux_sym__immediate_opcode_token10] = ACTIONS(158),
    [aux_sym__immediate_opcode_token11] = ACTIONS(158),
    [aux_sym__immediate_opcode_token12] = ACTIONS(158),
    [aux_sym__absolute_opcode_token1] = ACTIONS(158),
    [aux_sym__absolute_opcode_token2] = ACTIONS(158),
    [aux_sym__absolute_opcode_token3] = ACTIONS(158),
    [aux_sym__absolute_opcode_token4] = ACTIONS(158),
    [aux_sym__absolute_opcode_token5] = ACTIONS(158),
    [aux_sym__absolute_opcode_token6] = ACTIONS(158),
    [aux_sym__absolute_opcode_token7] = ACTIONS(158),
    [aux_sym__absolute_opcode_token8] = ACTIONS(158),
    [sym_comma] = ACTIONS(160),
    [sym_cheap_local_label] = ACTIONS(156),
    [sym_local_label] = ACTIONS(158),
    [sym_global_label] = ACTIONS(158),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(151),
    [anon_sym_DOTincbin] = ACTIONS(151),
    [anon_sym_DOTexport] = ACTIONS(151),
    [anon_sym_DOTimport] = ACTIONS(151),
    [anon_sym_DOTsegment] = ACTIONS(151),
    [anon_sym_DOTsection] = ACTIONS(151),
    [anon_sym_word] = ACTIONS(151),
    [anon_sym_DOTbyte] = ACTIONS(151),
    [anon_sym_DOTaddr] = ACTIONS(151),
    [anon_sym_DOTproc] = ACTIONS(151),
    [anon_sym_DOTendproc] = ACTIONS(151),
    [sym_num_literal] = ACTIONS(149),
    [sym_char_literal] = ACTIONS(149),
    [aux_sym__implied_opcode_token1] = ACTIONS(151),
    [aux_sym__implied_opcode_token2] = ACTIONS(151),
    [aux_sym__implied_opcode_token3] = ACTIONS(151),
    [aux_sym__implied_opcode_token4] = ACTIONS(151),
    [aux_sym__implied_opcode_token5] = ACTIONS(151),
    [aux_sym__implied_opcode_token6] = ACTIONS(151),
    [aux_sym__implied_opcode_token7] = ACTIONS(151),
    [aux_sym__implied_opcode_token8] = ACTIONS(151),
    [aux_sym__implied_opcode_token9] = ACTIONS(151),
    [aux_sym__implied_opcode_token10] = ACTIONS(151),
    [aux_sym__implied_opcode_token11] = ACTIONS(151),
    [aux_sym__implied_opcode_token12] = ACTIONS(151),
    [aux_sym__implied_opcode_token13] = ACTIONS(151),
    [aux_sym__implied_opcode_token14] = ACTIONS(151),
    [aux_sym__implied_opcode_token15] = ACTIONS(151),
    [aux_sym__implied_opcode_token16] = ACTIONS(151),
    [aux_sym__implied_opcode_token17] = ACTIONS(151),
    [aux_sym__implied_opcode_token18] = ACTIONS(151),
    [aux_sym__implied_opcode_token19] = ACTIONS(151),
    [aux_sym__implied_opcode_token20] = ACTIONS(151),
    [aux_sym__implied_opcode_token21] = ACTIONS(151),
    [aux_sym__implied_opcode_token22] = ACTIONS(151),
    [aux_sym__implied_opcode_token23] = ACTIONS(151),
    [aux_sym__implied_opcode_token24] = ACTIONS(151),
    [aux_sym__implied_opcode_token25] = ACTIONS(151),
    [aux_sym__implied_opcode_token26] = ACTIONS(151),
    [aux_sym__implied_opcode_token27] = ACTIONS(151),
    [aux_sym__implied_opcode_token28] = ACTIONS(151),
    [aux_sym__implied_opcode_token29] = ACTIONS(151),
    [aux_sym__implied_opcode_token30] = ACTIONS(151),
    [aux_sym__implied_opcode_token31] = ACTIONS(151),
    [aux_sym__implied_opcode_token32] = ACTIONS(151),
    [aux_sym__implied_opcode_token33] = ACTIONS(151),
    [aux_sym__implied_opcode_token34] = ACTIONS(151),
    [aux_sym__implied_opcode_token35] = ACTIONS(151),
    [aux_sym__implied_opcode_token36] = ACTIONS(151),
    [aux_sym__implied_opcode_token37] = ACTIONS(151),
    [aux_sym__relative_opcode_token1] = ACTIONS(151),
    [aux_sym__relative_opcode_token2] = ACTIONS(151),
    [aux_sym__relative_opcode_token3] = ACTIONS(151),
    [aux_sym__relative_opcode_token4] = ACTIONS(151),
    [aux_sym__relative_opcode_token5] = ACTIONS(151),
    [aux_sym__relative_opcode_token6] = ACTIONS(151),
    [aux_sym__relative_opcode_token7] = ACTIONS(151),
    [aux_sym__relative_opcode_token8] = ACTIONS(151),
    [aux_sym__relative_opcode_token9] = ACTIONS(151),
    [aux_sym__immediate_opcode_token1] = ACTIONS(151),
    [aux_sym__immediate_opcode_token2] = ACTIONS(151),
    [aux_sym__immediate_opcode_token3] = ACTIONS(151),
    [aux_sym__immediate_opcode_token4] = ACTIONS(151),
    [aux_sym__immediate_opcode_token5] = ACTIONS(151),
    [aux_sym__immediate_opcode_token6] = ACTIONS(151),
    [aux_sym__immediate_opcode_token7] = ACTIONS(151),
    [aux_sym__immediate_opcode_token8] = ACTIONS(151),
    [aux_sym__immediate_opcode_token9] = ACTIONS(151),
    [aux_sym__immediate_opcode_token10] = ACTIONS(151),
    [aux_sym__immediate_opcode_token11] = ACTIONS(151),
    [aux_sym__immediate_opcode_token12] = ACTIONS(151),
    [aux_sym__absolute_opcode_token1] = ACTIONS(151),
    [aux_sym__absolute_opcode_token2] = ACTIONS(151),
    [aux_sym__absolute_opcode_token3] = ACTIONS(151),
    [aux_sym__absolute_opcode_token4] = ACTIONS(151),
    [aux_sym__absolute_opcode_token5] = ACTIONS(151),
    [aux_sym__absolute_opcode_token6] = ACTIONS(151),
    [aux_sym__absolute_opcode_token7] = ACTIONS(151),
    [aux_sym__absolute_opcode_token8] = ACTIONS(151),
    [sym_cheap_local_label] = ACTIONS(149),
    [sym_local_label] = ACTIONS(151),
    [sym_global_label] = ACTIONS(151),
  },
  [15] = {
    [sym__reg_y] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(164),
    [anon_sym_DOTincbin] = ACTIONS(164),
    [anon_sym_DOTexport] = ACTIONS(164),
    [anon_sym_DOTimport] = ACTIONS(164),
    [anon_sym_DOTsegment] = ACTIONS(164),
    [anon_sym_DOTsection] = ACTIONS(164),
    [anon_sym_word] = ACTIONS(164),
    [anon_sym_DOTbyte] = ACTIONS(164),
    [anon_sym_DOTaddr] = ACTIONS(164),
    [anon_sym_DOTproc] = ACTIONS(164),
    [anon_sym_DOTendproc] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(166),
    [aux_sym__implied_opcode_token1] = ACTIONS(164),
    [aux_sym__implied_opcode_token2] = ACTIONS(164),
    [aux_sym__implied_opcode_token3] = ACTIONS(164),
    [aux_sym__implied_opcode_token4] = ACTIONS(164),
    [aux_sym__implied_opcode_token5] = ACTIONS(164),
    [aux_sym__implied_opcode_token6] = ACTIONS(164),
    [aux_sym__implied_opcode_token7] = ACTIONS(164),
    [aux_sym__implied_opcode_token8] = ACTIONS(164),
    [aux_sym__implied_opcode_token9] = ACTIONS(164),
    [aux_sym__implied_opcode_token10] = ACTIONS(164),
    [aux_sym__implied_opcode_token11] = ACTIONS(164),
    [aux_sym__implied_opcode_token12] = ACTIONS(164),
    [aux_sym__implied_opcode_token13] = ACTIONS(164),
    [aux_sym__implied_opcode_token14] = ACTIONS(164),
    [aux_sym__implied_opcode_token15] = ACTIONS(164),
    [aux_sym__implied_opcode_token16] = ACTIONS(164),
    [aux_sym__implied_opcode_token17] = ACTIONS(164),
    [aux_sym__implied_opcode_token18] = ACTIONS(164),
    [aux_sym__implied_opcode_token19] = ACTIONS(164),
    [aux_sym__implied_opcode_token20] = ACTIONS(164),
    [aux_sym__implied_opcode_token21] = ACTIONS(164),
    [aux_sym__implied_opcode_token22] = ACTIONS(164),
    [aux_sym__implied_opcode_token23] = ACTIONS(164),
    [aux_sym__implied_opcode_token24] = ACTIONS(164),
    [aux_sym__implied_opcode_token25] = ACTIONS(164),
    [aux_sym__implied_opcode_token26] = ACTIONS(164),
    [aux_sym__implied_opcode_token27] = ACTIONS(164),
    [aux_sym__implied_opcode_token28] = ACTIONS(164),
    [aux_sym__implied_opcode_token29] = ACTIONS(164),
    [aux_sym__implied_opcode_token30] = ACTIONS(164),
    [aux_sym__implied_opcode_token31] = ACTIONS(164),
    [aux_sym__implied_opcode_token32] = ACTIONS(164),
    [aux_sym__implied_opcode_token33] = ACTIONS(164),
    [aux_sym__implied_opcode_token34] = ACTIONS(164),
    [aux_sym__implied_opcode_token35] = ACTIONS(164),
    [aux_sym__implied_opcode_token36] = ACTIONS(164),
    [aux_sym__implied_opcode_token37] = ACTIONS(164),
    [aux_sym__relative_opcode_token1] = ACTIONS(164),
    [aux_sym__relative_opcode_token2] = ACTIONS(164),
    [aux_sym__relative_opcode_token3] = ACTIONS(164),
    [aux_sym__relative_opcode_token4] = ACTIONS(164),
    [aux_sym__relative_opcode_token5] = ACTIONS(164),
    [aux_sym__relative_opcode_token6] = ACTIONS(164),
    [aux_sym__relative_opcode_token7] = ACTIONS(164),
    [aux_sym__relative_opcode_token8] = ACTIONS(164),
    [aux_sym__relative_opcode_token9] = ACTIONS(164),
    [aux_sym__immediate_opcode_token1] = ACTIONS(164),
    [aux_sym__immediate_opcode_token2] = ACTIONS(164),
    [aux_sym__immediate_opcode_token3] = ACTIONS(164),
    [aux_sym__immediate_opcode_token4] = ACTIONS(164),
    [aux_sym__immediate_opcode_token5] = ACTIONS(164),
    [aux_sym__immediate_opcode_token6] = ACTIONS(164),
    [aux_sym__immediate_opcode_token7] = ACTIONS(164),
    [aux_sym__immediate_opcode_token8] = ACTIONS(164),
    [aux_sym__immediate_opcode_token9] = ACTIONS(164),
    [aux_sym__immediate_opcode_token10] = ACTIONS(164),
    [aux_sym__immediate_opcode_token11] = ACTIONS(164),
    [aux_sym__immediate_opcode_token12] = ACTIONS(164),
    [aux_sym__absolute_opcode_token1] = ACTIONS(164),
    [aux_sym__absolute_opcode_token2] = ACTIONS(164),
    [aux_sym__absolute_opcode_token3] = ACTIONS(164),
    [aux_sym__absolute_opcode_token4] = ACTIONS(164),
    [aux_sym__absolute_opcode_token5] = ACTIONS(164),
    [aux_sym__absolute_opcode_token6] = ACTIONS(164),
    [aux_sym__absolute_opcode_token7] = ACTIONS(164),
    [aux_sym__absolute_opcode_token8] = ACTIONS(164),
    [sym_cheap_local_label] = ACTIONS(162),
    [sym_local_label] = ACTIONS(164),
    [sym_global_label] = ACTIONS(164),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(170),
    [anon_sym_DOTincbin] = ACTIONS(170),
    [anon_sym_DOTexport] = ACTIONS(170),
    [anon_sym_DOTimport] = ACTIONS(170),
    [anon_sym_DOTsegment] = ACTIONS(170),
    [anon_sym_DOTsection] = ACTIONS(170),
    [anon_sym_word] = ACTIONS(170),
    [anon_sym_DOTbyte] = ACTIONS(170),
    [anon_sym_DOTaddr] = ACTIONS(170),
    [anon_sym_DOTproc] = ACTIONS(170),
    [anon_sym_DOTendproc] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(168),
    [aux_sym__implied_opcode_token1] = ACTIONS(170),
    [aux_sym__implied_opcode_token2] = ACTIONS(170),
    [aux_sym__implied_opcode_token3] = ACTIONS(170),
    [aux_sym__implied_opcode_token4] = ACTIONS(170),
    [aux_sym__implied_opcode_token5] = ACTIONS(170),
    [aux_sym__implied_opcode_token6] = ACTIONS(170),
    [aux_sym__implied_opcode_token7] = ACTIONS(170),
    [aux_sym__implied_opcode_token8] = ACTIONS(170),
    [aux_sym__implied_opcode_token9] = ACTIONS(170),
    [aux_sym__implied_opcode_token10] = ACTIONS(170),
    [aux_sym__implied_opcode_token11] = ACTIONS(170),
    [aux_sym__implied_opcode_token12] = ACTIONS(170),
    [aux_sym__implied_opcode_token13] = ACTIONS(170),
    [aux_sym__implied_opcode_token14] = ACTIONS(170),
    [aux_sym__implied_opcode_token15] = ACTIONS(170),
    [aux_sym__implied_opcode_token16] = ACTIONS(170),
    [aux_sym__implied_opcode_token17] = ACTIONS(170),
    [aux_sym__implied_opcode_token18] = ACTIONS(170),
    [aux_sym__implied_opcode_token19] = ACTIONS(170),
    [aux_sym__implied_opcode_token20] = ACTIONS(170),
    [aux_sym__implied_opcode_token21] = ACTIONS(170),
    [aux_sym__implied_opcode_token22] = ACTIONS(170),
    [aux_sym__implied_opcode_token23] = ACTIONS(170),
    [aux_sym__implied_opcode_token24] = ACTIONS(170),
    [aux_sym__implied_opcode_token25] = ACTIONS(170),
    [aux_sym__implied_opcode_token26] = ACTIONS(170),
    [aux_sym__implied_opcode_token27] = ACTIONS(170),
    [aux_sym__implied_opcode_token28] = ACTIONS(170),
    [aux_sym__implied_opcode_token29] = ACTIONS(170),
    [aux_sym__implied_opcode_token30] = ACTIONS(170),
    [aux_sym__implied_opcode_token31] = ACTIONS(170),
    [aux_sym__implied_opcode_token32] = ACTIONS(170),
    [aux_sym__implied_opcode_token33] = ACTIONS(170),
    [aux_sym__implied_opcode_token34] = ACTIONS(170),
    [aux_sym__implied_opcode_token35] = ACTIONS(170),
    [aux_sym__implied_opcode_token36] = ACTIONS(170),
    [aux_sym__implied_opcode_token37] = ACTIONS(170),
    [aux_sym__relative_opcode_token1] = ACTIONS(170),
    [aux_sym__relative_opcode_token2] = ACTIONS(170),
    [aux_sym__relative_opcode_token3] = ACTIONS(170),
    [aux_sym__relative_opcode_token4] = ACTIONS(170),
    [aux_sym__relative_opcode_token5] = ACTIONS(170),
    [aux_sym__relative_opcode_token6] = ACTIONS(170),
    [aux_sym__relative_opcode_token7] = ACTIONS(170),
    [aux_sym__relative_opcode_token8] = ACTIONS(170),
    [aux_sym__relative_opcode_token9] = ACTIONS(170),
    [aux_sym__immediate_opcode_token1] = ACTIONS(170),
    [aux_sym__immediate_opcode_token2] = ACTIONS(170),
    [aux_sym__immediate_opcode_token3] = ACTIONS(170),
    [aux_sym__immediate_opcode_token4] = ACTIONS(170),
    [aux_sym__immediate_opcode_token5] = ACTIONS(170),
    [aux_sym__immediate_opcode_token6] = ACTIONS(170),
    [aux_sym__immediate_opcode_token7] = ACTIONS(170),
    [aux_sym__immediate_opcode_token8] = ACTIONS(170),
    [aux_sym__immediate_opcode_token9] = ACTIONS(170),
    [aux_sym__immediate_opcode_token10] = ACTIONS(170),
    [aux_sym__immediate_opcode_token11] = ACTIONS(170),
    [aux_sym__immediate_opcode_token12] = ACTIONS(170),
    [aux_sym__absolute_opcode_token1] = ACTIONS(170),
    [aux_sym__absolute_opcode_token2] = ACTIONS(170),
    [aux_sym__absolute_opcode_token3] = ACTIONS(170),
    [aux_sym__absolute_opcode_token4] = ACTIONS(170),
    [aux_sym__absolute_opcode_token5] = ACTIONS(170),
    [aux_sym__absolute_opcode_token6] = ACTIONS(170),
    [aux_sym__absolute_opcode_token7] = ACTIONS(170),
    [aux_sym__absolute_opcode_token8] = ACTIONS(170),
    [sym_cheap_local_label] = ACTIONS(168),
    [sym_local_label] = ACTIONS(170),
    [sym_global_label] = ACTIONS(170),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [sym_comment] = ACTIONS(174),
    [sym__ws_sep] = ACTIONS(176),
    [anon_sym_DOTinclude] = ACTIONS(178),
    [anon_sym_DOTincbin] = ACTIONS(178),
    [anon_sym_DOTexport] = ACTIONS(178),
    [anon_sym_DOTimport] = ACTIONS(178),
    [anon_sym_DOTsegment] = ACTIONS(178),
    [anon_sym_DOTsection] = ACTIONS(178),
    [anon_sym_word] = ACTIONS(178),
    [anon_sym_DOTbyte] = ACTIONS(178),
    [anon_sym_DOTaddr] = ACTIONS(178),
    [anon_sym_DOTproc] = ACTIONS(178),
    [anon_sym_DOTendproc] = ACTIONS(178),
    [aux_sym__implied_opcode_token1] = ACTIONS(178),
    [aux_sym__implied_opcode_token2] = ACTIONS(178),
    [aux_sym__implied_opcode_token3] = ACTIONS(178),
    [aux_sym__implied_opcode_token4] = ACTIONS(178),
    [aux_sym__implied_opcode_token5] = ACTIONS(178),
    [aux_sym__implied_opcode_token6] = ACTIONS(178),
    [aux_sym__implied_opcode_token7] = ACTIONS(178),
    [aux_sym__implied_opcode_token8] = ACTIONS(178),
    [aux_sym__implied_opcode_token9] = ACTIONS(178),
    [aux_sym__implied_opcode_token10] = ACTIONS(178),
    [aux_sym__implied_opcode_token11] = ACTIONS(178),
    [aux_sym__implied_opcode_token12] = ACTIONS(178),
    [aux_sym__implied_opcode_token13] = ACTIONS(178),
    [aux_sym__implied_opcode_token14] = ACTIONS(178),
    [aux_sym__implied_opcode_token15] = ACTIONS(178),
    [aux_sym__implied_opcode_token16] = ACTIONS(178),
    [aux_sym__implied_opcode_token17] = ACTIONS(178),
    [aux_sym__implied_opcode_token18] = ACTIONS(178),
    [aux_sym__implied_opcode_token19] = ACTIONS(178),
    [aux_sym__implied_opcode_token20] = ACTIONS(178),
    [aux_sym__implied_opcode_token21] = ACTIONS(178),
    [aux_sym__implied_opcode_token22] = ACTIONS(178),
    [aux_sym__implied_opcode_token23] = ACTIONS(178),
    [aux_sym__implied_opcode_token24] = ACTIONS(178),
    [aux_sym__implied_opcode_token25] = ACTIONS(178),
    [aux_sym__implied_opcode_token26] = ACTIONS(178),
    [aux_sym__implied_opcode_token27] = ACTIONS(178),
    [aux_sym__implied_opcode_token28] = ACTIONS(178),
    [aux_sym__implied_opcode_token29] = ACTIONS(178),
    [aux_sym__implied_opcode_token30] = ACTIONS(178),
    [aux_sym__implied_opcode_token31] = ACTIONS(178),
    [aux_sym__implied_opcode_token32] = ACTIONS(178),
    [aux_sym__implied_opcode_token33] = ACTIONS(178),
    [aux_sym__implied_opcode_token34] = ACTIONS(178),
    [aux_sym__implied_opcode_token35] = ACTIONS(178),
    [aux_sym__implied_opcode_token36] = ACTIONS(178),
    [aux_sym__implied_opcode_token37] = ACTIONS(178),
    [aux_sym__relative_opcode_token1] = ACTIONS(178),
    [aux_sym__relative_opcode_token2] = ACTIONS(178),
    [aux_sym__relative_opcode_token3] = ACTIONS(178),
    [aux_sym__relative_opcode_token4] = ACTIONS(178),
    [aux_sym__relative_opcode_token5] = ACTIONS(178),
    [aux_sym__relative_opcode_token6] = ACTIONS(178),
    [aux_sym__relative_opcode_token7] = ACTIONS(178),
    [aux_sym__relative_opcode_token8] = ACTIONS(178),
    [aux_sym__relative_opcode_token9] = ACTIONS(178),
    [aux_sym__immediate_opcode_token1] = ACTIONS(178),
    [aux_sym__immediate_opcode_token2] = ACTIONS(178),
    [aux_sym__immediate_opcode_token3] = ACTIONS(178),
    [aux_sym__immediate_opcode_token4] = ACTIONS(178),
    [aux_sym__immediate_opcode_token5] = ACTIONS(178),
    [aux_sym__immediate_opcode_token6] = ACTIONS(178),
    [aux_sym__immediate_opcode_token7] = ACTIONS(178),
    [aux_sym__immediate_opcode_token8] = ACTIONS(178),
    [aux_sym__immediate_opcode_token9] = ACTIONS(178),
    [aux_sym__immediate_opcode_token10] = ACTIONS(178),
    [aux_sym__immediate_opcode_token11] = ACTIONS(178),
    [aux_sym__immediate_opcode_token12] = ACTIONS(178),
    [aux_sym__absolute_opcode_token1] = ACTIONS(178),
    [aux_sym__absolute_opcode_token2] = ACTIONS(178),
    [aux_sym__absolute_opcode_token3] = ACTIONS(178),
    [aux_sym__absolute_opcode_token4] = ACTIONS(178),
    [aux_sym__absolute_opcode_token5] = ACTIONS(178),
    [aux_sym__absolute_opcode_token6] = ACTIONS(178),
    [aux_sym__absolute_opcode_token7] = ACTIONS(178),
    [aux_sym__absolute_opcode_token8] = ACTIONS(178),
    [sym_cheap_local_label] = ACTIONS(178),
    [sym_local_label] = ACTIONS(178),
    [sym_global_label] = ACTIONS(178),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(182),
    [anon_sym_DOTincbin] = ACTIONS(182),
    [anon_sym_DOTexport] = ACTIONS(182),
    [anon_sym_DOTimport] = ACTIONS(182),
    [anon_sym_DOTsegment] = ACTIONS(182),
    [anon_sym_DOTsection] = ACTIONS(182),
    [anon_sym_word] = ACTIONS(182),
    [anon_sym_DOTbyte] = ACTIONS(182),
    [anon_sym_DOTaddr] = ACTIONS(182),
    [anon_sym_DOTproc] = ACTIONS(182),
    [anon_sym_DOTendproc] = ACTIONS(182),
    [aux_sym__implied_opcode_token1] = ACTIONS(182),
    [aux_sym__implied_opcode_token2] = ACTIONS(182),
    [aux_sym__implied_opcode_token3] = ACTIONS(182),
    [aux_sym__implied_opcode_token4] = ACTIONS(182),
    [aux_sym__implied_opcode_token5] = ACTIONS(182),
    [aux_sym__implied_opcode_token6] = ACTIONS(182),
    [aux_sym__implied_opcode_token7] = ACTIONS(182),
    [aux_sym__implied_opcode_token8] = ACTIONS(182),
    [aux_sym__implied_opcode_token9] = ACTIONS(182),
    [aux_sym__implied_opcode_token10] = ACTIONS(182),
    [aux_sym__implied_opcode_token11] = ACTIONS(182),
    [aux_sym__implied_opcode_token12] = ACTIONS(182),
    [aux_sym__implied_opcode_token13] = ACTIONS(182),
    [aux_sym__implied_opcode_token14] = ACTIONS(182),
    [aux_sym__implied_opcode_token15] = ACTIONS(182),
    [aux_sym__implied_opcode_token16] = ACTIONS(182),
    [aux_sym__implied_opcode_token17] = ACTIONS(182),
    [aux_sym__implied_opcode_token18] = ACTIONS(182),
    [aux_sym__implied_opcode_token19] = ACTIONS(182),
    [aux_sym__implied_opcode_token20] = ACTIONS(182),
    [aux_sym__implied_opcode_token21] = ACTIONS(182),
    [aux_sym__implied_opcode_token22] = ACTIONS(182),
    [aux_sym__implied_opcode_token23] = ACTIONS(182),
    [aux_sym__implied_opcode_token24] = ACTIONS(182),
    [aux_sym__implied_opcode_token25] = ACTIONS(182),
    [aux_sym__implied_opcode_token26] = ACTIONS(182),
    [aux_sym__implied_opcode_token27] = ACTIONS(182),
    [aux_sym__implied_opcode_token28] = ACTIONS(182),
    [aux_sym__implied_opcode_token29] = ACTIONS(182),
    [aux_sym__implied_opcode_token30] = ACTIONS(182),
    [aux_sym__implied_opcode_token31] = ACTIONS(182),
    [aux_sym__implied_opcode_token32] = ACTIONS(182),
    [aux_sym__implied_opcode_token33] = ACTIONS(182),
    [aux_sym__implied_opcode_token34] = ACTIONS(182),
    [aux_sym__implied_opcode_token35] = ACTIONS(182),
    [aux_sym__implied_opcode_token36] = ACTIONS(182),
    [aux_sym__implied_opcode_token37] = ACTIONS(182),
    [aux_sym__relative_opcode_token1] = ACTIONS(182),
    [aux_sym__relative_opcode_token2] = ACTIONS(182),
    [aux_sym__relative_opcode_token3] = ACTIONS(182),
    [aux_sym__relative_opcode_token4] = ACTIONS(182),
    [aux_sym__relative_opcode_token5] = ACTIONS(182),
    [aux_sym__relative_opcode_token6] = ACTIONS(182),
    [aux_sym__relative_opcode_token7] = ACTIONS(182),
    [aux_sym__relative_opcode_token8] = ACTIONS(182),
    [aux_sym__relative_opcode_token9] = ACTIONS(182),
    [aux_sym__immediate_opcode_token1] = ACTIONS(182),
    [aux_sym__immediate_opcode_token2] = ACTIONS(182),
    [aux_sym__immediate_opcode_token3] = ACTIONS(182),
    [aux_sym__immediate_opcode_token4] = ACTIONS(182),
    [aux_sym__immediate_opcode_token5] = ACTIONS(182),
    [aux_sym__immediate_opcode_token6] = ACTIONS(182),
    [aux_sym__immediate_opcode_token7] = ACTIONS(182),
    [aux_sym__immediate_opcode_token8] = ACTIONS(182),
    [aux_sym__immediate_opcode_token9] = ACTIONS(182),
    [aux_sym__immediate_opcode_token10] = ACTIONS(182),
    [aux_sym__immediate_opcode_token11] = ACTIONS(182),
    [aux_sym__immediate_opcode_token12] = ACTIONS(182),
    [aux_sym__absolute_opcode_token1] = ACTIONS(182),
    [aux_sym__absolute_opcode_token2] = ACTIONS(182),
    [aux_sym__absolute_opcode_token3] = ACTIONS(182),
    [aux_sym__absolute_opcode_token4] = ACTIONS(182),
    [aux_sym__absolute_opcode_token5] = ACTIONS(182),
    [aux_sym__absolute_opcode_token6] = ACTIONS(182),
    [aux_sym__absolute_opcode_token7] = ACTIONS(182),
    [aux_sym__absolute_opcode_token8] = ACTIONS(182),
    [sym_cheap_local_label] = ACTIONS(180),
    [sym_local_label] = ACTIONS(182),
    [sym_global_label] = ACTIONS(182),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(186),
    [anon_sym_DOTincbin] = ACTIONS(186),
    [anon_sym_DOTexport] = ACTIONS(186),
    [anon_sym_DOTimport] = ACTIONS(186),
    [anon_sym_DOTsegment] = ACTIONS(186),
    [anon_sym_DOTsection] = ACTIONS(186),
    [anon_sym_word] = ACTIONS(186),
    [anon_sym_DOTbyte] = ACTIONS(186),
    [anon_sym_DOTaddr] = ACTIONS(186),
    [anon_sym_DOTproc] = ACTIONS(186),
    [anon_sym_DOTendproc] = ACTIONS(186),
    [aux_sym__implied_opcode_token1] = ACTIONS(186),
    [aux_sym__implied_opcode_token2] = ACTIONS(186),
    [aux_sym__implied_opcode_token3] = ACTIONS(186),
    [aux_sym__implied_opcode_token4] = ACTIONS(186),
    [aux_sym__implied_opcode_token5] = ACTIONS(186),
    [aux_sym__implied_opcode_token6] = ACTIONS(186),
    [aux_sym__implied_opcode_token7] = ACTIONS(186),
    [aux_sym__implied_opcode_token8] = ACTIONS(186),
    [aux_sym__implied_opcode_token9] = ACTIONS(186),
    [aux_sym__implied_opcode_token10] = ACTIONS(186),
    [aux_sym__implied_opcode_token11] = ACTIONS(186),
    [aux_sym__implied_opcode_token12] = ACTIONS(186),
    [aux_sym__implied_opcode_token13] = ACTIONS(186),
    [aux_sym__implied_opcode_token14] = ACTIONS(186),
    [aux_sym__implied_opcode_token15] = ACTIONS(186),
    [aux_sym__implied_opcode_token16] = ACTIONS(186),
    [aux_sym__implied_opcode_token17] = ACTIONS(186),
    [aux_sym__implied_opcode_token18] = ACTIONS(186),
    [aux_sym__implied_opcode_token19] = ACTIONS(186),
    [aux_sym__implied_opcode_token20] = ACTIONS(186),
    [aux_sym__implied_opcode_token21] = ACTIONS(186),
    [aux_sym__implied_opcode_token22] = ACTIONS(186),
    [aux_sym__implied_opcode_token23] = ACTIONS(186),
    [aux_sym__implied_opcode_token24] = ACTIONS(186),
    [aux_sym__implied_opcode_token25] = ACTIONS(186),
    [aux_sym__implied_opcode_token26] = ACTIONS(186),
    [aux_sym__implied_opcode_token27] = ACTIONS(186),
    [aux_sym__implied_opcode_token28] = ACTIONS(186),
    [aux_sym__implied_opcode_token29] = ACTIONS(186),
    [aux_sym__implied_opcode_token30] = ACTIONS(186),
    [aux_sym__implied_opcode_token31] = ACTIONS(186),
    [aux_sym__implied_opcode_token32] = ACTIONS(186),
    [aux_sym__implied_opcode_token33] = ACTIONS(186),
    [aux_sym__implied_opcode_token34] = ACTIONS(186),
    [aux_sym__implied_opcode_token35] = ACTIONS(186),
    [aux_sym__implied_opcode_token36] = ACTIONS(186),
    [aux_sym__implied_opcode_token37] = ACTIONS(186),
    [aux_sym__relative_opcode_token1] = ACTIONS(186),
    [aux_sym__relative_opcode_token2] = ACTIONS(186),
    [aux_sym__relative_opcode_token3] = ACTIONS(186),
    [aux_sym__relative_opcode_token4] = ACTIONS(186),
    [aux_sym__relative_opcode_token5] = ACTIONS(186),
    [aux_sym__relative_opcode_token6] = ACTIONS(186),
    [aux_sym__relative_opcode_token7] = ACTIONS(186),
    [aux_sym__relative_opcode_token8] = ACTIONS(186),
    [aux_sym__relative_opcode_token9] = ACTIONS(186),
    [aux_sym__immediate_opcode_token1] = ACTIONS(186),
    [aux_sym__immediate_opcode_token2] = ACTIONS(186),
    [aux_sym__immediate_opcode_token3] = ACTIONS(186),
    [aux_sym__immediate_opcode_token4] = ACTIONS(186),
    [aux_sym__immediate_opcode_token5] = ACTIONS(186),
    [aux_sym__immediate_opcode_token6] = ACTIONS(186),
    [aux_sym__immediate_opcode_token7] = ACTIONS(186),
    [aux_sym__immediate_opcode_token8] = ACTIONS(186),
    [aux_sym__immediate_opcode_token9] = ACTIONS(186),
    [aux_sym__immediate_opcode_token10] = ACTIONS(186),
    [aux_sym__immediate_opcode_token11] = ACTIONS(186),
    [aux_sym__immediate_opcode_token12] = ACTIONS(186),
    [aux_sym__absolute_opcode_token1] = ACTIONS(186),
    [aux_sym__absolute_opcode_token2] = ACTIONS(186),
    [aux_sym__absolute_opcode_token3] = ACTIONS(186),
    [aux_sym__absolute_opcode_token4] = ACTIONS(186),
    [aux_sym__absolute_opcode_token5] = ACTIONS(186),
    [aux_sym__absolute_opcode_token6] = ACTIONS(186),
    [aux_sym__absolute_opcode_token7] = ACTIONS(186),
    [aux_sym__absolute_opcode_token8] = ACTIONS(186),
    [sym_cheap_local_label] = ACTIONS(184),
    [sym_local_label] = ACTIONS(186),
    [sym_global_label] = ACTIONS(186),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(190),
    [anon_sym_DOTincbin] = ACTIONS(190),
    [anon_sym_DOTexport] = ACTIONS(190),
    [anon_sym_DOTimport] = ACTIONS(190),
    [anon_sym_DOTsegment] = ACTIONS(190),
    [anon_sym_DOTsection] = ACTIONS(190),
    [anon_sym_word] = ACTIONS(190),
    [anon_sym_DOTbyte] = ACTIONS(190),
    [anon_sym_DOTaddr] = ACTIONS(190),
    [anon_sym_DOTproc] = ACTIONS(190),
    [anon_sym_DOTendproc] = ACTIONS(190),
    [aux_sym__implied_opcode_token1] = ACTIONS(190),
    [aux_sym__implied_opcode_token2] = ACTIONS(190),
    [aux_sym__implied_opcode_token3] = ACTIONS(190),
    [aux_sym__implied_opcode_token4] = ACTIONS(190),
    [aux_sym__implied_opcode_token5] = ACTIONS(190),
    [aux_sym__implied_opcode_token6] = ACTIONS(190),
    [aux_sym__implied_opcode_token7] = ACTIONS(190),
    [aux_sym__implied_opcode_token8] = ACTIONS(190),
    [aux_sym__implied_opcode_token9] = ACTIONS(190),
    [aux_sym__implied_opcode_token10] = ACTIONS(190),
    [aux_sym__implied_opcode_token11] = ACTIONS(190),
    [aux_sym__implied_opcode_token12] = ACTIONS(190),
    [aux_sym__implied_opcode_token13] = ACTIONS(190),
    [aux_sym__implied_opcode_token14] = ACTIONS(190),
    [aux_sym__implied_opcode_token15] = ACTIONS(190),
    [aux_sym__implied_opcode_token16] = ACTIONS(190),
    [aux_sym__implied_opcode_token17] = ACTIONS(190),
    [aux_sym__implied_opcode_token18] = ACTIONS(190),
    [aux_sym__implied_opcode_token19] = ACTIONS(190),
    [aux_sym__implied_opcode_token20] = ACTIONS(190),
    [aux_sym__implied_opcode_token21] = ACTIONS(190),
    [aux_sym__implied_opcode_token22] = ACTIONS(190),
    [aux_sym__implied_opcode_token23] = ACTIONS(190),
    [aux_sym__implied_opcode_token24] = ACTIONS(190),
    [aux_sym__implied_opcode_token25] = ACTIONS(190),
    [aux_sym__implied_opcode_token26] = ACTIONS(190),
    [aux_sym__implied_opcode_token27] = ACTIONS(190),
    [aux_sym__implied_opcode_token28] = ACTIONS(190),
    [aux_sym__implied_opcode_token29] = ACTIONS(190),
    [aux_sym__implied_opcode_token30] = ACTIONS(190),
    [aux_sym__implied_opcode_token31] = ACTIONS(190),
    [aux_sym__implied_opcode_token32] = ACTIONS(190),
    [aux_sym__implied_opcode_token33] = ACTIONS(190),
    [aux_sym__implied_opcode_token34] = ACTIONS(190),
    [aux_sym__implied_opcode_token35] = ACTIONS(190),
    [aux_sym__implied_opcode_token36] = ACTIONS(190),
    [aux_sym__implied_opcode_token37] = ACTIONS(190),
    [aux_sym__relative_opcode_token1] = ACTIONS(190),
    [aux_sym__relative_opcode_token2] = ACTIONS(190),
    [aux_sym__relative_opcode_token3] = ACTIONS(190),
    [aux_sym__relative_opcode_token4] = ACTIONS(190),
    [aux_sym__relative_opcode_token5] = ACTIONS(190),
    [aux_sym__relative_opcode_token6] = ACTIONS(190),
    [aux_sym__relative_opcode_token7] = ACTIONS(190),
    [aux_sym__relative_opcode_token8] = ACTIONS(190),
    [aux_sym__relative_opcode_token9] = ACTIONS(190),
    [aux_sym__immediate_opcode_token1] = ACTIONS(190),
    [aux_sym__immediate_opcode_token2] = ACTIONS(190),
    [aux_sym__immediate_opcode_token3] = ACTIONS(190),
    [aux_sym__immediate_opcode_token4] = ACTIONS(190),
    [aux_sym__immediate_opcode_token5] = ACTIONS(190),
    [aux_sym__immediate_opcode_token6] = ACTIONS(190),
    [aux_sym__immediate_opcode_token7] = ACTIONS(190),
    [aux_sym__immediate_opcode_token8] = ACTIONS(190),
    [aux_sym__immediate_opcode_token9] = ACTIONS(190),
    [aux_sym__immediate_opcode_token10] = ACTIONS(190),
    [aux_sym__immediate_opcode_token11] = ACTIONS(190),
    [aux_sym__immediate_opcode_token12] = ACTIONS(190),
    [aux_sym__absolute_opcode_token1] = ACTIONS(190),
    [aux_sym__absolute_opcode_token2] = ACTIONS(190),
    [aux_sym__absolute_opcode_token3] = ACTIONS(190),
    [aux_sym__absolute_opcode_token4] = ACTIONS(190),
    [aux_sym__absolute_opcode_token5] = ACTIONS(190),
    [aux_sym__absolute_opcode_token6] = ACTIONS(190),
    [aux_sym__absolute_opcode_token7] = ACTIONS(190),
    [aux_sym__absolute_opcode_token8] = ACTIONS(190),
    [sym_cheap_local_label] = ACTIONS(188),
    [sym_local_label] = ACTIONS(190),
    [sym_global_label] = ACTIONS(190),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(194),
    [anon_sym_DOTincbin] = ACTIONS(194),
    [anon_sym_DOTexport] = ACTIONS(194),
    [anon_sym_DOTimport] = ACTIONS(194),
    [anon_sym_DOTsegment] = ACTIONS(194),
    [anon_sym_DOTsection] = ACTIONS(194),
    [anon_sym_word] = ACTIONS(194),
    [anon_sym_DOTbyte] = ACTIONS(194),
    [anon_sym_DOTaddr] = ACTIONS(194),
    [anon_sym_DOTproc] = ACTIONS(194),
    [anon_sym_DOTendproc] = ACTIONS(194),
    [aux_sym__implied_opcode_token1] = ACTIONS(194),
    [aux_sym__implied_opcode_token2] = ACTIONS(194),
    [aux_sym__implied_opcode_token3] = ACTIONS(194),
    [aux_sym__implied_opcode_token4] = ACTIONS(194),
    [aux_sym__implied_opcode_token5] = ACTIONS(194),
    [aux_sym__implied_opcode_token6] = ACTIONS(194),
    [aux_sym__implied_opcode_token7] = ACTIONS(194),
    [aux_sym__implied_opcode_token8] = ACTIONS(194),
    [aux_sym__implied_opcode_token9] = ACTIONS(194),
    [aux_sym__implied_opcode_token10] = ACTIONS(194),
    [aux_sym__implied_opcode_token11] = ACTIONS(194),
    [aux_sym__implied_opcode_token12] = ACTIONS(194),
    [aux_sym__implied_opcode_token13] = ACTIONS(194),
    [aux_sym__implied_opcode_token14] = ACTIONS(194),
    [aux_sym__implied_opcode_token15] = ACTIONS(194),
    [aux_sym__implied_opcode_token16] = ACTIONS(194),
    [aux_sym__implied_opcode_token17] = ACTIONS(194),
    [aux_sym__implied_opcode_token18] = ACTIONS(194),
    [aux_sym__implied_opcode_token19] = ACTIONS(194),
    [aux_sym__implied_opcode_token20] = ACTIONS(194),
    [aux_sym__implied_opcode_token21] = ACTIONS(194),
    [aux_sym__implied_opcode_token22] = ACTIONS(194),
    [aux_sym__implied_opcode_token23] = ACTIONS(194),
    [aux_sym__implied_opcode_token24] = ACTIONS(194),
    [aux_sym__implied_opcode_token25] = ACTIONS(194),
    [aux_sym__implied_opcode_token26] = ACTIONS(194),
    [aux_sym__implied_opcode_token27] = ACTIONS(194),
    [aux_sym__implied_opcode_token28] = ACTIONS(194),
    [aux_sym__implied_opcode_token29] = ACTIONS(194),
    [aux_sym__implied_opcode_token30] = ACTIONS(194),
    [aux_sym__implied_opcode_token31] = ACTIONS(194),
    [aux_sym__implied_opcode_token32] = ACTIONS(194),
    [aux_sym__implied_opcode_token33] = ACTIONS(194),
    [aux_sym__implied_opcode_token34] = ACTIONS(194),
    [aux_sym__implied_opcode_token35] = ACTIONS(194),
    [aux_sym__implied_opcode_token36] = ACTIONS(194),
    [aux_sym__implied_opcode_token37] = ACTIONS(194),
    [aux_sym__relative_opcode_token1] = ACTIONS(194),
    [aux_sym__relative_opcode_token2] = ACTIONS(194),
    [aux_sym__relative_opcode_token3] = ACTIONS(194),
    [aux_sym__relative_opcode_token4] = ACTIONS(194),
    [aux_sym__relative_opcode_token5] = ACTIONS(194),
    [aux_sym__relative_opcode_token6] = ACTIONS(194),
    [aux_sym__relative_opcode_token7] = ACTIONS(194),
    [aux_sym__relative_opcode_token8] = ACTIONS(194),
    [aux_sym__relative_opcode_token9] = ACTIONS(194),
    [aux_sym__immediate_opcode_token1] = ACTIONS(194),
    [aux_sym__immediate_opcode_token2] = ACTIONS(194),
    [aux_sym__immediate_opcode_token3] = ACTIONS(194),
    [aux_sym__immediate_opcode_token4] = ACTIONS(194),
    [aux_sym__immediate_opcode_token5] = ACTIONS(194),
    [aux_sym__immediate_opcode_token6] = ACTIONS(194),
    [aux_sym__immediate_opcode_token7] = ACTIONS(194),
    [aux_sym__immediate_opcode_token8] = ACTIONS(194),
    [aux_sym__immediate_opcode_token9] = ACTIONS(194),
    [aux_sym__immediate_opcode_token10] = ACTIONS(194),
    [aux_sym__immediate_opcode_token11] = ACTIONS(194),
    [aux_sym__immediate_opcode_token12] = ACTIONS(194),
    [aux_sym__absolute_opcode_token1] = ACTIONS(194),
    [aux_sym__absolute_opcode_token2] = ACTIONS(194),
    [aux_sym__absolute_opcode_token3] = ACTIONS(194),
    [aux_sym__absolute_opcode_token4] = ACTIONS(194),
    [aux_sym__absolute_opcode_token5] = ACTIONS(194),
    [aux_sym__absolute_opcode_token6] = ACTIONS(194),
    [aux_sym__absolute_opcode_token7] = ACTIONS(194),
    [aux_sym__absolute_opcode_token8] = ACTIONS(194),
    [sym_cheap_local_label] = ACTIONS(192),
    [sym_local_label] = ACTIONS(194),
    [sym_global_label] = ACTIONS(194),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(196),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(198),
    [anon_sym_DOTincbin] = ACTIONS(198),
    [anon_sym_DOTexport] = ACTIONS(198),
    [anon_sym_DOTimport] = ACTIONS(198),
    [anon_sym_DOTsegment] = ACTIONS(198),
    [anon_sym_DOTsection] = ACTIONS(198),
    [anon_sym_word] = ACTIONS(198),
    [anon_sym_DOTbyte] = ACTIONS(198),
    [anon_sym_DOTaddr] = ACTIONS(198),
    [anon_sym_DOTproc] = ACTIONS(198),
    [anon_sym_DOTendproc] = ACTIONS(198),
    [aux_sym__implied_opcode_token1] = ACTIONS(198),
    [aux_sym__implied_opcode_token2] = ACTIONS(198),
    [aux_sym__implied_opcode_token3] = ACTIONS(198),
    [aux_sym__implied_opcode_token4] = ACTIONS(198),
    [aux_sym__implied_opcode_token5] = ACTIONS(198),
    [aux_sym__implied_opcode_token6] = ACTIONS(198),
    [aux_sym__implied_opcode_token7] = ACTIONS(198),
    [aux_sym__implied_opcode_token8] = ACTIONS(198),
    [aux_sym__implied_opcode_token9] = ACTIONS(198),
    [aux_sym__implied_opcode_token10] = ACTIONS(198),
    [aux_sym__implied_opcode_token11] = ACTIONS(198),
    [aux_sym__implied_opcode_token12] = ACTIONS(198),
    [aux_sym__implied_opcode_token13] = ACTIONS(198),
    [aux_sym__implied_opcode_token14] = ACTIONS(198),
    [aux_sym__implied_opcode_token15] = ACTIONS(198),
    [aux_sym__implied_opcode_token16] = ACTIONS(198),
    [aux_sym__implied_opcode_token17] = ACTIONS(198),
    [aux_sym__implied_opcode_token18] = ACTIONS(198),
    [aux_sym__implied_opcode_token19] = ACTIONS(198),
    [aux_sym__implied_opcode_token20] = ACTIONS(198),
    [aux_sym__implied_opcode_token21] = ACTIONS(198),
    [aux_sym__implied_opcode_token22] = ACTIONS(198),
    [aux_sym__implied_opcode_token23] = ACTIONS(198),
    [aux_sym__implied_opcode_token24] = ACTIONS(198),
    [aux_sym__implied_opcode_token25] = ACTIONS(198),
    [aux_sym__implied_opcode_token26] = ACTIONS(198),
    [aux_sym__implied_opcode_token27] = ACTIONS(198),
    [aux_sym__implied_opcode_token28] = ACTIONS(198),
    [aux_sym__implied_opcode_token29] = ACTIONS(198),
    [aux_sym__implied_opcode_token30] = ACTIONS(198),
    [aux_sym__implied_opcode_token31] = ACTIONS(198),
    [aux_sym__implied_opcode_token32] = ACTIONS(198),
    [aux_sym__implied_opcode_token33] = ACTIONS(198),
    [aux_sym__implied_opcode_token34] = ACTIONS(198),
    [aux_sym__implied_opcode_token35] = ACTIONS(198),
    [aux_sym__implied_opcode_token36] = ACTIONS(198),
    [aux_sym__implied_opcode_token37] = ACTIONS(198),
    [aux_sym__relative_opcode_token1] = ACTIONS(198),
    [aux_sym__relative_opcode_token2] = ACTIONS(198),
    [aux_sym__relative_opcode_token3] = ACTIONS(198),
    [aux_sym__relative_opcode_token4] = ACTIONS(198),
    [aux_sym__relative_opcode_token5] = ACTIONS(198),
    [aux_sym__relative_opcode_token6] = ACTIONS(198),
    [aux_sym__relative_opcode_token7] = ACTIONS(198),
    [aux_sym__relative_opcode_token8] = ACTIONS(198),
    [aux_sym__relative_opcode_token9] = ACTIONS(198),
    [aux_sym__immediate_opcode_token1] = ACTIONS(198),
    [aux_sym__immediate_opcode_token2] = ACTIONS(198),
    [aux_sym__immediate_opcode_token3] = ACTIONS(198),
    [aux_sym__immediate_opcode_token4] = ACTIONS(198),
    [aux_sym__immediate_opcode_token5] = ACTIONS(198),
    [aux_sym__immediate_opcode_token6] = ACTIONS(198),
    [aux_sym__immediate_opcode_token7] = ACTIONS(198),
    [aux_sym__immediate_opcode_token8] = ACTIONS(198),
    [aux_sym__immediate_opcode_token9] = ACTIONS(198),
    [aux_sym__immediate_opcode_token10] = ACTIONS(198),
    [aux_sym__immediate_opcode_token11] = ACTIONS(198),
    [aux_sym__immediate_opcode_token12] = ACTIONS(198),
    [aux_sym__absolute_opcode_token1] = ACTIONS(198),
    [aux_sym__absolute_opcode_token2] = ACTIONS(198),
    [aux_sym__absolute_opcode_token3] = ACTIONS(198),
    [aux_sym__absolute_opcode_token4] = ACTIONS(198),
    [aux_sym__absolute_opcode_token5] = ACTIONS(198),
    [aux_sym__absolute_opcode_token6] = ACTIONS(198),
    [aux_sym__absolute_opcode_token7] = ACTIONS(198),
    [aux_sym__absolute_opcode_token8] = ACTIONS(198),
    [sym_cheap_local_label] = ACTIONS(196),
    [sym_local_label] = ACTIONS(198),
    [sym_global_label] = ACTIONS(198),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(202),
    [anon_sym_DOTincbin] = ACTIONS(202),
    [anon_sym_DOTexport] = ACTIONS(202),
    [anon_sym_DOTimport] = ACTIONS(202),
    [anon_sym_DOTsegment] = ACTIONS(202),
    [anon_sym_DOTsection] = ACTIONS(202),
    [anon_sym_word] = ACTIONS(202),
    [anon_sym_DOTbyte] = ACTIONS(202),
    [anon_sym_DOTaddr] = ACTIONS(202),
    [anon_sym_DOTproc] = ACTIONS(202),
    [anon_sym_DOTendproc] = ACTIONS(202),
    [aux_sym__implied_opcode_token1] = ACTIONS(202),
    [aux_sym__implied_opcode_token2] = ACTIONS(202),
    [aux_sym__implied_opcode_token3] = ACTIONS(202),
    [aux_sym__implied_opcode_token4] = ACTIONS(202),
    [aux_sym__implied_opcode_token5] = ACTIONS(202),
    [aux_sym__implied_opcode_token6] = ACTIONS(202),
    [aux_sym__implied_opcode_token7] = ACTIONS(202),
    [aux_sym__implied_opcode_token8] = ACTIONS(202),
    [aux_sym__implied_opcode_token9] = ACTIONS(202),
    [aux_sym__implied_opcode_token10] = ACTIONS(202),
    [aux_sym__implied_opcode_token11] = ACTIONS(202),
    [aux_sym__implied_opcode_token12] = ACTIONS(202),
    [aux_sym__implied_opcode_token13] = ACTIONS(202),
    [aux_sym__implied_opcode_token14] = ACTIONS(202),
    [aux_sym__implied_opcode_token15] = ACTIONS(202),
    [aux_sym__implied_opcode_token16] = ACTIONS(202),
    [aux_sym__implied_opcode_token17] = ACTIONS(202),
    [aux_sym__implied_opcode_token18] = ACTIONS(202),
    [aux_sym__implied_opcode_token19] = ACTIONS(202),
    [aux_sym__implied_opcode_token20] = ACTIONS(202),
    [aux_sym__implied_opcode_token21] = ACTIONS(202),
    [aux_sym__implied_opcode_token22] = ACTIONS(202),
    [aux_sym__implied_opcode_token23] = ACTIONS(202),
    [aux_sym__implied_opcode_token24] = ACTIONS(202),
    [aux_sym__implied_opcode_token25] = ACTIONS(202),
    [aux_sym__implied_opcode_token26] = ACTIONS(202),
    [aux_sym__implied_opcode_token27] = ACTIONS(202),
    [aux_sym__implied_opcode_token28] = ACTIONS(202),
    [aux_sym__implied_opcode_token29] = ACTIONS(202),
    [aux_sym__implied_opcode_token30] = ACTIONS(202),
    [aux_sym__implied_opcode_token31] = ACTIONS(202),
    [aux_sym__implied_opcode_token32] = ACTIONS(202),
    [aux_sym__implied_opcode_token33] = ACTIONS(202),
    [aux_sym__implied_opcode_token34] = ACTIONS(202),
    [aux_sym__implied_opcode_token35] = ACTIONS(202),
    [aux_sym__implied_opcode_token36] = ACTIONS(202),
    [aux_sym__implied_opcode_token37] = ACTIONS(202),
    [aux_sym__relative_opcode_token1] = ACTIONS(202),
    [aux_sym__relative_opcode_token2] = ACTIONS(202),
    [aux_sym__relative_opcode_token3] = ACTIONS(202),
    [aux_sym__relative_opcode_token4] = ACTIONS(202),
    [aux_sym__relative_opcode_token5] = ACTIONS(202),
    [aux_sym__relative_opcode_token6] = ACTIONS(202),
    [aux_sym__relative_opcode_token7] = ACTIONS(202),
    [aux_sym__relative_opcode_token8] = ACTIONS(202),
    [aux_sym__relative_opcode_token9] = ACTIONS(202),
    [aux_sym__immediate_opcode_token1] = ACTIONS(202),
    [aux_sym__immediate_opcode_token2] = ACTIONS(202),
    [aux_sym__immediate_opcode_token3] = ACTIONS(202),
    [aux_sym__immediate_opcode_token4] = ACTIONS(202),
    [aux_sym__immediate_opcode_token5] = ACTIONS(202),
    [aux_sym__immediate_opcode_token6] = ACTIONS(202),
    [aux_sym__immediate_opcode_token7] = ACTIONS(202),
    [aux_sym__immediate_opcode_token8] = ACTIONS(202),
    [aux_sym__immediate_opcode_token9] = ACTIONS(202),
    [aux_sym__immediate_opcode_token10] = ACTIONS(202),
    [aux_sym__immediate_opcode_token11] = ACTIONS(202),
    [aux_sym__immediate_opcode_token12] = ACTIONS(202),
    [aux_sym__absolute_opcode_token1] = ACTIONS(202),
    [aux_sym__absolute_opcode_token2] = ACTIONS(202),
    [aux_sym__absolute_opcode_token3] = ACTIONS(202),
    [aux_sym__absolute_opcode_token4] = ACTIONS(202),
    [aux_sym__absolute_opcode_token5] = ACTIONS(202),
    [aux_sym__absolute_opcode_token6] = ACTIONS(202),
    [aux_sym__absolute_opcode_token7] = ACTIONS(202),
    [aux_sym__absolute_opcode_token8] = ACTIONS(202),
    [sym_cheap_local_label] = ACTIONS(200),
    [sym_local_label] = ACTIONS(202),
    [sym_global_label] = ACTIONS(202),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(206),
    [anon_sym_DOTincbin] = ACTIONS(206),
    [anon_sym_DOTexport] = ACTIONS(206),
    [anon_sym_DOTimport] = ACTIONS(206),
    [anon_sym_DOTsegment] = ACTIONS(206),
    [anon_sym_DOTsection] = ACTIONS(206),
    [anon_sym_word] = ACTIONS(206),
    [anon_sym_DOTbyte] = ACTIONS(206),
    [anon_sym_DOTaddr] = ACTIONS(206),
    [anon_sym_DOTproc] = ACTIONS(206),
    [anon_sym_DOTendproc] = ACTIONS(206),
    [aux_sym__implied_opcode_token1] = ACTIONS(206),
    [aux_sym__implied_opcode_token2] = ACTIONS(206),
    [aux_sym__implied_opcode_token3] = ACTIONS(206),
    [aux_sym__implied_opcode_token4] = ACTIONS(206),
    [aux_sym__implied_opcode_token5] = ACTIONS(206),
    [aux_sym__implied_opcode_token6] = ACTIONS(206),
    [aux_sym__implied_opcode_token7] = ACTIONS(206),
    [aux_sym__implied_opcode_token8] = ACTIONS(206),
    [aux_sym__implied_opcode_token9] = ACTIONS(206),
    [aux_sym__implied_opcode_token10] = ACTIONS(206),
    [aux_sym__implied_opcode_token11] = ACTIONS(206),
    [aux_sym__implied_opcode_token12] = ACTIONS(206),
    [aux_sym__implied_opcode_token13] = ACTIONS(206),
    [aux_sym__implied_opcode_token14] = ACTIONS(206),
    [aux_sym__implied_opcode_token15] = ACTIONS(206),
    [aux_sym__implied_opcode_token16] = ACTIONS(206),
    [aux_sym__implied_opcode_token17] = ACTIONS(206),
    [aux_sym__implied_opcode_token18] = ACTIONS(206),
    [aux_sym__implied_opcode_token19] = ACTIONS(206),
    [aux_sym__implied_opcode_token20] = ACTIONS(206),
    [aux_sym__implied_opcode_token21] = ACTIONS(206),
    [aux_sym__implied_opcode_token22] = ACTIONS(206),
    [aux_sym__implied_opcode_token23] = ACTIONS(206),
    [aux_sym__implied_opcode_token24] = ACTIONS(206),
    [aux_sym__implied_opcode_token25] = ACTIONS(206),
    [aux_sym__implied_opcode_token26] = ACTIONS(206),
    [aux_sym__implied_opcode_token27] = ACTIONS(206),
    [aux_sym__implied_opcode_token28] = ACTIONS(206),
    [aux_sym__implied_opcode_token29] = ACTIONS(206),
    [aux_sym__implied_opcode_token30] = ACTIONS(206),
    [aux_sym__implied_opcode_token31] = ACTIONS(206),
    [aux_sym__implied_opcode_token32] = ACTIONS(206),
    [aux_sym__implied_opcode_token33] = ACTIONS(206),
    [aux_sym__implied_opcode_token34] = ACTIONS(206),
    [aux_sym__implied_opcode_token35] = ACTIONS(206),
    [aux_sym__implied_opcode_token36] = ACTIONS(206),
    [aux_sym__implied_opcode_token37] = ACTIONS(206),
    [aux_sym__relative_opcode_token1] = ACTIONS(206),
    [aux_sym__relative_opcode_token2] = ACTIONS(206),
    [aux_sym__relative_opcode_token3] = ACTIONS(206),
    [aux_sym__relative_opcode_token4] = ACTIONS(206),
    [aux_sym__relative_opcode_token5] = ACTIONS(206),
    [aux_sym__relative_opcode_token6] = ACTIONS(206),
    [aux_sym__relative_opcode_token7] = ACTIONS(206),
    [aux_sym__relative_opcode_token8] = ACTIONS(206),
    [aux_sym__relative_opcode_token9] = ACTIONS(206),
    [aux_sym__immediate_opcode_token1] = ACTIONS(206),
    [aux_sym__immediate_opcode_token2] = ACTIONS(206),
    [aux_sym__immediate_opcode_token3] = ACTIONS(206),
    [aux_sym__immediate_opcode_token4] = ACTIONS(206),
    [aux_sym__immediate_opcode_token5] = ACTIONS(206),
    [aux_sym__immediate_opcode_token6] = ACTIONS(206),
    [aux_sym__immediate_opcode_token7] = ACTIONS(206),
    [aux_sym__immediate_opcode_token8] = ACTIONS(206),
    [aux_sym__immediate_opcode_token9] = ACTIONS(206),
    [aux_sym__immediate_opcode_token10] = ACTIONS(206),
    [aux_sym__immediate_opcode_token11] = ACTIONS(206),
    [aux_sym__immediate_opcode_token12] = ACTIONS(206),
    [aux_sym__absolute_opcode_token1] = ACTIONS(206),
    [aux_sym__absolute_opcode_token2] = ACTIONS(206),
    [aux_sym__absolute_opcode_token3] = ACTIONS(206),
    [aux_sym__absolute_opcode_token4] = ACTIONS(206),
    [aux_sym__absolute_opcode_token5] = ACTIONS(206),
    [aux_sym__absolute_opcode_token6] = ACTIONS(206),
    [aux_sym__absolute_opcode_token7] = ACTIONS(206),
    [aux_sym__absolute_opcode_token8] = ACTIONS(206),
    [sym_cheap_local_label] = ACTIONS(204),
    [sym_local_label] = ACTIONS(206),
    [sym_global_label] = ACTIONS(206),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(210),
    [anon_sym_DOTincbin] = ACTIONS(210),
    [anon_sym_DOTexport] = ACTIONS(210),
    [anon_sym_DOTimport] = ACTIONS(210),
    [anon_sym_DOTsegment] = ACTIONS(210),
    [anon_sym_DOTsection] = ACTIONS(210),
    [anon_sym_word] = ACTIONS(210),
    [anon_sym_DOTbyte] = ACTIONS(210),
    [anon_sym_DOTaddr] = ACTIONS(210),
    [anon_sym_DOTproc] = ACTIONS(210),
    [anon_sym_DOTendproc] = ACTIONS(210),
    [aux_sym__implied_opcode_token1] = ACTIONS(210),
    [aux_sym__implied_opcode_token2] = ACTIONS(210),
    [aux_sym__implied_opcode_token3] = ACTIONS(210),
    [aux_sym__implied_opcode_token4] = ACTIONS(210),
    [aux_sym__implied_opcode_token5] = ACTIONS(210),
    [aux_sym__implied_opcode_token6] = ACTIONS(210),
    [aux_sym__implied_opcode_token7] = ACTIONS(210),
    [aux_sym__implied_opcode_token8] = ACTIONS(210),
    [aux_sym__implied_opcode_token9] = ACTIONS(210),
    [aux_sym__implied_opcode_token10] = ACTIONS(210),
    [aux_sym__implied_opcode_token11] = ACTIONS(210),
    [aux_sym__implied_opcode_token12] = ACTIONS(210),
    [aux_sym__implied_opcode_token13] = ACTIONS(210),
    [aux_sym__implied_opcode_token14] = ACTIONS(210),
    [aux_sym__implied_opcode_token15] = ACTIONS(210),
    [aux_sym__implied_opcode_token16] = ACTIONS(210),
    [aux_sym__implied_opcode_token17] = ACTIONS(210),
    [aux_sym__implied_opcode_token18] = ACTIONS(210),
    [aux_sym__implied_opcode_token19] = ACTIONS(210),
    [aux_sym__implied_opcode_token20] = ACTIONS(210),
    [aux_sym__implied_opcode_token21] = ACTIONS(210),
    [aux_sym__implied_opcode_token22] = ACTIONS(210),
    [aux_sym__implied_opcode_token23] = ACTIONS(210),
    [aux_sym__implied_opcode_token24] = ACTIONS(210),
    [aux_sym__implied_opcode_token25] = ACTIONS(210),
    [aux_sym__implied_opcode_token26] = ACTIONS(210),
    [aux_sym__implied_opcode_token27] = ACTIONS(210),
    [aux_sym__implied_opcode_token28] = ACTIONS(210),
    [aux_sym__implied_opcode_token29] = ACTIONS(210),
    [aux_sym__implied_opcode_token30] = ACTIONS(210),
    [aux_sym__implied_opcode_token31] = ACTIONS(210),
    [aux_sym__implied_opcode_token32] = ACTIONS(210),
    [aux_sym__implied_opcode_token33] = ACTIONS(210),
    [aux_sym__implied_opcode_token34] = ACTIONS(210),
    [aux_sym__implied_opcode_token35] = ACTIONS(210),
    [aux_sym__implied_opcode_token36] = ACTIONS(210),
    [aux_sym__implied_opcode_token37] = ACTIONS(210),
    [aux_sym__relative_opcode_token1] = ACTIONS(210),
    [aux_sym__relative_opcode_token2] = ACTIONS(210),
    [aux_sym__relative_opcode_token3] = ACTIONS(210),
    [aux_sym__relative_opcode_token4] = ACTIONS(210),
    [aux_sym__relative_opcode_token5] = ACTIONS(210),
    [aux_sym__relative_opcode_token6] = ACTIONS(210),
    [aux_sym__relative_opcode_token7] = ACTIONS(210),
    [aux_sym__relative_opcode_token8] = ACTIONS(210),
    [aux_sym__relative_opcode_token9] = ACTIONS(210),
    [aux_sym__immediate_opcode_token1] = ACTIONS(210),
    [aux_sym__immediate_opcode_token2] = ACTIONS(210),
    [aux_sym__immediate_opcode_token3] = ACTIONS(210),
    [aux_sym__immediate_opcode_token4] = ACTIONS(210),
    [aux_sym__immediate_opcode_token5] = ACTIONS(210),
    [aux_sym__immediate_opcode_token6] = ACTIONS(210),
    [aux_sym__immediate_opcode_token7] = ACTIONS(210),
    [aux_sym__immediate_opcode_token8] = ACTIONS(210),
    [aux_sym__immediate_opcode_token9] = ACTIONS(210),
    [aux_sym__immediate_opcode_token10] = ACTIONS(210),
    [aux_sym__immediate_opcode_token11] = ACTIONS(210),
    [aux_sym__immediate_opcode_token12] = ACTIONS(210),
    [aux_sym__absolute_opcode_token1] = ACTIONS(210),
    [aux_sym__absolute_opcode_token2] = ACTIONS(210),
    [aux_sym__absolute_opcode_token3] = ACTIONS(210),
    [aux_sym__absolute_opcode_token4] = ACTIONS(210),
    [aux_sym__absolute_opcode_token5] = ACTIONS(210),
    [aux_sym__absolute_opcode_token6] = ACTIONS(210),
    [aux_sym__absolute_opcode_token7] = ACTIONS(210),
    [aux_sym__absolute_opcode_token8] = ACTIONS(210),
    [sym_cheap_local_label] = ACTIONS(208),
    [sym_local_label] = ACTIONS(210),
    [sym_global_label] = ACTIONS(210),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(214),
    [anon_sym_DOTincbin] = ACTIONS(214),
    [anon_sym_DOTexport] = ACTIONS(214),
    [anon_sym_DOTimport] = ACTIONS(214),
    [anon_sym_DOTsegment] = ACTIONS(214),
    [anon_sym_DOTsection] = ACTIONS(214),
    [anon_sym_word] = ACTIONS(214),
    [anon_sym_DOTbyte] = ACTIONS(214),
    [anon_sym_DOTaddr] = ACTIONS(214),
    [anon_sym_DOTproc] = ACTIONS(214),
    [anon_sym_DOTendproc] = ACTIONS(214),
    [aux_sym__implied_opcode_token1] = ACTIONS(214),
    [aux_sym__implied_opcode_token2] = ACTIONS(214),
    [aux_sym__implied_opcode_token3] = ACTIONS(214),
    [aux_sym__implied_opcode_token4] = ACTIONS(214),
    [aux_sym__implied_opcode_token5] = ACTIONS(214),
    [aux_sym__implied_opcode_token6] = ACTIONS(214),
    [aux_sym__implied_opcode_token7] = ACTIONS(214),
    [aux_sym__implied_opcode_token8] = ACTIONS(214),
    [aux_sym__implied_opcode_token9] = ACTIONS(214),
    [aux_sym__implied_opcode_token10] = ACTIONS(214),
    [aux_sym__implied_opcode_token11] = ACTIONS(214),
    [aux_sym__implied_opcode_token12] = ACTIONS(214),
    [aux_sym__implied_opcode_token13] = ACTIONS(214),
    [aux_sym__implied_opcode_token14] = ACTIONS(214),
    [aux_sym__implied_opcode_token15] = ACTIONS(214),
    [aux_sym__implied_opcode_token16] = ACTIONS(214),
    [aux_sym__implied_opcode_token17] = ACTIONS(214),
    [aux_sym__implied_opcode_token18] = ACTIONS(214),
    [aux_sym__implied_opcode_token19] = ACTIONS(214),
    [aux_sym__implied_opcode_token20] = ACTIONS(214),
    [aux_sym__implied_opcode_token21] = ACTIONS(214),
    [aux_sym__implied_opcode_token22] = ACTIONS(214),
    [aux_sym__implied_opcode_token23] = ACTIONS(214),
    [aux_sym__implied_opcode_token24] = ACTIONS(214),
    [aux_sym__implied_opcode_token25] = ACTIONS(214),
    [aux_sym__implied_opcode_token26] = ACTIONS(214),
    [aux_sym__implied_opcode_token27] = ACTIONS(214),
    [aux_sym__implied_opcode_token28] = ACTIONS(214),
    [aux_sym__implied_opcode_token29] = ACTIONS(214),
    [aux_sym__implied_opcode_token30] = ACTIONS(214),
    [aux_sym__implied_opcode_token31] = ACTIONS(214),
    [aux_sym__implied_opcode_token32] = ACTIONS(214),
    [aux_sym__implied_opcode_token33] = ACTIONS(214),
    [aux_sym__implied_opcode_token34] = ACTIONS(214),
    [aux_sym__implied_opcode_token35] = ACTIONS(214),
    [aux_sym__implied_opcode_token36] = ACTIONS(214),
    [aux_sym__implied_opcode_token37] = ACTIONS(214),
    [aux_sym__relative_opcode_token1] = ACTIONS(214),
    [aux_sym__relative_opcode_token2] = ACTIONS(214),
    [aux_sym__relative_opcode_token3] = ACTIONS(214),
    [aux_sym__relative_opcode_token4] = ACTIONS(214),
    [aux_sym__relative_opcode_token5] = ACTIONS(214),
    [aux_sym__relative_opcode_token6] = ACTIONS(214),
    [aux_sym__relative_opcode_token7] = ACTIONS(214),
    [aux_sym__relative_opcode_token8] = ACTIONS(214),
    [aux_sym__relative_opcode_token9] = ACTIONS(214),
    [aux_sym__immediate_opcode_token1] = ACTIONS(214),
    [aux_sym__immediate_opcode_token2] = ACTIONS(214),
    [aux_sym__immediate_opcode_token3] = ACTIONS(214),
    [aux_sym__immediate_opcode_token4] = ACTIONS(214),
    [aux_sym__immediate_opcode_token5] = ACTIONS(214),
    [aux_sym__immediate_opcode_token6] = ACTIONS(214),
    [aux_sym__immediate_opcode_token7] = ACTIONS(214),
    [aux_sym__immediate_opcode_token8] = ACTIONS(214),
    [aux_sym__immediate_opcode_token9] = ACTIONS(214),
    [aux_sym__immediate_opcode_token10] = ACTIONS(214),
    [aux_sym__immediate_opcode_token11] = ACTIONS(214),
    [aux_sym__immediate_opcode_token12] = ACTIONS(214),
    [aux_sym__absolute_opcode_token1] = ACTIONS(214),
    [aux_sym__absolute_opcode_token2] = ACTIONS(214),
    [aux_sym__absolute_opcode_token3] = ACTIONS(214),
    [aux_sym__absolute_opcode_token4] = ACTIONS(214),
    [aux_sym__absolute_opcode_token5] = ACTIONS(214),
    [aux_sym__absolute_opcode_token6] = ACTIONS(214),
    [aux_sym__absolute_opcode_token7] = ACTIONS(214),
    [aux_sym__absolute_opcode_token8] = ACTIONS(214),
    [sym_cheap_local_label] = ACTIONS(212),
    [sym_local_label] = ACTIONS(214),
    [sym_global_label] = ACTIONS(214),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(178),
    [anon_sym_DOTincbin] = ACTIONS(178),
    [anon_sym_DOTexport] = ACTIONS(178),
    [anon_sym_DOTimport] = ACTIONS(178),
    [anon_sym_DOTsegment] = ACTIONS(178),
    [anon_sym_DOTsection] = ACTIONS(178),
    [anon_sym_word] = ACTIONS(178),
    [anon_sym_DOTbyte] = ACTIONS(178),
    [anon_sym_DOTaddr] = ACTIONS(178),
    [anon_sym_DOTproc] = ACTIONS(178),
    [anon_sym_DOTendproc] = ACTIONS(178),
    [aux_sym__implied_opcode_token1] = ACTIONS(178),
    [aux_sym__implied_opcode_token2] = ACTIONS(178),
    [aux_sym__implied_opcode_token3] = ACTIONS(178),
    [aux_sym__implied_opcode_token4] = ACTIONS(178),
    [aux_sym__implied_opcode_token5] = ACTIONS(178),
    [aux_sym__implied_opcode_token6] = ACTIONS(178),
    [aux_sym__implied_opcode_token7] = ACTIONS(178),
    [aux_sym__implied_opcode_token8] = ACTIONS(178),
    [aux_sym__implied_opcode_token9] = ACTIONS(178),
    [aux_sym__implied_opcode_token10] = ACTIONS(178),
    [aux_sym__implied_opcode_token11] = ACTIONS(178),
    [aux_sym__implied_opcode_token12] = ACTIONS(178),
    [aux_sym__implied_opcode_token13] = ACTIONS(178),
    [aux_sym__implied_opcode_token14] = ACTIONS(178),
    [aux_sym__implied_opcode_token15] = ACTIONS(178),
    [aux_sym__implied_opcode_token16] = ACTIONS(178),
    [aux_sym__implied_opcode_token17] = ACTIONS(178),
    [aux_sym__implied_opcode_token18] = ACTIONS(178),
    [aux_sym__implied_opcode_token19] = ACTIONS(178),
    [aux_sym__implied_opcode_token20] = ACTIONS(178),
    [aux_sym__implied_opcode_token21] = ACTIONS(178),
    [aux_sym__implied_opcode_token22] = ACTIONS(178),
    [aux_sym__implied_opcode_token23] = ACTIONS(178),
    [aux_sym__implied_opcode_token24] = ACTIONS(178),
    [aux_sym__implied_opcode_token25] = ACTIONS(178),
    [aux_sym__implied_opcode_token26] = ACTIONS(178),
    [aux_sym__implied_opcode_token27] = ACTIONS(178),
    [aux_sym__implied_opcode_token28] = ACTIONS(178),
    [aux_sym__implied_opcode_token29] = ACTIONS(178),
    [aux_sym__implied_opcode_token30] = ACTIONS(178),
    [aux_sym__implied_opcode_token31] = ACTIONS(178),
    [aux_sym__implied_opcode_token32] = ACTIONS(178),
    [aux_sym__implied_opcode_token33] = ACTIONS(178),
    [aux_sym__implied_opcode_token34] = ACTIONS(178),
    [aux_sym__implied_opcode_token35] = ACTIONS(178),
    [aux_sym__implied_opcode_token36] = ACTIONS(178),
    [aux_sym__implied_opcode_token37] = ACTIONS(178),
    [aux_sym__relative_opcode_token1] = ACTIONS(178),
    [aux_sym__relative_opcode_token2] = ACTIONS(178),
    [aux_sym__relative_opcode_token3] = ACTIONS(178),
    [aux_sym__relative_opcode_token4] = ACTIONS(178),
    [aux_sym__relative_opcode_token5] = ACTIONS(178),
    [aux_sym__relative_opcode_token6] = ACTIONS(178),
    [aux_sym__relative_opcode_token7] = ACTIONS(178),
    [aux_sym__relative_opcode_token8] = ACTIONS(178),
    [aux_sym__relative_opcode_token9] = ACTIONS(178),
    [aux_sym__immediate_opcode_token1] = ACTIONS(178),
    [aux_sym__immediate_opcode_token2] = ACTIONS(178),
    [aux_sym__immediate_opcode_token3] = ACTIONS(178),
    [aux_sym__immediate_opcode_token4] = ACTIONS(178),
    [aux_sym__immediate_opcode_token5] = ACTIONS(178),
    [aux_sym__immediate_opcode_token6] = ACTIONS(178),
    [aux_sym__immediate_opcode_token7] = ACTIONS(178),
    [aux_sym__immediate_opcode_token8] = ACTIONS(178),
    [aux_sym__immediate_opcode_token9] = ACTIONS(178),
    [aux_sym__immediate_opcode_token10] = ACTIONS(178),
    [aux_sym__immediate_opcode_token11] = ACTIONS(178),
    [aux_sym__immediate_opcode_token12] = ACTIONS(178),
    [aux_sym__absolute_opcode_token1] = ACTIONS(178),
    [aux_sym__absolute_opcode_token2] = ACTIONS(178),
    [aux_sym__absolute_opcode_token3] = ACTIONS(178),
    [aux_sym__absolute_opcode_token4] = ACTIONS(178),
    [aux_sym__absolute_opcode_token5] = ACTIONS(178),
    [aux_sym__absolute_opcode_token6] = ACTIONS(178),
    [aux_sym__absolute_opcode_token7] = ACTIONS(178),
    [aux_sym__absolute_opcode_token8] = ACTIONS(178),
    [sym_cheap_local_label] = ACTIONS(172),
    [sym_local_label] = ACTIONS(178),
    [sym_global_label] = ACTIONS(178),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(218),
    [anon_sym_DOTincbin] = ACTIONS(218),
    [anon_sym_DOTexport] = ACTIONS(218),
    [anon_sym_DOTimport] = ACTIONS(218),
    [anon_sym_DOTsegment] = ACTIONS(218),
    [anon_sym_DOTsection] = ACTIONS(218),
    [anon_sym_word] = ACTIONS(218),
    [anon_sym_DOTbyte] = ACTIONS(218),
    [anon_sym_DOTaddr] = ACTIONS(218),
    [anon_sym_DOTproc] = ACTIONS(218),
    [anon_sym_DOTendproc] = ACTIONS(218),
    [aux_sym__implied_opcode_token1] = ACTIONS(218),
    [aux_sym__implied_opcode_token2] = ACTIONS(218),
    [aux_sym__implied_opcode_token3] = ACTIONS(218),
    [aux_sym__implied_opcode_token4] = ACTIONS(218),
    [aux_sym__implied_opcode_token5] = ACTIONS(218),
    [aux_sym__implied_opcode_token6] = ACTIONS(218),
    [aux_sym__implied_opcode_token7] = ACTIONS(218),
    [aux_sym__implied_opcode_token8] = ACTIONS(218),
    [aux_sym__implied_opcode_token9] = ACTIONS(218),
    [aux_sym__implied_opcode_token10] = ACTIONS(218),
    [aux_sym__implied_opcode_token11] = ACTIONS(218),
    [aux_sym__implied_opcode_token12] = ACTIONS(218),
    [aux_sym__implied_opcode_token13] = ACTIONS(218),
    [aux_sym__implied_opcode_token14] = ACTIONS(218),
    [aux_sym__implied_opcode_token15] = ACTIONS(218),
    [aux_sym__implied_opcode_token16] = ACTIONS(218),
    [aux_sym__implied_opcode_token17] = ACTIONS(218),
    [aux_sym__implied_opcode_token18] = ACTIONS(218),
    [aux_sym__implied_opcode_token19] = ACTIONS(218),
    [aux_sym__implied_opcode_token20] = ACTIONS(218),
    [aux_sym__implied_opcode_token21] = ACTIONS(218),
    [aux_sym__implied_opcode_token22] = ACTIONS(218),
    [aux_sym__implied_opcode_token23] = ACTIONS(218),
    [aux_sym__implied_opcode_token24] = ACTIONS(218),
    [aux_sym__implied_opcode_token25] = ACTIONS(218),
    [aux_sym__implied_opcode_token26] = ACTIONS(218),
    [aux_sym__implied_opcode_token27] = ACTIONS(218),
    [aux_sym__implied_opcode_token28] = ACTIONS(218),
    [aux_sym__implied_opcode_token29] = ACTIONS(218),
    [aux_sym__implied_opcode_token30] = ACTIONS(218),
    [aux_sym__implied_opcode_token31] = ACTIONS(218),
    [aux_sym__implied_opcode_token32] = ACTIONS(218),
    [aux_sym__implied_opcode_token33] = ACTIONS(218),
    [aux_sym__implied_opcode_token34] = ACTIONS(218),
    [aux_sym__implied_opcode_token35] = ACTIONS(218),
    [aux_sym__implied_opcode_token36] = ACTIONS(218),
    [aux_sym__implied_opcode_token37] = ACTIONS(218),
    [aux_sym__relative_opcode_token1] = ACTIONS(218),
    [aux_sym__relative_opcode_token2] = ACTIONS(218),
    [aux_sym__relative_opcode_token3] = ACTIONS(218),
    [aux_sym__relative_opcode_token4] = ACTIONS(218),
    [aux_sym__relative_opcode_token5] = ACTIONS(218),
    [aux_sym__relative_opcode_token6] = ACTIONS(218),
    [aux_sym__relative_opcode_token7] = ACTIONS(218),
    [aux_sym__relative_opcode_token8] = ACTIONS(218),
    [aux_sym__relative_opcode_token9] = ACTIONS(218),
    [aux_sym__immediate_opcode_token1] = ACTIONS(218),
    [aux_sym__immediate_opcode_token2] = ACTIONS(218),
    [aux_sym__immediate_opcode_token3] = ACTIONS(218),
    [aux_sym__immediate_opcode_token4] = ACTIONS(218),
    [aux_sym__immediate_opcode_token5] = ACTIONS(218),
    [aux_sym__immediate_opcode_token6] = ACTIONS(218),
    [aux_sym__immediate_opcode_token7] = ACTIONS(218),
    [aux_sym__immediate_opcode_token8] = ACTIONS(218),
    [aux_sym__immediate_opcode_token9] = ACTIONS(218),
    [aux_sym__immediate_opcode_token10] = ACTIONS(218),
    [aux_sym__immediate_opcode_token11] = ACTIONS(218),
    [aux_sym__immediate_opcode_token12] = ACTIONS(218),
    [aux_sym__absolute_opcode_token1] = ACTIONS(218),
    [aux_sym__absolute_opcode_token2] = ACTIONS(218),
    [aux_sym__absolute_opcode_token3] = ACTIONS(218),
    [aux_sym__absolute_opcode_token4] = ACTIONS(218),
    [aux_sym__absolute_opcode_token5] = ACTIONS(218),
    [aux_sym__absolute_opcode_token6] = ACTIONS(218),
    [aux_sym__absolute_opcode_token7] = ACTIONS(218),
    [aux_sym__absolute_opcode_token8] = ACTIONS(218),
    [sym_cheap_local_label] = ACTIONS(216),
    [sym_local_label] = ACTIONS(218),
    [sym_global_label] = ACTIONS(218),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(220),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(222),
    [anon_sym_DOTincbin] = ACTIONS(222),
    [anon_sym_DOTexport] = ACTIONS(222),
    [anon_sym_DOTimport] = ACTIONS(222),
    [anon_sym_DOTsegment] = ACTIONS(222),
    [anon_sym_DOTsection] = ACTIONS(222),
    [anon_sym_word] = ACTIONS(222),
    [anon_sym_DOTbyte] = ACTIONS(222),
    [anon_sym_DOTaddr] = ACTIONS(222),
    [anon_sym_DOTproc] = ACTIONS(222),
    [anon_sym_DOTendproc] = ACTIONS(222),
    [aux_sym__implied_opcode_token1] = ACTIONS(222),
    [aux_sym__implied_opcode_token2] = ACTIONS(222),
    [aux_sym__implied_opcode_token3] = ACTIONS(222),
    [aux_sym__implied_opcode_token4] = ACTIONS(222),
    [aux_sym__implied_opcode_token5] = ACTIONS(222),
    [aux_sym__implied_opcode_token6] = ACTIONS(222),
    [aux_sym__implied_opcode_token7] = ACTIONS(222),
    [aux_sym__implied_opcode_token8] = ACTIONS(222),
    [aux_sym__implied_opcode_token9] = ACTIONS(222),
    [aux_sym__implied_opcode_token10] = ACTIONS(222),
    [aux_sym__implied_opcode_token11] = ACTIONS(222),
    [aux_sym__implied_opcode_token12] = ACTIONS(222),
    [aux_sym__implied_opcode_token13] = ACTIONS(222),
    [aux_sym__implied_opcode_token14] = ACTIONS(222),
    [aux_sym__implied_opcode_token15] = ACTIONS(222),
    [aux_sym__implied_opcode_token16] = ACTIONS(222),
    [aux_sym__implied_opcode_token17] = ACTIONS(222),
    [aux_sym__implied_opcode_token18] = ACTIONS(222),
    [aux_sym__implied_opcode_token19] = ACTIONS(222),
    [aux_sym__implied_opcode_token20] = ACTIONS(222),
    [aux_sym__implied_opcode_token21] = ACTIONS(222),
    [aux_sym__implied_opcode_token22] = ACTIONS(222),
    [aux_sym__implied_opcode_token23] = ACTIONS(222),
    [aux_sym__implied_opcode_token24] = ACTIONS(222),
    [aux_sym__implied_opcode_token25] = ACTIONS(222),
    [aux_sym__implied_opcode_token26] = ACTIONS(222),
    [aux_sym__implied_opcode_token27] = ACTIONS(222),
    [aux_sym__implied_opcode_token28] = ACTIONS(222),
    [aux_sym__implied_opcode_token29] = ACTIONS(222),
    [aux_sym__implied_opcode_token30] = ACTIONS(222),
    [aux_sym__implied_opcode_token31] = ACTIONS(222),
    [aux_sym__implied_opcode_token32] = ACTIONS(222),
    [aux_sym__implied_opcode_token33] = ACTIONS(222),
    [aux_sym__implied_opcode_token34] = ACTIONS(222),
    [aux_sym__implied_opcode_token35] = ACTIONS(222),
    [aux_sym__implied_opcode_token36] = ACTIONS(222),
    [aux_sym__implied_opcode_token37] = ACTIONS(222),
    [aux_sym__relative_opcode_token1] = ACTIONS(222),
    [aux_sym__relative_opcode_token2] = ACTIONS(222),
    [aux_sym__relative_opcode_token3] = ACTIONS(222),
    [aux_sym__relative_opcode_token4] = ACTIONS(222),
    [aux_sym__relative_opcode_token5] = ACTIONS(222),
    [aux_sym__relative_opcode_token6] = ACTIONS(222),
    [aux_sym__relative_opcode_token7] = ACTIONS(222),
    [aux_sym__relative_opcode_token8] = ACTIONS(222),
    [aux_sym__relative_opcode_token9] = ACTIONS(222),
    [aux_sym__immediate_opcode_token1] = ACTIONS(222),
    [aux_sym__immediate_opcode_token2] = ACTIONS(222),
    [aux_sym__immediate_opcode_token3] = ACTIONS(222),
    [aux_sym__immediate_opcode_token4] = ACTIONS(222),
    [aux_sym__immediate_opcode_token5] = ACTIONS(222),
    [aux_sym__immediate_opcode_token6] = ACTIONS(222),
    [aux_sym__immediate_opcode_token7] = ACTIONS(222),
    [aux_sym__immediate_opcode_token8] = ACTIONS(222),
    [aux_sym__immediate_opcode_token9] = ACTIONS(222),
    [aux_sym__immediate_opcode_token10] = ACTIONS(222),
    [aux_sym__immediate_opcode_token11] = ACTIONS(222),
    [aux_sym__immediate_opcode_token12] = ACTIONS(222),
    [aux_sym__absolute_opcode_token1] = ACTIONS(222),
    [aux_sym__absolute_opcode_token2] = ACTIONS(222),
    [aux_sym__absolute_opcode_token3] = ACTIONS(222),
    [aux_sym__absolute_opcode_token4] = ACTIONS(222),
    [aux_sym__absolute_opcode_token5] = ACTIONS(222),
    [aux_sym__absolute_opcode_token6] = ACTIONS(222),
    [aux_sym__absolute_opcode_token7] = ACTIONS(222),
    [aux_sym__absolute_opcode_token8] = ACTIONS(222),
    [sym_cheap_local_label] = ACTIONS(220),
    [sym_local_label] = ACTIONS(222),
    [sym_global_label] = ACTIONS(222),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(226),
    [anon_sym_DOTincbin] = ACTIONS(226),
    [anon_sym_DOTexport] = ACTIONS(226),
    [anon_sym_DOTimport] = ACTIONS(226),
    [anon_sym_DOTsegment] = ACTIONS(226),
    [anon_sym_DOTsection] = ACTIONS(226),
    [anon_sym_word] = ACTIONS(226),
    [anon_sym_DOTbyte] = ACTIONS(226),
    [anon_sym_DOTaddr] = ACTIONS(226),
    [anon_sym_DOTproc] = ACTIONS(226),
    [anon_sym_DOTendproc] = ACTIONS(226),
    [aux_sym__implied_opcode_token1] = ACTIONS(226),
    [aux_sym__implied_opcode_token2] = ACTIONS(226),
    [aux_sym__implied_opcode_token3] = ACTIONS(226),
    [aux_sym__implied_opcode_token4] = ACTIONS(226),
    [aux_sym__implied_opcode_token5] = ACTIONS(226),
    [aux_sym__implied_opcode_token6] = ACTIONS(226),
    [aux_sym__implied_opcode_token7] = ACTIONS(226),
    [aux_sym__implied_opcode_token8] = ACTIONS(226),
    [aux_sym__implied_opcode_token9] = ACTIONS(226),
    [aux_sym__implied_opcode_token10] = ACTIONS(226),
    [aux_sym__implied_opcode_token11] = ACTIONS(226),
    [aux_sym__implied_opcode_token12] = ACTIONS(226),
    [aux_sym__implied_opcode_token13] = ACTIONS(226),
    [aux_sym__implied_opcode_token14] = ACTIONS(226),
    [aux_sym__implied_opcode_token15] = ACTIONS(226),
    [aux_sym__implied_opcode_token16] = ACTIONS(226),
    [aux_sym__implied_opcode_token17] = ACTIONS(226),
    [aux_sym__implied_opcode_token18] = ACTIONS(226),
    [aux_sym__implied_opcode_token19] = ACTIONS(226),
    [aux_sym__implied_opcode_token20] = ACTIONS(226),
    [aux_sym__implied_opcode_token21] = ACTIONS(226),
    [aux_sym__implied_opcode_token22] = ACTIONS(226),
    [aux_sym__implied_opcode_token23] = ACTIONS(226),
    [aux_sym__implied_opcode_token24] = ACTIONS(226),
    [aux_sym__implied_opcode_token25] = ACTIONS(226),
    [aux_sym__implied_opcode_token26] = ACTIONS(226),
    [aux_sym__implied_opcode_token27] = ACTIONS(226),
    [aux_sym__implied_opcode_token28] = ACTIONS(226),
    [aux_sym__implied_opcode_token29] = ACTIONS(226),
    [aux_sym__implied_opcode_token30] = ACTIONS(226),
    [aux_sym__implied_opcode_token31] = ACTIONS(226),
    [aux_sym__implied_opcode_token32] = ACTIONS(226),
    [aux_sym__implied_opcode_token33] = ACTIONS(226),
    [aux_sym__implied_opcode_token34] = ACTIONS(226),
    [aux_sym__implied_opcode_token35] = ACTIONS(226),
    [aux_sym__implied_opcode_token36] = ACTIONS(226),
    [aux_sym__implied_opcode_token37] = ACTIONS(226),
    [aux_sym__relative_opcode_token1] = ACTIONS(226),
    [aux_sym__relative_opcode_token2] = ACTIONS(226),
    [aux_sym__relative_opcode_token3] = ACTIONS(226),
    [aux_sym__relative_opcode_token4] = ACTIONS(226),
    [aux_sym__relative_opcode_token5] = ACTIONS(226),
    [aux_sym__relative_opcode_token6] = ACTIONS(226),
    [aux_sym__relative_opcode_token7] = ACTIONS(226),
    [aux_sym__relative_opcode_token8] = ACTIONS(226),
    [aux_sym__relative_opcode_token9] = ACTIONS(226),
    [aux_sym__immediate_opcode_token1] = ACTIONS(226),
    [aux_sym__immediate_opcode_token2] = ACTIONS(226),
    [aux_sym__immediate_opcode_token3] = ACTIONS(226),
    [aux_sym__immediate_opcode_token4] = ACTIONS(226),
    [aux_sym__immediate_opcode_token5] = ACTIONS(226),
    [aux_sym__immediate_opcode_token6] = ACTIONS(226),
    [aux_sym__immediate_opcode_token7] = ACTIONS(226),
    [aux_sym__immediate_opcode_token8] = ACTIONS(226),
    [aux_sym__immediate_opcode_token9] = ACTIONS(226),
    [aux_sym__immediate_opcode_token10] = ACTIONS(226),
    [aux_sym__immediate_opcode_token11] = ACTIONS(226),
    [aux_sym__immediate_opcode_token12] = ACTIONS(226),
    [aux_sym__absolute_opcode_token1] = ACTIONS(226),
    [aux_sym__absolute_opcode_token2] = ACTIONS(226),
    [aux_sym__absolute_opcode_token3] = ACTIONS(226),
    [aux_sym__absolute_opcode_token4] = ACTIONS(226),
    [aux_sym__absolute_opcode_token5] = ACTIONS(226),
    [aux_sym__absolute_opcode_token6] = ACTIONS(226),
    [aux_sym__absolute_opcode_token7] = ACTIONS(226),
    [aux_sym__absolute_opcode_token8] = ACTIONS(226),
    [sym_cheap_local_label] = ACTIONS(224),
    [sym_local_label] = ACTIONS(226),
    [sym_global_label] = ACTIONS(226),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(230),
    [anon_sym_DOTincbin] = ACTIONS(230),
    [anon_sym_DOTexport] = ACTIONS(230),
    [anon_sym_DOTimport] = ACTIONS(230),
    [anon_sym_DOTsegment] = ACTIONS(230),
    [anon_sym_DOTsection] = ACTIONS(230),
    [anon_sym_word] = ACTIONS(230),
    [anon_sym_DOTbyte] = ACTIONS(230),
    [anon_sym_DOTaddr] = ACTIONS(230),
    [anon_sym_DOTproc] = ACTIONS(230),
    [anon_sym_DOTendproc] = ACTIONS(230),
    [aux_sym__implied_opcode_token1] = ACTIONS(230),
    [aux_sym__implied_opcode_token2] = ACTIONS(230),
    [aux_sym__implied_opcode_token3] = ACTIONS(230),
    [aux_sym__implied_opcode_token4] = ACTIONS(230),
    [aux_sym__implied_opcode_token5] = ACTIONS(230),
    [aux_sym__implied_opcode_token6] = ACTIONS(230),
    [aux_sym__implied_opcode_token7] = ACTIONS(230),
    [aux_sym__implied_opcode_token8] = ACTIONS(230),
    [aux_sym__implied_opcode_token9] = ACTIONS(230),
    [aux_sym__implied_opcode_token10] = ACTIONS(230),
    [aux_sym__implied_opcode_token11] = ACTIONS(230),
    [aux_sym__implied_opcode_token12] = ACTIONS(230),
    [aux_sym__implied_opcode_token13] = ACTIONS(230),
    [aux_sym__implied_opcode_token14] = ACTIONS(230),
    [aux_sym__implied_opcode_token15] = ACTIONS(230),
    [aux_sym__implied_opcode_token16] = ACTIONS(230),
    [aux_sym__implied_opcode_token17] = ACTIONS(230),
    [aux_sym__implied_opcode_token18] = ACTIONS(230),
    [aux_sym__implied_opcode_token19] = ACTIONS(230),
    [aux_sym__implied_opcode_token20] = ACTIONS(230),
    [aux_sym__implied_opcode_token21] = ACTIONS(230),
    [aux_sym__implied_opcode_token22] = ACTIONS(230),
    [aux_sym__implied_opcode_token23] = ACTIONS(230),
    [aux_sym__implied_opcode_token24] = ACTIONS(230),
    [aux_sym__implied_opcode_token25] = ACTIONS(230),
    [aux_sym__implied_opcode_token26] = ACTIONS(230),
    [aux_sym__implied_opcode_token27] = ACTIONS(230),
    [aux_sym__implied_opcode_token28] = ACTIONS(230),
    [aux_sym__implied_opcode_token29] = ACTIONS(230),
    [aux_sym__implied_opcode_token30] = ACTIONS(230),
    [aux_sym__implied_opcode_token31] = ACTIONS(230),
    [aux_sym__implied_opcode_token32] = ACTIONS(230),
    [aux_sym__implied_opcode_token33] = ACTIONS(230),
    [aux_sym__implied_opcode_token34] = ACTIONS(230),
    [aux_sym__implied_opcode_token35] = ACTIONS(230),
    [aux_sym__implied_opcode_token36] = ACTIONS(230),
    [aux_sym__implied_opcode_token37] = ACTIONS(230),
    [aux_sym__relative_opcode_token1] = ACTIONS(230),
    [aux_sym__relative_opcode_token2] = ACTIONS(230),
    [aux_sym__relative_opcode_token3] = ACTIONS(230),
    [aux_sym__relative_opcode_token4] = ACTIONS(230),
    [aux_sym__relative_opcode_token5] = ACTIONS(230),
    [aux_sym__relative_opcode_token6] = ACTIONS(230),
    [aux_sym__relative_opcode_token7] = ACTIONS(230),
    [aux_sym__relative_opcode_token8] = ACTIONS(230),
    [aux_sym__relative_opcode_token9] = ACTIONS(230),
    [aux_sym__immediate_opcode_token1] = ACTIONS(230),
    [aux_sym__immediate_opcode_token2] = ACTIONS(230),
    [aux_sym__immediate_opcode_token3] = ACTIONS(230),
    [aux_sym__immediate_opcode_token4] = ACTIONS(230),
    [aux_sym__immediate_opcode_token5] = ACTIONS(230),
    [aux_sym__immediate_opcode_token6] = ACTIONS(230),
    [aux_sym__immediate_opcode_token7] = ACTIONS(230),
    [aux_sym__immediate_opcode_token8] = ACTIONS(230),
    [aux_sym__immediate_opcode_token9] = ACTIONS(230),
    [aux_sym__immediate_opcode_token10] = ACTIONS(230),
    [aux_sym__immediate_opcode_token11] = ACTIONS(230),
    [aux_sym__immediate_opcode_token12] = ACTIONS(230),
    [aux_sym__absolute_opcode_token1] = ACTIONS(230),
    [aux_sym__absolute_opcode_token2] = ACTIONS(230),
    [aux_sym__absolute_opcode_token3] = ACTIONS(230),
    [aux_sym__absolute_opcode_token4] = ACTIONS(230),
    [aux_sym__absolute_opcode_token5] = ACTIONS(230),
    [aux_sym__absolute_opcode_token6] = ACTIONS(230),
    [aux_sym__absolute_opcode_token7] = ACTIONS(230),
    [aux_sym__absolute_opcode_token8] = ACTIONS(230),
    [sym_cheap_local_label] = ACTIONS(228),
    [sym_local_label] = ACTIONS(230),
    [sym_global_label] = ACTIONS(230),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(234),
    [anon_sym_DOTincbin] = ACTIONS(234),
    [anon_sym_DOTexport] = ACTIONS(234),
    [anon_sym_DOTimport] = ACTIONS(234),
    [anon_sym_DOTsegment] = ACTIONS(234),
    [anon_sym_DOTsection] = ACTIONS(234),
    [anon_sym_word] = ACTIONS(234),
    [anon_sym_DOTbyte] = ACTIONS(234),
    [anon_sym_DOTaddr] = ACTIONS(234),
    [anon_sym_DOTproc] = ACTIONS(234),
    [anon_sym_DOTendproc] = ACTIONS(234),
    [aux_sym__implied_opcode_token1] = ACTIONS(234),
    [aux_sym__implied_opcode_token2] = ACTIONS(234),
    [aux_sym__implied_opcode_token3] = ACTIONS(234),
    [aux_sym__implied_opcode_token4] = ACTIONS(234),
    [aux_sym__implied_opcode_token5] = ACTIONS(234),
    [aux_sym__implied_opcode_token6] = ACTIONS(234),
    [aux_sym__implied_opcode_token7] = ACTIONS(234),
    [aux_sym__implied_opcode_token8] = ACTIONS(234),
    [aux_sym__implied_opcode_token9] = ACTIONS(234),
    [aux_sym__implied_opcode_token10] = ACTIONS(234),
    [aux_sym__implied_opcode_token11] = ACTIONS(234),
    [aux_sym__implied_opcode_token12] = ACTIONS(234),
    [aux_sym__implied_opcode_token13] = ACTIONS(234),
    [aux_sym__implied_opcode_token14] = ACTIONS(234),
    [aux_sym__implied_opcode_token15] = ACTIONS(234),
    [aux_sym__implied_opcode_token16] = ACTIONS(234),
    [aux_sym__implied_opcode_token17] = ACTIONS(234),
    [aux_sym__implied_opcode_token18] = ACTIONS(234),
    [aux_sym__implied_opcode_token19] = ACTIONS(234),
    [aux_sym__implied_opcode_token20] = ACTIONS(234),
    [aux_sym__implied_opcode_token21] = ACTIONS(234),
    [aux_sym__implied_opcode_token22] = ACTIONS(234),
    [aux_sym__implied_opcode_token23] = ACTIONS(234),
    [aux_sym__implied_opcode_token24] = ACTIONS(234),
    [aux_sym__implied_opcode_token25] = ACTIONS(234),
    [aux_sym__implied_opcode_token26] = ACTIONS(234),
    [aux_sym__implied_opcode_token27] = ACTIONS(234),
    [aux_sym__implied_opcode_token28] = ACTIONS(234),
    [aux_sym__implied_opcode_token29] = ACTIONS(234),
    [aux_sym__implied_opcode_token30] = ACTIONS(234),
    [aux_sym__implied_opcode_token31] = ACTIONS(234),
    [aux_sym__implied_opcode_token32] = ACTIONS(234),
    [aux_sym__implied_opcode_token33] = ACTIONS(234),
    [aux_sym__implied_opcode_token34] = ACTIONS(234),
    [aux_sym__implied_opcode_token35] = ACTIONS(234),
    [aux_sym__implied_opcode_token36] = ACTIONS(234),
    [aux_sym__implied_opcode_token37] = ACTIONS(234),
    [aux_sym__relative_opcode_token1] = ACTIONS(234),
    [aux_sym__relative_opcode_token2] = ACTIONS(234),
    [aux_sym__relative_opcode_token3] = ACTIONS(234),
    [aux_sym__relative_opcode_token4] = ACTIONS(234),
    [aux_sym__relative_opcode_token5] = ACTIONS(234),
    [aux_sym__relative_opcode_token6] = ACTIONS(234),
    [aux_sym__relative_opcode_token7] = ACTIONS(234),
    [aux_sym__relative_opcode_token8] = ACTIONS(234),
    [aux_sym__relative_opcode_token9] = ACTIONS(234),
    [aux_sym__immediate_opcode_token1] = ACTIONS(234),
    [aux_sym__immediate_opcode_token2] = ACTIONS(234),
    [aux_sym__immediate_opcode_token3] = ACTIONS(234),
    [aux_sym__immediate_opcode_token4] = ACTIONS(234),
    [aux_sym__immediate_opcode_token5] = ACTIONS(234),
    [aux_sym__immediate_opcode_token6] = ACTIONS(234),
    [aux_sym__immediate_opcode_token7] = ACTIONS(234),
    [aux_sym__immediate_opcode_token8] = ACTIONS(234),
    [aux_sym__immediate_opcode_token9] = ACTIONS(234),
    [aux_sym__immediate_opcode_token10] = ACTIONS(234),
    [aux_sym__immediate_opcode_token11] = ACTIONS(234),
    [aux_sym__immediate_opcode_token12] = ACTIONS(234),
    [aux_sym__absolute_opcode_token1] = ACTIONS(234),
    [aux_sym__absolute_opcode_token2] = ACTIONS(234),
    [aux_sym__absolute_opcode_token3] = ACTIONS(234),
    [aux_sym__absolute_opcode_token4] = ACTIONS(234),
    [aux_sym__absolute_opcode_token5] = ACTIONS(234),
    [aux_sym__absolute_opcode_token6] = ACTIONS(234),
    [aux_sym__absolute_opcode_token7] = ACTIONS(234),
    [aux_sym__absolute_opcode_token8] = ACTIONS(234),
    [sym_cheap_local_label] = ACTIONS(232),
    [sym_local_label] = ACTIONS(234),
    [sym_global_label] = ACTIONS(234),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(236),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(238),
    [anon_sym_DOTincbin] = ACTIONS(238),
    [anon_sym_DOTexport] = ACTIONS(238),
    [anon_sym_DOTimport] = ACTIONS(238),
    [anon_sym_DOTsegment] = ACTIONS(238),
    [anon_sym_DOTsection] = ACTIONS(238),
    [anon_sym_word] = ACTIONS(238),
    [anon_sym_DOTbyte] = ACTIONS(238),
    [anon_sym_DOTaddr] = ACTIONS(238),
    [anon_sym_DOTproc] = ACTIONS(238),
    [anon_sym_DOTendproc] = ACTIONS(238),
    [aux_sym__implied_opcode_token1] = ACTIONS(238),
    [aux_sym__implied_opcode_token2] = ACTIONS(238),
    [aux_sym__implied_opcode_token3] = ACTIONS(238),
    [aux_sym__implied_opcode_token4] = ACTIONS(238),
    [aux_sym__implied_opcode_token5] = ACTIONS(238),
    [aux_sym__implied_opcode_token6] = ACTIONS(238),
    [aux_sym__implied_opcode_token7] = ACTIONS(238),
    [aux_sym__implied_opcode_token8] = ACTIONS(238),
    [aux_sym__implied_opcode_token9] = ACTIONS(238),
    [aux_sym__implied_opcode_token10] = ACTIONS(238),
    [aux_sym__implied_opcode_token11] = ACTIONS(238),
    [aux_sym__implied_opcode_token12] = ACTIONS(238),
    [aux_sym__implied_opcode_token13] = ACTIONS(238),
    [aux_sym__implied_opcode_token14] = ACTIONS(238),
    [aux_sym__implied_opcode_token15] = ACTIONS(238),
    [aux_sym__implied_opcode_token16] = ACTIONS(238),
    [aux_sym__implied_opcode_token17] = ACTIONS(238),
    [aux_sym__implied_opcode_token18] = ACTIONS(238),
    [aux_sym__implied_opcode_token19] = ACTIONS(238),
    [aux_sym__implied_opcode_token20] = ACTIONS(238),
    [aux_sym__implied_opcode_token21] = ACTIONS(238),
    [aux_sym__implied_opcode_token22] = ACTIONS(238),
    [aux_sym__implied_opcode_token23] = ACTIONS(238),
    [aux_sym__implied_opcode_token24] = ACTIONS(238),
    [aux_sym__implied_opcode_token25] = ACTIONS(238),
    [aux_sym__implied_opcode_token26] = ACTIONS(238),
    [aux_sym__implied_opcode_token27] = ACTIONS(238),
    [aux_sym__implied_opcode_token28] = ACTIONS(238),
    [aux_sym__implied_opcode_token29] = ACTIONS(238),
    [aux_sym__implied_opcode_token30] = ACTIONS(238),
    [aux_sym__implied_opcode_token31] = ACTIONS(238),
    [aux_sym__implied_opcode_token32] = ACTIONS(238),
    [aux_sym__implied_opcode_token33] = ACTIONS(238),
    [aux_sym__implied_opcode_token34] = ACTIONS(238),
    [aux_sym__implied_opcode_token35] = ACTIONS(238),
    [aux_sym__implied_opcode_token36] = ACTIONS(238),
    [aux_sym__implied_opcode_token37] = ACTIONS(238),
    [aux_sym__relative_opcode_token1] = ACTIONS(238),
    [aux_sym__relative_opcode_token2] = ACTIONS(238),
    [aux_sym__relative_opcode_token3] = ACTIONS(238),
    [aux_sym__relative_opcode_token4] = ACTIONS(238),
    [aux_sym__relative_opcode_token5] = ACTIONS(238),
    [aux_sym__relative_opcode_token6] = ACTIONS(238),
    [aux_sym__relative_opcode_token7] = ACTIONS(238),
    [aux_sym__relative_opcode_token8] = ACTIONS(238),
    [aux_sym__relative_opcode_token9] = ACTIONS(238),
    [aux_sym__immediate_opcode_token1] = ACTIONS(238),
    [aux_sym__immediate_opcode_token2] = ACTIONS(238),
    [aux_sym__immediate_opcode_token3] = ACTIONS(238),
    [aux_sym__immediate_opcode_token4] = ACTIONS(238),
    [aux_sym__immediate_opcode_token5] = ACTIONS(238),
    [aux_sym__immediate_opcode_token6] = ACTIONS(238),
    [aux_sym__immediate_opcode_token7] = ACTIONS(238),
    [aux_sym__immediate_opcode_token8] = ACTIONS(238),
    [aux_sym__immediate_opcode_token9] = ACTIONS(238),
    [aux_sym__immediate_opcode_token10] = ACTIONS(238),
    [aux_sym__immediate_opcode_token11] = ACTIONS(238),
    [aux_sym__immediate_opcode_token12] = ACTIONS(238),
    [aux_sym__absolute_opcode_token1] = ACTIONS(238),
    [aux_sym__absolute_opcode_token2] = ACTIONS(238),
    [aux_sym__absolute_opcode_token3] = ACTIONS(238),
    [aux_sym__absolute_opcode_token4] = ACTIONS(238),
    [aux_sym__absolute_opcode_token5] = ACTIONS(238),
    [aux_sym__absolute_opcode_token6] = ACTIONS(238),
    [aux_sym__absolute_opcode_token7] = ACTIONS(238),
    [aux_sym__absolute_opcode_token8] = ACTIONS(238),
    [sym_cheap_local_label] = ACTIONS(236),
    [sym_local_label] = ACTIONS(238),
    [sym_global_label] = ACTIONS(238),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(240),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTinclude] = ACTIONS(242),
    [anon_sym_DOTincbin] = ACTIONS(242),
    [anon_sym_DOTexport] = ACTIONS(242),
    [anon_sym_DOTimport] = ACTIONS(242),
    [anon_sym_DOTsegment] = ACTIONS(242),
    [anon_sym_DOTsection] = ACTIONS(242),
    [anon_sym_word] = ACTIONS(242),
    [anon_sym_DOTbyte] = ACTIONS(242),
    [anon_sym_DOTaddr] = ACTIONS(242),
    [anon_sym_DOTproc] = ACTIONS(242),
    [anon_sym_DOTendproc] = ACTIONS(242),
    [aux_sym__implied_opcode_token1] = ACTIONS(242),
    [aux_sym__implied_opcode_token2] = ACTIONS(242),
    [aux_sym__implied_opcode_token3] = ACTIONS(242),
    [aux_sym__implied_opcode_token4] = ACTIONS(242),
    [aux_sym__implied_opcode_token5] = ACTIONS(242),
    [aux_sym__implied_opcode_token6] = ACTIONS(242),
    [aux_sym__implied_opcode_token7] = ACTIONS(242),
    [aux_sym__implied_opcode_token8] = ACTIONS(242),
    [aux_sym__implied_opcode_token9] = ACTIONS(242),
    [aux_sym__implied_opcode_token10] = ACTIONS(242),
    [aux_sym__implied_opcode_token11] = ACTIONS(242),
    [aux_sym__implied_opcode_token12] = ACTIONS(242),
    [aux_sym__implied_opcode_token13] = ACTIONS(242),
    [aux_sym__implied_opcode_token14] = ACTIONS(242),
    [aux_sym__implied_opcode_token15] = ACTIONS(242),
    [aux_sym__implied_opcode_token16] = ACTIONS(242),
    [aux_sym__implied_opcode_token17] = ACTIONS(242),
    [aux_sym__implied_opcode_token18] = ACTIONS(242),
    [aux_sym__implied_opcode_token19] = ACTIONS(242),
    [aux_sym__implied_opcode_token20] = ACTIONS(242),
    [aux_sym__implied_opcode_token21] = ACTIONS(242),
    [aux_sym__implied_opcode_token22] = ACTIONS(242),
    [aux_sym__implied_opcode_token23] = ACTIONS(242),
    [aux_sym__implied_opcode_token24] = ACTIONS(242),
    [aux_sym__implied_opcode_token25] = ACTIONS(242),
    [aux_sym__implied_opcode_token26] = ACTIONS(242),
    [aux_sym__implied_opcode_token27] = ACTIONS(242),
    [aux_sym__implied_opcode_token28] = ACTIONS(242),
    [aux_sym__implied_opcode_token29] = ACTIONS(242),
    [aux_sym__implied_opcode_token30] = ACTIONS(242),
    [aux_sym__implied_opcode_token31] = ACTIONS(242),
    [aux_sym__implied_opcode_token32] = ACTIONS(242),
    [aux_sym__implied_opcode_token33] = ACTIONS(242),
    [aux_sym__implied_opcode_token34] = ACTIONS(242),
    [aux_sym__implied_opcode_token35] = ACTIONS(242),
    [aux_sym__implied_opcode_token36] = ACTIONS(242),
    [aux_sym__implied_opcode_token37] = ACTIONS(242),
    [aux_sym__relative_opcode_token1] = ACTIONS(242),
    [aux_sym__relative_opcode_token2] = ACTIONS(242),
    [aux_sym__relative_opcode_token3] = ACTIONS(242),
    [aux_sym__relative_opcode_token4] = ACTIONS(242),
    [aux_sym__relative_opcode_token5] = ACTIONS(242),
    [aux_sym__relative_opcode_token6] = ACTIONS(242),
    [aux_sym__relative_opcode_token7] = ACTIONS(242),
    [aux_sym__relative_opcode_token8] = ACTIONS(242),
    [aux_sym__relative_opcode_token9] = ACTIONS(242),
    [aux_sym__immediate_opcode_token1] = ACTIONS(242),
    [aux_sym__immediate_opcode_token2] = ACTIONS(242),
    [aux_sym__immediate_opcode_token3] = ACTIONS(242),
    [aux_sym__immediate_opcode_token4] = ACTIONS(242),
    [aux_sym__immediate_opcode_token5] = ACTIONS(242),
    [aux_sym__immediate_opcode_token6] = ACTIONS(242),
    [aux_sym__immediate_opcode_token7] = ACTIONS(242),
    [aux_sym__immediate_opcode_token8] = ACTIONS(242),
    [aux_sym__immediate_opcode_token9] = ACTIONS(242),
    [aux_sym__immediate_opcode_token10] = ACTIONS(242),
    [aux_sym__immediate_opcode_token11] = ACTIONS(242),
    [aux_sym__immediate_opcode_token12] = ACTIONS(242),
    [aux_sym__absolute_opcode_token1] = ACTIONS(242),
    [aux_sym__absolute_opcode_token2] = ACTIONS(242),
    [aux_sym__absolute_opcode_token3] = ACTIONS(242),
    [aux_sym__absolute_opcode_token4] = ACTIONS(242),
    [aux_sym__absolute_opcode_token5] = ACTIONS(242),
    [aux_sym__absolute_opcode_token6] = ACTIONS(242),
    [aux_sym__absolute_opcode_token7] = ACTIONS(242),
    [aux_sym__absolute_opcode_token8] = ACTIONS(242),
    [sym_cheap_local_label] = ACTIONS(240),
    [sym_local_label] = ACTIONS(242),
    [sym_global_label] = ACTIONS(242),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      sym__reg_x,
    ACTIONS(115), 8,
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
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(250), 4,
      sym_num_literal,
      sym_cheap_local_label,
      sym_local_label,
      sym_global_label,
    STATE(9), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [45] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(254), 4,
      sym_num_literal,
      sym_cheap_local_label,
      sym_local_label,
      sym_global_label,
    STATE(8), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [67] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(256), 4,
      sym_num_literal,
      sym_cheap_local_label,
      sym_local_label,
      sym_global_label,
    STATE(6), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [89] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(258), 4,
      sym_num_literal,
      sym_cheap_local_label,
      sym_local_label,
      sym_global_label,
    STATE(10), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [111] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(260), 4,
      sym_num_literal,
      sym_cheap_local_label,
      sym_local_label,
      sym_global_label,
    STATE(4), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [133] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(262), 4,
      sym_num_literal,
      sym_cheap_local_label,
      sym_local_label,
      sym_global_label,
    STATE(35), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [155] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(264), 4,
      sym_num_literal,
      sym_cheap_local_label,
      sym_local_label,
      sym_global_label,
    STATE(44), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [177] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(266), 4,
      sym_num_literal,
      sym_cheap_local_label,
      sym_local_label,
      sym_global_label,
    STATE(7), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(115), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [216] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(272), 2,
      sym_string_content,
      sym_escape_sequence,
  [230] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_string_repeat1,
    ACTIONS(277), 2,
      sym_string_content,
      sym_escape_sequence,
  [244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__byte_list,
    STATE(13), 1,
      sym__byte_literal,
    ACTIONS(147), 2,
      sym_num_literal,
      sym_char_literal,
  [258] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(281), 2,
      sym_string_content,
      sym_escape_sequence,
  [272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      sym_num_literal,
      sym_global_label,
  [280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_string,
  [290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_COLON,
  [300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_x,
    ACTIONS(293), 1,
      anon_sym_y,
  [310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_string,
  [320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      aux_sym_file_control_command_token1,
      aux_sym_file_control_command_token2,
  [328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_global_label,
  [335] = 2,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym__ws_sep,
  [342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym_global_label,
  [349] = 2,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym__ws_sep,
  [356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym_global_label,
  [363] = 2,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym__ws_sep,
  [370] = 2,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym__ws_sep,
  [377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LPAREN2,
  [384] = 2,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym__ws_sep,
  [391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_POUND,
  [398] = 2,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__ws_sep,
  [405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym_section_control_command_token1,
  [412] = 2,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__ws_sep,
  [419] = 2,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym__ws_sep,
  [426] = 2,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym__ws_sep,
  [433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
  [440] = 2,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym__ws_sep,
  [447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_COLON,
  [454] = 2,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym__ws_sep,
  [461] = 2,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__ws_sep,
  [468] = 2,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym__ws_sep,
  [475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_x,
  [482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
  [489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_y,
  [496] = 2,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__ws_sep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(35)] = 0,
  [SMALL_STATE(36)] = 23,
  [SMALL_STATE(37)] = 45,
  [SMALL_STATE(38)] = 67,
  [SMALL_STATE(39)] = 89,
  [SMALL_STATE(40)] = 111,
  [SMALL_STATE(41)] = 133,
  [SMALL_STATE(42)] = 155,
  [SMALL_STATE(43)] = 177,
  [SMALL_STATE(44)] = 199,
  [SMALL_STATE(45)] = 216,
  [SMALL_STATE(46)] = 230,
  [SMALL_STATE(47)] = 244,
  [SMALL_STATE(48)] = 258,
  [SMALL_STATE(49)] = 272,
  [SMALL_STATE(50)] = 280,
  [SMALL_STATE(51)] = 290,
  [SMALL_STATE(52)] = 300,
  [SMALL_STATE(53)] = 310,
  [SMALL_STATE(54)] = 320,
  [SMALL_STATE(55)] = 328,
  [SMALL_STATE(56)] = 335,
  [SMALL_STATE(57)] = 342,
  [SMALL_STATE(58)] = 349,
  [SMALL_STATE(59)] = 356,
  [SMALL_STATE(60)] = 363,
  [SMALL_STATE(61)] = 370,
  [SMALL_STATE(62)] = 377,
  [SMALL_STATE(63)] = 384,
  [SMALL_STATE(64)] = 391,
  [SMALL_STATE(65)] = 398,
  [SMALL_STATE(66)] = 405,
  [SMALL_STATE(67)] = 412,
  [SMALL_STATE(68)] = 419,
  [SMALL_STATE(69)] = 426,
  [SMALL_STATE(70)] = 433,
  [SMALL_STATE(71)] = 440,
  [SMALL_STATE(72)] = 447,
  [SMALL_STATE(73)] = 454,
  [SMALL_STATE(74)] = 461,
  [SMALL_STATE(75)] = 468,
  [SMALL_STATE(76)] = 475,
  [SMALL_STATE(77)] = 482,
  [SMALL_STATE(78)] = 489,
  [SMALL_STATE(79)] = 496,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .dynamic_precedence = 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 3, .dynamic_precedence = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_control_command, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_control_command, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__byte_list, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__byte_list, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__byte_list, 2), SHIFT_REPEAT(13),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__byte_list, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__byte_list, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 5, .dynamic_precedence = 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect, 5, .dynamic_precedence = 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg_x, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reg_x, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implied_opcode, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_opcode, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implied_opcode, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_control_command, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_control_command, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 6, .dynamic_precedence = 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect, 6, .dynamic_precedence = 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_control_command, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_control_command, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implied, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implied, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_control_command, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_control_command, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_control_command, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_control_command, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incbin_control_command, 3, .production_id = 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incbin_control_command, 3, .production_id = 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_control_command, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_control_command, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg_y, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reg_y, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .dynamic_precedence = 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .dynamic_precedence = 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_control_command, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_control_command, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address_control_command, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address_control_command, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment_control_command, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment_control_command, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(45),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_opcode, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [327] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__absolute_opcode, 1), REDUCE(sym__indirect_opcode, 1),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__immediate_opcode, 1), REDUCE(sym__absolute_opcode, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [339] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__immediate_opcode, 1), REDUCE(sym__absolute_opcode, 1), REDUCE(sym__indirect_opcode, 1),
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
