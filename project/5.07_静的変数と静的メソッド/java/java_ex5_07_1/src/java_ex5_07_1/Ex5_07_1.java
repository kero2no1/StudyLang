package java_ex5_07_1;

import java.util.Scanner;

class ChangeLangage {
	static int[] arrays;
	
	// 静的初期化ブロック
	// 「プログラムの起動時」に実行されている
	static {
		arrays = new int[6];
		for( int idx = 0; idx < arrays.length; idx++ ) {
			arrays[idx] = idx;
		}
	}
	
	static String getSpanish( String word ) {
		if( word.equals( "One" ) 	) return "Uno";
		else
		if( word.equals( "Two" ) 	) return "Dos";
		else
		if( word.equals( "Three" )  ) return "Tres";
		else
		if( word.equals( "Four" ) 	) return "Quatro";
		else 
		if( word.equals( "Five" ) 	) return "Cinco";
		else 						  return "異常";
	}
}

public class Ex5_07_1 {

	public static void main(String[] args) {
		
		System.out.println(ChangeLangage.arrays[2]);
		
		
		System.out.print( "One/Two/Three/Four/Fiveのいずれかを入力：\n >> " );
		Scanner sc = new Scanner( System.in );
		String word = sc.nextLine();
		
		StringBuffer sb;
		String spa = ChangeLangage.getSpanish( word );
		if( spa.equals("異常") ) {
			sb = new StringBuffer( "入力が異常です" );
		}
		else {
			sb = new StringBuffer( " はスペイン語で " );
			sb.insert( 0, word );
			sb.append( spa );
		}
		
		System.out.println( sb );
		
		sc.close();
	}

}
