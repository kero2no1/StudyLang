package java_ex7_01_6;

interface AntiLockBrakes {
	// インターフェース変数は定数
	// public static finalとして扱われるため、
	// 一般的には修飾は省略される
	public static final String ss = "ABS";
	
	// メソッドの場合はpublic abstractとして扱うため
	// こちらも修飾は省略される
	public abstract void AntiLock_Brakes();
}

interface CruiseControl {
	String ss = "CC";
	
	// インターフェースを用いることで、
	// インターフェース内で定義したメソッドの実装を保証することができる。
	// →抽象メソッドが未実装の場合はエラーになる。
	void Cruise_Control();
}

interface PowerSteering {
	String ss = "PS";
	void Power_Steering();
}

abstract class Auto {
	abstract void display();
}

class Model1 extends Auto implements PowerSteering {
	void display() {
		System.out.println( ss );
	}
	
	public void Power_Steering() {
		this.display();
	}
	
}

class Model2 extends Auto 
			 implements AntiLockBrakes, CruiseControl {

	@Override
	public void Cruise_Control() {
		// TODO 自動生成されたメソッド・スタブ
		this.display( CruiseControl.ss );
	}

	@Override
	public void AntiLock_Brakes() {
		// TODO 自動生成されたメソッド・スタブ
		this.display( AntiLockBrakes.ss );
	}

	@Override
	void display() {
		// TODO 自動生成されたメソッド・スタブ
		System.out.println( AntiLockBrakes.ss + "+" + CruiseControl.ss );
	}
	
	void display( String s ) {
		this.display();
		System.out.println( s );
	}
	
}

class Model3 extends Auto implements CruiseControl {

	@Override
	public void Cruise_Control() {
		// TODO 自動生成されたメソッド・スタブ
		this.display();
	}

	@Override
	void display() {
		// TODO 自動生成されたメソッド・スタブ
		System.out.println( ss );
	}
	
}

public class Ex7_01_6 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Model1 m1 = new Model1();
		Model2 m2 = new Model2();
		Model3 m3 = new Model3();

		System.out.println( "Model1クラス" );
		m1.Power_Steering();
		System.out.println( "Model2クラス" );
		m2.AntiLock_Brakes();
		m2.Cruise_Control();
		System.out.println( "Model3クラス" );
		m3.Cruise_Control();

	}

}
