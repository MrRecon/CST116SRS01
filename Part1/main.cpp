// main.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <iostream>


int main()
{
	std::cout << "sizeof(false) == " << sizeof false << "\n";

	std::cout << "sizeof(true) == " << sizeof(true) << "\n";
	
	std::cout << "sizeof(0) == " << sizeof(0) << "\n";
	
	std::cout << "sizeof(1) == " << (1) << "\n";
	
	std::cout << "sizeof(0xFFF) == " << sizeof(0xFFF) << "\n";
	
	std::cout << "sizeof(0UL) == " << sizeof(0UL) << "\n";
	
	std::cout << "sizeof('\0') == " << sizeof('\n') << "\n";

	std::cout << "sizeof('\377') == " << sizeof('\377') << "\n";
	
	std::cout << "sizeof(0.0) == " << sizeof(0.0) << "\n";

	std::cout << "sizeof(0.f) == " << sizeof(0.f) << "\n";
	
	std::cout << "sizeof(\"Annie\"Lennox\"\n\") == " << sizeof("Annie" " " "\"Lennox\"\n") << std::endl;

	return 0;
}
