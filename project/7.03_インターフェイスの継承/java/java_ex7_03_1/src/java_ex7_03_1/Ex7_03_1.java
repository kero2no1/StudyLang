package java_ex7_03_1;

interface P {
	int p = 100;
	void mp();
}

interface P1 extends P {
	int p = 10;
	int p1 = 101;
	void mp1();
}

interface P2 extends P {
	int p2 = 102;
	void mp2();
}

interface P12 extends P1, P2 {
	int p12 = 120;
	void mp12();
}

class Q implements P12 {

	@Override
	public void mp() {
		// TODO 自動生成されたメソッド・スタブ
		// あいまい回避のため、Pインターフェースの変数を指定
		System.out.println( "interface-P:" + P.p );
	}
	
	@Override
	public void mp1() {
		// TODO 自動生成されたメソッド・スタブ
		System.out.println( "interface-P1:" + p1 );
	}

	@Override
	public void mp2() {
		// TODO 自動生成されたメソッド・スタブ
		System.out.println( "interface-P2:" + p2 );
	}

	@Override
	public void mp12() {
		// TODO 自動生成されたメソッド・スタブ
		System.out.println( "interface-P12:" + p12 );
	}
	
}

public class Ex7_03_1 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Q obj_q = new Q();
		
		obj_q.mp();
		obj_q.mp1();
		obj_q.mp2();
		obj_q.mp12();
		
		// インターフェース変数pを特定できないため、
		// ↓はエラーになってしまう。
//		System.out.println( obj_q.p );

	}

}
