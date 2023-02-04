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
				seq($.writer, ':=', $.expression),
				seq($.writer, '?=', $.expression)
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
				$.number,
				$.string
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

		constant: $ => seq('@', $.address, $.number),

		data: $ => seq('&', $.address, choice($.number, $.string)),

		label: $ => seq('#', $.address),

		memory: $ => seq('[', $.register, ',', $.number, ']'),

		string: $ => seq('"', repeat(/[^"]+/), '"'),

		register: () => /\$[x,y,i,j,?,!]/,

		syscall: () => 'syscall',

		operator: () => /[+/\-*|&]+/,

		number: () => /[0-9]+/,

		address: () => /[a-zA-Z_]+/,
	}
});