//============================================================================
// Name        : cpp_ex7_ex_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Robot {
public:
	virtual void display() {
		cout << this->toString() << endl;
	}

private:
	virtual std::string toString() {
		std::string s = typeid(*this).name();
		s.insert( 0, "My Class is " );
		s.append( ":" );
		return s;
	}
};

class Locomotion {
public:
	virtual void forward() = 0;
	virtual void reverse() = 0;
	virtual void stop() = 0;
};

class Sound {
public:
	virtual void beep() = 0;
};

class RobotA: public Robot {

};

class RobotB: public Robot, public Locomotion {
public:
	void forward( void ) override {}
	void reverse( void ) override {}
	void stop( void ) override {
		cout << "RobotB-stop" << endl;
	}
};

class RobotC: public Robot, public Locomotion, public Sound {
public:
	void forward( void ) override {}
	void reverse( void ) override {}
	void stop( void ) override {
		cout << "RobotC-stop" << endl;
	}
	void beep( void ) override {
		cout << "RobotC-beep" << endl;
	}
};

class RobotA1: public RobotA, public Sound {
public:
	void beep( void ) override {
		cout << "RobotA1-beep" << endl;
	}
};

class RobotB1: public RobotB, public Sound {
public:
	void beep( void ) override {
		cout << "RobotB1-beep" << endl;
	}
};

class RobotB2: public RobotB {
	virtual ~RobotB2() = default;
};

class RobotC1: public RobotC {

};

template <class T1, class T2>
bool instanceof( T1 obj1, T2 obj2 ) {

	T2 *ii = dynamic_cast<T2 *>( &obj1 );
	if( ii == nullptr ) return false;

	return true;
}

int main() {

	Robot *objs[] = {
			new RobotA,
			new RobotB,
			new RobotC,
			new RobotA1,
			new RobotB1,
			new RobotB2,
			new RobotC1,
	};

	for( auto robo: objs ) {
		robo->display();
		// 動的キャストの結果を得る
		Sound *chk_s = dynamic_cast<Sound *>( robo );
		Locomotion *chk_l = dynamic_cast<Locomotion *>( robo );
		// キャスト結果に対してメンバ関数の実施を指示する
		if( chk_s != nullptr ) chk_s->beep();
		if( chk_l != nullptr ) chk_l->stop();
	}

	return 0;
}
