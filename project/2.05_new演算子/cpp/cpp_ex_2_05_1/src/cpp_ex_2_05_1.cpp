//============================================================================
// Name        : cpp_ex_2_05_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// 動的にメモリ確保(インスタンス化)
	int **array = new int*[2];

	// インスタンスは動的に確保されたメモリを指し示している→ポインタ
	array[0] = new int(2);		// array[0]はint型ポインタで中身は2
	array[1] = new int[2];		// array[1]はint型配列のポインタ

	array[1][0] = 5;
	array[1][1] = 10;


	cout << array[0][0] << "\n"
		 << *array[0] << "\n"
		 << array[1][1] << endl;

	delete[] array[0];
	delete[] array[1];
	delete[] array;

	return 0;
}
