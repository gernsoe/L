module.exports = grammar({
	name: 'L',
	
	rules: {
		source_file: $ => repeat($.definition),

		definition: $ => choice($.syscall, $.register, $.constant, $.label, $.goto),

		syscall: $ => 'syscall;',

		register: $ => /\$[x,y,i,j]/,
		
		constant: $ => seq('cnst', '@', $.word, $.number),

		label: $ => seq('#', /[a-zA-Z0-9]+/),

		goto: $ => seq('goto', $.label),

		number: $ => /\d+/,

		word: $ => /[a-zA-Z]+/
	}
});
