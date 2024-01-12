#pragma once
#include <Adafruit_GFX.h>

// Font: 04b03
const uint8_t Font_04b03_Bitmaps[] PROGMEM = {
    0x00, /* 0x20 space */
    0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0x00,     0x00,     0xC0,     0xC0, /* 0x21 exclam */
    0xCC,     0xCC,     0xCC,     0xCC, /* 0x22 quotedbl */
    0x3300,     0x3300,     0xFFC0,     0xFFC0,     0x3300,     0x3300,     0xFFC0,     0xFFC0,     0x3300,     0x3300, /* 0x23 numbersign */
    0x0C,     0x0C,     0x3F,     0x3F,     0xF0,     0xF0,     0x0F,     0x0F,     0xFC,     0xFC,     0x0C,     0x0C, /* 0x24 dollar */
    0xC300,     0xC300,     0x300,     0x300,     0xC00,     0xC00,     0x3000,     0x3000,     0x30C0,     0x30C0, /* 0x25 percent */
    0x3C00,     0x3C00,     0xC000,     0xC000,     0x3CC0,     0x3CC0,     0xC300,     0xC300,     0x3CC0,     0x3CC0, /* 0x26 ampersand */
    0xC0,     0xC0,     0xC0,     0xC0, /* 0x27 quotesingle */
    0x30,     0x30,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0x30,     0x30, /* 0x28 parenleft */
    0xC0,     0xC0,     0x30,     0x30,     0x30,     0x30,     0x30,     0x30,     0xC0,     0xC0, /* 0x29 parenright */
    0xCC,     0xCC,     0x30,     0x30,     0xCC,     0xCC, /* 0x2A asterisk */
    0x30,     0x30,     0xFC,     0xFC,     0x30,     0x30, /* 0x2B plus */
    0x30,     0x30,     0xC0,     0xC0, /* 0x2C comma */
    0xFC,     0xFC, /* 0x2D hyphen */
    0xC0,     0xC0, /* 0x2E period */
    0xC0,     0xC0,     0x300,     0x300,     0xC00,     0xC00,     0x3000,     0x3000,     0xC000,     0xC000, /* 0x2F slash */
    0x3C,     0x3C,     0xC3,     0xC3,     0xC3,     0xC3,     0xC3,     0xC3,     0x3C,     0x3C, /* 0x30 zero */
    0xF0,     0xF0,     0x30,     0x30,     0x30,     0x30,     0x30,     0x30,     0x30,     0x30, /* 0x31 one */
    0xFC,     0xFC,     0x03,     0x03,     0x3C,     0x3C,     0xC0,     0xC0,     0xFF,     0xFF, /* 0x32 two */
    0xFC,     0xFC,     0x03,     0x03,     0x3C,     0x3C,     0x03,     0x03,     0xFC,     0xFC, /* 0x33 three */
    0x0C,     0x0C,     0x3C,     0x3C,     0xCC,     0xCC,     0xFF,     0xFF,     0x0C,     0x0C, /* 0x34 four */
    0xFF,     0xFF,     0xC0,     0xC0,     0xFC,     0xFC,     0x03,     0x03,     0xFC,     0xFC, /* 0x35 five */
    0x3C,     0x3C,     0xC0,     0xC0,     0xFC,     0xFC,     0xC3,     0xC3,     0x3C,     0x3C, /* 0x36 six */
    0xFF,     0xFF,     0x03,     0x03,     0x0C,     0x0C,     0x30,     0x30,     0x30,     0x30, /* 0x37 seven */
    0x3C,     0x3C,     0xC3,     0xC3,     0x3C,     0x3C,     0xC3,     0xC3,     0x3C,     0x3C, /* 0x38 eight */
    0x3C,     0x3C,     0xC3,     0xC3,     0x3F,     0x3F,     0x03,     0x03,     0x3C,     0x3C, /* 0x39 nine */
    0xC0,     0xC0,     0x00,     0x00,     0xC0,     0xC0, /* 0x3A colon */
    0xC0,     0xC0,     0x00,     0x00,     0xC0,     0xC0,     0xC0,     0xC0, /* 0x3B semicolon */
    0x0C,     0x0C,     0x30,     0x30,     0xC0,     0xC0,     0x30,     0x30,     0x0C,     0x0C, /* 0x3C less */
    0xFC,     0xFC,     0x00,     0x00,     0xFC,     0xFC, /* 0x3D equal */
    0xC0,     0xC0,     0x30,     0x30,     0x0C,     0x0C,     0x30,     0x30,     0xC0,     0xC0, /* 0x3E greater */
    0xFC,     0xFC,     0x03,     0x03,     0x3C,     0x3C,     0x00,     0x00,     0x30,     0x30, /* 0x3F question */
    0x3F00,     0x3F00,     0xC0C0,     0xC0C0,     0xCFC0,     0xCFC0,     0xCCC0,     0xCCC0,     0x3F00,     0x3F00, /* 0x40 at */
    0x3C,     0x3C,     0xC3,     0xC3,     0xC3,     0xC3,     0xFF,     0xFF,     0xC3,     0xC3, /* 0x41 A */
    0xFC,     0xFC,     0xC3,     0xC3,     0xFC,     0xFC,     0xC3,     0xC3,     0xFC,     0xFC, /* 0x42 B */
    0x3C,     0x3C,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0x3C,     0x3C, /* 0x43 C */
    0xFC,     0xFC,     0xC3,     0xC3,     0xC3,     0xC3,     0xC3,     0xC3,     0xFC,     0xFC, /* 0x44 D */
    0xFC,     0xFC,     0xC0,     0xC0,     0xFC,     0xFC,     0xC0,     0xC0,     0xFC,     0xFC, /* 0x45 E */
    0xFC,     0xFC,     0xC0,     0xC0,     0xFC,     0xFC,     0xC0,     0xC0,     0xC0,     0xC0, /* 0x46 F */
    0x3F,     0x3F,     0xC0,     0xC0,     0xCF,     0xCF,     0xC3,     0xC3,     0x3F,     0x3F, /* 0x47 G */
    0xC3,     0xC3,     0xC3,     0xC3,     0xFF,     0xFF,     0xC3,     0xC3,     0xC3,     0xC3, /* 0x48 H */
    0xFC,     0xFC,     0x30,     0x30,     0x30,     0x30,     0x30,     0x30,     0xFC,     0xFC, /* 0x49 I */
    0x0F,     0x0F,     0x03,     0x03,     0x03,     0x03,     0xC3,     0xC3,     0x3C,     0x3C, /* 0x4A J */
    0xC3,     0xC3,     0xCC,     0xCC,     0xF0,     0xF0,     0xCC,     0xCC,     0xC3,     0xC3, /* 0x4B K */
    0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xFC,     0xFC, /* 0x4C L */
    0xC0C0,     0xC0C0,     0xF3C0,     0xF3C0,     0xCCC0,     0xCCC0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0, /* 0x4D M */
    0xC3,     0xC3,     0xF3,     0xF3,     0xCF,     0xCF,     0xC3,     0xC3,     0xC3,     0xC3, /* 0x4E N */
    0x3C,     0x3C,     0xC3,     0xC3,     0xC3,     0xC3,     0xC3,     0xC3,     0x3C,     0x3C, /* 0x4F O */
    0xFC,     0xFC,     0xC3,     0xC3,     0xC3,     0xC3,     0xFC,     0xFC,     0xC0,     0xC0, /* 0x50 P */
    0x3C,     0x3C,     0xC3,     0xC3,     0xC3,     0xC3,     0xC3,     0xC3,     0x3C,     0x3C,     0x03,     0x03, /* 0x51 Q */
    0xFC,     0xFC,     0xC3,     0xC3,     0xC3,     0xC3,     0xFC,     0xFC,     0xC3,     0xC3, /* 0x52 R */
    0x3F,     0x3F,     0xC0,     0xC0,     0x3C,     0x3C,     0x03,     0x03,     0xFC,     0xFC, /* 0x53 S */
    0xFC,     0xFC,     0x30,     0x30,     0x30,     0x30,     0x30,     0x30,     0x30,     0x30, /* 0x54 T */
    0xC3,     0xC3,     0xC3,     0xC3,     0xC3,     0xC3,     0xC3,     0xC3,     0x3C,     0x3C, /* 0x55 U */
    0xC3,     0xC3,     0xC3,     0xC3,     0xCC,     0xCC,     0xCC,     0xCC,     0x30,     0x30, /* 0x56 V */
    0xC0C0,     0xC0C0,     0xCCC0,     0xCCC0,     0xCCC0,     0xCCC0,     0xCCC0,     0xCCC0,     0x3300,     0x3300, /* 0x57 W */
    0xC3,     0xC3,     0xC3,     0xC3,     0x3C,     0x3C,     0xC3,     0xC3,     0xC3,     0xC3, /* 0x58 X */
    0xC3,     0xC3,     0xC3,     0xC3,     0x3F,     0x3F,     0x03,     0x03,     0x3C,     0x3C, /* 0x59 Y */
    0xFC,     0xFC,     0x0C,     0x0C,     0x30,     0x30,     0xC0,     0xC0,     0xFC,     0xFC, /* 0x5A Z */
    0xF0,     0xF0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xF0,     0xF0, /* 0x5B bracketleft */
    0xC000,     0xC000,     0x3000,     0x3000,     0xC00,     0xC00,     0x300,     0x300,     0xC0,     0xC0, /* 0x5C backslash */
    0xF0,     0xF0,     0x30,     0x30,     0x30,     0x30,     0x30,     0x30,     0xF0,     0xF0, /* 0x5D bracketright */
    0x30,     0x30,     0xCC,     0xCC, /* 0x5E asciicircum */
    0xFF,     0xFF, /* 0x5F underscore */
    0xC0,     0xC0,     0x30,     0x30, /* 0x60 grave */
    0x3F,     0x3F,     0xC3,     0xC3,     0xC3,     0xC3,     0x3F,     0x3F, /* 0x61 a */
    0xC0,     0xC0,     0xFC,     0xFC,     0xC3,     0xC3,     0xC3,     0xC3,     0xFC,     0xFC, /* 0x62 b */
    0x3C,     0x3C,     0xC0,     0xC0,     0xC0,     0xC0,     0x3C,     0x3C, /* 0x63 c */
    0x03,     0x03,     0x3F,     0x3F,     0xC3,     0xC3,     0xC3,     0xC3,     0x3F,     0x3F, /* 0x64 d */
    0x3C,     0x3C,     0xCF,     0xCF,     0xF0,     0xF0,     0x3C,     0x3C, /* 0x65 e */
    0x0C,     0x0C,     0x30,     0x30,     0xFC,     0xFC,     0x30,     0x30,     0x30,     0x30, /* 0x66 f */
    0x3F,     0x3F,     0xC3,     0xC3,     0xC3,     0xC3,     0x3F,     0x3F,     0x03,     0x03,     0x3C,     0x3C, /* 0x67 g */
    0xC0,     0xC0,     0xFC,     0xFC,     0xC3,     0xC3,     0xC3,     0xC3,     0xC3,     0xC3, /* 0x68 h */
    0xC0,     0xC0,     0x00,     0x00,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0, /* 0x69 i */
    0x30,     0x30,     0x00,     0x00,     0x30,     0x30,     0x30,     0x30,     0x30,     0x30,     0x30,     0x30,     0xC0,     0xC0, /* 0x6A j */
    0xC0,     0xC0,     0xC3,     0xC3,     0xCC,     0xCC,     0xFC,     0xFC,     0xC3,     0xC3, /* 0x6B k */
    0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0, /* 0x6C l */
    0xFF00,     0xFF00,     0xCCC0,     0xCCC0,     0xCCC0,     0xCCC0,     0xCCC0,     0xCCC0, /* 0x6D m */
    0xFC,     0xFC,     0xC3,     0xC3,     0xC3,     0xC3,     0xC3,     0xC3, /* 0x6E n */
    0x3C,     0x3C,     0xC3,     0xC3,     0xC3,     0xC3,     0x3C,     0x3C, /* 0x6F o */
    0xFC,     0xFC,     0xC3,     0xC3,     0xC3,     0xC3,     0xFC,     0xFC,     0xC0,     0xC0,     0xC0,     0xC0, /* 0x70 p */
    0x3F,     0x3F,     0xC3,     0xC3,     0xC3,     0xC3,     0x3F,     0x3F,     0x03,     0x03,     0x03,     0x03, /* 0x71 q */
    0xCC,     0xCC,     0xF0,     0xF0,     0xC0,     0xC0,     0xC0,     0xC0, /* 0x72 r */
    0x3F,     0x3F,     0xF0,     0xF0,     0x0F,     0x0F,     0xFC,     0xFC, /* 0x73 s */
    0x30,     0x30,     0xFC,     0xFC,     0x30,     0x30,     0x30,     0x30,     0x0C,     0x0C, /* 0x74 t */
    0xC3,     0xC3,     0xC3,     0xC3,     0xC3,     0xC3,     0x3F,     0x3F, /* 0x75 u */
    0xC3,     0xC3,     0xC3,     0xC3,     0xCC,     0xCC,     0x30,     0x30, /* 0x76 v */
    0xCCC0,     0xCCC0,     0xCCC0,     0xCCC0,     0x3300,     0x3300,     0x3300,     0x3300, /* 0x77 w */
    0xCC,     0xCC,     0x30,     0x30,     0x30,     0x30,     0xCC,     0xCC, /* 0x78 x */
    0xC3,     0xC3,     0xC3,     0xC3,     0xC3,     0xC3,     0x3F,     0x3F,     0x03,     0x03,     0x3C,     0x3C, /* 0x79 y */
    0xFF,     0xFF,     0x0C,     0x0C,     0x30,     0x30,     0xFF,     0xFF, /* 0x7A z */
    0x3C,     0x3C,     0x30,     0x30,     0xC0,     0xC0,     0x30,     0x30,     0x3C,     0x3C, /* 0x7B braceleft */
    0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0, /* 0x7C bar */
    0xF0,     0xF0,     0x30,     0x30,     0x0C,     0x0C,     0x30,     0x30,     0xF0,     0xF0, /* 0x7D braceright */
    0x33,     0x33,     0xCC,     0xCC, /* 0x7E asciitilde */
    0x00, /* 0xA0 nonbreakingspace */
};

