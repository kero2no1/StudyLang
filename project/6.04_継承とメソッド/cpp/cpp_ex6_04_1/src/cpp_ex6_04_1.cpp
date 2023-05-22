//============================================================================
// Name        : cpp_ex6_04_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <array>
using namespace std;

class I2 {
public:
	// 固定長配列を戻り値とする場合
	// 可変長配列の場合はvectorを使う
	virtual std::array<string,2> getDescpription() {
		std::array<string, 2> ss;

		ss[0] = "このクラスは………I2";
		ss[1] = "スーパークラスは…なし";

		return ss;
	}
};

class J2: public I2 {
public:
	virtual std::array<string,2> getDescpription() {
		std::array<string, 2> ss;

		ss[0] = "このクラスは………J2";
		ss[1] = "スーパークラスは…I2";

		return ss;
	}
};

class K2: public J2 {
public:
	virtual std::array<string,2> getDescpription() {
		std::array<string, 2> ss;

		ss[0] = "このクラスは………K2";
		ss[1] = "スーパークラスは…J2";

		return ss;
	}
};


static void display( std::array<string,2> msgs ) {
	// 範囲for文
	for( string &msg : msgs ) {
		cout << msg << "\n";
	}

	// イテレータを使ったfor文
//	for( auto msg = msgs.begin(); msg != msgs.end(); msg++ ) {
//		cout << *msg << "\n";
//	}

}

int main() {

	I2 *m[3];
	m[0] = new I2;
	m[1] = new J2;
	m[2] = new K2;

	display( m[0]->getDescpription() );
	display( m[1]->getDescpription() );
	display( m[2]->getDescpription() );

	return 0;
}
