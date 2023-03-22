package java_ex4_ex;

import java.util.Scanner;

public class Ex4_ex {
	// 実行時の引数 "5 nickels 4 quarters 2 dimes"
	public static void main(String[] args) {
		//イテレータを使ったループ
		double d = 0.0, sum = 0.0;
		for(String s : args) {
			
			switch( s.charAt(0) ) {
			case 'n':	// nickels
				sum += ( d * 5 );
				System.out.println( "5￠コインは" + (int)d + "枚" );
				break;
			case 'q':	// quarters
				sum += ( d * 25 );
				System.out.println( "25￠コインは" + (int)d + "枚" );
				break;
			case 'd':	// dimes
				sum += ( d * 10 );
				System.out.println( "10￠コインは" + (int)d + "枚" );
				break;
			default:	// 数値(硬貨の枚数)
				d = Double.valueOf( s );
			}
		}
		
		System.out.println( "コインの総額は＄" + sum/100 );
		System.out.println();
		
		// コンソール入力情報を判別
		System.out.print( "One/Two/Three/Four/Fiveのいずれかを入力：" );
		Scanner sc = new Scanner( System.in );
		String s = sc.nextLine();
		
		StringBuffer sb = new StringBuffer( " はスペイン語で " );
		sb.insert(0, s);
		if( s.equals( "One" ) ) {
			sb.append("Uno");
		}
		else if( s.equals( "Two" ) ) {
			sb.append("Dos");
		}
		else if( s.equals( "Three" ) ) {
			sb.append("Tres");
		}
		else if( s.equals( "Four" ) ) {
			sb.append("Quatro");
		}
		else {
			sb.append("Cinco");
		}
		
		System.out.println( sb );
		
		
		sc.close();
	}

}
