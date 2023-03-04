//============================================================================
// Name        : cpp_ex_1_9_1.cpp
// Author      : Keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int num;

	num = 1000;
	// 数値と文字の単純結合はできないので、
	// 数値を文字列に型変換して結合する
	cout << to_string(num) + " is the value of num." << endl; // prints Hello World!
	return 0;
}
