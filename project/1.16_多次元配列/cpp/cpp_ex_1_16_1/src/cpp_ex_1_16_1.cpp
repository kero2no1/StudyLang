//============================================================================
// Name        : cpp_ex_1_16_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// C++の多次元配列は、1番目の要素数以外は省略できない
	// ↓はエラーになる
//	float dataArr[][] = {
//		{ -56.7f },
//		{ 500.1f, 70.70f },
//		{ 100.9f, 0.5f, 20.20f },
//	};

	float dataArr[][3] = {
		{ -56.7f },
		{ 500.1f, 70.70f },
		{ 100.9f, 0.5f, 20.20f },
	};

	// 多次元配列は一括で動的確保できない
	const int size_r = 2, size_c = 2;
//	float **dataArr2 = new float[ size_r ][ size_c ];

	//1次元ずつ確保していけばOK
	float **dataArr2 = new float*[size_r];
	dataArr2[0] = new float[size_c];
	dataArr2[1] = new float[size_c];

	dataArr2[0][0] = -56.7f;
//	dataArr2[0][1]
	dataArr2[1][0] = 12.3f;
	dataArr2[1][1] = -4.56f;

	// 「配列の配列」となるので、各配列の要素数が違ってもOK
	// それぞれが動的確保なので、メモリは連続しない
	float **dataArr3 = new float*[ size_r ];
	dataArr3[0] = new float[1];
	dataArr3[1] = new float[2];

	dataArr3[0][0] = 1.23f;
//	dataArr2[0][1]
	dataArr3[1][0] = -4.56f;
	dataArr3[1][1] = 78.9f;

	// 動的確保でないので、メモリは連続して確保されている
	float dataArr4[2][2];

	cout << dataArr[0][0] << "\n"
		 << dataArr[0][1] << "\n"	// 領域は割当たっている
		 << dataArr[0][2] << "\n"	// 領域は割当たっている
		 << dataArr[1][0] << "\n"
		 << dataArr[1][1] << "\n"
		 << dataArr[1][2] << "\n"	// 領域は割当たっている
		 << dataArr[2][0] << "\n"
		 << dataArr[2][1] << "\n"
		 << dataArr[2][2] << endl;

	cout << "\n";

	cout << dataArr2[0][0] << "\n"
		 << dataArr2[0][1] << "\n"	// 領域は割当たっている(未初期化)
		 << dataArr2[1][0] << "\n"
		 << dataArr2[1][1] << endl;

	cout << "\n";

	// アドレス確認用
	cout << &dataArr3[0][0] << "\n"
		 << &dataArr3[0][1] << "\n"
		 << &dataArr3[1][0] << "\n"
		 << &dataArr3[1][1] << endl;

	cout << "\n";

	cout << &dataArr4[0][0] << "\n"
		 << &dataArr4[0][1] << "\n"	//
		 << &dataArr4[1][0] << "\n"
		 << &dataArr4[1][1] << endl;

	// メモリの解放はそれぞれに対して実施が必要
	delete[] dataArr2;
	delete[] dataArr2[0];
	delete[] dataArr2[1];
	delete[] dataArr3;
	delete[] dataArr3[0];
	delete[] dataArr3[1];


	return 0;
}
