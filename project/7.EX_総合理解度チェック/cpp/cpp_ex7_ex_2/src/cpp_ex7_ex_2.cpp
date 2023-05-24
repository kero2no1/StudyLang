//============================================================================
// Name        : cpp_ex7_ex_2.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "tents/TentA.h"
#include "tents/TentB.h"
#include "tents/TentC.h"
#include "tents/TentD.h"


int main() {

	Tent *ts[] = {new TentA, new TentB, new TentC, new TentD};

	for( auto t: ts ) {
		Waterproof *chk_w = dynamic_cast<Waterproof *>( t );
		if( chk_w != nullptr ) cout << typeid(*t).name() << endl;
	}

	return 0;
}
