CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRC_DIR = src
INC_DIR = src/headers
DIST_DIR = dist

SRC = $(SRC_DIR)/main.c \
      $(SRC_DIR)/categorie.c \
      $(SRC_DIR)/depense.c

TARGET = $(DIST_DIR)/budget

all: $(TARGET)

$(TARGET): $(SRC)
	mkdir -p $(DIST_DIR)
	$(CC) $(CFLAGS) -I$(INC_DIR) $^ -o $@

clean:
	rm -rf $(DIST_DIR)

run: all
	./$(TARGET)
