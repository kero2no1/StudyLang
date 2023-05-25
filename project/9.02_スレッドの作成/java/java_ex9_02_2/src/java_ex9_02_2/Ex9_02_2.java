package java_ex9_02_2;

class Thread1imp implements Runnable {

	@Override
	public void run() {
		// TODO 自動生成されたメソッド・スタブ
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

class Thread2imp implements Runnable {
	
	@Override
	public void run() {
		// TODO 自動生成されたメソッド・スタブ
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


public class Ex9_02_2 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Thread1imp rn1 = new Thread1imp();
		Thread2imp rn2 = new Thread2imp();
		
		Thread th1 = new Thread(rn1);
		Thread th2 = new Thread(rn2);
		
		th1.start();
		th2.start();
	}

}
