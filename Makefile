main.out : main.c tree.c tree.h
	gcc -O3 -o main.out main.c tree.c
#	gcc -g -o main.out main.c tree.c

.PHONY:clean
clean :
	rm -f main.out
