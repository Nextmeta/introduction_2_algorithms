/*
 * file name: linear_search.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Tue 29 Jan 2019 10:23:27 AM CST
 */

#include "general.h"

#define ARRLENG 	6

int linear_search(int *A, int len, int X);

int main(void)
{
	int A[ARRLENG] = {5, 2, 1, 3, 4, 6};
	int X = 3;
	int index;
	print_array(A, ARRLENG, " ");
	putchar('\n');
	index = linear_search(A, ARRLENG, X);
	if (index)
		printf("Found element %d, at index %d\n",
				X, index);
	else 
		printf("Not found element %d\n", X);
	exit(0);
}

int linear_search(int *A, int len, int X)
{
	int i;
	for (i = 0; i < len; i++)
		if (A[i] == X)
			return i;
	return 0;
}
