/// main.cpp : Defines the entry point for the console application.
/*
The following assigns a data type to each variable, prints out the size of the data type - sizeof is stored in said
variable. Variable names are not intended to directly suggest a relationship to the data type.
Assert statements ensure 100% accuracy of datatype size.
*/

#include "stdafx.h"
#include <iostream>
#include <cassert>

int main()
{
	std::size_t decision = sizeof(bool);
	assert (sizeof(bool) == 1);

	std::size_t hello = sizeof(signed char);

	std::size_t bye = sizeof(unsigned char);

	std::size_t A = sizeof(char);
	assert(sizeof(char) == 1);

	std::size_t shoeSize = sizeof(unsigned short);

	std::size_t age = sizeof(short);
	assert(sizeof(short) == 2);

	std::size_t alpha = sizeof(signed);

	std::size_t bravo = sizeof(unsigned);

	std::size_t miles = sizeof(int);

	std::size_t size1 = sizeof(size_t);
	
	std::size_t longlong = sizeof(signed long);
	
	std::size_t sameDistance = sizeof(unsigned long);
	
	std::size_t notSameDistance = sizeof(long);
	assert(sizeof(long) == 4);

	std::size_t bubble = sizeof(float);
	assert(sizeof(float) == 4);

	std::size_t points = sizeof(double);
	assert(sizeof(double) == 8);

	std::size_t doubleDouble = sizeof(long double);
	assert(sizeof(long double) == 8);

	return 0;
}