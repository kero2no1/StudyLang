//============================================================================
// Name        : cpp_ex_2_07_2.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	short va_16 = stoi("0x22", nullptr, 16);	// 16進数→10進数
	short va_8  = stoi("033", nullptr,  8);		//  8進数→10進数
	short va_10 = stoi("44", nullptr, 10);		// 10進数→10進数

	cout << va_16 << ","
		 << va_8  << ","
		 << va_10 << endl;

	cout << va_16 + va_8 + va_10 << endl;

}
