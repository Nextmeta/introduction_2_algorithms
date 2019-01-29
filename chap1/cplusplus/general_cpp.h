/*
 * file name: general.h
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Sun 27 Jan 2019 08:25:46 PM CST
 */

#ifndef _GENERAL_H
#define _GENERAL_H

#define viterator(type)	std::vector<type>::iterator 

#include <iostream>
#include <vector>
#include <stdlib.h>

void print_vector(std::vector<int> &v, const std::string &s)
{
	std::cout << "The array is: ";
	for (viterator(int) it = v.begin();
			it != v.end(); it++)
		std::cout << *it << s;

}
#endif 
