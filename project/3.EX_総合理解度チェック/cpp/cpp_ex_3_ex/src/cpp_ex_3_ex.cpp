//============================================================================
// Name        : cpp_ex_3_ex.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// 論理式は短絡評価される(これはC言語と同様)
	int test = 0;
	if( true || (++test > 0) ) cout << test << "\n";	// 短絡あり
	if( true && (++test > 0) ) cout << test << "\n";	// 短絡なし
	cout << endl;

	int arrays[10];
	for( int i = 0, j= -1; i < (int)(sizeof(arrays) / sizeof(int)); i++, j-- ) {
		arrays[i] = j;
	}

	// 範囲for文という仕組みがある
	for( auto &array: arrays ) cout << array << endl;

	int *lists = new int[10];
	for( auto &list: lists ) {
		list = 10;
	}


	return 0;
}
