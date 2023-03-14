//============================================================================
// Name        : cpp_ex_1_12.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// C++もCと同様に、算術演算時に一時的な型の昇格がありうる

	// int型より小さいサイズは算術演算時に型の昇格
	// ※int型サイズは処理系依存
	short s1 = -10;
	unsigned short s2 = 5;

	cout << ( s1 + s2 ) << "\n";
	if ( ( s1 + s2 ) < 1 ) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}

	// int型以上になると、より大きな整数型に変換される
	// 32bit処理系の場合、、、
	// int → unsigned int → long → unsigned long …
	int i1 = -10;
	unsigned int i2 = 5;

	cout << ( i1 + i2 ) << "\n";	// ここでunsigned int型へ昇格
	if ( ( i1 + i2 ) < 1 ) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;	// 期待した動作にならない
	}

	cout << (int)( i1 + i2 ) << "\n";
	if ( (int)( i1 + i2 ) < 1 ) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
	return 0;
}
