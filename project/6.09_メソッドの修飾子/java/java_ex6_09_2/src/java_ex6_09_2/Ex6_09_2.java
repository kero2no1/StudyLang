package java_ex6_09_2;

// クラスから生成できるインスタンスを１つに限定する手法
class Singleton {
	static Singleton singleton;
	
	private Singleton() {
		// コンストラクタがクラスの外部から呼び出せなくなる
	}
	
	// 外部でインスタンスを得るためには、この静的メソッドを使う
	public static Singleton getInstance() {
		// インスタンスが生成されていない場合だけ、インスタンスを生成する
		if ( singleton == null ) singleton = new Singleton();
		
		// オブジェクトへの参照を返す
		return singleton;
	}
}

abstract class Vehicle {
	abstract int numWheels();
}

class Car extends Vehicle {
	int numWheels() {
		return 4;
	}
}

class Truck extends Vehicle {
	int numWheels() {
		return 8;
	}
}

public class Ex6_09_2 {

	public static void main(String[] args) {
		Singleton s1 = Singleton.getInstance();
		Singleton s2 = Singleton.getInstance();
		
		if ( s1 == s2 ) {
			// s1 と s2 が同じオブジェクトを参照している
			System.out.println( "Equal" );
		}
		else {
			System.out.println( "Not equal" );
		}
		
		Car c1 = new Car();
		Truck t1 = new Truck();
		
		System.out.println( c1.numWheels() );
		System.out.println( t1.numWheels() );
		
	}

}
