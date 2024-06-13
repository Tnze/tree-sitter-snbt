/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "snbt",

  rules: {
    document: $ => $._value,
    _value: $ =>
      choice(
        $.byte,
        $.short,
        $.int,
        $.long,
        $.float,
        $.double,
        $.byte_array,
        $.string,
        $.list,
        $.component,
        $.int_array,
        $.long_array,
      ),
    _boolean: _ => choice("true", "false"),

    // Integers
    byte: $ => choice(
      $._boolean,
      token(seq(optional("-"), /\d+/, choice("b", "B"))),
    ),
    short: _ => token(seq(optional("-"), /\d+/, choice("s", "S"))),
    int: _ => token(seq(optional("-"), /\d+/)),
    long: _ => token(seq(optional("-"), /\d+/, choice("l", "L"))),

    float: _ => token(seq(
      optional("-"),
      choice(
        seq(/\d+/, '.', optional(/\d+/)),
        /\d+/,
      ),
      choice("f", "F"))), // TODO
    double: _ => token(seq(optional("-"), /\d+/, choice("d", "D"))), // TODO

    // Arrays
    byte_array: $ => seq('[B;', commaSep($.byte), ']'),
    int_array: $ => seq('[I;', commaSep($.int), ']'),
    long_array: $ => seq('[L;', commaSep($.long), ']'),

    // String
    string: $ => choice(
      /[0-9A-Za-z_\-\.\+]+/,
      seq('"', '"'),
      seq('\'', '\''),
      seq('"', $._string_double_quoted, '"'),
      seq('\'', $._string_single_quoted, '\''),
    ),
    _string_double_quoted: $ => repeat1(choice(
      $.string_double_quoted,
      $.escape_sequence,
    )),
    _string_single_quoted: $ => repeat1(choice(
      $.string_single_quoted,
      $.escape_sequence,
    )),
    string_single_quoted: _ => token.immediate(prec(1, /[^\\'\n]+/)),
    string_double_quoted: _ => token.immediate(prec(1, /[^\\"\n]+/)),
    escape_sequence: _ => token.immediate(seq(
      '\\',
      /(\"|\\|\/|b|f|n|r|t|u)/,
    )),

    // List
    list: $ => seq(
      '[', commaSep($._value), ']'
    ),

    // Component
    component: $ => seq(
      '{', commaSep($.pair), '}'
    ),
    pair: $ => seq(
      field('key', $.string),
      ':',
      field('value', $._value)
    )
  },
});

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}
