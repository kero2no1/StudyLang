package java_ex9_03_1;

class Account {
	private int balance = 0;
	
	// synchronizedメソッドは、他のスレッドから処理の要求があっても、
	// 別のスレッドがメソッドを実行している間は要求を受け付けない
	// 要求を投げたスレッドは待機状態になる
//	synchronized void deposit( int amount ) {
	void deposit( int amount ) {
		balance += amount;
	}
	
	int getBalance() {
		return balance;
	}
}

class Customer extends Thread {
	Account account;
	
	Customer( Account account ) {
		this.account = account;
	}
	
	// ③処理が割り当てられたらrunメソッドが実行され、実行状態へ
	public void run() {
		try {
			for( int i = 0; i < 100000; i++ ) {
				account.deposit(10);
			}
		}
		catch ( Exception e ) {
			e.printStackTrace();
		}
	}
}


/*
 * ＜＜スレッドのライフサイクル＞＞
 * ①初期状態 →start()呼ぶ→ ②実行可能状態 ←←←←←←←
 * 								 	↓ 					 ↑
 * 						割当てされrun()呼ばれる		⑤待機状態
 * 									↓					 ↑
 * ④終了状態 ← run()終了 ← ③実行状態 →→→→→→→→↑
 * 
 * ③→⑤：	・sleep()による一時停止
 * 			・join()による待ち合わせ
 * 			・waitによる待機
 * 			・同期化によるロック解放待ち
 * 
 * ⑤→②：	・sleep()の終了
 * 			・join()の終了
 * 			・notify()による再開
 * 			・ロックの取得
 */

public class Ex9_03_1 {

	private final static int NUMCUSTOMERS = 10;
	
	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		// このオブジェクトを各スレッドに渡しているので、
		// 各スレッドは同じオブジェクトのメソッドにアクセスしている
		Account account = new Account();
		
		Customer customers[] = new Customer[NUMCUSTOMERS];
		for( int i = 0; i < NUMCUSTOMERS; i++ ) {
			// ①スレッドのインスタンスを生成すると、
			//   スレッドは初期状態になる
			customers[i] = new Customer( account );
			
			// ②スタートメソッドを実行することで実行可能状態へ
			customers[i].start();
		}
		
		for( int i = 0; i < NUMCUSTOMERS; i++ ) {
			try {
				// このjoinはmainスレッドを待機状態にしている
				// →mainスレッドの処理が進まない
				// joinが終了したらmainスレッドは実行可能状態へ
				customers[i].join();
			} catch (InterruptedException e) {
				// TODO 自動生成された catch ブロック
				e.printStackTrace();
			}
		}
		
		System.out.println( account.getBalance() );

	}

}
