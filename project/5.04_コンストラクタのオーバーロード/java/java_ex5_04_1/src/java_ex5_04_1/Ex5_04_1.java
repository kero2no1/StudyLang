package java_ex5_04_1;

class Circle {
	double cx;			// 中心座標x
	double cy;			// 中心座標y
	double radius;		// 半径
	
	Circle ( double arg_radius ){
		cx = 0.0;
		cy = 0.0;
		radius = arg_radius;
	}
	
	Circle ( double arg_cx, double arg_cy, double arg_radius ){
		cx = arg_cx;
		cy = arg_cy;
		radius = arg_radius;
	}
	
	Circle ( String arg_radius ){
		cx = 9.9;
		cy = 8.8;
		radius = Double.valueOf( arg_radius );
	}
	
}

public class Ex5_04_1 {

	public static void main(String[] args) {
		// シグネチャがdouble引数１つのコンストラクタが実行される
		Circle c1 = new Circle( 5.5 );
		System.out.println( c1.cx + ", " + c1.cy + ", " + c1.radius );
		
		// シグネチャがdouble引数３つのコンストラクタが実行される
		Circle c2 = new Circle( 1.2, 3.4, 5.5 );
		System.out.println( c2.cx + ", " + c2.cy + ", " + c2.radius );
		
		// シグネチャがString引数１つのコンストラクタが実行される
		Circle c3 = new Circle( "5.5" );
		System.out.println( c3.cx + ", " + c3.cy + ", " + c3.radius );
	}

}
