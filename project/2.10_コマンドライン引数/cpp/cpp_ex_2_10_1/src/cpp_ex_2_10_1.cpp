//============================================================================
// Name        : cpp_ex_2_10_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// コマンドライン入力「2.2 3.3 4.4,5.5」
int main(int argc, char *argv[]) {

	/* 引数は文字列として取り込まれる */
	cout << argc << "\n"
		 << argv[0] << "\n"		// 実行ファイル名が入る
		 << argv[1] << "\n"
		 << argv[2] << "\n"
		 << argv[3] << endl;

	cout << "コマンドライン入力の積："
		 << stof(argv[1]) * stof(argv[2]) << endl;
	return 0;
}
