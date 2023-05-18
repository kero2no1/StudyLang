package java_ex5_ex_1;

class Rock {
	byte weight;
	
	Rock( byte w ){
		if( 10 >= w ) {
			this.weight = w;
		}
		else {
			this.weight = 10;
		}
	}
}

public class Ex5_ex_1 {

	public static void main(String[] args) {
		// オブジェクトの配列を確保して、for文内で個別にインスタンス生成
		Rock[] rc = new Rock[10];
		for( int num = 0; num < 10; num++ ) {
			rc[num] = new Rock( (byte)(num+1) ); 
		}
		
		int sum = 0;
		for( int idx = 0; idx < rc.length; idx++ ) {
			sum += rc[idx].weight;
			System.out.println( rc[idx].weight );
		}
		
		System.out.println( sum );
		
	}

}
