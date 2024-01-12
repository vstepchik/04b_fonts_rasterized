.PHONY: all, bdf-to-gfx, bdf-to-pic

all: bdf-to-gfx bdf-to-pic

bdf-to-gfx:
	find . -type f -name '*.bdf' -exec sh -c './bdf2gfx.py "$$1" > "$${1%.bdf}.h"' sh {} \;

bdf-to-pic:
	find . -type f -name '*.bdf' -exec sh -c './bdf2pic.py "$$1"' sh {} \;
