package java_ex_2_09;

public class Ex_2_09 {

	public static void main(String[] args) {
		// Stringオブジェクトの配列、基本型の配列と変わらない
		// オブジェクトが指し示すものがない時はnullなので注意
		String array[] = new String[5];
		array[0] = "String 0";
		array[1] = "String 1";
		array[2] = "String 2";
		array[4] = "String 4";
		
		System.out.println( array.length );
		System.out.println( array[0] );
		System.out.println( array[1] );
		System.out.println( array[2] );
		System.out.println( array[3] );		// オブジェクトを参照してないからnull
		System.out.println( array[4] );
		
		float[] dataFloat = new float[] {
				1.0f, 2.0f, 3.0f, 4.0f, 5.0f,
		};
		
		System.out.println( dataFloat[0] );
	}

}
