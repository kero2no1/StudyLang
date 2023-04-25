package java_ex8_05_4;

public class Ex8_05_4 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		
//		String[] ss = {"12.3","2.34","345.6","56.7","6.7"};
		String[] ss = {"abcd","2.34","345.6","56.7","6.7"};

		double avg = average( ss );
//		double avg = average( null );

		System.out.println( avg );

	}
	
	public static double average( String[] aryStr ) 
			throws NullPointerException, NumberFormatException {
		double sum = 0.0;
		
		for( String s : aryStr ) {
			sum += Double.valueOf( s );
		}
				
		return sum / aryStr.length;
	}

}
