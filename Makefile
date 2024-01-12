.PHONY: convert-bdf
convert-bdf:
	find . -type f -name '*.bdf' -exec sh -c './bdf2gfx.py "$$1" > "$${1%.bdf}.h"' sh {} \;
