//============================================================================
// Name        : cpp_ex_1_16_3.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int dataArr[][3][3] = {
		{ {11,12,13}, {14,15,16}, {17,18,19} },
		{ {21,22,23}, {24,25,26}, {27,28,29} },
		{ {31,32,33}, {34,35,36}, {37,38,39} },
	};

	cout << dataArr[0][0][0] << "\n"
		 << dataArr[0][0][1] << "\n"
		 << dataArr[0][0][2] << "\n"
		 << dataArr[0][1][0] << "\n"
		 << dataArr[0][1][1] << "\n"
		 << dataArr[0][1][2] << "\n"
		 << dataArr[0][2][0] << "\n"
		 << dataArr[0][2][1] << "\n"
		 << dataArr[0][2][2] << "\n"
		 << dataArr[1][0][0] << "\n"
		 << dataArr[1][0][1] << "\n"
		 << dataArr[1][0][2] << "\n"
		 << dataArr[1][1][0] << "\n"
		 << dataArr[1][1][1] << "\n"
		 << dataArr[1][1][2] << "\n"
		 << dataArr[1][2][0] << "\n"
		 << dataArr[1][2][1] << "\n"
		 << dataArr[1][2][2] << "\n"
		 << dataArr[2][0][0] << "\n"
		 << dataArr[2][0][1] << "\n"
		 << dataArr[2][0][2] << "\n"
		 << dataArr[2][1][0] << "\n"
		 << dataArr[2][1][1] << "\n"
		 << dataArr[2][1][2] << "\n"
		 << dataArr[2][2][0] << "\n"
		 << dataArr[2][2][1] << "\n"
		 << dataArr[2][2][2] << endl;

	cout << endl;
	// 多次元配列の要素数について確認
	cout << sizeof(dataArr) / sizeof(int) << endl;			// 27:全データ
	cout << sizeof(dataArr[0]) / sizeof(int) << endl;		//  9:*dataArrと同じ
															// 1行あたりのデータ数
	cout << sizeof(dataArr[0][0]) / sizeof(int) << endl;	//  3:**dataArrと同じ
															// 1行内のブロックあたりのデータ数
	cout << sizeof(dataArr[0][0][0]) / sizeof(int) << endl;	//  1:***dataArrと同じ
															// 1要素


	return 0;
}
