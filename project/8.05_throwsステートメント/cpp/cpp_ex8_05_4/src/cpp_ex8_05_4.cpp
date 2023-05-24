//============================================================================
// Name        : cpp_ex8_05_4.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


// 関数は例外をスローしないことを明示
void average1() noexcept;
void average2() noexcept(true);
void average3() throw();	// C++20から削除される

// 関数は例外をスローすることを明示
void average4()	noexcept(false);

//void average() throw( std::logic_error );
/*
 * C++17から仕様削除された
 * Javaでいう検査例外。動的例外仕様という。
 * オブジェクト指向やジェネリックプログラミングと相性が悪いらしい。
 */

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}

