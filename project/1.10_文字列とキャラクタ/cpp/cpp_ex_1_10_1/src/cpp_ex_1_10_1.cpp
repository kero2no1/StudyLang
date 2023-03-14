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

	// 文字列リテラルは、「const char*」型なので書換え不可
	// 下記のようにすると、コンパイルエラーを吐く
//	str[2] = "s";
//	s[2] = "s";

	cout << str << "\n";
	cout << s << endl;
	return 0;
}
