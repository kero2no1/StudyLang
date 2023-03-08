package java_ex_1_16_1;

public class Ex_1_16_1 {

	public static void main(String[] args) {
		// Javaの多次元配列は、「配列の配列」となるので、↓が可能。
//		float[][] dataArr = {
//			{ -56.7f },
//			{ 500.1f, 70.70f },
//			{ 100.9f, 0.5f, 20.20f },	// 最後にカンマ入れてもOK
//		};

		// こんな領域確保もできるみたい。
		float[][] dataArr;
		dataArr = new float[][]{{-56.7f},{500.1f,70.70f},{100.9f,0.5f,20.20f}};		

		System.out.println( dataArr[0][0] );
//		System.out.println( dataArr[0][1] );	// 領域は割当たっていない
		System.out.println( dataArr[1][0] );
		System.out.println( dataArr[1][1] );
		System.out.println( dataArr[2][0] );
		System.out.println( dataArr[2][1] );
		System.out.println( dataArr[2][2] );

	}

}
