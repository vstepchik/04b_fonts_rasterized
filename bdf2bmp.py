#!/usr/bin/env python3

from PIL import Image, ImageDraw
import re

class BDFParser:
    def __init__(self, path):
        self.path = path
        self.char_bitmaps = {}

    def parse(self):
        with open(self.path, 'r') as file:
            content = file.readlines()
        char_data = []
        processing_char = False
        for line in content:
            if "STARTCHAR" in line:
                processing_char = True
                char_data = []
            elif "ENDCHAR" in line:
                processing_char = False
                self.process_char(char_data)
            if processing_char:
                char_data.append(line)

    def process_char(self, char_data):
        metadata = {'dwidth': (0, 0)}
        bitmap = []
        reading_bitmap = False
        for line in char_data:
            if "ENCODING" in line:
                metadata['encoding'] = int(line.split()[1])
            elif "DWIDTH" in line:
                parts = line.split()[1:]
                metadata['dwidth'] = (int(parts[0]), int(parts[1]))
            elif "BBX" in line:
                parts = line.split()[1:]
                metadata['bbx'] = (int(parts[0]), int(parts[1]), int(parts[2]), int(parts[3]))
            elif "BITMAP" in line:
                reading_bitmap = True
            elif reading_bitmap:
                if line.strip():
                    bitmap.append(line.strip())
                else:
                    reading_bitmap = False
        self.char_bitmaps[metadata['encoding']] = (metadata, bitmap)

    def draw_char(self, draw, x, y, char_code, grid_size=16):
        if char_code not in self.char_bitmaps:
            return  # Character not found
        metadata, bitmap = self.char_bitmaps[char_code]
        width, height, xoff, yoff = metadata['bbx']
        
        # Calculate scaling factors based on grid size and bitmap size
        x_scale = grid_size / width
        y_scale = grid_size / height

        # Adjust starting x position based on character width and x offset
        # If the character is narrower than the grid, it should be centered
        x += max(0, (grid_size - (width * x_scale)) // 2)

        for row_num, row in enumerate(bitmap):
            binary_row = format(int(row, 16), f'0{width}b')
            for col_num, bit in enumerate(binary_row):
                if bit == '1':
                    # Calculate the exact position for each pixel
                    x_pos = x + col_num * x_scale
                    y_pos = y + row_num * y_scale
                    draw.rectangle([x_pos, y_pos, x_pos + x_scale, y_pos + y_scale], fill='black')


def create_bmp_image(bdf_path, output_path, grid_size=16):
    parser = BDFParser(bdf_path)
    parser.parse()

    # Adjust columns and rows based on your font and desired layout
    cols = 16
    rows = 8  # 128 ASCII characters fit into 8 rows
    img_width = cols * grid_size
    img_height = rows * grid_size

    image = Image.new('RGB', (img_width, img_height), 'white')
    draw = ImageDraw.Draw(image)

    for i, char_code in enumerate(range(0x20, 0x7E + 1)):  # ASCII range from space to ~
        x = (i % cols) * grid_size
        y = (i // cols) * grid_size
        parser.draw_char(draw, x, y, char_code, grid_size=grid_size)

    image.save(output_path, 'BMP')

# Usage example
bdf_path = '/home/vitalatron/d/fonts/04b_fonts_rasterized/04b-03b/04b03b-8.bdf'
output_path = '/home/vitalatron/d/fonts/04b_fonts_rasterized/04b-03b/04b03b-8.bmp'
create_bmp_image(bdf_path, output_path)
