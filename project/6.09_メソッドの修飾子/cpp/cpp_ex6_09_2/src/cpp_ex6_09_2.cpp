//============================================================================
// Name        : cpp_ex6_09_2.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Vehicle {
public:
	int mv = 5;
	// 純粋仮想関数
	virtual int numWheels() = 0;

	// constメンバ関数 関数内でメンバ変数の変更ができなくなる
	virtual int sample() const {
//		this->mv = 10;			// 直接変更もダメ
//		this->sample2( 10 );	// 関数経由もダメ
		return 0;
	}

	void sample2( int v ) {
		this->mv = v;
	}

};

class Truck;	// 前方宣言という
class Car: public Vehicle {
public:
	int mw;

	Car(){}

	Car( int w ) {
		this->mw = w;
	}

	// overrideは記述しなくてもよい
	// 書いておくとミスを低減することができる
	int numWheels() override {
		return 4;
	}

	// オーバーライドのつもりで override がないと
	// シグネチャなどをミスしてしまっても定義できてしまう
	int numWheels( int i ) {
		return i;
	}

	// override をつけておくとエラーになる
	// ↓constメンバ関数でないため正しくない
//	int sample() override {
//		return 10;
//	}

	// フレンド関数：実装は定義の外でやる
	friend void ffunc( Car c, Truck t );

private:
	int mx = 100;
	void pFunc( int x ) {
		this->mx = x;
		cout << this->mx << endl;
	}
};

class Truck: public Vehicle {
public:
	int my;

	Truck() {}

	// explicit はコピー初期化や暗黙の型変換を禁止する
	explicit Truck( int y ) {
		this->my = y;
	}

	int numWheels() override {
		return 8;
	}

	// フレンド関数：実装は定義の外でやる
	friend void ffunc( Car c, Truck t );

private:
	int mz = 200;
	void pFunc( int z ) {
		this->mz = z;
		cout << this->mz << endl;
	}
};

// フレンド関数はクラスのprivateメンバにもアクセスできる
// 使いどころがよくわからんなぁ。。。
void ffunc( Car c, Truck t ) {
	cout << c.mx << endl;
	cout << t.mz << endl;
}

int main() {

	Car c1;
	Truck t1;

	cout << "Car:" << c1.numWheels() << endl;
	cout << "Truck:" << t1.numWheels() << endl;

	Car c2 = 20;	// コピー初期化という
	cout << c2.mv << endl;

	// explicit が付いているためエラーになる
//	Truck t2 = 20;
//	cout << t2.mx << endl;

	return 0;
}
