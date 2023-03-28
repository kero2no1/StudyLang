//============================================================================
// Name        : cpp_ex_2_02_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>		// math.hをラップしたもの
						// std名前空間内に所属するようになる
#include <iomanip>		// 表示桁設定用(setprecision())
using namespace std;

int main() {

	// 静的メソッドでも静的変数でもない。
	// グローバルスコープで使えることを考えると同じか？
	cout << "23.45の平方根は：";
	cout << std::setprecision(16) << sqrt(23.45) << endl;
	cout << "円周率：" << M_PI << endl;

	return 0;
}
