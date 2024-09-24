"=" @operator
";" @delimiter

[
  "class"
  "function"
] @keyword
(type_identifier) @type

; primitives
(string_primitive) @string
(null_primitive) @constant.builtin
(bool_primitive) @type.builtin

(decimal_primitive) @number
(decimal_floating_point_primitive) @number.float

[
  (line_comment)
  (block_comment)
] @comment

(
 method_declaration
 name: (identifier) @function
)

(
  class_variable
  name: (identifier) @variable.member
)

(
  method_parameters
  (identifier) @variable.parameter
)
