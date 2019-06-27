// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const uint8_t Open_Sans_Regular_24Bitmaps[] PROGMEM = {

	// Bitmap Data:
	0x00, // ' '
	0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0x00,0xCE,0xC0, // '!'
	0xCD,0x9B,0x36,0x68,0x50,0x80, // '"'
	0x06,0x30,0x0C,0x60,0x10,0xC0,0x21,0x00,0xC2,0x0F,0xFF,0x9F,0xFF,0x04,0x30,0x08,0x40,0x30,0x83,0xFF,0xE7,0xFF,0xC1,0x0C,0x06,0x10,0x0C,0x20,0x18,0xC0,0x31,0x80, // '#'
	0x0C,0x01,0x80,0xFE,0x3F,0xEE,0xC9,0x98,0x33,0x07,0x60,0x7C,0x03,0xF0,0x3F,0x06,0x60,0xCD,0x1B,0xBF,0xE3,0xF8,0x0C,0x01,0x80,0x30,0x00, // '$'
	0x38,0x04,0x0D,0x81,0x81,0x18,0x20,0x61,0x0C,0x0C,0x23,0x01,0x84,0x60,0x30,0x98,0x02,0x32,0x78,0x6E,0xDF,0x87,0x93,0x10,0x06,0x43,0x01,0x88,0x60,0x31,0x0C,0x0C,0x21,0x81,0x86,0x20,0x60,0xEC,0x08,0x0F,0x00, // '%'
	0x0F,0x80,0x07,0xF0,0x03,0x8C,0x00,0xC1,0x80,0x30,0x60,0x0C,0x30,0x01,0x98,0x00,0x3C,0x00,0x1E,0x00,0x0E,0xE0,0xC6,0x1C,0x61,0x83,0x98,0xC0,0x7C,0x38,0x0F,0x07,0x07,0xC1,0xFF,0x98,0x1F,0x83,0x00, // '&'
	0x66,0x44,0x44, // '''
	0x18,0xC3,0x18,0x61,0x8C,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x18,0x61,0x83,0x0C,0x18, // '('
	0xC1,0x86,0x0C,0x30,0xC1,0x86,0x18,0x61,0x86,0x18,0x61,0x8C,0x30,0xC6,0x18,0xC0, // ')'
	0x0E,0x00,0xC0,0x04,0x08,0x42,0xF5,0xEF,0xFE,0x0E,0x01,0xB0,0x1B,0x03,0x18,0x11,0x00, // '*'
	0x06,0x00,0x30,0x01,0x80,0x0C,0x00,0x60,0x7F,0xFB,0xFF,0xC0,0xC0,0x06,0x00,0x30,0x01,0x80,0x0C,0x00, // '+'
	0x66,0x6C,0xC8, // ','
	0xFD,0xF8, // '-'
	0xCE,0xC0, // '.'
	0x01,0x80,0xC0,0x30,0x18,0x06,0x01,0x80,0xC0,0x30,0x1C,0x06,0x01,0x80,0xC0,0x30,0x0C,0x06,0x01,0x80,0xC0,0x00, // '/'
	0x0F,0x01,0xFE,0x1C,0x30,0xC0,0xC6,0x06,0x60,0x1B,0x00,0xD8,0x06,0xC0,0x36,0x01,0xB0,0x0D,0x80,0x66,0x06,0x30,0x31,0xC3,0x87,0xF8,0x0F,0x00, // '0'
	0x0E,0x1E,0x36,0xE6,0x46,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06, // '1'
	0x1F,0x03,0xFE,0x18,0x38,0x80,0xC0,0x06,0x00,0x30,0x01,0x80,0x18,0x01,0x80,0x18,0x01,0x80,0x18,0x01,0x80,0x18,0x01,0x80,0x1F,0xFE,0xFF,0xF0, // '2'
	0x1F,0x83,0xFE,0x18,0x38,0x00,0xC0,0x06,0x00,0x30,0x07,0x03,0xE0,0x1F,0xC0,0x07,0x00,0x18,0x00,0x60,0x07,0x00,0x33,0x03,0x9F,0xF8,0x3F,0x00, // '3'
	0x01,0xC0,0x07,0x00,0x3C,0x01,0xB0,0x0C,0xC0,0x33,0x01,0x8C,0x0C,0x30,0x20,0xC1,0x83,0x0C,0x0C,0x3F,0xFE,0xFF,0xF8,0x03,0x00,0x0C,0x00,0x30,0x00,0xC0, // '4'
	0x7F,0x87,0xF8,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0F,0xF0,0xFF,0x80,0x1C,0x00,0xC0,0x06,0x00,0x60,0x0C,0x81,0xCF,0xF8,0x7E,0x00, // '5'
	0x07,0xC0,0xFE,0x0F,0x00,0x60,0x06,0x00,0x30,0x01,0xBE,0x0B,0xFC,0xF0,0xE7,0x03,0xB0,0x0C,0x80,0x66,0x03,0x30,0x30,0xC3,0x87,0xF8,0x0F,0x80, // '6'
	0xFF,0xF7,0xFF,0x80,0x18,0x00,0xC0,0x0C,0x00,0x60,0x06,0x00,0x30,0x01,0x80,0x18,0x00,0xC0,0x0C,0x00,0x60,0x06,0x00,0x30,0x03,0x00,0x18,0x00, // '7'
	0x1F,0x81,0xFE,0x1C,0x38,0xC0,0xC6,0x06,0x30,0x30,0xE7,0x03,0xF0,0x1F,0x81,0x8E,0x18,0x19,0x80,0x6C,0x03,0x60,0x39,0xC3,0x8F,0xFC,0x1F,0x80, // '8'
	0x1F,0x01,0xFE,0x1C,0x30,0xC0,0xCC,0x06,0x60,0x1B,0x00,0xDC,0x0E,0x70,0xF3,0xFD,0x87,0xC8,0x00,0xC0,0x06,0x00,0x60,0x07,0x07,0xF0,0x3E,0x00, // '9'
	0xCE,0xC0,0x00,0x00,0x00,0xCE,0xC0, // ':'
	0x66,0x60,0x00,0x00,0x00,0x66,0xEC,0xC8, // ';'
	0x00,0x10,0x03,0x80,0x70,0x0E,0x01,0xC0,0x38,0x03,0x80,0x07,0x00,0x0F,0x00,0x1E,0x00,0x3C,0x00,0x20, // '<'
	0xFF,0xF7,0xFF,0x80,0x00,0x00,0x00,0x00,0x7F,0xFB,0xFF,0xC0, // '='
	0x80,0x07,0x00,0x0E,0x00,0x1C,0x00,0x38,0x00,0x70,0x01,0xC0,0x38,0x0F,0x01,0xE0,0x3C,0x01,0x00,0x00, // '>'
	0x3E,0x3F,0xE4,0x18,0x06,0x00,0x80,0x60,0x38,0x1C,0x0E,0x03,0x01,0x80,0x60,0x00,0x00,0x01,0x80,0x70,0x18,0x00, // '?'
	0x01,0xFC,0x00,0x3F,0xF8,0x03,0x00,0x60,0x30,0x01,0x83,0x00,0x06,0x30,0x7E,0x31,0x87,0x70,0x88,0x61,0x84,0x42,0x0C,0x36,0x30,0x61,0x31,0x83,0x09,0x84,0x18,0xC4,0x3B,0x6C,0x30,0xF1,0xC1,0x80,0x00,0x06,0x00,0x00,0x18,0x00,0x00,0x7F,0xF0,0x00,0xFE,0x00, // '@'
	0x03,0x80,0x03,0x80,0x02,0x80,0x06,0xC0,0x06,0xC0,0x04,0x60,0x0C,0x60,0x0C,0x60,0x18,0x30,0x18,0x30,0x1F,0xF0,0x3F,0xF8,0x30,0x18,0x60,0x1C,0x60,0x0C,0x60,0x0C,0xC0,0x06, // 'A'
	0xFF,0x83,0xFF,0x8C,0x07,0x30,0x0C,0xC0,0x33,0x00,0xCC,0x06,0x3F,0xF0,0xFF,0xC3,0x01,0xCC,0x03,0x30,0x0E,0xC0,0x3B,0x00,0xCC,0x07,0x3F,0xF8,0xFF,0xC0, // 'B'
	0x03,0xF0,0x3F,0xE3,0xC1,0x8C,0x00,0x70,0x01,0x80,0x06,0x00,0x38,0x00,0xE0,0x03,0x80,0x06,0x00,0x18,0x00,0x70,0x00,0xC0,0x03,0xC0,0x87,0xFE,0x07,0xF0, // 'C'
	0xFF,0x80,0xFF,0xE0,0xC0,0x70,0xC0,0x38,0xC0,0x1C,0xC0,0x0C,0xC0,0x0C,0xC0,0x0C,0xC0,0x0E,0xC0,0x0C,0xC0,0x0C,0xC0,0x0C,0xC0,0x1C,0xC0,0x38,0xC0,0xF0,0xFF,0xE0,0xFF,0x80, // 'D'
	0xFF,0xDF,0xFB,0x00,0x60,0x0C,0x01,0x80,0x30,0x07,0xFC,0xFF,0x98,0x03,0x00,0x60,0x0C,0x01,0x80,0x30,0x07,0xFE,0xFF,0xC0, // 'E'
	0xFF,0xDF,0xFB,0x00,0x60,0x0C,0x01,0x80,0x30,0x06,0x00,0xFF,0x9F,0xF3,0x00,0x60,0x0C,0x01,0x80,0x30,0x06,0x00,0xC0,0x00, // 'F'
	0x03,0xF0,0x1F,0xF8,0xF0,0x21,0x80,0x07,0x00,0x0C,0x00,0x18,0x00,0x70,0x00,0xE0,0x7D,0xC0,0xF9,0x80,0x33,0x00,0x66,0x00,0xC6,0x01,0x8F,0x03,0x0F,0xFE,0x07,0xF8, // 'G'
	0xC0,0x0D,0x80,0x1B,0x00,0x36,0x00,0x6C,0x00,0xD8,0x01,0xB0,0x03,0x7F,0xFE,0xFF,0xFD,0x80,0x1B,0x00,0x36,0x00,0x6C,0x00,0xD8,0x01,0xB0,0x03,0x60,0x06,0xC0,0x0C, // 'H'
	0xDB,0x6D,0xB6,0xDB,0x6D,0xB6,0xC0, // 'I'
	0x0C,0x18,0x30,0x60,0xC1,0x83,0x06,0x0C,0x18,0x30,0x60,0xC1,0x83,0x06,0x0C,0x18,0x77,0xCF,0x00, // 'J'
	0xC0,0x33,0x01,0x8C,0x0C,0x30,0x60,0xC3,0x03,0x1C,0x0C,0xE0,0x37,0x00,0xFE,0x03,0x98,0x0C,0x30,0x30,0xE0,0xC1,0xC3,0x03,0x0C,0x06,0x30,0x1C,0xC0,0x38, // 'K'
	0xC0,0x30,0x0C,0x03,0x00,0xC0,0x30,0x0C,0x03,0x00,0xC0,0x30,0x0C,0x03,0x00,0xC0,0x30,0x0C,0x03,0xFE,0xFF,0x80, // 'L'
	0xF0,0x03,0xDE,0x00,0x7B,0xC0,0x0B,0x6C,0x03,0x6D,0x80,0x6D,0x98,0x19,0xB3,0x03,0x36,0x60,0x66,0xC6,0x18,0xD8,0xC3,0x1B,0x0C,0xC3,0x61,0x98,0x6C,0x33,0x0D,0x83,0xC1,0xB0,0x78,0x36,0x0E,0x06,0xC0,0xC0,0xC0, // 'M'
	0xE0,0x0D,0xE0,0x1B,0xC0,0x36,0xC0,0x6D,0xC0,0xD9,0x81,0xB1,0x83,0x63,0x06,0xC3,0x0D,0x83,0x1B,0x06,0x36,0x06,0x6C,0x0E,0xD8,0x0D,0xB0,0x0F,0x60,0x1E,0xC0,0x1C, // 'N'
	0x07,0xF0,0x07,0xFF,0x03,0xC1,0xE0,0xC0,0x18,0x70,0x03,0x18,0x00,0xC6,0x00,0x31,0x80,0x0C,0xE0,0x03,0x98,0x00,0xC6,0x00,0x31,0x80,0x0C,0x60,0x03,0x0C,0x01,0x83,0xC1,0xE0,0x7F,0xF0,0x07,0xF0,0x00, // 'O'
	0xFF,0x0F,0xF8,0xC1,0xCC,0x0E,0xC0,0x6C,0x06,0xC0,0x6C,0x0C,0xC1,0xCF,0xF8,0xFE,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x00, // 'P'
	0x07,0xF0,0x07,0xFF,0x03,0xC1,0xE0,0xC0,0x18,0x70,0x03,0x18,0x00,0xC6,0x00,0x31,0x80,0x0C,0xE0,0x03,0x98,0x00,0xC6,0x00,0x31,0x80,0x0C,0x60,0x03,0x0C,0x01,0x83,0xC1,0xE0,0x7F,0xF0,0x07,0xF0,0x00,0x0C,0x00,0x03,0x80,0x00,0x70,0x00,0x0E,0x00, // 'Q'
	0xFF,0x03,0xFF,0x0C,0x0E,0x30,0x18,0xC0,0x63,0x01,0x8C,0x06,0x30,0x38,0xFF,0xC3,0xFC,0x0C,0x38,0x30,0x60,0xC0,0xC3,0x03,0x0C,0x06,0x30,0x1C,0xC0,0x30, // 'R'
	0x1F,0x87,0xFC,0x70,0x4E,0x00,0xC0,0x06,0x00,0x70,0x03,0xC0,0x1F,0x00,0x3C,0x00,0xC0,0x06,0x00,0x60,0x06,0x81,0xCF,0xFC,0x7F,0x00, // 'S'
	0xFF,0xFB,0xFF,0xE0,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0x00, // 'T'
	0xC0,0x1B,0x00,0x6C,0x01,0xB0,0x06,0xC0,0x1B,0x00,0x6C,0x01,0xB0,0x06,0xC0,0x1B,0x00,0x6C,0x01,0xB0,0x06,0xC0,0x19,0x80,0xC7,0x07,0x0F,0xF8,0x0F,0x80, // 'U'
	0xC0,0x0C,0xC0,0x31,0x80,0x63,0x00,0xC3,0x03,0x06,0x06,0x0C,0x0C,0x0C,0x30,0x18,0x60,0x30,0xC0,0x33,0x00,0x66,0x00,0xCC,0x00,0xF0,0x01,0xE0,0x03,0xC0,0x03,0x00, // 'V'
	0xE0,0x30,0x1C,0xC0,0xE0,0x31,0x81,0xE0,0x63,0x03,0xC0,0xC7,0x05,0x83,0x06,0x19,0x86,0x0C,0x33,0x0C,0x18,0x66,0x18,0x19,0x86,0x60,0x33,0x0C,0xC0,0x66,0x19,0x80,0xD8,0x13,0x00,0xF0,0x3C,0x01,0xE0,0x78,0x03,0xC0,0xF0,0x07,0x00,0xE0,0x06,0x01,0x80, // 'W'
	0x60,0x18,0xE0,0x70,0xC0,0xC0,0xC3,0x01,0xCE,0x01,0x98,0x01,0xE0,0x03,0xC0,0x03,0x00,0x0F,0x00,0x33,0x00,0x66,0x01,0x86,0x06,0x0E,0x0C,0x0C,0x30,0x0C,0xE0,0x1C, // 'X'
	0xC0,0x19,0x80,0xC6,0x03,0x0C,0x18,0x30,0x60,0x63,0x01,0x8C,0x03,0x60,0x0F,0x80,0x1C,0x00,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0x00, // 'Y'
	0xFF,0xF7,0xFF,0x80,0x18,0x01,0x80,0x0C,0x00,0xC0,0x0C,0x00,0xE0,0x06,0x00,0x60,0x07,0x00,0x30,0x03,0x00,0x30,0x01,0x80,0x1F,0xFE,0xFF,0xF0, // 'Z'
	0xFB,0xEC,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x3E,0xF8, // '['
	0xC0,0x18,0x06,0x00,0xC0,0x30,0x0C,0x01,0x80,0x60,0x08,0x03,0x00,0xC0,0x18,0x06,0x01,0x80,0x30,0x0C,0x01,0x80, // '\'
	0xFB,0xE1,0x86,0x18,0x61,0x86,0x18,0x61,0x86,0x18,0x61,0x86,0x18,0x61,0xBE,0xF8, // ']'
	0x0C,0x00,0xE0,0x1E,0x01,0xB0,0x13,0x03,0x18,0x21,0x86,0x0C,0x40,0xCC,0x06,0xC0,0x60, // '^'
	0xFF,0xEF,0xFE, // '_'
	0xC3,0x18,0x60, // '`'
	0x1F,0x07,0xF0,0x87,0x00,0x60,0x0C,0x3F,0x9F,0xF7,0x86,0xC0,0xD8,0x1B,0x87,0x3F,0xE3,0xE4, // 'a'
	0xC0,0x06,0x00,0x30,0x01,0x80,0x0C,0x00,0x67,0xC3,0xFF,0x1E,0x1C,0xE0,0x66,0x03,0x30,0x0D,0x80,0x6C,0x03,0x60,0x33,0x81,0x9E,0x1C,0xFF,0xC6,0x7C,0x00, // 'b'
	0x1F,0x8F,0xE7,0x09,0x80,0xE0,0x30,0x0C,0x03,0x00,0xE0,0x18,0x07,0x00,0xFE,0x1F,0x80, // 'c'
	0x00,0x30,0x01,0x80,0x0C,0x00,0x60,0x03,0x0F,0x98,0xFF,0xCE,0x1E,0x60,0x73,0x01,0xB0,0x0D,0x80,0x6C,0x03,0x30,0x19,0x81,0xCE,0x1E,0x3F,0xF0,0xF9,0x80, // 'd'
	0x1F,0x03,0xF8,0x70,0xC6,0x0C,0xC0,0x6F,0xFE,0xFF,0xEC,0x00,0xE0,0x06,0x00,0x70,0x43,0xFC,0x0F,0x80, // 'e'
	0x0F,0x87,0xE1,0x80,0x60,0x18,0x1F,0xCF,0xF0,0x60,0x18,0x06,0x01,0x80,0x60,0x18,0x06,0x01,0x80,0x60,0x18,0x06,0x00, // 'f'
	0x0F,0xF1,0xFF,0x8C,0x30,0xC0,0xC6,0x06,0x18,0x70,0xFF,0x03,0xF0,0x10,0x01,0x80,0x0C,0x00,0x3F,0x83,0xFF,0x30,0x19,0x00,0xD8,0x06,0x60,0x73,0xFF,0x07,0xE0, // 'g'
	0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0xF8,0xFF,0xCF,0x0E,0xE0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06, // 'h'
	0xDB,0x01,0xB6,0xDB,0x6D,0xB6,0xD8, // 'i'
	0x18,0x61,0x80,0x00,0x61,0x86,0x18,0x61,0x86,0x18,0x61,0x86,0x18,0x61,0x86,0x18,0x6F,0x3C, // 'j'
	0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x1C,0xC1,0x8C,0x30,0xC6,0x0C,0xC0,0xD8,0x0F,0xC0,0xEC,0x0C,0x60,0xC3,0x0C,0x38,0xC1,0xCC,0x0C, // 'k'
	0xDB,0x6D,0xB6,0xDB,0x6D,0xB6,0xD8, // 'l'
	0xCF,0x0F,0x1F,0xF7,0xF3,0x87,0xC7,0x70,0x70,0x6C,0x0C,0x0D,0x81,0x81,0xB0,0x30,0x36,0x06,0x06,0xC0,0xC0,0xD8,0x18,0x1B,0x03,0x03,0x60,0x60,0x6C,0x0C,0x0C, // 'm'
	0xCF,0x8F,0xFC,0xF0,0xEE,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x60, // 'n'
	0x0F,0x80,0xFF,0x87,0x07,0x18,0x0C,0x60,0x33,0x00,0x6C,0x01,0xB0,0x06,0x60,0x31,0x80,0xC7,0x07,0x0F,0xF8,0x0F,0x80, // 'o'
	0xCF,0x87,0xFE,0x3C,0x39,0xC0,0xCC,0x06,0x60,0x1B,0x00,0xD8,0x06,0xC0,0x67,0x03,0x3C,0x39,0xFF,0x8C,0xF8,0x60,0x03,0x00,0x18,0x00,0xC0,0x06,0x00,0x30,0x00, // 'p'
	0x1F,0x31,0xFF,0x9C,0x3C,0xC0,0xE6,0x03,0x60,0x1B,0x00,0xD8,0x06,0x60,0x33,0x03,0x9C,0x3C,0x7F,0xE1,0xF3,0x00,0x18,0x00,0xC0,0x06,0x00,0x30,0x01,0x80,0x0C, // 'q'
	0xCF,0x6F,0x3C,0x1C,0x0C,0x06,0x03,0x01,0x80,0xC0,0x60,0x30,0x18,0x0C,0x00, // 'r'
	0x3E,0x1F,0xEC,0x13,0x00,0xE0,0x1E,0x01,0xE0,0x1C,0x01,0x80,0x60,0x3B,0xFC,0x7E,0x00, // 's'
	0x10,0x08,0x0C,0x0F,0xCF,0xE1,0x80,0xC0,0x60,0x30,0x18,0x0C,0x06,0x03,0x01,0xC0,0x7C,0x3E, // 't'
	0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x0E,0xE1,0xE7,0xFE,0x3E,0x60, // 'u'
	0xC0,0x33,0x03,0x18,0x18,0xC0,0xC3,0x0C,0x18,0x60,0xC3,0x03,0x30,0x19,0x80,0x48,0x03,0xC0,0x1E,0x00,0x60,0x00, // 'v'
	0xC0,0xE0,0x66,0x0E,0x0C,0x60,0xA0,0xC6,0x1B,0x0C,0x31,0xB1,0x83,0x1B,0x18,0x33,0x19,0x83,0x31,0x98,0x1B,0x1B,0x01,0xE0,0xF0,0x1E,0x0F,0x01,0xE0,0xF0,0x0C,0x06,0x00, // 'w'
	0xC0,0x63,0x06,0x0C,0x60,0x63,0x01,0xB0,0x07,0x00,0x38,0x01,0xC0,0x1B,0x01,0x8C,0x1C,0x70,0xC1,0x8C,0x06,0x00, // 'x'
	0xC0,0x33,0x03,0x18,0x18,0xC0,0xC3,0x0C,0x18,0x60,0x63,0x03,0x30,0x19,0x80,0x6C,0x03,0xC0,0x0E,0x00,0x60,0x03,0x00,0x18,0x01,0x80,0x1C,0x07,0xC0,0x3C,0x00, // 'y'
	0xFF,0xBF,0xE0,0x30,0x08,0x06,0x03,0x00,0x80,0x60,0x30,0x18,0x06,0x03,0xFE,0xFF,0x80, // 'z'
	0x06,0x1E,0x18,0x18,0x18,0x18,0x18,0x18,0x30,0x70,0xC0,0x70,0x30,0x18,0x18,0x18,0x18,0x18,0x18,0x1E,0x06, // '{'
	0xAA,0xAA,0xAA,0xAA,0xAA,0xAA, // '|'
	0xC0,0xF0,0x30,0x30,0x30,0x30,0x30,0x30,0x18,0x1C,0x06,0x1C,0x18,0x30,0x30,0x30,0x30,0x30,0x30,0xF0,0xC0 // '}'
};
const GFXglyph Open_Sans_Regular_24Glyphs[] PROGMEM = {
// bitmapOffset, width, height, xAdvance, xOffset, yOffset
	  {     0,   1,   1,   7,    0,    0 }, // ' '
	  {     1,   4,  17,   7,    2,  -17 }, // '!'
	  {    10,   7,   6,  11,    2,  -17 }, // '"'
	  {    16,  15,  17,  17,    1,  -17 }, // '#'
	  {    48,  11,  19,  15,    2,  -18 }, // '$'
	  {    75,  19,  17,  21,    1,  -17 }, // '%'
	  {   116,  18,  17,  19,    1,  -17 }, // '&'
	  {   155,   4,   6,   6,    1,  -17 }, // '''
	  {   158,   6,  21,   8,    1,  -17 }, // '('
	  {   174,   6,  21,   8,    1,  -17 }, // ')'
	  {   190,  12,  11,  14,    1,  -18 }, // '*'
	  {   207,  13,  12,  15,    1,  -14 }, // '+'
	  {   227,   4,   6,   7,    1,   -3 }, // ','
	  {   230,   7,   2,   9,    1,   -7 }, // '-'
	  {   232,   4,   3,   7,    2,   -3 }, // '.'
	  {   234,  10,  17,  10,    0,  -17 }, // '/'
	  {   256,  13,  17,  15,    1,  -17 }, // '0'
	  {   284,   8,  17,  15,    2,  -17 }, // '1'
	  {   301,  13,  17,  15,    1,  -17 }, // '2'
	  {   329,  13,  17,  15,    1,  -17 }, // '3'
	  {   357,  14,  17,  15,    1,  -17 }, // '4'
	  {   387,  12,  17,  15,    2,  -17 }, // '5'
	  {   413,  13,  17,  15,    1,  -17 }, // '6'
	  {   441,  13,  17,  15,    1,  -17 }, // '7'
	  {   469,  13,  17,  15,    1,  -17 }, // '8'
	  {   497,  13,  17,  15,    1,  -17 }, // '9'
	  {   525,   4,  13,   7,    2,  -13 }, // ':'
	  {   532,   4,  16,   7,    1,  -13 }, // ';'
	  {   540,  13,  12,  15,    1,  -15 }, // '<'
	  {   560,  13,   7,  15,    1,  -12 }, // '='
	  {   572,  13,  12,  15,    1,  -15 }, // '>'
	  {   592,  10,  17,  11,    0,  -17 }, // '?'
	  {   614,  21,  19,  23,    1,  -17 }, // '@'
	  {   664,  16,  17,  16,    0,  -17 }, // 'A'
	  {   698,  14,  17,  17,    2,  -17 }, // 'B'
	  {   728,  14,  17,  16,    1,  -17 }, // 'C'
	  {   758,  16,  17,  19,    2,  -17 }, // 'D'
	  {   792,  11,  17,  14,    2,  -17 }, // 'E'
	  {   816,  11,  17,  13,    2,  -17 }, // 'F'
	  {   840,  15,  17,  18,    1,  -17 }, // 'G'
	  {   872,  15,  17,  19,    2,  -17 }, // 'H'
	  {   904,   3,  17,   8,    2,  -17 }, // 'I'
	  {   911,   7,  21,   7,   -2,  -17 }, // 'J'
	  {   930,  14,  17,  16,    2,  -17 }, // 'K'
	  {   960,  10,  17,  13,    2,  -17 }, // 'L'
	  {   982,  19,  17,  23,    2,  -17 }, // 'M'
	  {  1023,  15,  17,  19,    2,  -17 }, // 'N'
	  {  1055,  18,  17,  20,    1,  -17 }, // 'O'
	  {  1094,  12,  17,  15,    2,  -17 }, // 'P'
	  {  1120,  18,  21,  20,    1,  -17 }, // 'Q'
	  {  1168,  14,  17,  16,    2,  -17 }, // 'R'
	  {  1198,  12,  17,  14,    1,  -17 }, // 'S'
	  {  1224,  14,  17,  14,    0,  -17 }, // 'T'
	  {  1254,  14,  17,  18,    2,  -17 }, // 'U'
	  {  1284,  15,  17,  15,    0,  -17 }, // 'V'
	  {  1316,  23,  17,  23,    0,  -17 }, // 'W'
	  {  1365,  15,  17,  15,    0,  -17 }, // 'X'
	  {  1397,  14,  17,  14,    0,  -17 }, // 'Y'
	  {  1427,  13,  17,  15,    1,  -17 }, // 'Z'
	  {  1455,   6,  21,   9,    2,  -17 }, // '['
	  {  1471,  10,  17,  10,    0,  -17 }, // '\'
	  {  1493,   6,  21,   9,    1,  -17 }, // ']'
	  {  1509,  12,  11,  14,    1,  -17 }, // '^'
	  {  1526,  12,   2,  12,    0,    2 }, // '_'
	  {  1529,   5,   4,  15,    5,  -19 }, // '`'
	  {  1532,  11,  13,  14,    1,  -13 }, // 'a'
	  {  1550,  13,  18,  16,    2,  -18 }, // 'b'
	  {  1580,  10,  13,  12,    1,  -13 }, // 'c'
	  {  1597,  13,  18,  16,    1,  -18 }, // 'd'
	  {  1627,  12,  13,  14,    1,  -13 }, // 'e'
	  {  1647,  10,  18,   9,    0,  -18 }, // 'f'
	  {  1670,  13,  19,  14,    0,  -13 }, // 'g'
	  {  1701,  12,  18,  16,    2,  -18 }, // 'h'
	  {  1728,   3,  18,   7,    2,  -18 }, // 'i'
	  {  1735,   6,  24,   7,   -1,  -18 }, // 'j'
	  {  1753,  12,  18,  14,    2,  -18 }, // 'k'
	  {  1780,   3,  18,   7,    2,  -18 }, // 'l'
	  {  1787,  19,  13,  23,    2,  -13 }, // 'm'
	  {  1818,  12,  13,  16,    2,  -13 }, // 'n'
	  {  1838,  14,  13,  16,    1,  -13 }, // 'o'
	  {  1861,  13,  19,  16,    2,  -13 }, // 'p'
	  {  1892,  13,  19,  16,    1,  -13 }, // 'q'
	  {  1923,   9,  13,  11,    2,  -13 }, // 'r'
	  {  1938,  10,  13,  12,    1,  -13 }, // 's'
	  {  1955,   9,  16,   9,    0,  -16 }, // 't'
	  {  1973,  12,  13,  16,    2,  -13 }, // 'u'
	  {  1993,  13,  13,  13,    0,  -13 }, // 'v'
	  {  2015,  20,  13,  20,    0,  -13 }, // 'w'
	  {  2048,  13,  13,  14,    1,  -13 }, // 'x'
	  {  2070,  13,  19,  13,    0,  -13 }, // 'y'
	  {  2101,  10,  13,  12,    1,  -13 }, // 'z'
	  {  2118,   8,  21,  10,    1,  -17 }, // '{'
	  {  2139,   2,  24,  14,    6,  -18 }, // '|'
	  {  2145,   8,  21,  10,    1,  -17 } // '}'
};
const GFXfont Open_Sans_Regular_24 PROGMEM = {
(uint8_t  *)Open_Sans_Regular_24Bitmaps,(GFXglyph *)Open_Sans_Regular_24Glyphs,0x20, 0x7E, 33};