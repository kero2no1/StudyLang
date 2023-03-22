package java_ex_2_10_2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Ex_2_10_2 {

	public static void main(String[] args) throws IOException {
		// コマンドラインで円の半径を受け取る
		double r = Double.parseDouble( args[0] );
		// 面積 = π * r^2
		System.out.println( Math.PI * Math.pow(r, 2) );
		System.out.println( "" );
		
		// 【参考】コンソール入力方法
		// ①Scannerクラスを使う
		Scanner sc = new Scanner( System.in );
		String in1 = sc.nextLine();
		System.out.println( "入力情報は：" + in1 );
		
		// ②BufferedReaderクラスを使う IOExceptionが必要
		BufferedReader br = new BufferedReader( new InputStreamReader( System.in ));
		String in2 = br.readLine();
		System.out.println( "入力情報は：" + in2 );

		// いずれの場合もストリームを閉じる処理が必要なので注意
		sc.close();
		br.close();
	}

}
