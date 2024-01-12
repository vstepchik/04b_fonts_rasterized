#pragma once
#include <Adafruit_GFX.h>

// Font: 04b11
const uint8_t Font_04b11_Bitmaps[] PROGMEM = {
    0x00, /* 0x20 space */
    0xC0,     0xC0,     0xC0,     0x00,     0xC0, /* 0x21 exclam */
    0xD8,     0xD8, /* 0x22 quotedbl */
    0x6C,     0xFE,     0x6C,     0xFE,     0x6C, /* 0x23 numbersign */
    0x7E,     0xD8,     0xFE,     0x36,     0xFC, /* 0x24 dollar */
    0xCC,     0xD8,     0x30,     0x6C,     0xCC, /* 0x25 percent */
    0x70,     0xD8,     0x70,     0xDC,     0x78, /* 0x26 ampersand */
    0xC0,     0xC0, /* 0x27 quotesingle */
    0x60,     0xC0,     0xC0,     0xC0,     0x60, /* 0x28 parenleft */
    0xC0,     0x60,     0x60,     0x60,     0xC0, /* 0x29 parenright */
    0xD8,     0x70,     0xD8, /* 0x2A asterisk */
    0x30,     0x30,     0xFC,     0x30,     0x30, /* 0x2B plus */
    0xC0,     0xC0,     0xC0, /* 0x2C comma */
    0xFC, /* 0x2D hyphen */
    0xC0,     0xC0, /* 0x2E period */
    0x0C,     0x18,     0x30,     0x60,     0xC0, /* 0x2F slash */
    0x78,     0xCC,     0xCC,     0xCC,     0x78, /* 0x30 zero */
    0xE0,     0x60,     0x60,     0x60,     0x60, /* 0x31 one */
    0xF8,     0x0C,     0x78,     0xC0,     0xFC, /* 0x32 two */
    0xF8,     0x0C,     0x78,     0x0C,     0xF8, /* 0x33 three */
    0x38,     0x78,     0xD8,     0xFC,     0x18, /* 0x34 four */
    0xFC,     0xC0,     0xF8,     0x0C,     0xF8, /* 0x35 five */
    0x78,     0xC0,     0xF8,     0xCC,     0x78, /* 0x36 six */
    0xFC,     0x0C,     0x18,     0x30,     0x60, /* 0x37 seven */
    0x78,     0xCC,     0x78,     0xCC,     0x78, /* 0x38 eight */
    0x78,     0xCC,     0x7C,     0x0C,     0x78, /* 0x39 nine */
    0xC0,     0x00,     0xC0, /* 0x3A colon */
    0xC0,     0x00,     0xC0,     0xC0, /* 0x3B semicolon */
    0x30,     0x60,     0xC0,     0x60,     0x30, /* 0x3C less */
    0xFC,     0x00,     0xFC, /* 0x3D equal */
    0xC0,     0x60,     0x30,     0x60,     0xC0, /* 0x3E greater */
    0xF8,     0x1C,     0x78,     0x00,     0x60, /* 0x3F question */
    0x7C,     0xC6,     0xDE,     0xD6,     0x7C, /* 0x40 at */
    0x78,     0xCC,     0xFC,     0xCC,     0xCC, /* 0x41 A */
    0xF8,     0xCC,     0xF8,     0xCC,     0xF8, /* 0x42 B */
    0x78,     0xCC,     0xC0,     0xCC,     0x78, /* 0x43 C */
    0xF8,     0xCC,     0xCC,     0xCC,     0xF8, /* 0x44 D */
    0xFC,     0xC0,     0xF8,     0xC0,     0xFC, /* 0x45 E */
    0xFC,     0xC0,     0xF8,     0xC0,     0xC0, /* 0x46 F */
    0x7C,     0xC0,     0xDC,     0xCC,     0x7C, /* 0x47 G */
    0xCC,     0xCC,     0xFC,     0xCC,     0xCC, /* 0x48 H */
    0xF0,     0x60,     0x60,     0x60,     0xF0, /* 0x49 I */
    0x3C,     0x0C,     0x0C,     0xCC,     0x78, /* 0x4A J */
    0xCC,     0xD8,     0xF0,     0xD8,     0xCC, /* 0x4B K */
    0xC0,     0xC0,     0xC0,     0xC0,     0xFC, /* 0x4C L */
    0xC6,     0xEE,     0xFE,     0xD6,     0xC6, /* 0x4D M */
    0xCC,     0xEC,     0xFC,     0xDC,     0xCC, /* 0x4E N */
    0x78,     0xCC,     0xCC,     0xCC,     0x78, /* 0x4F O */
    0xF8,     0xCC,     0xCC,     0xF8,     0xC0, /* 0x50 P */
    0x78,     0xCC,     0xCC,     0xCC,     0x78,     0x18, /* 0x51 Q */
    0xF8,     0xCC,     0xCC,     0xF8,     0xDC, /* 0x52 R */
    0x7C,     0xC0,     0x78,     0x0C,     0xF8, /* 0x53 S */
    0xFC,     0x30,     0x30,     0x30,     0x30, /* 0x54 T */
    0xCC,     0xCC,     0xCC,     0xCC,     0x78, /* 0x55 U */
    0xCC,     0xCC,     0x78,     0x78,     0x30, /* 0x56 V */
    0xDB,     0xDB,     0xDB,     0xFF,     0x66, /* 0x57 W */
    0xCC,     0x78,     0x30,     0x78,     0xCC, /* 0x58 X */
    0xCC,     0xCC,     0x78,     0x30,     0x30, /* 0x59 Y */
    0xFC,     0x18,     0x30,     0x60,     0xFC, /* 0x5A Z */
    0xE0,     0xC0,     0xC0,     0xC0,     0xE0, /* 0x5B bracketleft */
    0xC0,     0x60,     0x30,     0x18,     0x0C, /* 0x5C backslash */
    0xE0,     0x60,     0x60,     0x60,     0xE0, /* 0x5D bracketright */
    0x60,     0xF0, /* 0x5E asciicircum */
    0xFC, /* 0x5F underscore */
    0x00, /* 0x60 grave */
    0x7C,     0xCC,     0xCC,     0x7C, /* 0x61 a */
    0xC0,     0xF8,     0xCC,     0xCC,     0xF8, /* 0x62 b */
    0x7C,     0xC0,     0xC0,     0x7C, /* 0x63 c */
    0x0C,     0x7C,     0xCC,     0xCC,     0x7C, /* 0x64 d */
    0x78,     0xDC,     0xE0,     0x78, /* 0x65 e */
    0x3C,     0x60,     0xFC,     0x60,     0x60, /* 0x66 f */
    0x7C,     0xCC,     0xCC,     0x7C,     0x18,     0x30, /* 0x67 g */
    0xC0,     0xF8,     0xCC,     0xCC,     0xCC, /* 0x68 h */
    0xC0,     0x00,     0xC0,     0xC0,     0xC0, /* 0x69 i */
    0x30,     0x00,     0x30,     0x30,     0x30,     0x60,     0xC0, /* 0x6A j */
    0xC0,     0xDC,     0xF0,     0xD8,     0xCC, /* 0x6B k */
    0xC0,     0xC0,     0xC0,     0xC0,     0xC0, /* 0x6C l */
    0xFE,     0xDB,     0xDB,     0xDB, /* 0x6D m */
    0xF8,     0xCC,     0xCC,     0xCC, /* 0x6E n */
    0x78,     0xCC,     0xCC,     0x78, /* 0x6F o */
    0xF8,     0xCC,     0xCC,     0xF8,     0xC0, /* 0x70 p */
    0x7C,     0xCC,     0xCC,     0x7C,     0x0C, /* 0x71 q */
    0xDC,     0xF0,     0xC0,     0xC0, /* 0x72 r */
    0x7C,     0xF0,     0x3C,     0xF8, /* 0x73 s */
    0x60,     0xFC,     0x60,     0x6C,     0x38, /* 0x74 t */
    0xCC,     0xCC,     0xCC,     0x78, /* 0x75 u */
    0xCC,     0xCC,     0x78,     0x30, /* 0x76 v */
    0xDB,     0xDB,     0xDB,     0xFE, /* 0x77 w */
    0xCC,     0x78,     0x78,     0xCC, /* 0x78 x */
    0xCC,     0xCC,     0xCC,     0x7C,     0x0C,     0x18, /* 0x79 y */
    0xFC,     0x38,     0x70,     0xFC, /* 0x7A z */
    0x70,     0x60,     0xC0,     0x60,     0x70, /* 0x7B braceleft */
    0xC0,     0xC0,     0xC0,     0xC0,     0xC0, /* 0x7C bar */
    0xE0,     0x60,     0x30,     0x60,     0xE0, /* 0x7D braceright */
    0x70,     0xE0, /* 0x7E asciitilde */
    0x00, /* 0xA0 nonbreakingspace */
};

