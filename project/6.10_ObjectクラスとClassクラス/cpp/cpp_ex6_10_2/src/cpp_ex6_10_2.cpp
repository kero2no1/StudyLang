//============================================================================
// Name        : cpp_ex6_10_2.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class MyClass {
	virtual void test(){}
};

class MyClassSub: public MyClass {
	void test() override {}
};

int main() {

	// スーパークラスを取得するようなものはないのかな？
	float *tmp;
	const std::type_info &info = typeid( tmp );
	const char* typeName = info.name();
	cout << typeName << endl;

	size_t typeHash = info.hash_code();
	cout << typeHash << endl;

	MyClass *mc[2];
	mc[0] = new MyClass;
	mc[1] = new MyClassSub;
	const std::type_info &info2 = typeid( mc[0] );
	const std::type_info &info3 = typeid( mc[1] );
	const std::type_info &info4 = typeid( *mc[0] );
	const std::type_info &info5 = typeid( *mc[1] );
	cout << info2.name() << endl;
	cout << info3.name() << endl;
	cout << info4.name() << endl;
	cout << info5.name() << endl;

	return 0;
}
