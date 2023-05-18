package java_ex6_04_1;

class I2 {
	
	String[] getDescription() {
		String[] ss = new String[2];

		ss[0] = new String("このクラスは………" + "I2" );
		ss[1] = new String("スーパークラスは…" + "なし" );

		return ss;
	}
}

class J2 extends I2 {
	
	String[] getDescription() {
		String[] ss = new String[2];
		
		ss[0] = new String("このクラスは………" + "J2" );
		ss[1] = new String("スーパークラスは…" + "I2" );
		
		return ss;
	}
	
}

class K2 extends J2 {

	String[] getDescription() {
		String[] ss = new String[2];
		
		ss[0] = new String("このクラスは………" + "K2" );
		ss[1] = new String("スーパークラスは…" + "J2" );
		
		return ss;
	}
	
}


public class Ex6_04_1 {

	public static void main(String[] args) {
		
//		I2 ii = new I2();
//		J2 jj = new J2();
//		K2 kk = new K2();
		
		Ex6_04_1.display( new I2().getDescription() );
		display( new J2().getDescription() );
		display( new K2().getDescription() );
	}
	
	static void display( String[] msgs ) {
		for( String msg : msgs ) {
			System.out.println( msg );
		}
	}

}
