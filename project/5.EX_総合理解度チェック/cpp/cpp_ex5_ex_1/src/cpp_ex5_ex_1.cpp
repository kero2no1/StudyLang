//============================================================================
// Name        : cpp_ex5_ex_1.cpp
// Author      : keroichi.T
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Rock {
public:
	int weight;

	Rock( int w ) {
		if ( 10 >= w ) {
			weight = w;
		}
		else {
			weight = 10;
		}
	}

//	~Rock() {
//
//	}
};

int main() {

	// この書き方は、
	// 引数なしコンストラクタ(デフォルトコンストラクタ)を実行することになる。
//	Rock rc[10];
	// 動的確保。デフォルトコンストラクタ、メンバへはドット演算子。
//	Rock *rc = new Rock[10];

	// 引数付きコンストラクタを使ったクラス配列
	Rock rc1[3] = {
		Rock(13), Rock(14), Rock(15)
	};
	// ドット演算子でインスタンス変数へアクセス
	cout << rc1[0].weight << " , " <<
		    rc1[1].weight << " , " <<
		    rc1[2].weight << endl;

	// newを使った動的確保による初期化
	// ダブルポインタを使うと引数付きコンストラクタが使える
	Rock **rc2 = new Rock*[10];
	for ( int num = 0; num < 10; num++ ) {
		// 個別に引数付きコンストラクタを実行
		rc2[ num ] = new Rock( num + 3 );
	}

	int sum = 0;
	for ( int idx = 0; idx < 10; idx++ ) {
		// ダブルポインタを使ったらアロー演算子
		sum += rc2[ idx ]->weight;
//		cout << rc2[ idx ]->weight << endl;
	}

	cout << sum << endl;

	// newした場合はメモリ解放処理を忘れずに
	for ( int idx = 0; idx < 10; idx++ ) {
		delete rc2[idx];
	}
	delete[] rc2;

	return 0;
}
