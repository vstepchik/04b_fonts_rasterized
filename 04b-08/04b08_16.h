#pragma once
#include <Adafruit_GFX.h>

// Font: 04b08
const uint8_t Font_04b08_Bitmaps[] PROGMEM = {
    0x00, /* 0x20 space */
    0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0x00,     0x00,     0xC0,     0xC0, /* 0x21 exclam */
    0xCC,     0xCC,     0xCC,     0xCC, /* 0x22 quotedbl */
    0x3300,     0x3300,     0xFFC0,     0xFFC0,     0x3300,     0x3300,     0xFFC0,     0xFFC0,     0x3300,     0x3300, /* 0x23 numbersign */
    0xFFC0,     0xFFC0,     0xCC00,     0xCC00,     0xFFC0,     0xFFC0,     0xCC0,     0xCC0,     0xFFC0,     0xFFC0, /* 0x24 dollar */
    0xF0C0,     0xF0C0,     0xF300,     0xF300,     0xC00,     0xC00,     0x33C0,     0x33C0,     0xC3C0,     0xC3C0, /* 0x25 percent */
    0xFF00,     0xFF00,     0xC300,     0xC300,     0x3C30,     0x3C30,     0xC3C0,     0xC3C0,     0xFF30,     0xFF30, /* 0x26 ampersand */
    0xC0,     0xC0,     0xC0,     0xC0, /* 0x27 quotesingle */
    0x30,     0x30,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0x30,     0x30, /* 0x28 parenleft */
    0xC0,     0xC0,     0x30,     0x30,     0x30,     0x30,     0x30,     0x30,     0xC0,     0xC0, /* 0x29 parenright */
    0xCC,     0xCC,     0x30,     0x30,     0xCC,     0xCC, /* 0x2A asterisk */
    0xC00,     0xC00,     0xC00,     0xC00,     0xFFC0,     0xFFC0,     0xC00,     0xC00,     0xC00,     0xC00, /* 0x2B plus */
    0xC0,     0xC0,     0xC0,     0xC0, /* 0x2C comma */
    0xFFC0,     0xFFC0, /* 0x2D hyphen */
    0xC0,     0xC0, /* 0x2E period */
    0xC0,     0xC0,     0x300,     0x300,     0xC00,     0xC00,     0x3000,     0x3000,     0xC000,     0xC000, /* 0x2F slash */
    0x3F00,     0x3F00,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0x3F00,     0x3F00, /* 0x30 zero */
    0xF0,     0xF0,     0x30,     0x30,     0x30,     0x30,     0x30,     0x30,     0xFC,     0xFC, /* 0x31 one */
    0xFFC0,     0xFFC0,     0xC0,     0xC0,     0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xFFC0,     0xFFC0, /* 0x32 two */
    0xFFC0,     0xFFC0,     0xC0,     0xC0,     0xFFC0,     0xFFC0,     0xC0,     0xC0,     0xFFC0,     0xFFC0, /* 0x33 three */
    0xF00,     0xF00,     0x3300,     0x3300,     0xC300,     0xC300,     0xFFC0,     0xFFC0,     0x300,     0x300, /* 0x34 four */
    0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xFFC0,     0xFFC0,     0xC0,     0xC0,     0xFFC0,     0xFFC0, /* 0x35 five */
    0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0, /* 0x36 six */
    0xFFC0,     0xFFC0,     0xC0,     0xC0,     0x300,     0x300,     0xC00,     0xC00,     0x3000,     0x3000, /* 0x37 seven */
    0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0, /* 0x38 eight */
    0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0,     0xC0,     0xC0,     0xFFC0,     0xFFC0, /* 0x39 nine */
    0xC0,     0xC0,     0x00,     0x00,     0xC0,     0xC0, /* 0x3A colon */
    0xC0,     0xC0,     0x00,     0x00,     0xC0,     0xC0,     0xC0,     0xC0, /* 0x3B semicolon */
    0x0C,     0x0C,     0x30,     0x30,     0xC0,     0xC0,     0x30,     0x30,     0x0C,     0x0C, /* 0x3C less */
    0xFFC0,     0xFFC0,     0x00,     0x00,     0xFFC0,     0xFFC0, /* 0x3D equal */
    0xC0,     0xC0,     0x30,     0x30,     0x0C,     0x0C,     0x30,     0x30,     0xC0,     0xC0, /* 0x3E greater */
    0xFFC0,     0xFFC0,     0xC0,     0xC0,     0xFC0,     0xFC0,     0x00,     0x00,     0xC00,     0xC00, /* 0x3F question */
    0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xCFC0,     0xCFC0,     0xCCC0,     0xCCC0,     0xFFC0,     0xFFC0, /* 0x40 at */
    0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0, /* 0x41 A */
    0xFF00,     0xFF00,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xFF00,     0xFF00, /* 0x42 B */
    0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xC000,     0xC000,     0xC000,     0xC000,     0xFFC0,     0xFFC0, /* 0x43 C */
    0xFF00,     0xFF00,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xFF00,     0xFF00, /* 0x44 D */
    0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xFFC0,     0xFFC0, /* 0x45 E */
    0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xC000,     0xC000, /* 0x46 F */
    0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xCFC0,     0xCFC0,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0, /* 0x47 G */
    0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0, /* 0x48 H */
    0xFC,     0xFC,     0x30,     0x30,     0x30,     0x30,     0x30,     0x30,     0xFC,     0xFC, /* 0x49 I */
    0xFC0,     0xFC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0C0,     0xC0C0,     0x3F00,     0x3F00, /* 0x4A J */
    0xC0C0,     0xC0C0,     0xC300,     0xC300,     0xFC00,     0xFC00,     0xC300,     0xC300,     0xC0C0,     0xC0C0, /* 0x4B K */
    0xC000,     0xC000,     0xC000,     0xC000,     0xC000,     0xC000,     0xC000,     0xC000,     0xFFC0,     0xFFC0, /* 0x4C L */
    0xC0C0,     0xC0C0,     0xF3C0,     0xF3C0,     0xCCC0,     0xCCC0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0, /* 0x4D M */
    0xC0C0,     0xC0C0,     0xF0C0,     0xF0C0,     0xCCC0,     0xCCC0,     0xC3C0,     0xC3C0,     0xC0C0,     0xC0C0, /* 0x4E N */
    0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0, /* 0x4F O */
    0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xC000,     0xC000, /* 0x50 P */
    0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC3C0,     0xC3C0,     0xFFC0,     0xFFC0, /* 0x51 Q */
    0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0,     0xC300,     0xC300,     0xC3C0,     0xC3C0, /* 0x52 R */
    0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xFFC0,     0xFFC0,     0xC0,     0xC0,     0xFFC0,     0xFFC0, /* 0x53 S */
    0xFFC0,     0xFFC0,     0xC00,     0xC00,     0xC00,     0xC00,     0xC00,     0xC00,     0xC00,     0xC00, /* 0x54 T */
    0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0, /* 0x55 U */
    0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0x3300,     0x3300,     0xC00,     0xC00, /* 0x56 V */
    0xCCC0,     0xCCC0,     0xCCC0,     0xCCC0,     0xCCC0,     0xCCC0,     0xCCC0,     0xCCC0,     0x3300,     0x3300, /* 0x57 W */
    0xC0C0,     0xC0C0,     0x3300,     0x3300,     0xC00,     0xC00,     0x3300,     0x3300,     0xC0C0,     0xC0C0, /* 0x58 X */
    0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0x3300,     0x3300,     0xC00,     0xC00,     0xC00,     0xC00, /* 0x59 Y */
    0xFFC0,     0xFFC0,     0x300,     0x300,     0xC00,     0xC00,     0x3000,     0x3000,     0xFFC0,     0xFFC0, /* 0x5A Z */
    0xF0,     0xF0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xF0,     0xF0, /* 0x5B bracketleft */
    0xC000,     0xC000,     0x3000,     0x3000,     0xC00,     0xC00,     0x300,     0x300,     0xC0,     0xC0, /* 0x5C backslash */
    0xF0,     0xF0,     0x30,     0x30,     0x30,     0x30,     0x30,     0x30,     0xF0,     0xF0, /* 0x5D bracketright */
    0x30,     0x30,     0xCC,     0xCC, /* 0x5E asciicircum */
    0xFFC0,     0xFFC0, /* 0x5F underscore */
    0xC0,     0xC0,     0x30,     0x30, /* 0x60 grave */
    0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0, /* 0x61 a */
    0xFF00,     0xFF00,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xFF00,     0xFF00, /* 0x62 b */
    0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xC000,     0xC000,     0xC000,     0xC000,     0xFFC0,     0xFFC0, /* 0x63 c */
    0xFF00,     0xFF00,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xFF00,     0xFF00, /* 0x64 d */
    0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xFFC0,     0xFFC0, /* 0x65 e */
    0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xC000,     0xC000, /* 0x66 f */
    0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xCFC0,     0xCFC0,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0, /* 0x67 g */
    0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0, /* 0x68 h */
    0xFC,     0xFC,     0x30,     0x30,     0x30,     0x30,     0x30,     0x30,     0xFC,     0xFC, /* 0x69 i */
    0xFC0,     0xFC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0C0,     0xC0C0,     0x3F00,     0x3F00, /* 0x6A j */
    0xC0C0,     0xC0C0,     0xC300,     0xC300,     0xFC00,     0xFC00,     0xC300,     0xC300,     0xC0C0,     0xC0C0, /* 0x6B k */
    0xC000,     0xC000,     0xC000,     0xC000,     0xC000,     0xC000,     0xC000,     0xC000,     0xFFC0,     0xFFC0, /* 0x6C l */
    0xC0C0,     0xC0C0,     0xF3C0,     0xF3C0,     0xCCC0,     0xCCC0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0, /* 0x6D m */
    0xC0C0,     0xC0C0,     0xF0C0,     0xF0C0,     0xCCC0,     0xCCC0,     0xC3C0,     0xC3C0,     0xC0C0,     0xC0C0, /* 0x6E n */
    0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0, /* 0x6F o */
    0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xC000,     0xC000, /* 0x70 p */
    0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC3C0,     0xC3C0,     0xFFC0,     0xFFC0, /* 0x71 q */
    0xFFC0,     0xFFC0,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0,     0xC300,     0xC300,     0xC3C0,     0xC3C0, /* 0x72 r */
    0xFFC0,     0xFFC0,     0xC000,     0xC000,     0xFFC0,     0xFFC0,     0xC0,     0xC0,     0xFFC0,     0xFFC0, /* 0x73 s */
    0xFFC0,     0xFFC0,     0xC00,     0xC00,     0xC00,     0xC00,     0xC00,     0xC00,     0xC00,     0xC00, /* 0x74 t */
    0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xFFC0,     0xFFC0, /* 0x75 u */
    0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0x3300,     0x3300,     0xC00,     0xC00, /* 0x76 v */
    0xCCC0,     0xCCC0,     0xCCC0,     0xCCC0,     0xCCC0,     0xCCC0,     0xCCC0,     0xCCC0,     0x3300,     0x3300, /* 0x77 w */
    0xC0C0,     0xC0C0,     0x3300,     0x3300,     0xC00,     0xC00,     0x3300,     0x3300,     0xC0C0,     0xC0C0, /* 0x78 x */
    0xC0C0,     0xC0C0,     0xC0C0,     0xC0C0,     0x3300,     0x3300,     0xC00,     0xC00,     0xC00,     0xC00, /* 0x79 y */
    0xFFC0,     0xFFC0,     0x300,     0x300,     0xC00,     0xC00,     0x3000,     0x3000,     0xFFC0,     0xFFC0, /* 0x7A z */
    0x3C,     0x3C,     0x30,     0x30,     0xC0,     0xC0,     0x30,     0x30,     0x3C,     0x3C, /* 0x7B braceleft */
    0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0,     0xC0, /* 0x7C bar */
    0xF0,     0xF0,     0x30,     0x30,     0x0C,     0x0C,     0x30,     0x30,     0xF0,     0xF0, /* 0x7D braceright */
    0x33,     0x33,     0xCC,     0xCC, /* 0x7E asciitilde */
    0x00, /* 0xA0 nonbreakingspace */
};

