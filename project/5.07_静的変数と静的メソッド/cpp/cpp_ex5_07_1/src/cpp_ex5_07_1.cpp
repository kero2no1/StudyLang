//============================================================================
// Name        : cpp_ex5_07_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class ChangeLanguage {
public:
	// 静的メンバ変数はクラス宣言内で初期化できない
//	static int arrays[] = {0,1,2,3,4,5};
	static int arrays[];

	static string getSpanish( string word );

	ChangeLanguage() {
		// もちろんインスタンスメソッドからもアクセス可能
		// インスタンス化の時点でちゃんと初期化されている。
		cout << "\n" << this->arrays[4] << " , " << arrays[5];
	}
};

// 静的メンバ変数の初期化 この時static修飾子を付けてはいけない
int ChangeLanguage::arrays[6] = {0,1,2,3,4,5};

//静的関数の実装にもstatic修飾子はつけない
string ChangeLanguage::getSpanish( string word ) {

	if ( word.compare( "One") == 0 ) {
		return "Uno";
	}
	else if ( word.compare( "Two") == 0 ) {
		return "Dos";
	}
	else if ( word.compare( "Three" ) == 0 ) {
		return "Tres";
	}
	else if ( word.compare( "Four" ) == 0 ) {
		return "Quatro";
	}
	else if ( word.compare( "Five" ) == 0 ) {
		return "Cinco";
	}
	else {
		return "Error";
	}
}



int main() {
	// 静的メンバ変数へのアクセス
	cout << ChangeLanguage::arrays[2] << endl;

	string s, sp, sb;
	cout << "One/Two/Three/Four/Fiveのいずれかを入力：\n >> ";
	cin >> s;

	// 静的メンバ関数へのアクセス
	sp = ChangeLanguage::getSpanish( s );
	if( sp.compare( "Error" ) == 0 ) {
		sb = "入力が異常です";
	}
	else {
		sb = " はスペイン語で ";
		sb.insert( 0, s );
		sb.append( sp );
	}

	cout << sb << endl;

	ChangeLanguage cl;


	return 0;
}
