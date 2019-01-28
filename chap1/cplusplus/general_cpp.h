/*
 * file name: general.h
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Sun 27 Jan 2019 08:25:46 PM CST
 */

#ifndef _GENERAL_H
#define _GENERAL_H

#include <iostream>
#include <vector>
#include <stdlib.h>

void print_vector(std::vector<int> &v, std::string &s)
{
	for (std::vector<int>::iterator it = v.begin();
			it != v.end(); it++)
		std::cout << *it << s;
}
#endif 
