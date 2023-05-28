package java_ex9_03_2;

class Account {
	private int balance = 0;
	
	void deposit( int amount ) {
		// スレッドによってロックしたいのはこのメソッド
		// この中にsynchronizedブロックを作成する
		synchronized (this) {
			balance += amount;
		}
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

// Runnableインタフェースを使う方法
// これをインスタンス化し、スレッドクラスの引数にする
class CustomerRunnable implements Runnable {
	Account account;
	
	public CustomerRunnable( Account account ) {
		// TODO 自動生成されたコンストラクター・スタブ
		this.account = account;
	}
	
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


public class Ex9_03_2 {

	private final static int NUMCUSTOMERS = 10;
	
	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Account account = new Account();
		
		Customer customers[] = new Customer[NUMCUSTOMERS];
		for( int i = 0; i < NUMCUSTOMERS; i++ ) {
			customers[i] = new Customer( account );
			customers[i].start();
		}
		
		for( int i = 0; i < NUMCUSTOMERS; i++ ) {
			try {
				customers[i].join();
			} catch (InterruptedException e) {
				// TODO 自動生成された catch ブロック
				e.printStackTrace();
			}
		}
		
		System.out.println( account.getBalance() );
		System.out.println( "" );

		
		// Runnableインタフェースを使った場合の処理
		// 各スレッドは、１つのrunメソッド(crのrunメソッド)を実行する
		Account account2 = new Account();
		CustomerRunnable cr = new CustomerRunnable( account2 );
		
		Thread[] ths = new Thread[NUMCUSTOMERS];
		for( int i = 0; i < NUMCUSTOMERS; i++ ) {
			ths[ i ] = new Thread( cr );
			ths[ i ].start();
		}
		
		for( int i = 0; i < NUMCUSTOMERS; i++ ) {
			try {
				ths[ i ].join();
			} catch (InterruptedException e) {
				// TODO 自動生成された catch ブロック
				e.printStackTrace();
			}
		}

		System.out.println( account2.getBalance() );

	}

}
