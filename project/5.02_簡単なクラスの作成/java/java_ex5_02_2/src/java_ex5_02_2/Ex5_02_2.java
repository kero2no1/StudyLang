package java_ex5_02_2;

class Sphere {
	double radius;					// 半径
//	double[] cp = new double[2];	// 中心座標
	double[] cp;					// 中心座標
}

public class Ex5_02_2 {

	public static void main(String[] args) {
		
		Sphere cube = new Sphere();
		cube.radius = 5.5;
		cube.cp = new double[] {1.2,3.4};

		System.out.println( "半径：" + cube.radius );
		System.out.println( "中心座標：" + cube.cp[0] + "," +  cube.cp[1] );
		
	}

}
