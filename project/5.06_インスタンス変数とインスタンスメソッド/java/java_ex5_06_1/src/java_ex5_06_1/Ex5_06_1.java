package java_ex5_06_1;

class Sphere {
	double cx, cy, cz, radius;
	
	Sphere() {
		this( 0.0, 0.0, 0.0, 1.0 );		// コンストラクタを呼び出すことができる
	}
	
	Sphere( double radius ) {
		this( 0.0, 0.0, 0.0, radius );
	}
	
	Sphere( double cx, double cy, double cz, double radius ) {
		this.cx = cx;					// thisキーワードを用いてインスタンス変数にアクセス
		this.cy = cy;
		this.cz = cz;
		this.radius = radius;
	}
	
	// インスタンスメソッド
	void move( double cx, double cy, double cz ) {
		this.cx += cx;
		this.cy += cy;
		this.cz += cz;
	}
	
	void scale( double radius ) {
		this.radius = radius;
	}
	
}

public class Ex5_06_1 {

	public static void main(String[] args) {
		Sphere c1 = new Sphere();
		System.out.println( c1.cx + ", " + 
							c1.cy + ", " + 
							c1.cz + ", " +
							c1.radius );

		c1.move( 2, 2, 2 );
		System.out.println( c1.cx + ", " + 
							c1.cy + ", " + 
							c1.cz + ", " +
							c1.radius );
					
		c1.scale( 3.3 );
		System.out.println( c1.cx + ", " + 
							c1.cy + ", " + 
							c1.cz + ", " +
							c1.radius );
		
	}

}
