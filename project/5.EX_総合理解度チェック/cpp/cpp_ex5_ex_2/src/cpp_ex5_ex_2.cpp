//============================================================================
// Name        : cpp_ex5_ex_2.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Trapezoid {
public:
	double b1, b2, h;

	Trapezoid( double arg_b1, double arg_b2, double arg_h ):
				b1(arg_b1), b2(arg_b2), h(arg_h){}

	double getArea() {
		return ( this->b1 + this->b2 ) * this->h * 0.5;
	}
};

int main() {

	Trapezoid *tp[3];

	tp[0] = new Trapezoid( 2, 3, 4 );
	tp[1] = new Trapezoid( 3, 2, 2 );
	tp[2] = new Trapezoid( 4.4, 5.5, 6.6 );

	cout << tp[0]->getArea() << "\n";
	cout << tp[1]->getArea() << "\n";
	cout << tp[2]->getArea() << endl;

	return 0;
}
