package java_ex5_03_2;

class Sphere {
	double radius;					// 半径
//	double[] cp = new double[2];	// 中心座標
	double[] cp;					// 中心座標
	
	Sphere( double arg_radius, double[] arg_cp ){
		radius = arg_radius;
		cp = arg_cp;
	}
}

public class Ex5_03_2 {

	public static void main(String[] args) {
		
//		Sphere cube = new Sphere();
//		cube.radius = 5.5;
//		cube.cp = new double[] {1.2,3.4};
		
		Sphere cube = new Sphere( 5.5, new double[] {1.2, 3.4} );

		System.out.println( "半径：" + cube.radius );
		System.out.println( "中心座標：" + cube.cp[0] + "," +  cube.cp[1] );
		
	}

}
