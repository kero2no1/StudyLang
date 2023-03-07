package java_ex_1_15_3;

public class Ex_1_15_3 {

	public static void main(String[] args) {
		double[] data = { 1, 2, 3, 4, };
		double ave;
		
		ave = 0;
		ave += data[0];
		ave += data[1];
		ave += data[2];
		ave += data[3];
		ave /= data.length;
		
		System.out.println( "データ数：" + data.length );
		System.out.println( data[0] + " " + 
							data[1] + " " +
							data[2] + " " +
							data[3] );
		
		System.out.println( "平均値：" + ave );


	}

}
