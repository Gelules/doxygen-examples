CC = gcc
CFLAGS = -std=c99 -pedantic -Wall -Wextra -Werror
OBJ = src/main.o src/point.o
BIN = point

.PHONY: doc

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $(BIN)

doc:
	doxygen Doxyfile

clean:
	$(RM) -r doc/ $(BIN) $(OBJ)
