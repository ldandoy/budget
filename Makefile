CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Wunused-but-set-variable
SRC_DIR = src
INC_DIR = src/headers
DIST_DIR = dist

SRC = $(SRC_DIR)/main3.c \
      $(SRC_DIR)/categorie.c \
      $(SRC_DIR)/depense.c

TARGET = $(DIST_DIR)/budget.exe

all: 
	mkdir -p $(DIST_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) ${SRC} -o $(TARGET)

clean:
	rm -rf $(DIST_DIR)

run: all
	./$(TARGET)
