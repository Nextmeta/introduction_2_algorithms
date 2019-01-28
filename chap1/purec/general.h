/*
 * file name: general.h
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Sun 27 Jan 2019 08:25:46 PM CST
 */

#ifndef _GENERAL_H
#define _GENERAL_H

#include <stdio.h>
#include <stdlib.h>

void print_array(int *A, int len, char *split)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d%s", A[i], split);
}
#endif 
