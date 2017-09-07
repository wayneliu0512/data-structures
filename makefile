.PHONY = debug test bench clean
CPPFLAGS = -std=c++11 -I include -Werror -Wall -Wextra -pedantic -O

all: tests/main

tests/main: $(wildcard tests/*.cpp)

debug: CPPFLAGS += -g
debug: all

test: debug
	valgrind ./tests/main

bench: all
	sh -c "time ./tests/main"

clean:
	rm tests/main
