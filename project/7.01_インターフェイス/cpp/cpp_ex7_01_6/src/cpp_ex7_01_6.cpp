//============================================================================
// Name        : cpp_ex7_01_6.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*
 * C++にはインターフェースの機能はない
 * Pythonと同様に多重継承が可能。
 * 抽象クラスを活用してインターフェースを実現すればよい。
 */

class PowerSteering {
public:
	string ss = "PS";

	virtual void Power_Steering( void ) = 0;
};

class Auto {
protected:
	virtual void display( void ) = 0;
};

// 多重継承
class Model1: public Auto, public PowerSteering {
public:
	void Power_Steering( void ) override;
protected:
	void display( void ) override;
};

void Model1::display( void ) {
	cout << Model1::ss << endl;
}

void Model1::Power_Steering( void ) {
	this->display();
}


int main() {

	Model1 m;
	cout << "Model1クラス\n";
	m.Power_Steering();


	return 0;
}
