//============================================================================
// Name        : cpp_ex6_03_2.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Bond {
public:
	// 動的ディスパッチを仮想関数という仕組みで実現する
	// 仮想関数は派生クラスで再定義が可能になる
	// Javaはすべてのメソッドが仮想関数だがC++では宣言が必要
	virtual void display() {
		cout << "Bond" << endl;
	}
};

class ConvertibleBond: public Bond {
public:
	void display() {
		cout << "ConvertibleBond" << endl;
	}
};

int main() {

	Bond bd1;
	bd1.display();

	ConvertibleBond cb1;
	cb1.display();

	Bond *bd[6];
	for( int idx = 0; idx < 6; idx++ ) {
		if ( (idx % 2) == 0 ) {
			// 偶数はBondオブジェクトで初期化
			bd[ idx ] = new Bond;
		}
		else {
			// 奇数はConvertibleBondオブジェクトで初期化
			bd[ idx ] = new ConvertibleBond;
		}

		// 仮想関数になっているので動的にメソッドが切り替わっている
		bd[ idx ]->display();
	}


	return 0;
}
