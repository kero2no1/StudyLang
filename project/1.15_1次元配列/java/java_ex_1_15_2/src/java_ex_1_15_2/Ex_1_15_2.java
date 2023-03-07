package java_ex_1_15_2;

public class Ex_1_15_2 {

	public static void main(String[] args) {
//		byte[] arrByte;						宣言のみ
//		byte[] arrByte = new byte[4];		領域割り当て
		byte[] arrByte = { 1, 2, 3, 4 };	// 省略構文 宣言＋割当＋初期化

		System.out.println( "データ数：" + arrByte.length );
		System.out.println( arrByte[0] );
		System.out.println( arrByte[1] );
		System.out.println( arrByte[2] );
		System.out.println( arrByte[3] );

	}

}
