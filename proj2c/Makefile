CC = gcc

SRCS = proj2c.c

TARGET = proj2c

default:
	$(CC) -o $(TARGET) $(SRCS) -lpthread

clean:
	rm -f $(TARGET) *.core

run: default
	./$(TARGET)

