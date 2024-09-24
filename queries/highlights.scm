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
[
  (decimal_primitive)
  (decimal_floating_point_primitive)
] @number

[
  (line_comment)
  (block_comment)
] @comment

(
 method_declaration
 name: (identifier) @function
)

[
  (instance_identifier)
  (private_identifier)
] @local.definition


(
  method_parameters
  (identifier) @variable.parameter
)

(variable_declaration) @identifier
