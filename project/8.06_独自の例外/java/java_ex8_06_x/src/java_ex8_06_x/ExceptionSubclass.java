package java_ex8_06_x;

import java.util.Random;

public class ExceptionSubclass {

	public static void main( String args[] ) {
		a();
	}
	
	static void a() {
		try {
			try {
				throw new ExceptionM( "M" );
			}
//			 このcatchには到達できない→外側のcatchで捕獲
			catch ( ExceptionN e ) {
				System.out.println( "Inner catch" );
				e.printStackTrace();
			}
			b();
			throw new ExceptionM( "M" );
		}
		catch ( ExceptionM e ) {
			System.out.println( "Outer catch" );
			e.printStackTrace();
		}
		// すべての例外を捕獲するので、
		// aメソッドはthrowsを記述する必要はない。
		catch ( Exception e ) {
			e.printStackTrace();
		}
	}
	
	static void b() throws ExceptionA {
		try {
			c();
		}
		catch ( ExceptionB e ) {
			e.printStackTrace();
		}
	}
	
	static void c() throws ExceptionA, ExceptionB {
		Random random = new Random();
		int i = random.nextInt();
		if ( i % 2 == 0 ) {
			throw new ExceptionA( "We have a problem" );
		}
		else {
			throw new ExceptionB( "We have a big problem" );
		}
	}
}

// 独自の例外クラスを作成できる
class ExceptionA extends Exception {
	public ExceptionA( String message ) {
		super( message );
	}
}

class ExceptionB extends Exception {
	public ExceptionB( String message ) {
		super( message );
	}
}

class ExceptionM extends Exception {
	public ExceptionM( String message ) {
		super( message );
	}
}

// RuntimeExceptionのサブクラスは捕獲も宣言もいらない
class ExceptionN extends RuntimeException {
	public ExceptionN( String message ) {
		super( message );
	}
}