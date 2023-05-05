package java_ex6_02_3;

class G {
	static int x = 100;
}

class H extends G {
	int x = 10;
	
	void display() {
		System.out.println( "Hクラスのx：" + x );
		System.out.println( "Gクラスのx：" + super.x );
		System.out.println( "Gクラスのx：" + G.x );
	}
}

public class Ex6_02_3 {

	public static void main(String[] args) {
		H h = new H();
		
		h.display();
		
	}

}
