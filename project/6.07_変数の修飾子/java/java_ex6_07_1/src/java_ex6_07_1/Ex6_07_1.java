package java_ex6_07_1;

class L {
	// どのクラスからもアクセス可能
	public static final int x = 5;
	
	// 同じクラスからのアクセスのみ
	private static final int y = 10;
	
	// 同じパッケージかサブクラスからのみ
	protected int z;
	
	L() {
		z = y;
	}
}

public class Ex6_07_1 {

	public static void main(String[] args) {
		
		L ll = new L();
		
		System.out.println( L.x );
//		System.out.println( L.y );		// yはプライベートなのでここからは見えない
		System.out.println( ll.z );
		
//		L.x = 10;						// xはfinalなので書換え不可
	}

}
