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

# This script is based on the script developed by William Skellenger, Feb 2016 (email: williamj@skellenger.net)
# https://gist.github.com/skelliam/322d421f028545f16f6d
# 
# I've rewritten it to run on python3 and produce a complete .h file to reduce
# hand work. It also throws away all characters with code outside of [0..255] range.
# 
# Usage: bdf2gfx.py <somefont.bdf> > somefont.h
# You can move then the .h file to your project and include like any other font from Adafruit GFX lib.
# 
# Vitalii Stepchyk, Jan 2024
# (email: vitalii@stepchyk.dev)

import sys
import re
from dataclasses import dataclass, field
from typing import List, Optional

@dataclass
class Glyph:
    encoding: int = -1
    rows: List[int] = field(default_factory=list)
    comment: str = ""
    offset: int = -1
    width: int = 0
    height: int = 0
    advance: int = 0
    xoffs: int = 0
    yoffs: int = 0

@dataclass
class FontInfo:
    name: str
    name_sanitized: str = field(init=False)
    y_advance: int
    first_glyph: int
    last_glyph: int
    glyphs: List[Glyph]

    def __post_init__(self):
        sanitized = re.sub(r'[^0-9a-zA-Z_]', '_', self.name)
        if not re.match(r'^[a-zA-Z_]', sanitized):
            sanitized = 'Font_' + sanitized
        self.name_sanitized = sanitized

def process_bdf(file_path: str) -> FontInfo:
    with open(file_path, 'r') as myfile:
        processing = False
        getting_rows = False
        g: Optional[Glyph] = None
        chars: List[Glyph] = []
        first_glyph = None
        last_glyph = None
        y_advance = 12
        name = "Unknown"

        for line in myfile.readlines():
            if 'STARTCHAR' in line:
                processing = True
                vals = line.split()
                g = Glyph(comment=vals[1])
                g.width = 8  # in this example always 8 bits wide
            elif 'ENDCHAR' in line:
                if g.encoding in range(0, 256):
                    chars.append(g)  # append the completed glyph into list
                processing = False
                getting_rows = False
            elif 'PIXEL_SIZE' in line:
                y_advance = int(line.split()[1])
            elif 'FAMILY_NAME' in line:
                name = line.split()[1].strip('\"')

            if processing:
                if 'ENCODING' in line:
                    vals = line.split()
                    enc = int(vals[1])
                    if enc in range(0, 256):
                        g.encoding = enc
                        first_glyph = enc if first_glyph is None else min(first_glyph, enc)
                        last_glyph = enc if last_glyph is None else max(last_glyph, enc)
                elif 'BBX' in line:
                    vals = line.split()
                    g.xoffs = 0
                    g.yoffs = -(int(vals[2]) + int(vals[4]))
                    g.advance = (int(vals[1]) + 1)  # x bounding box + 1
                elif 'BITMAP' in line:
                    getting_rows = True
                elif getting_rows:
                    g.rows.append(int(line.strip(), 16))  # append pixel rows into glyph's list of rows

        if first_glyph is None or last_glyph is None:
            raise RuntimeError("No glyphs found")

        return FontInfo(
            name=name,
            y_advance=y_advance,
            first_glyph=first_glyph,
            last_glyph=last_glyph,
            glyphs=chars,
        )

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
        print(f"Example: ./{sys.argv[0]} somefont.bdf > somefont.h", file=sys.stderr)
        sys.exit(1)

    file_path = sys.argv[1]
    font_info = process_bdf(file_path)
    print_glyphs(font_info)
