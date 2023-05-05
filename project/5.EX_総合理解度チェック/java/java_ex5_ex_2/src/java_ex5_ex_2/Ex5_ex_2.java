package java_ex5_ex_2;

class Trapezoid {
	double b1, b2, h;
	
	Trapezoid( double b1, double b2, double h ) {
		this.b1 = b1;
		this.b2 = b2;
		this.h  = h;
	}
	
	double getArea() {
		return ( this.b1 + this.b2 ) * this.h * 0.5;
	}
}

public class Ex5_ex_2 {

	public static void main(String[] args) {
		Trapezoid[] tp = new Trapezoid[3];
		
		tp[0] = new Trapezoid(2, 3, 4);
		tp[1] = new Trapezoid(3, 2, 2);
		tp[2] = new Trapezoid(4.4, 5.5, 6.6);
		
		System.out.println( tp[0].getArea() );
		System.out.println( tp[1].getArea() );
		System.out.println( tp[2].getArea() );

	}

}
