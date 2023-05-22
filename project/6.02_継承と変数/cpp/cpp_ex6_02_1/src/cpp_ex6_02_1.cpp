//============================================================================
// Name        : cpp_ex6_02_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class GrandParent {
public:
	int i;
	double d;
};

// 継承
// publicを入れないと継承先でメンバを参照できない(デフォルトprivate)
class Parent : public GrandParent {
public:
	float f;
	string d;	// 親はdouble型
};

class Child : public Parent {
public:
	string s;
};

class M {
public:
	float ff;
	string ss;
};

class N : public M {
public:
	double dd;
};


int main() {

	// 概ねJavaと動きは同じ。
	Parent *p;			// 親は子を受け入れられる
	p = new Child;
	p = new Parent;

	Child *c;			// 子は親を受け入れられない
	c = new Child;
//	c = new Parent;

	c->i = 10;			// 子は継承元の変数をすべて参照できる
	c->f = 2.3f;
	c->s = "4567";
	c->d = "";			// GrandParentのdouble型dを上書きしてstring型になっている
	cout << typeid(c->d).name() << endl;	// basic_string

	N n;
	n.dd = 1.1f;
	n.ff = 2.2f;
	n.ss = "3.3";
	cout << n.dd << "\n";
	cout << n.ff << "\n";
	cout << n.ss << endl;

	return 0;
}
