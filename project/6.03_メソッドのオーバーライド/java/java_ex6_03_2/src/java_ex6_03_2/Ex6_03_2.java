package java_ex6_03_2;

class Bond {
	
	void display() {
		System.out.println( "Bond" );
	}
}

class ConvertibleBond extends Bond {
	
	void display() {
		System.out.println( "ConvertibleBond" );
	}
}

public class Ex6_03_2 {

	public static void main(String[] args) {
		Bond[] bd = new Bond[6];
		
		for( int idx = 0; idx < bd.length; idx++ ) {
			if ( (idx % 2) == 0 ) {
				// 偶数はBondオブジェクトで初期化
				bd[ idx ] = new Bond();
			}
			else {
				// 奇数はConvertibleBondオブジェクトで初期化
				bd[ idx ] = new ConvertibleBond();
			}
			
			bd[ idx ].display();
		}
		
	}

}
