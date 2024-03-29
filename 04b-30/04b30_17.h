#pragma once
#include <Adafruit_GFX.h>

// Font: 04b30
const uint8_t Font_04b30_Bitmaps[] PROGMEM = {
    0x00, /* 0x20 space */
    0x7C,     0x8E,     0xBE,     0xFE,     0x7C,     0x7C,     0x38,     0x38,     0x00,     0x38,     0x7C,     0x7C,     0x7C,     0x38, /* 0x21 exclam */
    0x70E0,     0xB970,     0xB970,     0xB970,     0xF9F0,     0xF9F0,     0x70E0, /* 0x22 quotedbl */
    0x1CE0,     0x2EF0,     0x2EF0,     0x7EF8,     0xFFFC,     0x7FF8,     0x7FF8,     0x7FF8,     0x7FF8,     0xFFFC,     0x7EF8,     0x3EF0,     0x3EF0,     0x1CE0, /* 0x23 numbersign */
    0x00, /* 0x24 dollar */
    0x7038,     0xB87C,     0xB8FC,     0xF9FC,     0x73F8,     0x73F8,     0xFE0,     0x3FC0,     0x3F80,     0x7F38,     0xFF7C,     0xFC7C,     0xF87C,     0x7038, /* 0x25 percent */
    0x00, /* 0x26 ampersand */
    0x70,     0xB8,     0xB8,     0xB8,     0xF8,     0xF8,     0x70, /* 0x27 quotesingle */
    0x0E,     0x07,     0x2F,     0x7E,     0x7C,     0x7C,     0xF8,     0xF8,     0xF8,     0x7C,     0x7E,     0x7F,     0x1F,     0x0E, /* 0x28 parenleft */
    0x70,     0xB8,     0xB8,     0x7E,     0x3E,     0x3E,     0x3E,     0x3E,     0x3E,     0x3E,     0xB8,     0xF8,     0xF8,     0x70, /* 0x29 parenright */
    0x7C,     0x8E,     0xBE,     0xBE,     0xFE,     0xFE,     0x7C, /* 0x2A asterisk */
    0x700,     0x9C0,     0x9C0,     0xFC0,     0x7FF8,     0xFFFC,     0xFFFC,     0xFFFC,     0x7FF8,     0xFC0,     0xFC0,     0xFC0,     0xFC0,     0x700, /* 0x2B plus */
    0x70,     0xB8,     0xB8,     0xB8,     0xF8,     0xF8,     0x70, /* 0x2C comma */
    0x7FE0,     0x9FF0,     0xFFF0,     0xFFF0,     0x7FE0, /* 0x2D hyphen */
    0x70,     0xB8,     0xF8,     0xF8,     0x70, /* 0x2E period */
    0x38,     0x7C,     0xFC,     0x1FC,     0x3F8,     0x7F0,     0xFE0,     0x1FC0,     0x3F80,     0x7F00,     0xFE00,     0xFC00,     0xF800,     0x7000, /* 0x2F slash */
    0x3FF0,     0x1FF8,     0xBFFC,     0xFE3C,     0xFE3C,     0xFE3C,     0xFE3C,     0xFE3C,     0xFE3C,     0xFE3C,     0xFFFC,     0xFFFC,     0x7FF8,     0x3FF0, /* 0x30 zero */
    0x7F00,     0x9F80,     0xBF80,     0x7F80,     0x3F80,     0x3F80,     0x3F80,     0x3F80,     0x3F80,     0x3F80,     0x3F80,     0x3F80,     0x3F80,     0x1F00, /* 0x31 one */
    0x7FF0,     0x9FF8,     0xBFFC,     0x7FFC,     0x7C,     0x7FF8,     0x7FF8,     0xFFF0,     0xFE00,     0xFFF8,     0xFFFC,     0xFFFC,     0xFFFC,     0x7FF8, /* 0x32 two */
    0x3FF0,     0x1FF8,     0xBFFC,     0x7FFC,     0x3C,     0x3FFC,     0x7FFC,     0x3FFC,     0x3C,     0x7FFC,     0xFFFC,     0xFFFC,     0x7FF8,     0x3FF0, /* 0x33 three */
    0x70E0,     0x9DF0,     0x9DF0,     0xFDF0,     0xFDF0,     0xFDF0,     0xFDF0,     0xFDF4,     0xFFFC,     0x7FFC,     0x1FF8,     0x1F0,     0x1F0,     0xE0, /* 0x34 four */
    0x7FF8,     0x9FFC,     0xBFFC,     0xBE04,     0xFE00,     0xFFF0,     0xFFF8,     0x7FFC,     0x7C,     0x7FFC,     0xFFFC,     0xFFFC,     0xFFF8,     0x7FF0, /* 0x35 five */
    0x3FF0,     0x1FF8,     0xBFF0,     0xFE00,     0xFE00,     0xFE00,     0xFFF0,     0xFE3C,     0xFE3C,     0xFE3C,     0xFFFC,     0xFFFC,     0x7FF8,     0x3FF0, /* 0x36 six */
    0x7FF8,     0x9FFC,     0xBFFC,     0x7FFC,     0x3F8,     0x3F8,     0x7F8,     0x7E0,     0xFC0,     0xFC0,     0xFC0,     0xFC0,     0xFC0,     0x700, /* 0x37 seven */
    0x3FF0,     0x1FF8,     0xBFFC,     0xFE3C,     0xFE3C,     0xFE3C,     0x7FF8,     0xFE3C,     0xFE3C,     0xFE3C,     0xFFFC,     0xFFFC,     0x7FF8,     0x3FF0, /* 0x38 eight */
    0x3FF0,     0x1FF8,     0xBFFC,     0xFE3C,     0xFE3C,     0xFE3C,     0x7FFC,     0x3FF8,     0x1F8,     0x3F0,     0x3F0,     0x1F80,     0x1F80,     0xF00, /* 0x39 nine */
    0x70,     0xB8,     0xF8,     0xF8,     0x70,     0x00,     0x00,     0x70,     0xF8,     0xF8,     0xF8,     0x70, /* 0x3A colon */
    0x70,     0xB8,     0xF8,     0xF8,     0x70,     0x00,     0x00,     0x70,     0xF8,     0xF8,     0xF8,     0xF8,     0xF8,     0x70, /* 0x3B semicolon */
    0x700,     0x380,     0x1780,     0x5680,     0x7E00,     0x7A00,     0xF800,     0xF800,     0xFC00,     0x7E00,     0x5E80,     0x1F80,     0xF80,     0x700, /* 0x3C less */
    0x7FE0,     0x9FF0,     0xFFF0,     0xFFF0,     0x7FE0,     0x00,     0x00,     0x7FE0,     0xFFF0,     0xFFF0,     0xFFF0,     0x7FE0, /* 0x3D equal */
    0x7000,     0x9C00,     0xBE00,     0x7F80,     0x3F00,     0x1F80,     0xF80,     0xF80,     0x1F80,     0x7F00,     0xFE00,     0xFE00,     0xFC00,     0x7000, /* 0x3E greater */
    0x7FF0,     0x9FF8,     0xBFFC,     0x7FFC,     0x7C,     0x7FC,     0xFF8,     0x7F0,     0x00,     0x700,     0xF80,     0xF80,     0xF80,     0x700, /* 0x3F question */
    0x00, /* 0x40 at */
    0x3FE0,     0x1FF0,     0xBFF8,     0xFE3C,     0xFE3C,     0xFE3C,     0xFFFC,     0xFE3C,     0xFE3C,     0xFE3C,     0xFE3C,     0xFE3C,     0xFE3C,     0x7C18, /* 0x41 A */
    0x7FF0,     0x9FF8,     0xBFFC,     0xFE1C,     0xFE1C,     0xFFF8,     0xFFF8,     0xFFFC,     0xFE1C,     0xFE1C,     0xFE1C,     0xFFFC,     0xFFF8,     0x7FF0, /* 0x42 B */
    0x3FF8,     0x1FFC,     0xBFF8,     0xFE00,     0xFE00,     0xFE00,     0xFE00,     0xFE00,     0xFE00,     0xFE00,     0xFFF8,     0xFFFC,     0x7FFC,     0x3FF8, /* 0x43 C */
    0x7FE0,     0x9FF0,     0xBFF8,     0xFE1C,     0xFE1C,     0xFE1C,     0xFE1C,     0xFE1C,     0xFE1C,     0xFE7C,     0xFE7C,     0xFFFC,     0xFFF8,     0x7FF0, /* 0x44 D */
    0x7FF8,     0x9FFC,     0xBFF8,     0xFE00,     0xFE00,     0xFFF8,     0xFFFC,     0xFFF8,     0xFE00,     0xFE00,     0xFE04,     0xFFFC,     0xFFFC,     0x7FF8, /* 0x45 E */
    0x7FF8,     0x9FFC,     0xBFF8,     0xFE00,     0xFE00,     0xFFF8,     0xFFFC,     0xFFF8,     0xFE00,     0xFE00,     0xFE00,     0xFE00,     0xFE00,     0x7C00, /* 0x46 F */
    0x3FF8,     0x1FFC,     0xBFF8,     0xFE00,     0xFE00,     0xFE00,     0xFEFC,     0xFE3C,     0xFE3C,     0xFE3C,     0xFFFC,     0xFFFC,     0x7FF8,     0x3FF0, /* 0x47 G */
    0x7C38,     0x8E7C,     0xBE7C,     0xFE7C,     0xFE7C,     0xFFFC,     0xFFFC,     0xFFFC,     0xFE7C,     0xFE7C,     0xFE7C,     0xFE7C,     0xFE7C,     0x7C38, /* 0x48 H */
    0x7C,     0x8E,     0xBE,     0xFE,     0xFE,     0xFE,     0xFE,     0xFE,     0xFE,     0xFE,     0xFE,     0xFE,     0xFE,     0x7C, /* 0x49 I */
    0xF8,     0x11C,     0x17C,     0x1FC,     0x1FC,     0x1FC,     0x71FC,     0xF9FC,     0xF9FC,     0xF9FC,     0xF9FC,     0xFFFC,     0x7FF8,     0x3FF0, /* 0x4A J */
    0x7C38,     0x8E7C,     0xBE7C,     0xFEFC,     0xFFF8,     0xFFF0,     0xFFC0,     0xFFF0,     0xFFF8,     0xFFF8,     0xFEFC,     0xFE7C,     0xFE7C,     0x7C38, /* 0x4B K */
    0x7C00,     0x8E00,     0xBE00,     0xFE00,     0xFE00,     0xFE00,     0xFE00,     0xFE00,     0xFE00,     0xFFF0,     0xFFF8,     0xFFF8,     0xFFF8,     0x7FF0, /* 0x4C L */
    0x7C1C,     0x8E3E,     0xBE3E,     0xFE3E,     0xFE3E,     0xFF7E,     0xFFFE,     0xFFFE,     0xFFFE,     0xFFFE,     0xFEBE,     0xFE3E,     0xFE3E,     0x7C1C, /* 0x4D M */
    0x7C38,     0x8E7C,     0xBE7C,     0xFE7C,     0xFE7C,     0xFF7C,     0xFF7C,     0xFFFC,     0xFEFC,     0xFEFC,     0xFE7C,     0xFE7C,     0xFE7C,     0x7C38, /* 0x4E N */
    0x3FF0,     0x1FF8,     0xBFFC,     0xFE3C,     0xFE3C,     0xFE3C,     0xFE3C,     0xFE3C,     0xFE3C,     0xFE3C,     0xFFFC,     0xFFFC,     0x7FF8,     0x3FF0, /* 0x4F O */
    0x7FF0,     0x9FF8,     0xBFFC,     0xFE7C,     0xFE7C,     0xFE7C,     0xFE7C,     0xFFFC,     0xFFF8,     0xFFF0,     0xFE00,     0xFE00,     0xFE00,     0x7C00, /* 0x50 P */
    0x3FF0,     0x1FF8,     0xBFFC,     0xFE3C,     0xFE3C,     0xFE3C,     0xFE3C,     0xFE3C,     0xFE3C,     0xFE3C,     0xFFFC,     0xFFFC,     0x7FF8,     0x3FF0,     0x1F0,     0xF0, /* 0x51 Q */
    0x7FF0,     0x9FF8,     0xBFFC,     0xFE7C,     0xFE7C,     0xFFF8,     0xFFF8,     0xFFF0,     0xFFF8,     0xFFF8,     0xFEFC,     0xFE7C,     0xFE7C,     0x7C38, /* 0x52 R */
    0x3FF8,     0x1FFC,     0xBFFC,     0xFFF8,     0xFE00,     0xFFF8,     0xFFFC,     0x7FFC,     0x7C,     0x7FFC,     0xFFFC,     0xFFFC,     0xFFF8,     0x7FF0, /* 0x53 S */
    0x7FF8,     0x9FFC,     0xBFFC,     0x7FF8,     0xFC0,     0xFC0,     0xFC0,     0xFC0,     0xFC0,     0xFC0,     0xFC0,     0xFC0,     0xFC0,     0x380, /* 0x54 T */
    0x7C38,     0x8E7C,     0xBE7C,     0xFE7C,     0xFE7C,     0xFE7C,     0xFE7C,     0xFE7C,     0xFE7C,     0xFE7C,     0xFE7C,     0xFFFC,     0x7FF8,     0x3FF0, /* 0x55 U */
    0x7C38,     0x8E7C,     0xBE7C,     0xFE7C,     0xFE7C,     0xFE7C,     0xFE7C,     0xFEFC,     0xFFF8,     0xFFF0,     0xFFE0,     0xFFC0,     0x7F80,     0x3F00, /* 0x56 V */
    0x7C1C,     0x8E3E,     0xBE3E,     0xFE3E,     0xFE3E,     0xFE3E,     0xFEBE,     0xFFFE,     0xFFFE,     0xFFFE,     0xFFFE,     0xFF7E,     0xFE3E,     0x7C1C, /* 0x57 W */
    0x7038,     0x9C7C,     0xB8FC,     0xFFFC,     0x7FF8,     0x5FE8,     0x1FE0,     0x1FE0,     0x3FF0,     0x7FF8,     0xFFFC,     0xF8FC,     0xFC7C,     0x7038, /* 0x58 X */
    0x7038,     0x9CFC,     0xBFFC,     0xFFFC,     0x7FF8,     0x7FF8,     0x3FF0,     0xFC0,     0xFC0,     0xFC0,     0xFC0,     0xFC0,     0xFC0,     0xFC0, /* 0x59 Y */
    0x7FF8,     0x9FFC,     0xBFFC,     0x7FFC,     0x3F8,     0x7F0,     0xFF0,     0x1FC0,     0x3F80,     0x7FF8,     0xFFFC,     0xFFFC,     0xFFFC,     0x7FF8, /* 0x5A Z */
    0x1C,     0x0E,     0x9E,     0x9E,     0xFC,     0xF8,     0xF8,     0xF8,     0xF8,     0xF8,     0xFA,     0xFE,     0x7E,     0x1C, /* 0x5B bracketleft */
    0x7000,     0x9C00,     0xBC00,     0xFE00,     0x7F00,     0x7F00,     0x3FC0,     0xFE0,     0x3F0,     0x1F8,     0x1FC,     0xFC,     0x7C,     0x38, /* 0x5C backslash */
    0x70,     0x9C,     0xBE,     0x7E,     0x3E,     0x3E,     0x3E,     0x3E,     0x3E,     0x3E,     0xBE,     0xFE,     0xFC,     0x70, /* 0x5D bracketright */
    0x7E,     0x9F,     0xFF,     0xFF,     0x7E, /* 0x5E asciicircum */
    0x7FF8,     0x9FFC,     0xFFFC,     0xFFFC,     0x7FF8, /* 0x5F underscore */
    0x7E,     0x9F,     0xFF,     0xFF,     0x7E, /* 0x60 grave */
    0x3FC0,     0x1FE0,     0xBFF0,     0xFC70,     0xFFF0,     0xFFF0,     0xFFF0,     0xFC70,     0xFC70,     0xFC70,     0xFC70,     0x7820, /* 0x61 a */
    0x7FC0,     0x9FE0,     0xBFF0,     0xFC70,     0xFFF0,     0xFFE0,     0xFFE0,     0xFC70,     0xFC70,     0xFFF0,     0xFFE0,     0x7FC0, /* 0x62 b */
    0x3FE0,     0x1FF0,     0xBFE0,     0xFC00,     0xFC00,     0xFC00,     0xFC00,     0xFC00,     0xFFE0,     0xFFF0,     0x7FF0,     0x3FE0, /* 0x63 c */
    0x7F80,     0x9FC0,     0xBFE0,     0xFC70,     0xFC70,     0xFC70,     0xFC70,     0xFC70,     0xFC70,     0xFFF0,     0xFFE0,     0x7FC0, /* 0x64 d */
    0x7FE0,     0x9FF0,     0xBFE0,     0xFC00,     0xFFE0,     0xFFF0,     0xFFE0,     0xFFE0,     0xFFF0,     0xFFF0,     0xFFF0,     0x7FE0, /* 0x65 e */
    0x7FE0,     0x9FF0,     0xBFE0,     0xFC00,     0xFFE0,     0xFFF0,     0xFFE0,     0xFC00,     0xFC00,     0xFC00,     0xFC00,     0x7000, /* 0x66 f */
    0x3FE0,     0x1FF0,     0xBFE0,     0xFC00,     0xFC60,     0xFDE0,     0xFC70,     0xFC70,     0xFFF0,     0xFFF0,     0x7FE0,     0x3FC0, /* 0x67 g */
    0x70E0,     0x9C70,     0x9C70,     0xFC70,     0xFFF0,     0xFFF0,     0xFFF0,     0xFC70,     0xFC70,     0xFC70,     0xFC70,     0x70E0, /* 0x68 h */
    0x70,     0x9C,     0x9C,     0xFC,     0xFC,     0xFC,     0xFC,     0xFC,     0xFC,     0xFC,     0xFC,     0x70, /* 0x69 i */
    0x1C0,     0x270,     0x270,     0x3F0,     0x3F0,     0x73F0,     0x73F0,     0xFBF0,     0xFBF0,     0xFFF0,     0x7FC0,     0x3FC0, /* 0x6A j */
    0x70E0,     0x9DF0,     0x9DF0,     0x9DF0,     0xFFE0,     0xFF00,     0xFFC0,     0xFFE0,     0xFFF0,     0xFDF0,     0xFDF0,     0x70E0, /* 0x6B k */
    0x7000,     0x9C00,     0x9C00,     0xFC00,     0xFC00,     0xFC00,     0xFC00,     0xFC00,     0xFC20,     0xFFE0,     0xFFE0,     0x7FC0, /* 0x6C l */
    0x7070,     0x9C38,     0x9C38,     0xFEF8,     0xFFF8,     0xFFF8,     0xFD38,     0xFC38,     0xFC38,     0xFC38,     0xFC38,     0x7070, /* 0x6D m */
    0x70E0,     0x9DF0,     0x9DF0,     0xFFF0,     0xFFF0,     0xFFF0,     0xFDF0,     0xFDF0,     0xFDF0,     0xFDF0,     0xFDF0,     0x70E0, /* 0x6E n */
    0x3FC0,     0x1FE0,     0xBFF0,     0xFC70,     0xFC70,     0xFC70,     0xFC70,     0xFC70,     0xFFF0,     0xFFF0,     0x7FE0,     0x3FC0, /* 0x6F o */
    0x7FC0,     0x9FE0,     0xBFF0,     0xFC70,     0xFC70,     0xFFE0,     0xFFE0,     0xFFC0,     0xFC00,     0xFC00,     0xFC00,     0x7000, /* 0x70 p */
    0x3FC0,     0x1FE0,     0xBFF0,     0xFC70,     0xFC70,     0xFC70,     0xFC70,     0xFC70,     0xFFF0,     0xFFF0,     0x7FE0,     0x3FC0,     0x3C0,     0x1C0, /* 0x71 q */
    0x7FC0,     0x9FE0,     0xBFF0,     0xFC70,     0xFC70,     0xFFE0,     0xFFC0,     0xFFE0,     0xFDF0,     0xFDF0,     0xFC70,     0x7020, /* 0x72 r */
    0x3FE0,     0x1FF0,     0xBFE0,     0xFC00,     0xFFE0,     0x7FF0,     0xF0,     0x7FF0,     0xFFF0,     0xFFF0,     0xFFE0,     0x7FC0, /* 0x73 s */
    0x7FE0,     0xBFF0,     0xBFF0,     0x7FE0,     0x1F80,     0x1F80,     0x1F80,     0x1F80,     0x1F80,     0x1F80,     0x1F80,     0xE00, /* 0x74 t */
    0x70E0,     0x9C70,     0x9C70,     0xFC70,     0xFC70,     0xFC70,     0xFC70,     0xFC70,     0xFC70,     0xFFF0,     0x7FE0,     0x1FC0, /* 0x75 u */
    0x70E0,     0x9CF0,     0xBCF0,     0xFCF0,     0xFCF0,     0xFCF0,     0xFDF0,     0xFFE0,     0xFFC0,     0xFF00,     0x7E00,     0x3E00, /* 0x76 v */
    0x7070,     0x9C38,     0x9C38,     0xFC38,     0xFC38,     0xFC38,     0xFD38,     0xFFF8,     0xFFF8,     0xFEF8,     0xFC38,     0x7070, /* 0x77 w */
    0x60E0,     0x91F0,     0xBBF0,     0xFFE0,     0x7FC0,     0x7FC0,     0x1F00,     0x3FE0,     0xFDF0,     0xFDF0,     0xF8F0,     0x70E0, /* 0x78 x */
    0x70E0,     0xB9F0,     0xBFF0,     0x7FE0,     0x3FC0,     0x3F80,     0xF80,     0xF80,     0xF80,     0xF80,     0xF80,     0x700, /* 0x79 y */
    0x7FE0,     0xBFF0,     0xBFF0,     0x7FE0,     0x7C0,     0xF80,     0x1F80,     0x3FE0,     0xFFF0,     0xFFF0,     0xFFF0,     0x7FE0, /* 0x7A z */
    0xF00,     0x780,     0x2F80,     0x3F00,     0x3E00,     0x7E00,     0xFE00,     0xFE00,     0x7E00,     0x3E00,     0x3F00,     0x3F80,     0x1F80,     0xF00, /* 0x7B braceleft */
    0x7C,     0x8E,     0xBE,     0xFE,     0xFE,     0xFE,     0xFE,     0xFE,     0xFE,     0xFE,     0xFE,     0xFE,     0xFE,     0x7C, /* 0x7C bar */
    0x7000,     0x9C00,     0xBE00,     0x7E00,     0x3E00,     0x3F00,     0x3F80,     0x3F80,     0x3F80,     0x3F00,     0xBE00,     0xFE00,     0xFC00,     0x7000, /* 0x7D braceright */
    0x7E,     0x9F,     0xFF,     0xFF,     0x7E, /* 0x7E asciitilde */
    0x00, /* 0xA0 nonbreakingspace */
};

