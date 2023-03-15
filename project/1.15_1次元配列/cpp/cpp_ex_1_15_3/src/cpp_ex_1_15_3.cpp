//============================================================================
// Name        : cpp_ex_1_15_3.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double data[] = { 1, 2, 3, 4 };
	double ave, length;

	// C++では要素数はテンプレート関数を用いる方法が一般的なようだが、
	// 今回は定番のsizeofを使った導出
	length = sizeof( data ) / sizeof( double );

	ave = 0;
	ave += data[ 0 ];
	ave += data[ 1 ];
	ave += data[ 2 ];
	ave += data[ 3 ];
	ave /= length;

	cout << "データ数：" << length << "\n"
		 << data[0] << " "
		 << data[1] << " "
		 << data[2] << " "
		 << data[3]
		 << "\n";
	cout << "平均値：" << ave << endl;

	return 0;
}
