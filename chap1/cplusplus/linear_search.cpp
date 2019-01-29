/*
 * file name: linear_search.cpp
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Tue 29 Jan 2019 10:09:16 AM CST
 */

#include "general_cpp.h"

using namespace std;

int linear_search(vector<int> &v, const int &X);
int main(void)
{
	vector<int> v = {5, 2, 1, 3, 4, 6};
	const int X = 3;
	const string split = " ";
	print_vector(v, split);
	putchar('\n');
	int index = linear_search(v, X);
	if (index)
		printf("Found element %d, at index %d\n",
				X, index);
	else 
		printf("Not found element %d\n", X);
	exit(0);
}

int linear_search(vector<int> &v, const int &X)
{
	int idx = 0;
	for (viterator(int) it = v.begin(); it != v.end(); it++) {
		if (*it == X)
			return idx;
		idx++;
	}
	return 0;
}
