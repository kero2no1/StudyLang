package java_ex_1_16_3;

public class Ex_1_16_3 {

	public static void main(String[] args) {
		byte[][][] dataArr;
		dataArr = new byte[][][] {
			{ {11,12,13}, {14,15,16}, {17,18,19} },
			{ {21,22,23}, {24,25,26}, {27,28,29} },
			{ {31,32,33}, {34,35,36}, {37,38,39} },
		};
		
		System.out.println(dataArr[0][0][0]);
		System.out.println(dataArr[0][0][1]);
		System.out.println(dataArr[0][0][2]);
		System.out.println(dataArr[0][1][0]);
		System.out.println(dataArr[0][1][1]);
		System.out.println(dataArr[0][1][2]);
		System.out.println(dataArr[0][2][0]);
		System.out.println(dataArr[0][2][1]);
		System.out.println(dataArr[0][2][2]);
		System.out.println(dataArr[1][0][0]);
		System.out.println(dataArr[1][0][1]);
		System.out.println(dataArr[1][0][2]);
		System.out.println(dataArr[1][1][0]);
		System.out.println(dataArr[1][1][1]);
		System.out.println(dataArr[1][1][2]);
		System.out.println(dataArr[1][2][0]);
		System.out.println(dataArr[1][2][1]);
		System.out.println(dataArr[1][2][2]);
		System.out.println(dataArr[2][0][0]);
		System.out.println(dataArr[2][0][1]);
		System.out.println(dataArr[2][0][2]);
		System.out.println(dataArr[2][1][0]);
		System.out.println(dataArr[2][1][1]);
		System.out.println(dataArr[2][1][2]);
		System.out.println(dataArr[2][2][0]);
		System.out.println(dataArr[2][2][1]);
		System.out.println(dataArr[2][2][2]);
		
		System.out.println("");
		// 多次元配列のlengthについて確認
		byte[][][] lenTest = new byte[][][] {
			{ {1} },
			{ {4,4,4,4}, {5,5,5,5,5}, },
			{ {2,2}, {3,3,3}, {7,7,7,7,7,7,7}, {9,9,9,9,9,9,9,9,9} }
		};

		System.out.println(lenTest.length);			// 一番外側の要素数、今回は３
		System.out.println(lenTest[0].length);		// 1
		System.out.println(lenTest[1].length);		// 2
		System.out.println(lenTest[2].length);		// 4
		System.out.println(lenTest[2][3].length);	// 9
		
	}

}
