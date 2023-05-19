//============================================================================
// Name        : cpp_ex5_04_2.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Sphere {
public:
	double cx;
	double cy;
	double cz;
	double radius;

	Sphere():cx(0.0),cy(0.0),cz(0.0),radius(1.0){}
	Sphere( double arg_radius );
	Sphere( double arg_cx, double arg_cy, double arg_cz, double arg_radius );

};

// メンバイニシャライザとの併用可能(使わないものを記載する必要がある)
Sphere::Sphere( double arg_radius ) {
	cx = 0.0;
	cy = 0.0;
	cz = 0.0;
	radius = arg_radius;
}

Sphere::Sphere( double arg_cx, double arg_cy, double arg_cz, double arg_radius ) {
	cx = arg_cx;
	cy = arg_cy;
	cz = arg_cz;
	radius = arg_radius;
}

int main() {

	Sphere c1;
	cout << c1.cx << ","
		 << c1.cy << ","
		 << c1.cz << ","
		 << c1.radius << endl;

	Sphere c2( 9.9 );
	cout << c2.cx << ","
		 << c2.cy << ","
		 << c2.cz << ","
		 << c2.radius << endl;

	Sphere c3( 1.2, 2.3, 3.4, 5.5 );
	cout << c3.cx << ","
		 << c3.cy << ","
		 << c3.cz << ","
		 << c3.radius << endl;

	return 0;
}
