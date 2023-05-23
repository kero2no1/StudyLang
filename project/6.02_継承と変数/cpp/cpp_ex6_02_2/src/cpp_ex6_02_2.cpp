//============================================================================
// Name        : cpp_ex6_02_2.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class S {
public:
	int x;
};

class T: public S {
public:
	string x;
};

int main() {

	S s;
	T t;

	s.x = stoi("123");
	t.x = "123";

	cout << s.x << " , " << typeid(s.x).name() << "\n";
	cout << t.x << " , " << typeid(t.x).name() << endl;

	return 0;
}
