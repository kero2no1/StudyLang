//============================================================================
// Name        : cpp_ex6_ex_4.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// 純粋仮想関数がないので抽象クラスにはならない
class Widget {
public:
	int weight = 0;
	string color;
};

class WidgetA: public Widget {
public:
	WidgetA() {
		this->weight = 4;
		this->color = "Red";
	}
};

class WidgetB: public Widget {
public:
	string color = "Blue";
	WidgetB() {
		this->weight = 1;
		Widget::color = "Pink";
	}
};

class WidgetC: public Widget {
public:
	WidgetC() {
		Widget::weight = 5;
		this->color = "Yellow";
	}
};

class WidgetD: public Widget {
public:
	WidgetD() {
		Widget::weight = 17;
		Widget::color = "Green";
	}
};


int main() {

	Widget *ws[6] = { new WidgetA,
					  new WidgetB,
					  new WidgetC,
					  new WidgetD,
					  new WidgetA,
					  new WidgetB,
					};

	WidgetB *ws2 = new WidgetB;

	int sum = 0;
	for( auto w: ws ) {
		cout << w->color << endl;
		sum += w->weight;
	}
	cout << sum << endl;

	cout << ws2->color << endl;			// Blue
	cout << ws2->Widget::color << endl;	// Pink


	return 0;
}
