//============================================================================
// Name        : cpp_ex_1_16_2.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	const int SIZE_R = 3;
	int **dataArr = new int*[SIZE_R];
	int dataArr1[] = {1};
	int dataArr2[] = {2,2};
	int dataArr3[] = {3,3,3};

	dataArr[0] = dataArr1;
	dataArr[1] = dataArr2;
	dataArr[2] = dataArr3;

	// 1次元要素の数
	cout << SIZE_R << "\n";

	cout << "1行目の要素数："
		 << sizeof(dataArr1) / sizeof(int) << "\n"
		 << "データ内容："
		 << dataArr[0][0]
		 << endl;

	cout << "2行目の要素数："
		 << sizeof(dataArr2) / sizeof(int) << "\n"
		 << "データ内容："
		 << dataArr[1][0] << ","
		 << dataArr[1][1] << endl;

	cout << "3行目の要素数："
		 << sizeof(dataArr3) / sizeof(int) << "\n"
		 << "データ内容："
		 << dataArr[2][0] << ","
		 << dataArr[2][1] << ","
		 << dataArr[2][2] << endl;

	delete[] dataArr[0];
	delete[] dataArr[1];
	delete[] dataArr[2];
	delete[] dataArr;

	return 0;
}
