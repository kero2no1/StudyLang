//============================================================================
// Name        : cpp_ex5_03_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Person {
public:
	string name;
	int age;
	float income;

	Person(string arg_name, int arg_age, float arg_income );
};

Person::Person( string arg_name, int arg_age, float arg_income ){
	name = arg_name;
	age = arg_age;
	income = arg_income;
}



int main() {

	// Person型のオブジェクトp1を生成
//	Person p1;
//
//	p1.name = "Keroichi";
//	p1.age = 40;
//	p1.income = 20000000;

	Person p1("Keroichi", 40, 20000000);

	cout << p1.name + "は\n";
	cout << p1.age << "歳で\n";
	cout << to_string(p1.income) << "円の収入です" << endl;
	return 0;
}

