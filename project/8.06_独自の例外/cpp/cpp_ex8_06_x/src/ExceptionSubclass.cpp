//============================================================================
// Name        : cpp_ex8_06_x.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <random>

using namespace std;

// 独自の例外クラスを作成
class MyErrorA: public exception {
public:
	const char *what() const noexcept(true) {
		return "MyErrorA\n";
	}
};

class MyErrorB: public exception {
public:
	const char *what() const noexcept(true) {
		return "MyErrorB\n";
	}
};

class MyErrorM: public exception {
public:
	const char *what() const noexcept(true) {
		return "MyErrorM\n";
	}
};

class MyErrorN: public exception {
public:
	const char *what() const noexcept(true) {
		return "MyErrorN\n";
	}
};

static void a() noexcept(false);
static void b() noexcept(false);
static void c() noexcept(false);

int main() {

	a();

	return 0;
}

static void a() {

	try {
		try {
			throw MyErrorM();
//			throw MyErrorN();
		}
		catch( MyErrorN &e ) {
			cout << "a: Inner catch " << e.what() << endl;
		}
		b();
		throw MyErrorM();
	}
	catch( MyErrorM &e ) {
		cout << "a: Outer catch " << e.what() << endl;
	}
	catch( std::exception &e ) {

	}
}

static void b() {

	try {
		c();
	}
	catch( MyErrorB &e ) {
		cout << "b: MyErrorB " << e.what() << endl;
	}
}

static void c() {

	std::random_device rnd;
	int r = rnd() % 20 + 1;
	cout << r << endl;
	if( r % 2 == 0 ) {
		throw MyErrorA();
	}
	else {
		throw MyErrorB();
	}

}
