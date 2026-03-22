.PHONY: build run-debug run-valgrind run

build:
	gcc -g -Werror -Wfatal-errors -Wpedantic -pedantic-errors -Wall -o bin/tempscale src/main.c

run-debug: build
	make build
	gdb bin/tempscale

run-valgrind: build
	valgrind --leak-check=full --leak-resolution=high ./bin/tempscale

run: build
	make build
	bin/tempscale
