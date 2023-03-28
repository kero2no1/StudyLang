//============================================================================
// Name        : cpp_ex_2_03_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//#include <string>
//#include <typeinfo>
using namespace std;

int main() {

	string s = "\"Romeo, where art thou?\"";

	// sizeはlengthと同じ。他のクラスとの互換性のためにsizeが用意されているらしい。
	// 文字列操作は一般的にはlength使うかな。
	cout << s.substr(s.size()-10) << endl;

	std::

	// キャストできる→これは暗黙的にコンストラクタが呼ばれてるのかな？
	cout << ((string)"\"Romeo, where art thou?\"").substr(0,10) << endl;

	// 文字列リテラルはchar型になっているようだ
	char cp[] = "text";
	cout << typeid("text").name() << ","	// A:文字列 5文字 char→A5_c
		 << typeid("test").name() << ","
		 << typeid(cp).name() << endl;

	cout << typeid(s).name() << ","
		 << typeid((string)"string").name();



	return 0;
}
