//============================================================================
// Name        : cpp_ex_2_07_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	char ch1 = 'A';
	char ch2 = '1';
	char ch3[] = "t1t2t3";

	cout << isdigit(ch1) << ","
		 << isdigit(ch2) << ","
		 << isdigit(ch3[2]) << endl;

	string s(ch3);		// stringのコンストラクタが呼ばれている
	s[0] = toupper(s[0]);
	cout << s << endl;

	char *pv = &ch3[2];
	*pv = toupper(*pv);
	cout << ch3 << endl;

	// 文字列全体に対してはtransformを使う
	// algorithmのインクルードが必要
	::transform(s.begin(), s.end(), s.begin(), ::toupper);
	cout << s << endl;

	// 先頭2文字分を変換の対象とする
	::transform(s.begin(), s.begin()+2, s.begin(), ::tolower);
	cout << s << endl;

	return 0;
}