const GFXglyph Font_04b11_Glyphs[] PROGMEM = {
{ 0, 1, 1, 2, 0, -1 }, /* 0x20 space */
{ 1, 2, 5, 3, 0, -5 }, /* 0x21 exclam */
{ 6, 5, 2, 6, 0, -5 }, /* 0x22 quotedbl */
{ 8, 7, 5, 8, 0, -5 }, /* 0x23 numbersign */
{ 13, 7, 5, 8, 0, -5 }, /* 0x24 dollar */
{ 18, 6, 5, 7, 0, -5 }, /* 0x25 percent */
{ 23, 6, 5, 7, 0, -5 }, /* 0x26 ampersand */
{ 28, 2, 2, 3, 0, -5 }, /* 0x27 quotesingle */
{ 30, 3, 5, 4, 0, -5 }, /* 0x28 parenleft */
{ 35, 3, 5, 4, 0, -5 }, /* 0x29 parenright */
{ 40, 5, 3, 6, 0, -5 }, /* 0x2A asterisk */
{ 43, 6, 5, 7, 0, -5 }, /* 0x2B plus */
{ 48, 2, 3, 3, 0, -2 }, /* 0x2C comma */
{ 51, 6, 1, 7, 0, -3 }, /* 0x2D hyphen */
{ 52, 2, 2, 3, 0, -2 }, /* 0x2E period */
{ 54, 6, 5, 7, 0, -5 }, /* 0x2F slash */
{ 59, 6, 5, 7, 0, -5 }, /* 0x30 zero */
{ 64, 3, 5, 4, 0, -5 }, /* 0x31 one */
{ 69, 6, 5, 7, 0, -5 }, /* 0x32 two */
{ 74, 6, 5, 7, 0, -5 }, /* 0x33 three */
{ 79, 6, 5, 7, 0, -5 }, /* 0x34 four */
{ 84, 6, 5, 7, 0, -5 }, /* 0x35 five */
{ 89, 6, 5, 7, 0, -5 }, /* 0x36 six */
{ 94, 6, 5, 7, 0, -5 }, /* 0x37 seven */
{ 99, 6, 5, 7, 0, -5 }, /* 0x38 eight */
{ 104, 6, 5, 7, 0, -5 }, /* 0x39 nine */
{ 109, 2, 3, 3, 0, -4 }, /* 0x3A colon */
{ 112, 2, 4, 3, 0, -4 }, /* 0x3B semicolon */
{ 116, 4, 5, 5, 0, -5 }, /* 0x3C less */
{ 121, 6, 3, 7, 0, -4 }, /* 0x3D equal */
{ 124, 4, 5, 5, 0, -5 }, /* 0x3E greater */
{ 129, 6, 5, 7, 0, -5 }, /* 0x3F question */
{ 134, 7, 5, 8, 0, -5 }, /* 0x40 at */
{ 139, 6, 5, 7, 0, -5 }, /* 0x41 A */
{ 144, 6, 5, 7, 0, -5 }, /* 0x42 B */
{ 149, 6, 5, 7, 0, -5 }, /* 0x43 C */
{ 154, 6, 5, 7, 0, -5 }, /* 0x44 D */
{ 159, 6, 5, 7, 0, -5 }, /* 0x45 E */
{ 164, 6, 5, 7, 0, -5 }, /* 0x46 F */
{ 169, 6, 5, 7, 0, -5 }, /* 0x47 G */
{ 174, 6, 5, 7, 0, -5 }, /* 0x48 H */
{ 179, 4, 5, 5, 0, -5 }, /* 0x49 I */
{ 184, 6, 5, 7, 0, -5 }, /* 0x4A J */
{ 189, 6, 5, 7, 0, -5 }, /* 0x4B K */
{ 194, 6, 5, 7, 0, -5 }, /* 0x4C L */
{ 199, 7, 5, 8, 0, -5 }, /* 0x4D M */
{ 204, 6, 5, 7, 0, -5 }, /* 0x4E N */
{ 209, 6, 5, 7, 0, -5 }, /* 0x4F O */
{ 214, 6, 5, 7, 0, -5 }, /* 0x50 P */
{ 219, 6, 6, 7, 0, -5 }, /* 0x51 Q */
{ 225, 6, 5, 7, 0, -5 }, /* 0x52 R */
{ 230, 6, 5, 7, 0, -5 }, /* 0x53 S */
{ 235, 6, 5, 7, 0, -5 }, /* 0x54 T */
{ 240, 6, 5, 7, 0, -5 }, /* 0x55 U */
{ 245, 6, 5, 7, 0, -5 }, /* 0x56 V */
{ 250, 8, 5, 9, 0, -5 }, /* 0x57 W */
{ 255, 6, 5, 7, 0, -5 }, /* 0x58 X */
{ 260, 6, 5, 7, 0, -5 }, /* 0x59 Y */
{ 265, 6, 5, 7, 0, -5 }, /* 0x5A Z */
{ 270, 3, 5, 4, 0, -5 }, /* 0x5B bracketleft */
{ 275, 6, 5, 7, 0, -5 }, /* 0x5C backslash */
{ 280, 3, 5, 4, 0, -5 }, /* 0x5D bracketright */
{ 285, 4, 2, 5, 0, -5 }, /* 0x5E asciicircum */
{ 287, 6, 1, 7, 0, -1 }, /* 0x5F underscore */
{ 288, 1, 1, 2, 0, -1 }, /* 0x60 grave */
{ 289, 6, 4, 7, 0, -4 }, /* 0x61 a */
{ 293, 6, 5, 7, 0, -5 }, /* 0x62 b */
{ 298, 6, 4, 7, 0, -4 }, /* 0x63 c */
{ 302, 6, 5, 7, 0, -5 }, /* 0x64 d */
{ 307, 6, 4, 7, 0, -4 }, /* 0x65 e */
{ 311, 6, 5, 7, 0, -5 }, /* 0x66 f */
{ 316, 6, 6, 7, 0, -4 }, /* 0x67 g */
{ 322, 6, 5, 7, 0, -5 }, /* 0x68 h */
{ 327, 2, 5, 3, 0, -5 }, /* 0x69 i */
{ 332, 4, 7, 5, 0, -5 }, /* 0x6A j */
{ 339, 6, 5, 7, 0, -5 }, /* 0x6B k */
{ 344, 2, 5, 3, 0, -5 }, /* 0x6C l */
{ 349, 8, 4, 9, 0, -4 }, /* 0x6D m */
{ 353, 6, 4, 7, 0, -4 }, /* 0x6E n */
{ 357, 6, 4, 7, 0, -4 }, /* 0x6F o */
{ 361, 6, 5, 7, 0, -4 }, /* 0x70 p */
{ 366, 6, 5, 7, 0, -4 }, /* 0x71 q */
{ 371, 6, 4, 7, 0, -4 }, /* 0x72 r */
{ 375, 6, 4, 7, 0, -4 }, /* 0x73 s */
{ 379, 6, 5, 7, 0, -5 }, /* 0x74 t */
{ 384, 6, 4, 7, 0, -4 }, /* 0x75 u */
{ 388, 6, 4, 7, 0, -4 }, /* 0x76 v */
{ 392, 8, 4, 9, 0, -4 }, /* 0x77 w */
{ 396, 6, 4, 7, 0, -4 }, /* 0x78 x */
{ 400, 6, 6, 7, 0, -4 }, /* 0x79 y */
{ 406, 6, 4, 7, 0, -4 }, /* 0x7A z */
{ 410, 4, 5, 5, 0, -5 }, /* 0x7B braceleft */
{ 415, 2, 5, 3, 0, -5 }, /* 0x7C bar */
{ 420, 4, 5, 5, 0, -5 }, /* 0x7D braceright */
{ 425, 4, 2, 5, 0, -5 }, /* 0x7E asciitilde */
{ 427, 1, 1, 2, 0, -1 }, /* 0xA0 nonbreakingspace */
};

const GFXfont Font_04b11 PROGMEM = {(uint8_t *) Font_04b11_Bitmaps,  (GFXglyph *)Font_04b11_Glyphs, 0x20, 0xA0,  8};
