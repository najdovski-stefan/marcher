CC = gcc

CFLAGS = -Wall -Wextra -O0 -g

TARGET = marcher

SRCS = src/main.c src/lib/marcher.c 

OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
