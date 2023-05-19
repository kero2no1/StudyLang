//============================================================================
// Name        : cpp_ex5_02_1.cpp
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
};

int main() {

	// Person型のオブジェクトp1を生成
	Person p1;

	// 動的にオブジェクトを生成
	Person *p2 = new Person;
	p2->name = "Kero";
	cout << p2->name << endl;
	// 動的に生成したものは解放を忘れない
	delete p2;

	p1.name = "Keroichi";
	p1.age = 40;
	p1.income = 20000000;

	cout << p1.name + "は\n";
	cout << p1.age << "歳で\n";
	cout << to_string(p1.income) << "円の収入です" << endl;
	return 0;
}
