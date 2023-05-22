//============================================================================
// Name        : cpp_ex6_02_3.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class G {
public:
//	static int x;
	int x = 100;
};
//int G::x = 100;

class H: public G {
public:
	int x = 10;

	void display( void );
};

void H::display( void ) {
	cout << "Hクラスのx：" << x << "\n";
	cout << "Gクラスのx：" << G::x << endl;
}

int main() {

	H h;
	h.display();

	return 0;
}
