.PHONY:all clean
all : bpmain.out bemain.out

bpmain.out : bpmain.c bptree.c bptree.h
	gcc -O3 -o bpmain.out bpmain.c bptree.c
bemain.out : bemain.c betree.c betree.h
	gcc -O3 -o bemain.out bemain.c betree.c

clean :
	rm -f *.out
