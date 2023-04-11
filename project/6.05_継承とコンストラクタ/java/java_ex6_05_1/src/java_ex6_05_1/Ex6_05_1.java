package java_ex6_05_1;

class S2 {
	int s2;
	S2( int s2 ) {
		this.s2 = s2;
		System.out.println( "S2 Constructor" );
	}
}

class T2 extends S2 {
	int t2;
	T2( int s2, int t2 ) {
		// コンストラクタの呼出し前に処理は記述できない(エラーになる)
//		System.out.println( "T2 Constructor" );
		super( s2 );		// コンストラクタで、super()とthis()の両方を使うことはできない
		this.t2 = t2;
		System.out.println( "T2 Constructor" );
	}
}

class U2 extends T2 {
	int u2;
	U2( int s2, int t2, int u2 ) {
		super( s2, t2 );
		this.u2 = u2;
		System.out.println( "U2 Constructor" );
	}
}

public class Ex6_05_1 {

	public static void main(String[] args) {
		U2 u2 = new U2( 1, 2, 3 );
		System.out.println( "u2.s2 = " + u2.s2 );
		System.out.println( "u2.t2 = " + u2.t2 );
		System.out.println( "u2.u2 = " + u2.u2 );
	}

}
