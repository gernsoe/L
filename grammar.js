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
				seq('const', $._constant),
				seq('data', $._data)
			),

		statements: $ => 
			repeat1(
				seq(
					$.statement, 
					';', 
					'\n'
				)
			),

		statement: $ =>
			choice(
				$._syscall,
				$._goto,
				seq($.writer, ':=', $.expression)
			),

		expression: $ =>
			choice(
				seq($.reader, $._operator, $.reader),
				seq($._operator, $.reader),
				$.reader
			),
				
		reader: $ =>
			choice(
				$.assign,
				$._constant,
				$._data
			),

		writer: $ =>
			choice(
				$.assign
			),
			
		assign: $ =>
			choice(
				$._register,
				$._memory
			),

		_memory: $ => seq('[', $._register, ',', $._bytes, ']'),

		_constant: $ => seq('@', $._word, $._number),

		_data: $ => seq('&', $._word, /[0-9a-zA-Z"_-]/),

		_register: () => /\$[x,y,i,j,?,!]/,

		_bytes: () => /[1,2,4,8]/, 

		_syscall: () => 'syscall',
		
		_goto: $ => seq('goto', $._label),

		_label: () => seq('#', /[a-zA-Z0-9]+/),

		_operator: () => /[\+\/\-\*\|\&]+/,

		_number: () => /\d+/,

		_word: () => /[a-zA-Z]+/,
	}
});
