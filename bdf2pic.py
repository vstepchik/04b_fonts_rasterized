#!/usr/bin/env python3

# MIT License.
#
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

# The script reads the bdf font and renders forst 256 characters from it in a grid.
# 
# Usage: bdf2bmp.py <somefont.bdf>
# 
# Vitalii Stepchyk, Jan 2024
# (email: vitalii@stepchyk.dev)

from PIL import Image, ImageDraw
import re, os, sys
from bdf import FontInfo, Glyph, process_bdf


def draw_char(fnt: FontInfo, draw, x, y, char_code, grid_size):
    draw.rectangle((x, y-1, x+grid_size, y+grid_size-1), outline='#DFEAFB')
    glyph: Glyph = fnt.codes.get(char_code, None)
    if glyph is None:
        return  # Character not found

    bits_width = max(glyph.rows).bit_length()
    for row_num, row in enumerate(glyph.rows):
        binary_row = format(row, f'0{bits_width}b')
        for col_num, bit in enumerate(binary_row):
            if bit == '1':
                draw.point((x + glyph.xoffs + col_num, y + glyph.yoffs + row_num), 'black');


def create_bmp_image(bdf_path, output_path, char_range=range(0x00, 0xFF + 1), grid_size=8, cols=16, rows=16):
    font_info = process_bdf(bdf_path)
    grid_size = max(font_info.y_advance, grid_size)

    img_width = cols * grid_size
    img_height = rows * grid_size

    image = Image.new('P', (img_width, img_height), 'white')
    draw = ImageDraw.Draw(image)

    for i, char_code in enumerate(char_range):  # ASCII range
        x = (i % cols) * grid_size
        y = (i // cols) * grid_size
        draw_char(font_info, draw, x, y, char_code, grid_size)

    image.save(output_path, 'PNG')


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} FILE", file=sys.stderr)
        print(f"Example: {sys.argv[0]} somefont.bdf", file=sys.stderr)
        sys.exit(1)

    file_path = sys.argv[1]
    output_path = os.path.splitext(file_path)[0] + ".png"
    create_bmp_image(file_path, output_path)
