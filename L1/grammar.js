module.exports = grammar({
	name: 'L1',
	
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
				seq('const', $.constant_declaration),
				seq('data', $.data_declaration)
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
				field("conditional", seq($.writer, '?=', $.expression)),
				seq("goto", choice($.register, $.label))
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
				$.datavar,
				$.number
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

		datavar: $ =>
			choice(
				$.constant,
				$.data,
				$.label
			),
		
		

		constant_declaration: $ => /@[A-Z]+\s[0-9]+/,

		data_declaration: $ => /&[A-Z]+\s".+"/,
		//constant: $ => seq('@', $.address, optional($.number)),

		constant: $ => /@[A-Z]+/,

		data: $ => /&[A-Z]+/,
		//data: $ => seq('&', $.address, choice($.number, $.string)),
	
		label: $ => /#[A-Z]+/,
		//label: $ => seq('#', $.address),

		memory: $ => seq('[', $.register, ',', $.number, ']'),

		//string: $ => seq('"', repeat(/[^"]+/), '"'),

		register: () => /\$[x,y,i,j,k,l,m,n,?,!]/,

		syscall: () => 'syscall',

		operator: () => /[+-/\*|&><=]+/,

		number: () => /[0-9]+/,

		//address: () => /[a-zA-Z_]+/,
	}
});