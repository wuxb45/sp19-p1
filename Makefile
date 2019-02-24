test.out : test.c tree.c tree.h
	gcc -O3 -o test.out test.c tree.c
#	gcc -g -o test.out test.c tree.c
.PHONY:clean
clean :
	rm -f test.out
