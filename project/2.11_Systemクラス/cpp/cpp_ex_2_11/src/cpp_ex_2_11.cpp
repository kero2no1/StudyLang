//============================================================================
// Name        : cpp_ex_2_11.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {

	// 時間計測は、C++11で追加されたchrono
	chrono::system_clock::time_point start = chrono::system_clock::now();
	this_thread::sleep_for(1s);
	chrono::system_clock::time_point end = chrono::system_clock::now();

	chrono::duration dur = end - start;
	long long msec = chrono::duration_cast<chrono::milliseconds>(dur).count();
	cout << msec << "\n";

	// これは型が長ったらしいので、autoを使うのが一般的らしい
	auto start2 = chrono::system_clock::now();
	this_thread::sleep_for(2s);
	auto end2 = chrono::system_clock::now();

	auto dur2 = end2 - start2;
	// duration_cast<変換型>で、型は
	auto msec2 = chrono::duration_cast<chrono::microseconds>(dur2).count();
	cout << msec2 << endl;

	return 0;
}
