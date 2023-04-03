//============================================================================
// Name        : cpp_ex4_ex.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main( int argc, char *argv[] ) {
	// 実行時の引数 "5 nickels 4 quarters 2 dimes"
	float sum = 0.0f, d = 0.0f;
	for( int idx = 1; idx < argc; idx++ ) {

		switch( (char)argv[idx][0] ) {
		case 'n':
			sum += ( d * 5 );
			cout << "5￠コインは" << (int)d << "枚\n";
			break;
		case 'q':
			sum += ( d * 25 );
			cout << "25￠コインは" << (int)d << "枚\n";
			break;
		case 'd':
			sum += ( d * 10 );
			cout << "10￠コインは" << (int)d << "枚\n";
			break;
		default:
			d = stof(argv[idx]);
			break;
		}
	}
	cout << "コインの総額は＄" << sum/100 << endl;
	cout << "\n";

	// コンソール入力情報を判別
	string inpt, msg = " はスペイン語で ";
	cout << "One/Two/Three/Four/Fiveのいずれかを入力：\n" << ">> ";
	cin >> inpt;
	msg.insert( 0, inpt );

	if( 	 inpt.compare("One")   == 0 ) 	msg.append( "Uno");
	else if( inpt.compare("Two")   == 0 ) 	msg.append( "Dos");
	else if( inpt.compare("Three") == 0 ) 	msg.append( "Tres");
	else if( inpt.compare("Four")  == 0 ) 	msg.append( "Quatro");
	else if( inpt.compare("Five")  == 0 ) 	msg.append( "Cinco");
	else									msg = "入力が異常です";

	cout << msg << endl;

	return 0;
}
