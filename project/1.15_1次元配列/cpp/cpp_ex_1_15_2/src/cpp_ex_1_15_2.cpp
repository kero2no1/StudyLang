//============================================================================
// Name        : cpp_ex_1_15_2.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


// C++では、const付けると「定数」として扱われる
const char arrSize = 1;
int arrData2[ arrSize ];

// 要素の指定は定数式でないといけない
// ↓エラーになる
// char arrSize = 1;
// int arrData2[ arrSize ];

// new演算子を使うと動的確保が可能になる
// ※ファイル内変数としてやることではない。
char arrSize2 = 1;
int *arrData3 = new int[arrSize2];

int main() {
	char arrData[4];	// 宣言＋領域割当
	int arrData5[] = { 51, 52, 53 };	// 宣言＋割当＋初期化

	arrData[0] = 65;
	arrData[1] = 66;
	arrData[2] = 67;
	arrData[3] = 68;

	arrData2[0] = 0;
	arrData3[0] = 3;

	// コンパイラのご厚意でエラーは出ない、、、
	// 動的確保はnew演算子を使うこと。
	char arrSize4 = 10;
//	int arrData4[ arrSize4 ];
	int *arrData4 = new int[ arrSize4 ];

	arrData4[0] = 10;

	cout << arrData[0] << "\n";
	cout << arrData[1] << "\n";
	cout << arrData[2] << "\n";
	cout << arrData[3] << "\n";
	cout << arrData2[0] << "\n";
	cout << arrData3[0] << "\n";
	cout << arrData4[0] << "\n";
	cout << arrData5[0] << endl;

	// 動的確保したメモリは解放する
	delete[] arrData3;
	delete[] arrData4;


	return 0;
}