const GFXglyph Font_04b03_Glyphs[] PROGMEM = {
{ 0, 1, 1, 2, 0, -1 }, /* 0x20 space */
{ 1, 2, 10, 3, 1, -10 }, /* 0x21 exclam */
{ 11, 6, 4, 7, 1, -10 }, /* 0x22 quotedbl */
{ 15, 10, 10, 11, 1, -10 }, /* 0x23 numbersign */
{ 25, 8, 12, 9, 1, -10 }, /* 0x24 dollar */
{ 37, 10, 10, 11, 1, -10 }, /* 0x25 percent */
{ 47, 10, 10, 11, 1, -10 }, /* 0x26 ampersand */
{ 57, 2, 4, 3, 1, -10 }, /* 0x27 quotesingle */
{ 61, 4, 10, 5, 1, -10 }, /* 0x28 parenleft */
{ 71, 4, 10, 5, 1, -10 }, /* 0x29 parenright */
{ 81, 6, 6, 7, 1, -10 }, /* 0x2A asterisk */
{ 87, 6, 6, 7, 1, -8 }, /* 0x2B plus */
{ 93, 4, 4, 5, 1, -2 }, /* 0x2C comma */
{ 97, 6, 2, 7, 1, -6 }, /* 0x2D hyphen */
{ 99, 2, 2, 3, 1, -2 }, /* 0x2E period */
{ 101, 10, 10, 11, 1, -10 }, /* 0x2F slash */
{ 111, 8, 10, 9, 1, -10 }, /* 0x30 zero */
{ 121, 4, 10, 5, 1, -10 }, /* 0x31 one */
{ 131, 8, 10, 9, 1, -10 }, /* 0x32 two */
{ 141, 8, 10, 9, 1, -10 }, /* 0x33 three */
{ 151, 8, 10, 9, 1, -10 }, /* 0x34 four */
{ 161, 8, 10, 9, 1, -10 }, /* 0x35 five */
{ 171, 8, 10, 9, 1, -10 }, /* 0x36 six */
{ 181, 8, 10, 9, 1, -10 }, /* 0x37 seven */
{ 191, 8, 10, 9, 1, -10 }, /* 0x38 eight */
{ 201, 8, 10, 9, 1, -10 }, /* 0x39 nine */
{ 211, 2, 6, 3, 1, -8 }, /* 0x3A colon */
{ 217, 2, 8, 3, 1, -8 }, /* 0x3B semicolon */
{ 225, 6, 10, 7, 1, -10 }, /* 0x3C less */
{ 235, 6, 6, 7, 1, -8 }, /* 0x3D equal */
{ 241, 6, 10, 7, 1, -10 }, /* 0x3E greater */
{ 251, 8, 10, 9, 1, -10 }, /* 0x3F question */
{ 261, 10, 10, 11, 1, -10 }, /* 0x40 at */
{ 271, 8, 10, 9, 1, -10 }, /* 0x41 A */
{ 281, 8, 10, 9, 1, -10 }, /* 0x42 B */
{ 291, 6, 10, 7, 1, -10 }, /* 0x43 C */
{ 301, 8, 10, 9, 1, -10 }, /* 0x44 D */
{ 311, 6, 10, 7, 1, -10 }, /* 0x45 E */
{ 321, 6, 10, 7, 1, -10 }, /* 0x46 F */
{ 331, 8, 10, 9, 1, -10 }, /* 0x47 G */
{ 341, 8, 10, 9, 1, -10 }, /* 0x48 H */
{ 351, 6, 10, 7, 1, -10 }, /* 0x49 I */
{ 361, 8, 10, 9, 1, -10 }, /* 0x4A J */
{ 371, 8, 10, 9, 1, -10 }, /* 0x4B K */
{ 381, 6, 10, 7, 1, -10 }, /* 0x4C L */
{ 391, 10, 10, 11, 1, -10 }, /* 0x4D M */
{ 401, 8, 10, 9, 1, -10 }, /* 0x4E N */
{ 411, 8, 10, 9, 1, -10 }, /* 0x4F O */
{ 421, 8, 10, 9, 1, -10 }, /* 0x50 P */
{ 431, 8, 12, 9, 1, -10 }, /* 0x51 Q */
{ 443, 8, 10, 9, 1, -10 }, /* 0x52 R */
{ 453, 8, 10, 9, 1, -10 }, /* 0x53 S */
{ 463, 6, 10, 7, 1, -10 }, /* 0x54 T */
{ 473, 8, 10, 9, 1, -10 }, /* 0x55 U */
{ 483, 8, 10, 9, 1, -10 }, /* 0x56 V */
{ 493, 10, 10, 11, 1, -10 }, /* 0x57 W */
{ 503, 8, 10, 9, 1, -10 }, /* 0x58 X */
{ 513, 8, 10, 9, 1, -10 }, /* 0x59 Y */
{ 523, 6, 10, 7, 1, -10 }, /* 0x5A Z */
{ 533, 4, 10, 5, 1, -10 }, /* 0x5B bracketleft */
{ 543, 10, 10, 11, 1, -10 }, /* 0x5C backslash */
{ 553, 4, 10, 5, 1, -10 }, /* 0x5D bracketright */
{ 563, 6, 4, 7, 1, -10 }, /* 0x5E asciicircum */
{ 567, 8, 2, 9, 1, -2 }, /* 0x5F underscore */
{ 569, 4, 4, 5, 1, -10 }, /* 0x60 grave */
{ 573, 8, 8, 9, 1, -8 }, /* 0x61 a */
{ 581, 8, 10, 9, 1, -10 }, /* 0x62 b */
{ 591, 6, 8, 7, 1, -8 }, /* 0x63 c */
{ 599, 8, 10, 9, 1, -10 }, /* 0x64 d */
{ 609, 8, 8, 9, 1, -8 }, /* 0x65 e */
{ 617, 6, 10, 7, 1, -10 }, /* 0x66 f */
{ 627, 8, 12, 9, 1, -8 }, /* 0x67 g */
{ 639, 8, 10, 9, 1, -10 }, /* 0x68 h */
{ 649, 2, 10, 3, 1, -10 }, /* 0x69 i */
{ 659, 4, 14, 5, 1, -10 }, /* 0x6A j */
{ 673, 8, 10, 9, 1, -10 }, /* 0x6B k */
{ 683, 2, 10, 3, 1, -10 }, /* 0x6C l */
{ 693, 10, 8, 11, 1, -8 }, /* 0x6D m */
{ 701, 8, 8, 9, 1, -8 }, /* 0x6E n */
{ 709, 8, 8, 9, 1, -8 }, /* 0x6F o */
{ 717, 8, 12, 9, 1, -8 }, /* 0x70 p */
{ 729, 8, 12, 9, 1, -8 }, /* 0x71 q */
{ 741, 6, 8, 7, 1, -8 }, /* 0x72 r */
{ 749, 8, 8, 9, 1, -8 }, /* 0x73 s */
{ 757, 6, 10, 7, 1, -10 }, /* 0x74 t */
{ 767, 8, 8, 9, 1, -8 }, /* 0x75 u */
{ 775, 8, 8, 9, 1, -8 }, /* 0x76 v */
{ 783, 10, 8, 11, 1, -8 }, /* 0x77 w */
{ 791, 6, 8, 7, 1, -8 }, /* 0x78 x */
{ 799, 8, 12, 9, 1, -8 }, /* 0x79 y */
{ 811, 8, 8, 9, 1, -8 }, /* 0x7A z */
{ 819, 6, 10, 7, 1, -10 }, /* 0x7B braceleft */
{ 829, 2, 10, 3, 1, -10 }, /* 0x7C bar */
{ 839, 6, 10, 7, 1, -10 }, /* 0x7D braceright */
{ 849, 8, 4, 9, 1, -10 }, /* 0x7E asciitilde */
{ 853, 1, 1, 2, 0, -1 }, /* 0xA0 nonbreakingspace */
};

const GFXfont Font_04b03 PROGMEM = {(uint8_t *) Font_04b03_Bitmaps,  (GFXglyph *)Font_04b03_Glyphs, 0x20, 0xA0,  16};