const GFXglyph Font_04b30_Glyphs[] PROGMEM = {
{ 0, 1, 1, 2, 0, -1 }, /* 0x20 space */
{ 1, 7, 14, 8, 1, -14 }, /* 0x21 exclam */
{ 15, 12, 7, 13, 1, -13 }, /* 0x22 quotedbl */
{ 22, 14, 14, 15, 1, -14 }, /* 0x23 numbersign */
{ 36, 1, 1, 2, 0, -1 }, /* 0x24 dollar */
{ 37, 14, 14, 15, 1, -14 }, /* 0x25 percent */
{ 51, 1, 1, 2, 0, -1 }, /* 0x26 ampersand */
{ 52, 5, 7, 6, 1, -13 }, /* 0x27 quotesingle */
{ 59, 8, 14, 9, 1, -14 }, /* 0x28 parenleft */
{ 73, 7, 14, 8, 1, -14 }, /* 0x29 parenright */
{ 87, 7, 7, 8, 1, -14 }, /* 0x2A asterisk */
{ 94, 14, 14, 15, 1, -14 }, /* 0x2B plus */
{ 108, 5, 7, 6, 1, -6 }, /* 0x2C comma */
{ 115, 12, 5, 13, 1, -9 }, /* 0x2D hyphen */
{ 120, 5, 5, 6, 1, -6 }, /* 0x2E period */
{ 125, 14, 14, 15, 1, -14 }, /* 0x2F slash */
{ 139, 14, 14, 15, 1, -14 }, /* 0x30 zero */
{ 153, 9, 14, 10, 1, -14 }, /* 0x31 one */
{ 167, 14, 14, 15, 1, -14 }, /* 0x32 two */
{ 181, 14, 14, 15, 1, -14 }, /* 0x33 three */
{ 195, 14, 14, 15, 1, -14 }, /* 0x34 four */
{ 209, 14, 14, 15, 1, -14 }, /* 0x35 five */
{ 223, 14, 14, 15, 1, -14 }, /* 0x36 six */
{ 237, 14, 14, 15, 1, -14 }, /* 0x37 seven */
{ 251, 14, 14, 15, 1, -14 }, /* 0x38 eight */
{ 265, 14, 14, 15, 1, -14 }, /* 0x39 nine */
{ 279, 5, 12, 6, 1, -13 }, /* 0x3A colon */
{ 291, 5, 14, 6, 1, -13 }, /* 0x3B semicolon */
{ 305, 9, 14, 10, 1, -14 }, /* 0x3C less */
{ 319, 12, 12, 13, 1, -13 }, /* 0x3D equal */
{ 331, 9, 14, 10, 1, -14 }, /* 0x3E greater */
{ 345, 14, 14, 15, 1, -14 }, /* 0x3F question */
{ 359, 1, 1, 2, 0, -1 }, /* 0x40 at */
{ 360, 14, 14, 15, 1, -14 }, /* 0x41 A */
{ 374, 14, 14, 15, 1, -14 }, /* 0x42 B */
{ 388, 14, 14, 15, 1, -14 }, /* 0x43 C */
{ 402, 14, 14, 15, 1, -14 }, /* 0x44 D */
{ 416, 14, 14, 15, 1, -14 }, /* 0x45 E */
{ 430, 14, 14, 15, 1, -14 }, /* 0x46 F */
{ 444, 14, 14, 15, 1, -14 }, /* 0x47 G */
{ 458, 14, 14, 15, 1, -14 }, /* 0x48 H */
{ 472, 7, 14, 8, 1, -14 }, /* 0x49 I */
{ 486, 14, 14, 15, 1, -14 }, /* 0x4A J */
{ 500, 14, 14, 15, 1, -14 }, /* 0x4B K */
{ 514, 13, 14, 14, 1, -14 }, /* 0x4C L */
{ 528, 15, 14, 16, 1, -14 }, /* 0x4D M */
{ 542, 14, 14, 15, 1, -14 }, /* 0x4E N */
{ 556, 14, 14, 15, 1, -14 }, /* 0x4F O */
{ 570, 14, 14, 15, 1, -14 }, /* 0x50 P */
{ 584, 14, 16, 15, 1, -14 }, /* 0x51 Q */
{ 600, 14, 14, 15, 1, -14 }, /* 0x52 R */
{ 614, 14, 14, 15, 1, -14 }, /* 0x53 S */
{ 628, 14, 14, 15, 1, -14 }, /* 0x54 T */
{ 642, 14, 14, 15, 1, -14 }, /* 0x55 U */
{ 656, 14, 14, 15, 1, -14 }, /* 0x56 V */
{ 670, 15, 14, 16, 1, -14 }, /* 0x57 W */
{ 684, 14, 14, 15, 1, -14 }, /* 0x58 X */
{ 698, 14, 14, 15, 1, -14 }, /* 0x59 Y */
{ 712, 14, 14, 15, 1, -14 }, /* 0x5A Z */
{ 726, 7, 14, 8, 1, -14 }, /* 0x5B bracketleft */
{ 740, 14, 14, 15, 1, -14 }, /* 0x5C backslash */
{ 754, 7, 14, 8, 1, -14 }, /* 0x5D bracketright */
{ 768, 8, 5, 9, 1, -13 }, /* 0x5E asciicircum */
{ 773, 14, 5, 15, 1, -5 }, /* 0x5F underscore */
{ 778, 8, 5, 9, 1, -13 }, /* 0x60 grave */
{ 783, 12, 12, 13, 1, -12 }, /* 0x61 a */
{ 795, 12, 12, 13, 1, -12 }, /* 0x62 b */
{ 807, 12, 12, 13, 1, -12 }, /* 0x63 c */
{ 819, 12, 12, 13, 1, -12 }, /* 0x64 d */
{ 831, 12, 12, 13, 1, -12 }, /* 0x65 e */
{ 843, 12, 12, 13, 1, -12 }, /* 0x66 f */
{ 855, 12, 12, 13, 1, -12 }, /* 0x67 g */
{ 867, 12, 12, 13, 1, -12 }, /* 0x68 h */
{ 879, 6, 12, 7, 1, -12 }, /* 0x69 i */
{ 891, 12, 12, 13, 1, -12 }, /* 0x6A j */
{ 903, 12, 12, 13, 1, -12 }, /* 0x6B k */
{ 915, 11, 12, 12, 1, -12 }, /* 0x6C l */
{ 927, 13, 12, 14, 1, -12 }, /* 0x6D m */
{ 939, 12, 12, 13, 1, -12 }, /* 0x6E n */
{ 951, 12, 12, 13, 1, -12 }, /* 0x6F o */
{ 963, 12, 12, 13, 1, -12 }, /* 0x70 p */
{ 975, 12, 14, 13, 1, -12 }, /* 0x71 q */
{ 989, 12, 12, 13, 1, -12 }, /* 0x72 r */
{ 1001, 12, 12, 13, 1, -12 }, /* 0x73 s */
{ 1013, 12, 12, 13, 1, -12 }, /* 0x74 t */
{ 1025, 12, 12, 13, 1, -12 }, /* 0x75 u */
{ 1037, 12, 12, 13, 1, -12 }, /* 0x76 v */
{ 1049, 13, 12, 14, 1, -12 }, /* 0x77 w */
{ 1061, 12, 12, 13, 1, -12 }, /* 0x78 x */
{ 1073, 12, 12, 13, 1, -12 }, /* 0x79 y */
{ 1085, 12, 12, 13, 1, -12 }, /* 0x7A z */
{ 1097, 9, 14, 10, 1, -14 }, /* 0x7B braceleft */
{ 1111, 7, 14, 8, 1, -14 }, /* 0x7C bar */
{ 1125, 9, 14, 10, 1, -14 }, /* 0x7D braceright */
{ 1139, 8, 5, 9, 1, -13 }, /* 0x7E asciitilde */
{ 1144, 1, 1, 2, 0, -1 }, /* 0xA0 nonbreakingspace */
};

const GFXfont Font_04b30 PROGMEM = {(uint8_t *) Font_04b30_Bitmaps,  (GFXglyph *)Font_04b30_Glyphs, 0x20, 0xA0,  17};
