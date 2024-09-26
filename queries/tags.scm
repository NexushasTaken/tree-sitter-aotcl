(class_declaration
  name: (identifier) @name) @definition.class

(procedure_declaration
  name: (identifier) @name) @definition.procedure

(procedure_call
  procedure: (identifier) @name) @reference.call

(procedure_call
  procedure: (field_access
    field: (identifier) @name)) @reference.call
