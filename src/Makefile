CC = gcc 
CFLAGS = 
LIB = 

all: main 

ansh:
	$(CC) $(CFLAGS) -c ansh.c

main:ansh main
	$(CC) $(CFLAGS) ansh.o main.c -o main.exe

run:
	.\main.exe

clean:
	rm main.exe

