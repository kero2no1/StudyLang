//============================================================================
// Name        : cpp_ex_1_10_2.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// 文字列結合するときはstringクラスがよい
	std::string myName, s1, s2;

	s1 = "Keroichi";
	s2 = "T";
	myName = s1 + " " + s2;

	cout << myName << endl;
	return 0;
}
