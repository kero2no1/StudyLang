//============================================================================
// Name        : cpp_ex6_ex_3.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <array>
using namespace std;

class Monster {
public:
	virtual void display() = 0;
};

class Vampire: public Monster {
public:
	void display() override {
		cout << "Vampire" << endl;
	}
};

class Werewolf: public Monster {
public:
	void display() override {
		cout << "Werewolf" << endl;
	}
};

class Zombie: public Monster {
public:
	void display() override {
		cout << "Zombie" << endl;
	}
};


int main() {

	Monster *mon[6];

	for( int idx = 0; idx < 6; idx += 3 ) {
		mon[ idx + 0 ] = new Vampire;
		mon[ idx + 1 ] = new Werewolf;
		mon[ idx + 2 ] = new Zombie;
	}
	// auto は型推論の機能 イテレータと一緒に使われることが多い
	for( auto m: mon ) {
		m->display();
	}

	return 0;
}
