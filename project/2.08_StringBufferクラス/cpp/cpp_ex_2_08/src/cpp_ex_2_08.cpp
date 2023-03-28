//============================================================================
// Name        : cpp_ex_2_08.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string s1, s2("abc");
	cout << "s1文字数：" << s1.length() << " / "
		 << "アドレス：" << &s1
		 << " / キャパ：" << s1.capacity() << "\n";	// デフォルト16文字

	cout << "s2文字数：" << s2.length() << " / "
		 << "アドレス：" << &s2
		 << " / キャパ：" << s2.capacity() << "\n";	// 初期文字入れても16文字

	s1.append("defg");
	cout << "s1内容：" << s1 << "\n";
	cout << "s1文字数：" << s1.length() << " / "
		 << "アドレス：" << &s1 << "\n";

	s1.insert(0, s2);
	cout << "s1内容：" << s1 << "\n";
	cout << "s1文字数：" << s1.length() << " / "
		 << "アドレス：" << &s1 << "\n";

	s1.append("hijk");
	cout << "s1内容：" << s1 << "\n";
	cout << "s1文字数：" << s1.length() << " / "
		 << "アドレス：" << &s1 << "\n";

	s1.erase(4,3);	// 指定要素から指定文字数分削除

	// キャパは勝手に増える
	// s1とs2のアドレス差は32byte、どういう仕組みなんだろう？
	s2.append("123456789012345678901234567890");
	cout << "s2文字数：" << s2.length() << " / "
		 << "アドレス：" << &s2
		 << " / キャパ：" << s2.capacity() << "\n";
	cout << s1 << "\n";
	cout << s2 << "\n\n";


	return 0;
}
