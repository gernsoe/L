module.exports = grammar({
	name: 'L',
	
	rules: {
		source_file: $ => repeat($.definition),

		definition: $ => choice($.syscall, $.register, $.constant, $.label, $.goto, $.assignment),

		syscall: $ => 'syscall;',

		assignment: $ => choice(
			$.readMemory,
			$.writeMemory,
			seq($.register, ':=', $.constantDefinitions)
		),

		readMemory: $ => seq($.register, ':=', $.byteRegister),

		writeMemory: $ => seq($.byteRegister, ':=', $.bytesAsHex),

		byteRegister: $ => seq('[', $.register, ',', $.memorySizeBytes, ']'),

		constantDefinitions: $ => choice($.register, $.constant, $.label, $.number, $.word, $.bytesAsHex),

		register: $ => /\$[x,y,i,j]/,
		
		constant: $ => seq('cnst', '@', $.word, $.number),

		label: $ => seq('#', /[a-zA-Z0-9]+/),

		goto: $ => seq('goto', $.label),

		number: $ => /\d+/,

		memorySizeBytes: $ => /[1,2,4,8]/, 

		word: $ => /[a-zA-Z]+/,

		bytesAsHex: $ => /0x[0-9a-fA-F]+/
	}
});
