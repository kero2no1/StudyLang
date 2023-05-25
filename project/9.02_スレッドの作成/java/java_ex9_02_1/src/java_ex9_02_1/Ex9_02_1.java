package java_ex9_02_1;

class Thread1 extends Thread {
	@Override
	public void run() {
		try {
			while( true ) {
				System.out.println( "A" );
				Thread.sleep(1000);
			}
		} catch (InterruptedException e) {
			// TODO 自動生成された catch ブロック
			e.printStackTrace();
		}
	}
}

class Thread2 extends Thread {
	@Override
	public void run() {
		try {
			while( true ) {
				System.out.println( "B" );
				Thread.sleep(3000);
			}
		} catch (InterruptedException e) {
			// TODO 自動生成された catch ブロック
			e.printStackTrace();
		}
	}
}

public class Ex9_02_1 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Thread1 th1 = new Thread1();
		Thread2 th2 = new Thread2();
		
		// 同じ優先順位なので、時間分割されている
		th1.start();
		th2.start();
	}

}
