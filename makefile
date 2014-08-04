all: main.c
	g++ -g main.c -o run.o
clean:
	rm -rf *.o *.out *.dSYM
