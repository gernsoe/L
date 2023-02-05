module.exports = grammar({
	name: 'L',
	
	rules: {
		source_file: $ => seq(optional($.declarations), $.statements),

		declarations: $ =>
			repeat1(
				seq($.declaration,
					';',
					'\n',
				)
			),
				
		declaration: $ =>
			choice(
				seq('const', $.constant),
				seq('data', $.data)
			),

		statements: $ => 
			repeat1(
				seq(
					optional($.label),
					$.statement, 
					';', 
					optional('\n')
				)
			),

		statement: $ =>
			choice(
				$.syscall,
				field("assignment", seq($.writer, ':=', $.expression)),
				field("conditional", seq($.writer, '?=', $.expression))
			),

		expression: $ =>
			choice(
				seq($.reader, $.operator, $.reader),
				seq($.operator, $.reader),
				$.reader
			),
				
		reader: $ =>
			choice(
				$.assign,
				$.constant,
				$.data,
				$.label,
				$._number,
				$._string
			),

		writer: $ =>
			choice(
				$.assign
			),
			
		assign: $ =>
			choice(
				$.register,
				$.memory
			),

		constant: $ => seq('@', $._address, optional($._number)),

		data: $ => seq('&', $._address, choice($._number, $._string)),

		label: $ => seq('#', $._address),

		memory: $ => seq('[', $.register, ',', $._number, ']'),

		_string: $ => seq('"', repeat(/[^"]+/), '"'),

		register: () => /\$[x,y,i,j,?,!]/,

		syscall: () => 'syscall',

		operator: () => /[+/\-*|&]+/,

		_number: () => /[0-9]+/,

		_address: () => /[a-zA-Z_]+/,
	}
});