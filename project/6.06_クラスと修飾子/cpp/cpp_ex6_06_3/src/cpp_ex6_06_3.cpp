//============================================================================
// Name        : cpp_ex6_06_3.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// クラスに対する修飾子はなさそう
// 抽象クラスを使うためには、純粋仮想関数という機能を使う。

// 抽象クラス＝純粋仮想関数を含むクラス
class Shape {
public:
	// 純粋仮想関数：仮想関数定義の最後に=0;を入れる
	// 派生クラス側にオーバーライドすることを強制する
	virtual void display() = 0;
};

class Circle: public Shape {
public:
	void display() override {
		cout << "Circle" << endl;
	}
};

class Rectangle: public Shape {
public:
	void display() override {
		cout << "Rectangle" << endl;
	}
};

class Triangle: public Shape {
public:
	void display() override {
		cout << "Triangle" << endl;
	}
};


int main() {

	Shape *s = new Circle;
	s->display();

	s = new Rectangle;
	s->display();

	s = new Triangle;
	s->display();

	return 0;
}
