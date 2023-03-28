//============================================================================
// Name        : cpp_ex_2_09.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string array[5];

	array[0] = string("String 0");
	array[1] = string("String 1");
	array[2] = string("String 2");
	array[4] = string("String 4");

	cout << sizeof(array) / sizeof(string) << "\n";
	cout << array[0] << "\n"
		 << array[1] << "\n"
		 << array[2] << "\n"
		 << array[3] << "\n"	// 空文字
		 << array[4] << endl;

	return 0;
}
