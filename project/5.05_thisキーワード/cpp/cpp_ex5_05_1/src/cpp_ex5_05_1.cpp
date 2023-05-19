//============================================================================
// Name        : cpp_ex5_05_1.cpp
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

	// 委譲コンストラクタという仕組みがある
	// デリゲイトコンストラクタともいう
	Sphere():Sphere(0.0,0.0,0.0,1.0) {
		// 委譲先が先に実行されている
		cout << "デフォルトコンストラクタを実行" << endl;
		this->cx = 5.5;
	}
//	Sphere():cx(0.0),cy(0.0),cz(0.0),radius(1.0){}
	Sphere( double arg_radius ):Sphere(0.0,0.0,0.0,arg_radius){}
	Sphere( double arg_cx, double arg_cy, double arg_cz, double arg_radius ) {
		// thisポインタ
		// 呼び出したクラスオブジェクトへのポインタになっている
		// this でコンストラクタは呼べない
		this->cx = arg_cx;
		this->cy = arg_cy;
		this->cz = arg_cz;
		this->radius = arg_radius;

		cout << "委譲コンストラクタを実行" << endl;
	}
};

// メンバイニシャライザとの併用可能(使わないものを記載する必要がある)
//Sphere::Sphere( double arg_radius ) {
//	cx = 0.0;
//	cy = 0.0;
//	cz = 0.0;
//	radius = arg_radius;
//
//}
//
//Sphere::Sphere( double arg_cx, double arg_cy, double arg_cz, double arg_radius ) {
//	this->cx = arg_cx;
//	this->cy = arg_cy;
//	this->cz = arg_cz;
//	this->radius = arg_radius;
//}

int main() {

	Sphere c1;
	cout << c1.cx << ","
		 << c1.cy << ","
		 << c1.cz << ","
		 << c1.radius << endl;

//	Sphere c2( 9.9 );
//	cout << c2.cx << ","
//		 << c2.cy << ","
//		 << c2.cz << ","
//		 << c2.radius << endl;
//
//	Sphere c3( 1.2, 2.3, 3.4, 5.5 );
//	cout << c3.cx << ","
//		 << c3.cy << ","
//		 << c3.cz << ","
//		 << c3.radius << endl;

	return 0;
}
