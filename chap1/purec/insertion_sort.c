/*
 * file name: insertion_sort.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Sun 27 Jan 2019 08:19:38 PM CST
 */

/* pseudocode:
 * INSERTION-SORT(A)
 * 	for j = 2 to A.length
 * 		key = A[j]
 * 		i = j - 1
 * 	while (i > 0 && A[i] > key)
 * 		A[i + 1] = A[i]
 * 		i = i - 1
 * 	A[i + 1] = key
 */

#include "general.h"

#define LENGTH 		6
void insertion_sort(int *A, int len);

int main(void)
{
	int A[LENGTH] = {5, 2, 4, 6, 1, 3};
	insertion_sort(A, LENGTH);
	print_array(A, LENGTH, " ");
	putchar('\n');
	exit(0);
}

void insertion_sort(int *A, int len)
{
	int i, j;
	int key;
	for (j = 1; j < len; j++) {
		key = A[j];
		i = j - 1;
		while (i >= 0 && A[i] > key) {
			A[i + 1] = A[i];
			i--;
		}
		A[i + 1] = key;
	}
}
