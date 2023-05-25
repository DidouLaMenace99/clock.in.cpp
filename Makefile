CFLAGS=-Wall -Wextra -pedantic -fdiagnostics-color=always -O0 -g3 -fsanitize=address

clock:
	g++ $(CFLAGS) -c main.cpp clock.cpp 
	g++ $(CFLAGS) main.o clock.o -o main
	./main

clean:
	rm -f main.o main clock.o