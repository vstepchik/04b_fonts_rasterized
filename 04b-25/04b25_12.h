#pragma once
#include <Adafruit_GFX.h>

// Font: 04b25
const uint8_t Font_04b25_Bitmaps[] PROGMEM = {
    0x00, /* 0x20 space */
    0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0x00,     0xC0,     0xC0, /* 0x21 exclam */
    0xD8,     0xD8,     0xD8, /* 0x22 quotedbl */
    0x6C,     0xFE,     0xFE,     0x6C,     0x6C,     0xFE,     0xFE,     0x6C, /* 0x23 numbersign */
    0x18,     0x7C,     0xFC,     0xD8,     0xFC,     0x7E,     0x36,     0x7E,     0x7C,     0x30, /* 0x24 dollar */
    0xCC,     0xCC,     0x1C,     0x1C,     0xE0,     0xE0,     0xCC,     0xCC, /* 0x25 percent */
    0x60,     0xF8,     0xD8,     0xE6,     0xE6,     0xD8,     0xFE,     0x66, /* 0x26 ampersand */
    0xC0,     0xC0,     0xC0, /* 0x27 quotesingle */
    0x70,     0xF0,     0xC0,     0xC0,     0xC0,     0xC0,     0xF0,     0x70, /* 0x28 parenleft */
    0xC0,     0xF0,     0x30,     0x30,     0x30,     0x30,     0xF0,     0xC0, /* 0x29 parenright */
    0xD8,     0xF8,     0x70,     0xF8,     0xD8, /* 0x2A asterisk */
    0x30,     0x30,     0xFC,     0xFC,     0x30,     0x30, /* 0x2B plus */
    0xC0,     0xC0,     0xC0, /* 0x2C comma */
    0xFC,     0xFC, /* 0x2D hyphen */
    0xC0,     0xC0, /* 0x2E period */
    0x03,     0x07,     0x0E,     0x1C,     0x38,     0x70,     0xE0,     0xC0, /* 0x2F slash */
    0x70,     0xF8,     0xD8,     0xD8,     0xD8,     0xD8,     0xF8,     0x70, /* 0x30 zero */
    0xC0,     0xE0,     0x60,     0x60,     0x60,     0x60,     0x60,     0x60, /* 0x31 one */
    0xF0,     0xF8,     0x18,     0x78,     0xF0,     0xC0,     0xF8,     0xF8, /* 0x32 two */
    0xF0,     0xF8,     0x18,     0xF8,     0xF8,     0x18,     0xF8,     0xF0, /* 0x33 three */
    0xD8,     0xD8,     0xD8,     0xD8,     0xF8,     0x78,     0x18,     0x18, /* 0x34 four */
    0xF8,     0xF8,     0xC0,     0xF0,     0xF8,     0x18,     0xF8,     0xF0, /* 0x35 five */
    0x70,     0xF0,     0xC0,     0xF0,     0xF8,     0xD8,     0xF8,     0x70, /* 0x36 six */
    0xF8,     0xF8,     0x18,     0x38,     0x70,     0x60,     0x60,     0x60, /* 0x37 seven */
    0x70,     0xF8,     0xD8,     0xF8,     0xF8,     0xD8,     0xF8,     0x70, /* 0x38 eight */
    0x70,     0xF8,     0xD8,     0xF8,     0x78,     0x18,     0x78,     0x70, /* 0x39 nine */
    0xC0,     0xC0,     0x00,     0x00,     0xC0,     0xC0, /* 0x3A colon */
    0xC0,     0xC0,     0x00,     0x00,     0xC0,     0xC0,     0xC0, /* 0x3B semicolon */
    0x18,     0x38,     0x70,     0xE0,     0xE0,     0x70,     0x38,     0x18, /* 0x3C less */
    0xF8,     0xF8,     0x00,     0x00,     0xF8,     0xF8, /* 0x3D equal */
    0xC0,     0xC0,     0x60,     0x30,     0x30,     0x60,     0xC0,     0xC0, /* 0x3E greater */
    0xF0,     0xF8,     0x18,     0x78,     0x70,     0x00,     0x60,     0x60, /* 0x3F question */
    0x7E,     0xFF,     0xC3,     0xDF,     0xDF,     0xDB,     0xFF,     0x7F, /* 0x40 at */
    0x70,     0xF8,     0xD8,     0xD8,     0xF8,     0xF8,     0xD8,     0xD8, /* 0x41 A */
    0xF0,     0xF8,     0xD8,     0xF8,     0xF8,     0xD8,     0xF8,     0xF0, /* 0x42 B */
    0x70,     0xF8,     0xD8,     0xC0,     0xC0,     0xD8,     0xF8,     0x70, /* 0x43 C */
    0xF0,     0xF8,     0xD8,     0xD8,     0xD8,     0xD8,     0xF8,     0xF0, /* 0x44 D */
    0x78,     0xF8,     0xC0,     0xF8,     0xF8,     0xC0,     0xF8,     0x78, /* 0x45 E */
    0x78,     0xF8,     0xC0,     0xF8,     0xF8,     0xC0,     0xC0,     0xC0, /* 0x46 F */
    0x78,     0xF8,     0xC0,     0xD8,     0xD8,     0xD8,     0xF8,     0x78, /* 0x47 G */
    0xD8,     0xD8,     0xD8,     0xF8,     0xF8,     0xD8,     0xD8,     0xD8, /* 0x48 H */
    0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0, /* 0x49 I */
    0x38,     0x38,     0x18,     0xD8,     0xD8,     0xD8,     0xF8,     0x70, /* 0x4A J */
    0xD8,     0xD8,     0xD8,     0xF0,     0xF8,     0xD8,     0xD8,     0xD8, /* 0x4B K */
    0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xF8,     0x78, /* 0x4C L */
    0xFE,     0xFF,     0xDB,     0xDB,     0xDB,     0xDB,     0xDB,     0xDB, /* 0x4D M */
    0xF0,     0xF8,     0xD8,     0xD8,     0xD8,     0xD8,     0xD8,     0xD8, /* 0x4E N */
    0x70,     0xF8,     0xD8,     0xD8,     0xD8,     0xD8,     0xF8,     0x70, /* 0x4F O */
    0xF0,     0xF8,     0xD8,     0xD8,     0xF8,     0xF0,     0xC0,     0xC0, /* 0x50 P */
    0x70,     0xF8,     0xD8,     0xD8,     0xD8,     0xD8,     0xF8,     0x70,     0x30, /* 0x51 Q */
    0xF0,     0xF8,     0xD8,     0xD8,     0xF8,     0xF0,     0xD8,     0xD8, /* 0x52 R */
    0x78,     0xF8,     0xC0,     0xF0,     0x78,     0x18,     0xF8,     0xF0, /* 0x53 S */
    0xFC,     0xFC,     0x30,     0x30,     0x30,     0x30,     0x30,     0x30, /* 0x54 T */
    0xD8,     0xD8,     0xD8,     0xD8,     0xD8,     0xD8,     0xF8,     0x70, /* 0x55 U */
    0xD8,     0xD8,     0xD8,     0xD8,     0xD8,     0xD8,     0xF0,     0xE0, /* 0x56 V */
    0xDB,     0xDB,     0xDB,     0xDB,     0xDB,     0xDB,     0xFE,     0xFC, /* 0x57 W */
    0xD8,     0xD8,     0xD8,     0x70,     0xF8,     0xD8,     0xD8,     0xD8, /* 0x58 X */
    0xD8,     0xD8,     0xD8,     0xF8,     0x78,     0x18,     0x78,     0x70, /* 0x59 Y */
    0xF8,     0xF8,     0x18,     0x78,     0xF0,     0xC0,     0xF8,     0xF8, /* 0x5A Z */
    0xF0,     0xF0,     0xC0,     0xC0,     0xC0,     0xC0,     0xF0,     0xF0, /* 0x5B bracketleft */
    0xC0,     0xC0,     0x30,     0x3C,     0x18,     0x14,     0x03,     0x03, /* 0x5C backslash */
    0xF0,     0xF0,     0x30,     0x30,     0x30,     0x30,     0xF0,     0xF0, /* 0x5D bracketright */
    0xE0,     0xE0, /* 0x5E asciicircum */
    0xF8,     0xF8, /* 0x5F underscore */
    0xE0,     0xE0, /* 0x60 grave */
    0x78,     0xF8,     0xD8,     0xD8,     0xF8,     0x78, /* 0x61 a */
    0xC0,     0xC0,     0xF0,     0xF8,     0xD8,     0xD8,     0xF8,     0xF0, /* 0x62 b */
    0x78,     0xF8,     0xC0,     0xC0,     0xF8,     0x78, /* 0x63 c */
    0x18,     0x18,     0x78,     0xF8,     0xD8,     0xD8,     0xF8,     0x78, /* 0x64 d */
    0x70,     0xF8,     0xD8,     0xF8,     0xF8,     0xE0,     0x60, /* 0x65 e */
    0x38,     0x78,     0x60,     0xF8,     0xF8,     0x60,     0x60,     0x60, /* 0x66 f */
    0x78,     0xF8,     0xD8,     0xD8,     0xF8,     0x78,     0x38,     0x30, /* 0x67 g */
    0xC0,     0xC0,     0xF0,     0xF8,     0xD8,     0xD8,     0xD8,     0xD8, /* 0x68 h */
    0xC0,     0xC0,     0x00,     0xC0,     0xC0,     0xC0,     0xC0, /* 0x69 i */
    0x60,     0x60,     0x00,     0x60,     0x60,     0x60,     0x60,     0xE0,     0xC0, /* 0x6A j */
    0xC0,     0xC0,     0xD8,     0xD8,     0xF0,     0xF8,     0xD8,     0xD8, /* 0x6B k */
    0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0, /* 0x6C l */
    0xFE,     0xFF,     0xDB,     0xDB,     0xDB,     0xDB, /* 0x6D m */
    0xF0,     0xF8,     0xD8,     0xD8,     0xD8,     0xD8, /* 0x6E n */
    0x70,     0xF8,     0xD8,     0xD8,     0xF8,     0x70, /* 0x6F o */
    0xF0,     0xF8,     0xD8,     0xD8,     0xF8,     0xF0,     0xC0,     0xC0, /* 0x70 p */
    0x78,     0xF8,     0xD8,     0xD8,     0xF8,     0x78,     0x18,     0x18, /* 0x71 q */
    0x78,     0xF8,     0xC0,     0xC0,     0xC0,     0xC0, /* 0x72 r */
    0x78,     0xF8,     0xE0,     0x38,     0xF8,     0xF0, /* 0x73 s */
    0x60,     0x60,     0xF8,     0xF8,     0x60,     0x60,     0x78,     0x38, /* 0x74 t */
    0xD8,     0xD8,     0xD8,     0xD8,     0xF8,     0x78, /* 0x75 u */
    0xD8,     0xD8,     0xD8,     0xD8,     0xF0,     0xE0, /* 0x76 v */
    0xDB,     0xDB,     0xDB,     0xDB,     0xFE,     0xFC, /* 0x77 w */
    0xD8,     0xD8,     0x70,     0xF8,     0xD8,     0xD8, /* 0x78 x */
    0xD8,     0xD8,     0xD8,     0xF8,     0x78,     0x18,     0x38,     0x30, /* 0x79 y */
    0xF8,     0xF8,     0x30,     0x60,     0xF8,     0xF8, /* 0x7A z */
    0x30,     0x70,     0x60,     0xE0,     0xE0,     0x60,     0x70,     0x30, /* 0x7B braceleft */
    0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0, /* 0x7C bar */
    0xC0,     0xE0,     0x60,     0x60,     0x60,     0x60,     0xE0,     0xC0, /* 0x7D braceright */
    0xE0,     0xE0, /* 0x7E asciitilde */
    0x00, /* 0xA0 nonbreakingspace */
};

