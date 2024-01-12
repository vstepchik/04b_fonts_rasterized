#!/usr/bin/env python3

# MIT License.

# Copyright (c) 2016 William Skellenger
# Copyright (c) 2024 Vitalii Stepchyk
# 
# Permission is hereby granted, free of charge, to any person obtaining a 
# copy of this software and associated documentation files (the "Software"), 
# to deal in the Software without restriction, including without limitation 
# the rights to use, copy, modify, merge, publish, distribute, sublicense, 
# and/or sell copies of the Software, and to permit persons to whom the 
# Software is furnished to do so, subject to the following conditions:
# 
# The above copyright notice and this permission notice shall be included 
# in all copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS 
# OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS 
# IN THE SOFTWARE.

# Usage: bdf2gfx.py <somefont.bdf> > somefont.h
# You can move then the .h file to your project and include like any other font from Adafruit GFX lib.
# 
# Vitalii Stepchyk, Jan 2024
# (email: vitalii@stepchyk.dev)

import sys
from bdf import FontInfo, process_bdf


def print_glyphs(font: FontInfo):
    if not font.glyphs:
        print("No glyphs found", file=sys.stderr)
        return

    print("#pragma once")
    print("#include <Adafruit_GFX.h>")
    print()
    print(f"// Font: {font.name}")
    print(f"const uint8_t {font.name_sanitized}_Bitmaps[] PROGMEM = {{")
    i = 0
    for char in font.glyphs:
        height = 0
        char.offset = i
        for row in char.rows:
            print(f"    0x{row:02X},", end=" ")
            i += 1
            height += 1
        char.height = height
        print(f"/* 0x{char.encoding:02X} {char.comment} */")
    print("};")
    print()

    print(f"const GFXglyph {font.name_sanitized}_Glyphs[] PROGMEM = {{")
    for char in font.glyphs:
        print(f"{{ {char.offset}, {char.width}, {char.height}, {char.advance}, {char.xoffs}, {char.yoffs} }}, /* 0x{char.encoding:02X} {char.comment} */")
    print("};")
    print()
    print(f"const GFXfont {font.name_sanitized} PROGMEM = {{(uint8_t *) {font.name_sanitized}_Bitmaps,  (GFXglyph *){font.name_sanitized}_Glyphs, 0x{font.first_glyph:02X}, 0x{font.last_glyph:02X},  {font.y_advance}}};")


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} FILE", file=sys.stderr)
        print(f"Example: {sys.argv[0]} somefont.bdf > somefont.h", file=sys.stderr)
        sys.exit(1)

    file_path = sys.argv[1]
    font_info = process_bdf(file_path)
    print_glyphs(font_info)
