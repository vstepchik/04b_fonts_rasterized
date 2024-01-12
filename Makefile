all:
	find . -iname '*.bdf' -exec bash -c 'echo $1 && ./bdf2gfx.py $1 > $1.h' - {} \;

.PHONY: all
