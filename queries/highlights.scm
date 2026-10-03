
(opcode) @function.builtin
(num_literal) @constant.numeric
(register) @constant.builtin
(operator) @operator

(cheap_local_label) @variable
(local_label) @variable
(global_label) @variable

(control_command) @operator
(file_name) @string
(section_name) @constant

(immediate
  "#" @operator ;@punctuation.special
)
(indirect
  "(" @operator
  ")" @operator
)

;(ERROR) @error
(comment) @comment
