package java_ex_1_16_2;

public class Ex_1_16_2 {

	public static void main(String[] args) {
//		int[][] dataArr;
//		dataArr = new int[][] {
//			{1},
//			{2,2},
//			{3,3,3},
//		};
		
		int[][] dataArr;
		dataArr = new int[3][]; // 分割して領域割り当てもできる
//		dataArr[0] = new int[1] {1};	これはできなくなる
		dataArr[0] = new int[1];
		dataArr[1] = new int[2];
		dataArr[2] = new int[3];
		dataArr[0][0] = 1;
		dataArr[1][0] = 2;
		dataArr[1][1] = 2;
		dataArr[2][0] = 3;
		dataArr[2][1] = 3;
		dataArr[2][2] = 3;
		
		System.out.println( "1次元の要素数：" + dataArr[0].length );
		System.out.println( "データ内容：" + 
							dataArr[0][0] );
		System.out.println( "2次元の要素数：" + dataArr[1].length );
		System.out.println( "データ内容：" + 
							dataArr[1][0] + "," +
							dataArr[1][1] );
		System.out.println( "3次元の要素数：" + dataArr[2].length );
		System.out.println( "データ内容：" + 
							dataArr[2][0] + "," +
							dataArr[2][1] + "," +
							dataArr[2][2] );

		
	}

}
