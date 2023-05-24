//============================================================================
// Name        : cpp_ex7_04_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class I1 {
public:
	// defaultは暗黙的な定義を明示的にする意味で使われる
	virtual ~I1() = default;
};

class I2 {
public:
	virtual ~I2() = default;

};

class I3: public I1, public I2 {

};

class I4 {
public:
	virtual ~I4() = default;

};

class X: public I3 {

};

class W: public X, public I4 {

};

// 関数テンプレートという機能、クラステンプレートもある
template <class T1, class T2>
bool instanceof( T1 obj1, T2 obj2 ) {

	T2 *ii = dynamic_cast<T2 *>( &obj1 );
	if( ii == nullptr ) return false;

	return true;
}

int main() {

	W w;
	X x;

	// 自作した関数テンプレートは、
	// 抽象クラスのチェックができないので汎用性はない
	cout << instanceof( w, *(new I1) );
	cout << instanceof( w, *(new I2) );
	cout << instanceof( w, *(new I3) );
	cout << instanceof( w, *(new I4) );
	cout << instanceof( w, *(new X) ) << endl;;

	cout << instanceof( x, *(new I1) );
	cout << instanceof( x, *(new I2) );
	cout << instanceof( x, *(new I3) );
	cout << instanceof( x, *(new I4) ) << endl;

	return 0;
}
