//============================================================================
// Name        : cpp_ex6_07_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// 変数に対する修飾子ではないけど。。。
// アクセス指定子 public/protected/privateによってアクセス制御が可能
class L {
// アクセス指定子は任意の順番で何回でも使用可能
public:
	// 外部からでも使用可能
	const int x = 5;

	L();

protected:
	// 自クラスと派生クラスから使用可能(フレンドも)
	int z;

private:
	// 自クラスとフレンドから使用可能
	const int y = 10;

};

L::L( void ) {
	// 自クラス内なのでprivate変数 y は見える
	this->z = this->x + this->y;
}

// 継承の仕方でアクセス制御も変わる
class M1: public L {
	// public指定子での宣言
	// public		:派生クラス内でpublic
	// protected	:派生クラス内でprotected
	// private		:派生クラス内でアクセス不可

public:
	void display();
};

class M2: protected L {
	// protected指定子での宣言
	// public		:派生クラス内でprotected
	// protected	:派生クラス内でprotected
	// private		:派生クラス内でアクセス不可

public:
	void display();
};

class M3: private L {
	// private指定子での宣言
	// public		:派生クラス内でprivate
	// protected	:派生クラス内でprivate
	// private		:派生クラス内でアクセス不可

public:
	void display();
};

void M1::display() {
	// protectedは派生クラスから使用可能
	cout << endl;
	cout << "public継承:基底クラスpublic変数 " << this->x << "\n";
	cout << "public継承:基底クラスprivate変数 " << "(見えない)" << "\n";
	cout << "public継承:基底クラスprotected変数 " << this->z << endl;
}

void M2::display() {
	// protectedは派生クラスから使用可能
	cout << endl;
	cout << "protected継承:基底クラスpublic変数 " << this->x << "\n";
	cout << "protected継承:基底クラスprivate変数 " << "(見えない)" << "\n";
	cout << "protected継承:基底クラスprotected変数 " << this->z << endl;
}


void M3::display() {
	// protectedは派生クラスから使用可能
	cout << endl;
	cout << "private継承:基底クラスpublic変数 " << this->x << "\n";
	cout << "private継承:基底クラスprivate変数 " << "(見えない)" << "\n";
	cout << "private継承:基底クラスprotected変数 " << this->z << endl;
}

int main() {

	L ll;
	cout << ll.x << endl;
//	cout << ll.y << endl;	// private は外部から見えない
//	cout << ll.z << endl;	// protected も外部から見えない

	M1 m1;
	cout << m1.x << endl;
//	cout << m1.y << endl;	// private は外部から見えない
//	cout << m1.z << endl;	// protected も外部から見えない
	m1.display();

	M2 m2;
//	cout << m2.x << end;	// public変数もprotected継承すると外部から見えない
//	cout << m2.y << endl;
//	cout << m2.z << endl;
	m2.display();

	M3 m3;
//	cout << m3.x << end;	// public変数もprivate継承すると外部から見えない
//	cout << m3.y << endl;
//	cout << m3.z << endl;
	m3.display();

	return 0;
}
