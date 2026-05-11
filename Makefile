WARNING_FLAGS = -Werror -Wfatal-errors -Wpedantic -pedantic-errors -Wall

.PHONY: build run-debug run-valgrind run

build:
	gcc -g ${WARNING_FLAGS} -o bin/tempscale src/main.c

build-test:
	gcc -g ${WARNING_FLAGS} -o ./bin/__tests__/inputs_test ./src/inputs/__tests__/inputs_test.c
	gcc -g ${WARNING_FLAGS} -o ./bin/__tests__/scales_test ./src/scales/__tests__/scales_test.c

run-test: build-test
	# E.g. make run-test bin="inputs_test"
	./bin/__tests__/${bin}

run-debug: build
	make build
	gdb bin/tempscale

run-valgrind: build
	valgrind --leak-check=full --leak-resolution=high ./bin/tempscale

run: build
	make build
	bin/tempscale
