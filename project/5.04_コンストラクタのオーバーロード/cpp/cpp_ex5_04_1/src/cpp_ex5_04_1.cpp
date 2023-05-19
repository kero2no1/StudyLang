//============================================================================
// Name        : cpp_ex5_04_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Circle {
public:
	double cx;
	double cy;
	double radius;

	// コンストラクタのオーバーロード
	Circle( double arg_radius ):
					cx(0.0),cy(0.0),radius(arg_radius){}
	Circle( double arg_cx, double arg_cy, double arg_radius ):
					cx(arg_cx),cy(arg_cy),radius(arg_radius){}
	Circle( string arg_radius ):
					cx(1.1),cy(2.2),radius(stod(arg_radius)){}
};


int main() {

	// シグネチャに合わせてコンストラクタが選択される
	Circle c1( 5.5 );
	cout << c1.cx << "," << c1.cy << "," << c1.radius << endl;

	Circle c2( 1.2, 3.4, 5.5 );
	cout << c2.cx << "," << c2.cy << "," << c2.radius << endl;

	Circle c3( "3.3" );
	cout << c3.cx << "," << c3.cy << "," << c3.radius << endl;

	return 0;
}
