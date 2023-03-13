//============================================================================
// Name        : cpp_ex_1_10_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// エスケープシーケンス 「\"」でダブルクォーテーション
	char str[] = "\"Romeo, where art thou?\"";

	// C++ライブラリはstringクラスが用意されている
	string s = "\"Romeo, where art thou?\"";

	cout << str << endl;
	cout << s << endl;
	return 0;
}
