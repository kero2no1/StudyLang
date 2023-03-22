package java_ex_3_ex;

public class Ex3_ex {

	public static void main(String[] args) {
		// 論理演算子の&&と||はショートカット演算子
		// 論理演算子の&と|とはやや動きが異なる
		int test = 0;
		// ↓は左側だけで真偽確定するため、右側オペランドは評価されない
		if( (Boolean.TRUE) || (++test > 0) ) System.out.println(test);
		// ↓は必ず両オペランドが評価される
		if( (Boolean.TRUE) |  (++test > 0) ) System.out.println(test);
		System.out.println( "\n" );
		
		int[] array = new int[10];
		for( int i = 0, j= -1; i < array.length; i++, j-- ) {
			array[i] = j;
		}
		for( int i = 0; i < array.length; i++ ) System.out.println(array[i]);
		System.out.println( "\n" );
		
		
		for( int i = 0; i < 10; i++ ) {
			System.out.println( i + "\t" + i*i + "\t" + i*i*i );
		}
		System.out.println( "\n" );
		
		int j = 0;
		for( int i = 1; i < 100; i++ ) {
			j++;
			j %= 5;
			if( j != 0 ) {
				System.out.print( i + "\t" );
			}
			else {
				System.out.println( i );
			}
		}
	}

}
