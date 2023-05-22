//============================================================================
// Name        : cpp_ex6_05_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class S2 {
public:
	int ms2;
	S2() {
		cout << "S2 default Constructor" << endl;
	}

	S2( int s2 ) {
		this->ms2 = s2;
		cout << "S2 Constructor" << endl;
	}

	~S2() {
		cout << "S2 Destructor" << endl;
	}
};

class T2: public S2 {
public:
	int mt2;
	T2() {
		cout << "T2 default Constructor" << endl;
	}

	// 親クラスの引数付きコンストラクタを使いたい場合は
	// 自コンストラクタの後ろに[:]を付けて追加する
	// 指定しない場合、
	// 親クラスの同じシグネチャのコンストラクタを実行する。
	// ない場合はエラーになってしまう。
	T2( int s2, int t2 ):S2( s2 ) {
		this->mt2 = t2;
		cout << "T2 Constructor" << endl;
	}

	~T2() {
		cout << "T2 Destructor" << endl;
	}
};

class U2: public T2 {
public:
	int mu2;
	// 自動的に親クラスのデフォルトコンストラクタを実行する
	U2() {
		cout << "U2 default Constructor" << endl;
	}

	U2( int s2, int t2, int u2 ):T2( s2, t2 ) {
		this->mu2 = u2;
		cout << "U2 Constructor" << endl;
	}

	~U2() {
		cout << "U2 Destructor" << endl;
	}
};

int main() {

	U2 u2( 1, 2, 3 );

	cout << "u2.s2 = " << u2.ms2 << "\n";
	cout << "u2.t2 = " << u2.mt2 << "\n";
	cout << "u2.u2 = " << u2.mu2 << "\n";

	cout << endl;

	U2 uu;
	cout << &uu.ms2 << endl;

	return 0;
}
