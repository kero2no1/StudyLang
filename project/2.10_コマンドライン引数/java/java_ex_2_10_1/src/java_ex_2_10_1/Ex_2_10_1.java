package java_ex_2_10_1;

public class Ex_2_10_1 {

	public static void main(String[] args) {
		// コマンドラインはEclipseのプロジェクトのプロパティから、
		// このプロジェクトの実行構成を設定する。
		// プロジェクト -> プロパティ -> 実行/デバッグ設定
		// 起動構成を新規追加し、プロジェクトの引数を記述する
		
		System.out.println( args.length );
		System.out.println( args[0] );
		System.out.println( args[1] );
		System.out.println( args[2] );	// カンマでは区切れない
		
		System.out.println( "コマンドライン入力の積:" + 
				( Double.parseDouble(args[0]) * Double.parseDouble(args[1]) ) );

	
	}

}
