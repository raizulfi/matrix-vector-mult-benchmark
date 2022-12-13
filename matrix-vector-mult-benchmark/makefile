all: mylib.o 
	gcc -o main_test.out mylib.o main_test.c

mylib.o: mylib/mylib.c
	gcc -o mylib.o -c mylib/mylib.c

time: 
	gcc -o mylib.o -c mylib/mylib.c  
	gcc -o main_b_time.out main_b_time.c mylib.o 

space:
	gcc -o mylib.o -c mylib/mylib.c   
	gcc -o main_b_space.out main_b_space.c mylib.o
	
clear: 
	rm -rf *.out
	rm -rf *.o