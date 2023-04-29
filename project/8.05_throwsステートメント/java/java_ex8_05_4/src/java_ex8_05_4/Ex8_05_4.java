package java_ex8_05_4;

import java.io.IOException;

public class Ex8_05_4 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		
		String[] ss = {"12.3","2.34","345.6","56.7","6.7"};
//		String[] ss = {"abcd","2.34","345.6","56.7","6.7"};

		double avg = average( ss );
//		double avg = average( null );

		System.out.println( avg );

		try {
			sample();
		}
		// sampleメソッドは検査例外を投げるので、捕獲処理が必要になる
		// 処理がないとコンパイルエラー
		catch ( IOException e ) {
			
		}
		
	}
	
	public static double average( String[] aryStr ) 
			// いずれも非検査例外なので、捕獲を強制されない
			throws NullPointerException, NumberFormatException {
		double sum = 0.0;
		
		for( String s : aryStr ) {
			sum += Double.valueOf( s );
		}
				
		return sum / aryStr.length;
	}
	
	public static void sample()
			// これは検査例外なので、使う側で捕獲処理が必要になる
			throws IOException {

		// 処理なし
	}

}