const GFXglyph Font_04b08_Glyphs[] PROGMEM = {
{ 0, 1, 1, 2, 0, -1 }, /* 0x20 space */
{ 1, 2, 10, 3, 3, -10 }, /* 0x21 exclam */
{ 11, 6, 4, 7, 1, -10 }, /* 0x22 quotedbl */
{ 15, 10, 10, 11, 1, -10 }, /* 0x23 numbersign */
{ 25, 10, 10, 11, 1, -10 }, /* 0x24 dollar */
{ 35, 10, 10, 11, 1, -10 }, /* 0x25 percent */
{ 45, 12, 10, 13, 1, -10 }, /* 0x26 ampersand */
{ 55, 2, 4, 3, 1, -10 }, /* 0x27 quotesingle */
{ 59, 4, 10, 5, 1, -10 }, /* 0x28 parenleft */
{ 69, 4, 10, 5, 1, -10 }, /* 0x29 parenright */
{ 79, 6, 6, 7, 1, -10 }, /* 0x2A asterisk */
{ 85, 10, 10, 11, 1, -10 }, /* 0x2B plus */
{ 95, 2, 4, 3, 1, -4 }, /* 0x2C comma */
{ 99, 10, 2, 11, 1, -6 }, /* 0x2D hyphen */
{ 101, 2, 2, 3, 1, -2 }, /* 0x2E period */
{ 103, 10, 10, 11, 1, -10 }, /* 0x2F slash */
{ 113, 10, 10, 11, 1, -10 }, /* 0x30 zero */
{ 123, 6, 10, 7, 1, -10 }, /* 0x31 one */
{ 133, 10, 10, 11, 1, -10 }, /* 0x32 two */
{ 143, 10, 10, 11, 1, -10 }, /* 0x33 three */
{ 153, 10, 10, 11, 1, -10 }, /* 0x34 four */
{ 163, 10, 10, 11, 1, -10 }, /* 0x35 five */
{ 173, 10, 10, 11, 1, -10 }, /* 0x36 six */
{ 183, 10, 10, 11, 1, -10 }, /* 0x37 seven */
{ 193, 10, 10, 11, 1, -10 }, /* 0x38 eight */
{ 203, 10, 10, 11, 1, -10 }, /* 0x39 nine */
{ 213, 2, 6, 3, 1, -8 }, /* 0x3A colon */
{ 219, 2, 8, 3, 1, -8 }, /* 0x3B semicolon */
{ 227, 6, 10, 7, 1, -10 }, /* 0x3C less */
{ 237, 10, 6, 11, 1, -8 }, /* 0x3D equal */
{ 243, 6, 10, 7, 1, -10 }, /* 0x3E greater */
{ 253, 10, 10, 11, 1, -10 }, /* 0x3F question */
{ 263, 10, 10, 11, 1, -10 }, /* 0x40 at */
{ 273, 10, 10, 11, 1, -10 }, /* 0x41 A */
{ 283, 10, 10, 11, 1, -10 }, /* 0x42 B */
{ 293, 10, 10, 11, 1, -10 }, /* 0x43 C */
{ 303, 10, 10, 11, 1, -10 }, /* 0x44 D */
{ 313, 10, 10, 11, 1, -10 }, /* 0x45 E */
{ 323, 10, 10, 11, 1, -10 }, /* 0x46 F */
{ 333, 10, 10, 11, 1, -10 }, /* 0x47 G */
{ 343, 10, 10, 11, 1, -10 }, /* 0x48 H */
{ 353, 6, 10, 7, 1, -10 }, /* 0x49 I */
{ 363, 10, 10, 11, 1, -10 }, /* 0x4A J */
{ 373, 10, 10, 11, 1, -10 }, /* 0x4B K */
{ 383, 10, 10, 11, 1, -10 }, /* 0x4C L */
{ 393, 10, 10, 11, 1, -10 }, /* 0x4D M */
{ 403, 10, 10, 11, 1, -10 }, /* 0x4E N */
{ 413, 10, 10, 11, 1, -10 }, /* 0x4F O */
{ 423, 10, 10, 11, 1, -10 }, /* 0x50 P */
{ 433, 10, 10, 11, 1, -10 }, /* 0x51 Q */
{ 443, 10, 10, 11, 1, -10 }, /* 0x52 R */
{ 453, 10, 10, 11, 1, -10 }, /* 0x53 S */
{ 463, 10, 10, 11, 1, -10 }, /* 0x54 T */
{ 473, 10, 10, 11, 1, -10 }, /* 0x55 U */
{ 483, 10, 10, 11, 1, -10 }, /* 0x56 V */
{ 493, 10, 10, 11, 1, -10 }, /* 0x57 W */
{ 503, 10, 10, 11, 0, -10 }, /* 0x58 X */
{ 513, 10, 10, 11, 1, -10 }, /* 0x59 Y */
{ 523, 10, 10, 11, 1, -10 }, /* 0x5A Z */
{ 533, 4, 10, 5, 1, -10 }, /* 0x5B bracketleft */
{ 543, 10, 10, 11, 1, -10 }, /* 0x5C backslash */
{ 553, 4, 10, 5, 1, -10 }, /* 0x5D bracketright */
{ 563, 6, 4, 7, 1, -10 }, /* 0x5E asciicircum */
{ 567, 10, 2, 11, 1, -2 }, /* 0x5F underscore */
{ 569, 4, 4, 5, 1, -10 }, /* 0x60 grave */
{ 573, 10, 10, 11, 1, -10 }, /* 0x61 a */
{ 583, 10, 10, 11, 1, -10 }, /* 0x62 b */
{ 593, 10, 10, 11, 1, -10 }, /* 0x63 c */
{ 603, 10, 10, 11, 1, -10 }, /* 0x64 d */
{ 613, 10, 10, 11, 1, -10 }, /* 0x65 e */
{ 623, 10, 10, 11, 1, -10 }, /* 0x66 f */
{ 633, 10, 10, 11, 1, -10 }, /* 0x67 g */
{ 643, 10, 10, 11, 1, -10 }, /* 0x68 h */
{ 653, 6, 10, 7, 1, -10 }, /* 0x69 i */
{ 663, 10, 10, 11, 1, -10 }, /* 0x6A j */
{ 673, 10, 10, 11, 1, -10 }, /* 0x6B k */
{ 683, 10, 10, 11, 1, -10 }, /* 0x6C l */
{ 693, 10, 10, 11, 1, -10 }, /* 0x6D m */
{ 703, 10, 10, 11, 1, -10 }, /* 0x6E n */
{ 713, 10, 10, 11, 1, -10 }, /* 0x6F o */
{ 723, 10, 10, 11, 1, -10 }, /* 0x70 p */
{ 733, 10, 10, 11, 1, -10 }, /* 0x71 q */
{ 743, 10, 10, 11, 1, -10 }, /* 0x72 r */
{ 753, 10, 10, 11, 1, -10 }, /* 0x73 s */
{ 763, 10, 10, 11, 1, -10 }, /* 0x74 t */
{ 773, 10, 10, 11, 1, -10 }, /* 0x75 u */
{ 783, 10, 10, 11, 1, -10 }, /* 0x76 v */
{ 793, 10, 10, 11, 1, -10 }, /* 0x77 w */
{ 803, 10, 10, 11, 0, -10 }, /* 0x78 x */
{ 813, 10, 10, 11, 1, -10 }, /* 0x79 y */
{ 823, 10, 10, 11, 1, -10 }, /* 0x7A z */
{ 833, 6, 10, 7, 1, -10 }, /* 0x7B braceleft */
{ 843, 2, 10, 3, 1, -10 }, /* 0x7C bar */
{ 853, 6, 10, 7, 1, -10 }, /* 0x7D braceright */
{ 863, 8, 4, 9, 1, -10 }, /* 0x7E asciitilde */
{ 867, 1, 1, 2, 0, -1 }, /* 0xA0 nonbreakingspace */
};

const GFXfont Font_04b08 PROGMEM = {(uint8_t *) Font_04b08_Bitmaps,  (GFXglyph *)Font_04b08_Glyphs, 0x20, 0xA0,  16};
