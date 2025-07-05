build:
	gcc -g -Werror -Wfatal-errors -Wpedantic -o bin/tempscale src/main.c

debug:
	make build
	gdb bin/tempscale

run:
	make build
	bin/tempscale
