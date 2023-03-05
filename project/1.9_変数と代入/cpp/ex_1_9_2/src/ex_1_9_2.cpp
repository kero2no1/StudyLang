//============================================================================
// Name        : ex_1_9_2.cpp
// Author      : Keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char c;
	bool flag;

	// warningが出る。中身はゼロが出力されているが、
	// 言語仕様ではメモリの内容は不定となる。
	cout << (int)c << endl;
	cout << flag << endl;
	return 0;
}
