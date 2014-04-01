ex02sqrt: ex02sqrt.o
	gcc -Wall ex02sqrt.o -o ex02sqrt -lm

ex02sqrt.o: ex02sqrt.c
	gcc -c ex02sqrt.c


clean: 
	rm -f ex02sqrt.o ex02sqrt


test: ex02sqrt
	./ex02sqrt 16 3
	./ex02sqrt 123.45678 6
