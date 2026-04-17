CC=gcc
CFLAGS=-Wall

all: monitor

monitor: main.o cpu.o memory.o disk.o process.o
	$(CC) $(CFLAGS) -o monitor main.o cpu.o memory.o disk.o process.o

main.o: main.c utils.h
	$(CC) $(CFLAGS) -c main.c

cpu.o: cpu.c utils.h
	$(CC) $(CFLAGS) -c cpu.c

memory.o: memory.c utils.h
	$(CC) $(CFLAGS) -c memory.c

disk.o: disk.c utils.h
	$(CC) $(CFLAGS) -c disk.c

process.o: process.c utils.h
	$(CC) $(CFLAGS) -c process.c

clean:
	rm -f *.o monitor