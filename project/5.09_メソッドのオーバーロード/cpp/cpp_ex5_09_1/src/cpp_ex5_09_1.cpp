//============================================================================
// Name        : cpp_ex5_09_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Sphere {
public:
	// インスタンス変数
	double cx, cy, cz, radius;

	// コンストラクタ
	Sphere( double arg_cx, double arg_cy, double arg_cz, double arg_radius )
				: cx(arg_cx),cy(arg_cy),cz(arg_cz),radius(arg_radius){}

	Sphere():Sphere( 0.0, 0.0, 0.0, 1.0 ){}
	Sphere( double arg_radius ):Sphere( 0.0, 0.0, 0.0, arg_radius ){}

	// インスタンスメソッド
	void move( double arg_cx, double arg_cy, double arg_cz );

	// メソッドのオーバーロード
	void move( double arg_cx );
	void move( double arg_cx, double arg_cy );


	void scale( double arg_radius );

};

void Sphere::move( double arg_cx, double arg_cy, double arg_cz ) {
	this->cx += arg_cx;
	this->cy += arg_cy;
	this->cz += arg_cz;
}

// Javaと考え方は同じでよさそう
void Sphere::move( double arg_cx ) {
	this->move( arg_cx, 0, 0 );
}

void Sphere::move( double arg_cx, double arg_cy ) {
	this->move( arg_cx, arg_cy, 0 );
}

void Sphere::scale( double arg_radius ) {
	this->radius = arg_radius;
}

int main() {

	Sphere c1;
	cout << c1.cx << "," <<
			c1.cy << "," <<
			c1.cz << "," <<
			c1.radius << endl;

	c1.move( 1 );
	c1.move( -4, 3 );
	c1.move( 2, -2, 2 );
	cout << c1.cx << "," <<
			c1.cy << "," <<
			c1.cz << "," <<
			c1.radius << endl;

	c1.scale( 3.3 );
	cout << c1.cx << "," <<
			c1.cy << "," <<
			c1.cz << "," <<
			c1.radius << endl;

	return 0;
}
