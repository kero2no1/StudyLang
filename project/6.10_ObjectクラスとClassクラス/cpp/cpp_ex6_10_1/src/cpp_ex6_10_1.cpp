//============================================================================
// Name        : cpp_ex6_10_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// toString に該当するものはなさそう
// 演算子をオーバーロードできる
// 算術演算や添字演算子[]などもオーバーロードできる
class TestClass {
private:
	int num;

public:
	// ＋演算子
	TestClass operator +( TestClass r ) {
		TestClass tc;
		tc.num = this->num + r.num;
		return tc;
	}
	// －演算子
	TestClass operator -( TestClass r ) {
		TestClass tc;
		tc.num = this->num - r.num;
		return tc;
	}

	TestClass( int x = 0 ):num(x){}
	int get() {
		return num;
	}
	void set( int x ) {
		num = x;
	}
};

int main() {

	TestClass tc1(10), tc2(20);

	TestClass tc3 = tc1 + tc2;

	std::cout << tc3.get() << std::endl;

	return 0;
}
