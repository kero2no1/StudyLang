//============================================================================
// Name        : cpp_ex_2_10_2.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

// コマンドライン入力「5.5」
int main(int argc, char *argv[]) {
	cout << argc << "\n"
		 << argv[0] << "\n"		// 実行ファイル名が入る
		 << argv[1] << "\n" << endl;

	// 面積 = π * r^2
	double s = M_PI * pow(stod(argv[1]), 2.0);
	cout << s << "\n" << endl;

	// 【参考】コンソール入力方法
	string in;
	cin >> in;
	cout << "入力情報は：" << in << endl;


	return 0;
}
