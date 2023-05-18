package java_ex6_06_3;

abstract class Shape {
	void display() {}
}

class Circle extends Shape {
	void display() {
		System.out.println( "Circle" );
	}
}

class Rectangle extends Shape {
	void display() {
		System.out.println( "Rectangle" );
	}
}

class Triangle extends Shape {
	void display() {
		System.out.println( "Triangle" );
	}
}

class Trapezoid extends Shape {
	void display() {
		System.out.println( "Trapezoid" );
	}
}

class Rhombus extends Shape {
	void display() {
		System.out.println( "Rhombus" );
	}
}

public class Ex6_06_3 {

	public static void main(String[] args) {
		Shape s = new Circle();
		s.display();
		s = new Rectangle();
		s.display();
		s = new Triangle();
		s.display();
		
		s = new Trapezoid();
		s.display();
		s = new Rhombus();
		s.display();
	}

}
