(type_declaration
  name: (identifier) @name) @definition.type

(instance_variable
  left: (identifier) @name (#match? @name "^[a-zA-Z]")) @definition.variable
(instance_variable
  left: (identifier) @name (#match? @name "^[_]")) @definition.private_variable

(procedure_declaration
  name: (identifier) @name) @definition.procedure

(procedure_call
  procedure: (identifier) @name) @reference.call

(procedure_call
  procedure: (field_access
    field: (identifier) @name)) @reference.call
