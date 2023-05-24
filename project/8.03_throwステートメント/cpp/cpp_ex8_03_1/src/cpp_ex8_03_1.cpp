//============================================================================
// Name        : cpp_ex8_03_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

static void a();
static void b();
static void c();
static void d();

// C++の例外処理に使われるキーワードは、tyr/catch/throw

int main() {

	try {
		cout << "before : main" << endl;
		a();
		// ↓例外処理は終わっているので通常どおり実行する
		cout << "after : main" << endl;
	}
	catch( std::exception &e ) {
		cout << "main: " << e.what() << endl;
	}

	cout << "main: exit" << endl;

	return 0;
}

static void a() {

	try {
		cout << "before : a" << endl;
		b();
		cout << "after : a" << endl;
	}
	catch( std::exception &e ) {
		cout << "a: exception " << e.what() << endl;
		// ↓catchブロックが終わったら処理が通常どおり続く
	}

	cout << "a: exit" << endl;
}

static void b() {

	try {
		cout << "before : b" << endl;
		c();
		cout << "after : b" << endl;
	}
	catch( std::range_error &e ) {
		cout << "b: range_error " << e.what() << endl;
		throw;
	}
	catch( std::exception &e ) {
		cout << "b: exeption " << e.what() << endl;
	}

	cout << "b: exit" << endl;
}

static void c() {

	try {
		cout << "before : c" << endl;
		d();
		cout << "after : c" << endl;
	}
	catch( std::logic_error &e ) {
		// out_of_rangeの親クラスなので捕捉可能
		cout << "c: logic_error " << e.what() << endl;
		// エラーの強制送出、引数に理由を設定する
		throw std::range_error("エラーの強制発生");
	}
	catch( std::exception &e ) {
		cout << "c: exception " << e.what() << endl;
	}

	cout << "c: exit" << endl;
}

static void d() {

	try {
		cout << "before : d" << endl;

		std::vector<int> vecInt(10);
		vecInt.at(10) = 10;			// ①ここで例外発生→catchブロックの検索

		cout << "after : d" << endl;
	}
	catch( std::bad_cast &e ) {
		cout << "d: bad_cast " << e.what() << endl;
	}
	catch( std::out_of_range &e ) {
		// ②ここでキャッチする
		cout << "d: out_of_range " << e.what() << endl;
		// 意図的に例外を発生させる
		// tryブロックを見つけるまで関数を抜ける
		// throwの後に何も指定しない場合、
		// キャッチしている例外をそのまま上位に渡す
		throw;
	}
	catch( std::exception &e ) {
		// C++標準例外をすべて捕捉できる
		cout << "d: exception " << e.what() << endl;
	}
	catch(...) {
		// 標準の例外オブジェクト以外(自作など)のすべて捕捉できる
		cout << "d: ... すべての例外を捕捉" << endl;
	}

	// catch処理が終わったら、通常通り次の処理を実行する
	cout << "d: exit" << endl;
}
