package java_ex7_ex_1;

// 継承関係にあり、処理を再利用したいときは抽象クラスを使う
// 抽象クラスと具象クラスの関係はis A
// 共通の処理をまとめたりする
abstract class Robot {
	// 共通の処理として、自クラスを出力することができる
	void display() {
		System.out.println( this.toString() );
	}
	
	@Override
	public String toString() {
		String s = (this.getClass()).toString();
		return "MyClass is " + s.substring( s.lastIndexOf(".")+1) + ":";
	}
}

// クラス仕様として型定義するものがインターフェース
// インターフェースと実装クラスの関係はcan do
// できることを定義し、詳細は外から使う人に任せる
interface Locomotion {
	void forward();
	void reverse();
	void stop();
}

interface Sound {
	void beep();
}

class RobotA extends Robot {

}

class RobotB extends Robot implements Locomotion{

	@Override
	public void forward() {
		// TODO 自動生成されたメソッド・スタブ
		
	}

	@Override
	public void reverse() {
		// TODO 自動生成されたメソッド・スタブ
		
	}

	@Override
	public void stop() {
		// TODO 自動生成されたメソッド・スタブ
		System.out.println( "RobotB-stop" );
	}

}

class RobotC extends Robot implements Locomotion, Sound {

	@Override
	public void forward() {
		// TODO 自動生成されたメソッド・スタブ
		
	}

	@Override
	public void reverse() {
		// TODO 自動生成されたメソッド・スタブ
		
	}

	@Override
	public void stop() {
		// TODO 自動生成されたメソッド・スタブ
		System.out.println( "RobotC-stop" );
	}

	@Override
	public void beep() {
		// TODO 自動生成されたメソッド・スタブ
		System.out.println( "RobotC-beep" );
	}

}

class RobotA1 extends RobotA implements Sound {

	@Override
	public void beep() {
		// TODO 自動生成されたメソッド・スタブ
		System.out.println( "RobotA1-beep" );
	}
	
}

class RobotB1 extends RobotB implements Sound {

	@Override
	public void beep() {
		// TODO 自動生成されたメソッド・スタブ
		System.out.println( "RobotB1-beep" );
	}

}

class RobotB2 extends RobotB {
	
}

class RobotC1 extends RobotC {
	
}


public class Ex7_ex_1 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
//		Object[] objs = new Object[ 7 ];
		Robot[] objs = new Robot[ 7 ];
		
		objs[0] = new RobotA();
		objs[1] = new RobotB();
		objs[2] = new RobotC();
		objs[3] = new RobotA1();
		objs[4] = new RobotB1();
		objs[5] = new RobotB2();
		objs[6] = new RobotC1();
		
		for( Robot robo:objs ) {
			robo.display();
			if( robo instanceof Sound ) ((Sound)robo).beep();
			if( robo instanceof Locomotion ) ((Locomotion)robo).stop();
		}

	}

}
