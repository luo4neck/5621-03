ex01numbers: ex01numbers.o
	gcc -Wall ex01numbers.o -o ex01numbers

ex01numbers.o: ex01numbers.c
	gcc -c ex01numbers.c


clean: 
	rm -f ex01numbers.o ex01numbers


test: ex01numbers
	./ex01numbers -16
	./ex01numbers 13
