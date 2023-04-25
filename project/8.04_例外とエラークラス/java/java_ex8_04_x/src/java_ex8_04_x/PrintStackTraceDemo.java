package java_ex8_04_x;

public class PrintStackTraceDemo {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		try {
			a();
		}
		catch ( ArithmeticException e ) {
			System.out.println( "mainでキャッチ" );
			e.printStackTrace();
		}
	}
	
	public static void a() {
		try {
			b();
		}
		catch ( NullPointerException e ) {
			e.printStackTrace();
		}
	}

	public static void b() {
		try {
//			int i = 1;
//			int j = 0;
//			System.out.println( i / j );	// ここで例外発生
			c();
		}
		catch ( NullPointerException e ) {
			e.printStackTrace();
		}
	}

	public static void c() {
		try {
			d();
		}
		catch ( NullPointerException e ) {
			e.printStackTrace();
		}
	}
	
	public static void d() {
		try {
			int i = 1;
			int j = 0;
			System.out.println( i / j );	// ここで例外発生
											// ここまでのスタック情報表示できる
		}
		catch ( NullPointerException e ) {
//		catch ( ArithmeticException e ) {
			System.out.println( "dでキャッチ" );
			e.printStackTrace();
		}
	}


}
