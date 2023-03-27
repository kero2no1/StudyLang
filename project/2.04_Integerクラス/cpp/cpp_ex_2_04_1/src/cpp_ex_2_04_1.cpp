//============================================================================
// Name        : cpp_ex_2_04_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
using namespace std;

int main() {
	// Pythonと同様かな？
	// ラッパークラスはなさそう
	string s = "31";

	// string型からの数値変換はstoi関数
	// 似たもののatoi関数はstringを引数にとれない
	int v = stoi(s);
	int w = atoi(s.c_str());	// stringからchar*へ変換

	cout << v+10 << endl;	// 数値だから計算できる
	cout << w+20 << endl;

	// 基数変換の仕組みもpythonと同様
	cout << stoi(s, nullptr, 16) << endl;	// 0x31 を10進数で

	// stringstream というのを使えばn進文字列に変換可能
	stringstream ss;
	ss << std::hex << 16;	// streamをhexに切り替えて16(10進)を設定
	cout << ss.str();		// 文字列として出力

	return 0;
}
