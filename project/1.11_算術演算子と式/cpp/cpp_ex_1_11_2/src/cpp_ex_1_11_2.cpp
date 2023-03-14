//============================================================================
// Name        : cpp_ex_1_11_2.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double distance = 3'000;
	double speed = 75;

	cout << "NewYorkからLosAngelesまで "
		 << distance / speed
		 << " 時間です。"
		 << endl; // prints !!!Hello World!!!

	return 0;
}
