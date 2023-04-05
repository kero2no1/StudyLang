package java_ex5_05_1;

class Sphere {
	double cx;
	double cy;
	double cz;
	double radius;
	
	Sphere() {
		this( 0.0, 0.0, 0.0, 1.0 );		// コンストラクタを呼び出すことができる
//		cx = 0.0;
//		cy = 0.0;
//		cz = 0.0;
//		radius = 1.0;
	}
	
	Sphere( double radius ) {
		this( 0.0, 0.0, 0.0, radius );
//		cx = 0.0;
//		cy = 0.0;
//		cz = 0.0;
//		radius = arg_radius;
	}
	
	Sphere( double cx, double cy, double cz, double radius ) {
		this.cx = cx;					// thisキーワードを用いてインスタンス変数にアクセス
		this.cy = cy;
		this.cz = cz;
		this.radius = radius;
	}
	
}

public class Ex5_05_1 {

	public static void main(String[] args) {
		Sphere c1 = new Sphere();
		System.out.println( c1.cx + ", " + 
							c1.cy + ", " + 
							c1.cz + ", " +
							c1.radius );

		Sphere c2 = new Sphere( 9.9 );
		System.out.println( c2.cx + ", " + 
							c2.cy + ", " + 
							c2.cz + ", " +
							c2.radius );
					
		Sphere c3 = new Sphere( 1.2, 2.3, 3.4, 5.5 );
		System.out.println( c3.cx + ", " + 
							c3.cy + ", " + 
							c3.cz + ", " +
							c3.radius );
					
	}

}