/*
 * file name: insertion_sort.cpp
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Sun 27 Jan 2019 08:31:14 PM CST
 */

#include "general_cpp.h"

using namespace std;

void insertion_sort(vector<int> &V);
int main(void)
{
	vector<int> v = {5, 2, 4, 6, 1, 3};
	string split = " ";
	insertion_sort(v);
	print_vector(v, split);
	putchar('\n');
	return 0;
}
void insertion_sort(vector<int> &V)
{
	int i, j, key;
	int len = V.size();
	for (j = 1; j < len; j++) {
		key = V.at(j);
		i = j - 1;
		while (i >= 0 && V[i] > key) {
			V.at(i + 1) = V.at(i);
			i--;
		}
		V.at(i + 1) = key;
	}
}
