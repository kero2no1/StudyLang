//============================================================================
// Name        : cpp_ex5_02_2.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Sphere {
public:
	double radius;
	double *cp;
};

int main() {

	Sphere cube;
	cube.radius = 5.5;
	cube.cp = new double[2];
	cube.cp[0] = 1.2;
	cube.cp[1] = 3.4;

	cout << "半径：" << cube.radius << "\n";
	cout << "中心座標：" << cube.cp[0] << "," << cube.cp[1] << endl;

	delete cube.cp;
	return 0;
}
