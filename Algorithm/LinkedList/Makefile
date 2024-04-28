CC = gcc
CFLAGS = -Wall -g


main : main.o linkedList.o
	$(CC) $(CFLAGS) -o main main.o linkedList.o

main.o : main.c linkedList.h
	$(CC) $(CFLAGS) -c main.c

linkedList.o : linkedList.c linkedList.h
	$(CC) $(CFLAGS) -c linkedList.c

clean : 
	rm *.o main