const GFXglyph Font_04b25_Glyphs[] PROGMEM = {
{ 0, 1, 1, 2, 0, -1 }, /* 0x20 space */
{ 1, 2, 8, 3, 0, -8 }, /* 0x21 exclam */
{ 9, 5, 3, 6, 0, -8 }, /* 0x22 quotedbl */
{ 12, 7, 8, 8, 0, -8 }, /* 0x23 numbersign */
{ 20, 7, 10, 8, 0, -9 }, /* 0x24 dollar */
{ 30, 6, 8, 7, 0, -8 }, /* 0x25 percent */
{ 38, 7, 8, 8, 0, -8 }, /* 0x26 ampersand */
{ 46, 2, 3, 3, 0, -8 }, /* 0x27 quotesingle */
{ 49, 4, 8, 5, 0, -8 }, /* 0x28 parenleft */
{ 57, 4, 8, 5, 0, -8 }, /* 0x29 parenright */
{ 65, 5, 5, 6, 0, -8 }, /* 0x2A asterisk */
{ 70, 6, 6, 7, 0, -7 }, /* 0x2B plus */
{ 76, 2, 3, 3, 0, -2 }, /* 0x2C comma */
{ 79, 6, 2, 7, 0, -5 }, /* 0x2D hyphen */
{ 81, 2, 2, 3, 0, -2 }, /* 0x2E period */
{ 83, 8, 8, 9, 0, -8 }, /* 0x2F slash */
{ 91, 5, 8, 6, 0, -8 }, /* 0x30 zero */
{ 99, 3, 8, 4, 0, -8 }, /* 0x31 one */
{ 107, 5, 8, 6, 0, -8 }, /* 0x32 two */
{ 115, 5, 8, 6, 0, -8 }, /* 0x33 three */
{ 123, 5, 8, 6, 0, -8 }, /* 0x34 four */
{ 131, 5, 8, 6, 0, -8 }, /* 0x35 five */
{ 139, 5, 8, 6, 0, -8 }, /* 0x36 six */
{ 147, 5, 8, 6, 0, -8 }, /* 0x37 seven */
{ 155, 5, 8, 6, 0, -8 }, /* 0x38 eight */
{ 163, 5, 8, 6, 0, -8 }, /* 0x39 nine */
{ 171, 2, 6, 3, 0, -7 }, /* 0x3A colon */
{ 177, 2, 7, 3, 0, -7 }, /* 0x3B semicolon */
{ 184, 5, 8, 6, 0, -8 }, /* 0x3C less */
{ 192, 5, 6, 6, 0, -7 }, /* 0x3D equal */
{ 198, 4, 8, 5, 1, -8 }, /* 0x3E greater */
{ 206, 5, 8, 6, 0, -8 }, /* 0x3F question */
{ 214, 8, 8, 9, 0, -8 }, /* 0x40 at */
{ 222, 5, 8, 6, 0, -8 }, /* 0x41 A */
{ 230, 5, 8, 6, 0, -8 }, /* 0x42 B */
{ 238, 5, 8, 6, 0, -8 }, /* 0x43 C */
{ 246, 5, 8, 6, 0, -8 }, /* 0x44 D */
{ 254, 5, 8, 6, 0, -8 }, /* 0x45 E */
{ 262, 5, 8, 6, 0, -8 }, /* 0x46 F */
{ 270, 5, 8, 6, 0, -8 }, /* 0x47 G */
{ 278, 5, 8, 6, 0, -8 }, /* 0x48 H */
{ 286, 2, 8, 3, 0, -8 }, /* 0x49 I */
{ 294, 5, 8, 6, 0, -8 }, /* 0x4A J */
{ 302, 5, 8, 6, 0, -8 }, /* 0x4B K */
{ 310, 5, 8, 6, 0, -8 }, /* 0x4C L */
{ 318, 8, 8, 9, 0, -8 }, /* 0x4D M */
{ 326, 5, 8, 6, 0, -8 }, /* 0x4E N */
{ 334, 5, 8, 6, 0, -8 }, /* 0x4F O */
{ 342, 5, 8, 6, 0, -8 }, /* 0x50 P */
{ 350, 5, 9, 6, 0, -8 }, /* 0x51 Q */
{ 359, 5, 8, 6, 0, -8 }, /* 0x52 R */
{ 367, 5, 8, 6, 0, -8 }, /* 0x53 S */
{ 375, 6, 8, 7, 0, -8 }, /* 0x54 T */
{ 383, 5, 8, 6, 0, -8 }, /* 0x55 U */
{ 391, 5, 8, 6, 0, -8 }, /* 0x56 V */
{ 399, 8, 8, 9, 0, -8 }, /* 0x57 W */
{ 407, 5, 8, 6, 0, -8 }, /* 0x58 X */
{ 415, 5, 8, 6, 0, -8 }, /* 0x59 Y */
{ 423, 5, 8, 6, 0, -8 }, /* 0x5A Z */
{ 431, 4, 8, 5, 0, -8 }, /* 0x5B bracketleft */
{ 439, 8, 8, 9, 0, -8 }, /* 0x5C backslash */
{ 447, 4, 8, 5, 0, -8 }, /* 0x5D bracketright */
{ 455, 3, 2, 4, 0, -8 }, /* 0x5E asciicircum */
{ 457, 5, 2, 6, 0, -2 }, /* 0x5F underscore */
{ 459, 3, 2, 4, 0, -8 }, /* 0x60 grave */
{ 461, 5, 6, 6, 0, -6 }, /* 0x61 a */
{ 467, 5, 8, 6, 0, -8 }, /* 0x62 b */
{ 475, 5, 6, 6, 0, -6 }, /* 0x63 c */
{ 481, 5, 8, 6, 0, -8 }, /* 0x64 d */
{ 489, 5, 7, 6, 0, -7 }, /* 0x65 e */
{ 496, 5, 8, 6, 0, -8 }, /* 0x66 f */
{ 504, 5, 8, 6, 0, -6 }, /* 0x67 g */
{ 512, 5, 8, 6, 0, -8 }, /* 0x68 h */
{ 520, 2, 7, 3, 0, -7 }, /* 0x69 i */
{ 527, 3, 9, 4, 0, -7 }, /* 0x6A j */
{ 536, 5, 8, 6, 0, -8 }, /* 0x6B k */
{ 544, 2, 8, 3, 0, -8 }, /* 0x6C l */
{ 552, 8, 6, 9, 0, -6 }, /* 0x6D m */
{ 558, 5, 6, 6, 0, -6 }, /* 0x6E n */
{ 564, 5, 6, 6, 0, -6 }, /* 0x6F o */
{ 570, 5, 8, 6, 0, -6 }, /* 0x70 p */
{ 578, 5, 8, 6, 0, -6 }, /* 0x71 q */
{ 586, 5, 6, 6, 0, -6 }, /* 0x72 r */
{ 592, 5, 6, 6, 0, -6 }, /* 0x73 s */
{ 598, 5, 8, 6, 0, -8 }, /* 0x74 t */
{ 606, 5, 6, 6, 0, -6 }, /* 0x75 u */
{ 612, 5, 6, 6, 0, -6 }, /* 0x76 v */
{ 618, 8, 6, 9, 0, -6 }, /* 0x77 w */
{ 624, 5, 6, 6, 0, -6 }, /* 0x78 x */
{ 630, 5, 8, 6, 0, -6 }, /* 0x79 y */
{ 638, 5, 6, 6, 0, -6 }, /* 0x7A z */
{ 644, 4, 8, 5, 0, -8 }, /* 0x7B braceleft */
{ 652, 2, 8, 3, 0, -8 }, /* 0x7C bar */
{ 660, 3, 8, 4, 1, -8 }, /* 0x7D braceright */
{ 668, 3, 2, 4, 0, -8 }, /* 0x7E asciitilde */
{ 670, 1, 1, 2, 0, -1 }, /* 0xA0 nonbreakingspace */
};

const GFXfont Font_04b25 PROGMEM = {(uint8_t *) Font_04b25_Bitmaps,  (GFXglyph *)Font_04b25_Glyphs, 0x20, 0xA0,  12};
