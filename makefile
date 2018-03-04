all: duck

duck: duck2.c
	gcc duck2.c -lm -g -o duck
