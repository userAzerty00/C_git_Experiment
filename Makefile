CC = gcc
CFLAGS = -Wall -Wextra
LDFLAGS = -lm
TARGET = calculator
SRC = calculator.c add.c subtract.c multiply.c divide.c modulo.c power.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) $(OBJ)

.PHONY: all run clean
