package java_ex9_04_1;

class X {
	synchronized void x1() {
		x2();
	}
	
	synchronized void x2() {
	}
}

class ThreadX extends Thread {
	X x;
	int i;
	
	ThreadX( int i, X x ) {
		this.x = x;
		this.i = i;
	}
	public void run() {
		for( int i = 0; i < 10; i++ ) {
			System.out.println( "th" + String.valueOf(this.i));
			x.x1();
		}
	}
}

class A {
	B b;
	
	synchronized void a1() {
		System.out.println( "Starting a1" );
		b.b2();
	}
	
	synchronized void a2() {
		System.out.println( "Starting a2" );
	}
}

class B {
	A a;
	
	synchronized void b1() {
		System.out.println( "Starting b1" );
		a.a2();
	}
	
	synchronized void b2() {
		System.out.println( "Starting b2" );
	}
}

class Thread1 extends Thread {
	A a;
	
	Thread1( A a ) {
		this.a = a;
		this.start();
	}
	
	@Override
	public void run() {
		for( int i = 0; i < 1000; i++ ) {
			a.a1();
		}
	}
}

class Thread2 extends Thread {
	B b;
	
	Thread2( B b ) {
		this.b = b;
		this.start();
	}
	
	@Override
	public void run() {
		for( int i = 0; i < 1000; i++ ) {
			b.b1();
		}
	}
}


public class Ex9_04_1 {

	private final static int NUMTHREADS = 10;
	
	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		X x = new X();
		
		// デッドロックは発生しない
		ThreadX threads[] = new ThreadX[NUMTHREADS];
		for( int i = 0; i < NUMTHREADS; i++ ) {
			threads[i] = new ThreadX(i,x);
			threads[i].start();
		}
		
		for( int i = 0; i < NUMTHREADS; i++ ) {
			try {
				threads[i].join();
			} catch (InterruptedException e) {
				// TODO 自動生成された catch ブロック
				e.printStackTrace();
			}
		}
		
		System.out.println( "Done!\n" );

		// デッドロックが発生する
		A a = new A();
		B b = new B();
		a.b = b;
		b.a = a;
		
		Thread1 t1 = new Thread1( a );
		Thread2 t2 = new Thread2( b );
		
		try {
			t1.join();
			t2.join();
		} catch (InterruptedException e) {
			// TODO 自動生成された catch ブロック
			e.printStackTrace();
		}

		System.out.println( "Done!\n" );

	}

}
