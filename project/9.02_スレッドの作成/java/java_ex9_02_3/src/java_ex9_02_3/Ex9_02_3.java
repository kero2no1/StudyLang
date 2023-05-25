package java_ex9_02_3;

import java.util.Random;

class ThreadA extends Thread {
	private String str;
	
	ThreadA( String msg ) {
		this.str = "th" + msg;
	}
	
	@Override
	public void run() {
		for( int i = 0; i < 10; i++ ) {
			Random rand = new Random();
			int cnt = rand.nextInt(500) + 300; // 300 ～ 800 の範囲
			
			try {
				System.out.println( str + " / x : " + cnt );
				Thread.sleep(cnt);
			} catch (InterruptedException e) {
				// TODO 自動生成された catch ブロック
				e.printStackTrace();
			}
		}
	}
}

public class Ex9_02_3 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		ThreadA[] ths = new ThreadA[5];
		for( int idx = 0; idx < 5; idx++ ) {
			ths[idx] = new ThreadA( String.valueOf(idx) );
			ths[idx].start();
		}
		
		for( int idx = 0; idx < 5; idx++ ) {
			try {
				ths[idx].join();
			} catch (InterruptedException e) {
				// TODO 自動生成された catch ブロック
				e.printStackTrace();
			}
		}
		
		System.out.println( "All Threads have finished" );
	}
}
