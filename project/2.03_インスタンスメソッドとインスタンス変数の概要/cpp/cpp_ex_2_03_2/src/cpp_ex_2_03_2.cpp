//============================================================================
// Name        : cpp_ex_2_03_2.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string s = "11,22,33,44,55";

	// 後ろから検索
	int ep = s.rfind(",");
	cout << s.substr(ep+1) << "\n";

	// 前から検索して、2文字分抽出
	int fp = s.find(",");
	cout << s.substr(fp+1,2) << endl;

	// 同じ動作をする、find_first_of関数もある
	// こちらは文字集合による検索が可能で、
	// 指定したいずれかの文字が最初に出現する位置を返す
	fp = s.find_first_of(",4");		// カンマか4を探す
	cout << fp << endl;


	return 0;
}
