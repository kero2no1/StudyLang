//============================================================================
// Name        : cpp_ex6_08_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Person {
public:
	string m_name;
	int m_age;

	// publicコンストラクタからprivateコンストラクタを実行
	Person( string name, int age ): Person() {
		this->m_name = name;
		this->m_age = age;
	}

protected:
	Person( string name );

private:
	Person(){}
};

Person::Person( string name ) {
	this->m_name = name;
}

class Child: public Person {
public:
	// 基底クラスのprotectedコンストラクタは実行可能
	Child( string name ):Person::Person( name ) {
		this->m_age = 10;
	}

	// 基底クラスのprivateコンストラクタは実行できない：エラー
//	Child():Person::Person(){}

};



int main() {

	Person p1( "John", 30);		// publicコンストラクタ
	cout << p1.m_name << ", " << p1.m_age << endl;

//	Person p;					// privateコンストラクタは実行できない
//	Person p( "Name" );			// protectedコンストラクタは実行できない

	Person *p2 = new Child( "Son" );
	cout << p2->m_name << ", " << p2->m_age << endl;

	return 0;
}
