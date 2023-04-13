package java_ex6_ex_4;

abstract class Widget {
	int weight = 0;
	String color;
}

class WidgetA extends Widget {
	WidgetA() {
		this.weight = 4; 
		this.color = "Red";
	}
}

class WidgetB extends Widget {
	String color = "Blue";
	WidgetB() {
		this.weight = 1;
		super.color = "Pink";
	}
}

class WidgetC extends Widget {
	WidgetC() {
		super.weight = 5; 
		this.color = "Yellow";
	}
}

class WidgetD extends Widget {
	WidgetD() {
		super.weight = 17; 
		super.color = "Green";
	}
}

public class Ex6_ex_4 {

	public static void main(String[] args) {
		Widget[] ws = { new WidgetA(),
					    new WidgetB(),		// color = Pink
					    new WidgetC(),
					    new WidgetD(),
					    new WidgetA(),
					    new WidgetB()};		// color = Pink
		
		// wsインスタンスでは、スーパークラスの変数colorが参照されている
		// ↓のws2インスタンスでは、サブクラスの変数colorが参照されている
		WidgetB ws2 = new WidgetB();		// color = Blue
		
		int sum = 0;
		for( Widget w : ws ) {
			System.out.println( w.color );
			sum += w.weight;
		}
		
		
		System.out.println( ws2.color );
		
		System.out.println( sum );
		
	}

}
