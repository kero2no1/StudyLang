//============================================================================
// Name        : cpp_ex_2_04_2.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string s = "125";
	int i = stoi(s);	// 数値に変換

	i += 10;
	s = to_string(i);	// stringに変換
	cout << "文字列は" + s << endl;	// 文字列として結合される

	return 0;
}
