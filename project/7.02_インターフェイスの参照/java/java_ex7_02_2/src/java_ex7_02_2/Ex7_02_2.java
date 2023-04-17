package java_ex7_02_2;

interface LuminousObject {
	void lightOff();
	void lightOn();
}

class SolidObject {
	void display() {
		System.out.println( "Solid ");
	}
}

class Cone extends SolidObject {
	void display() {
		System.out.println( "Cone" );
	}
}

class Cube extends SolidObject {
	void display() {
		System.out.println( "Cube" );
	}
}

class LuminousCube extends Cube implements LuminousObject {

	@Override
	public void lightOff() {
		// TODO 自動生成されたメソッド・スタブ
		System.out.println( "Cube : LightOff" );
	}

	@Override
	public void lightOn() {
		// TODO 自動生成されたメソッド・スタブ
		System.out.println( "Cube : LightOn" );
	}
	
}

class LuminousCone extends Cone implements LuminousObject {

	@Override
	public void lightOff() {
		// TODO 自動生成されたメソッド・スタブ
		System.out.println( "Cone : LightOff" );
	}

	@Override
	public void lightOn() {
		// TODO 自動生成されたメソッド・スタブ
		System.out.println( "Cone : LightOn" );
	}
	
}



public class Ex7_02_2 {

	public static void main(String[] args) {
		// インターフェースを参照する変数
		LuminousObject infLumObj;
		LuminousCone LumObj;// = new LuminousCone();
		
		infLumObj = new LuminousCone();
		// インターフェース中で定義された変数やメソッドでないと参照できない
//		infLUmObj.display();
		LumObj = new LuminousCone();
		LumObj.display();
		infLumObj.lightOn();		// インターフェースの参照を通じてメソッドが自動で選択される
		infLumObj.lightOff();
		
		infLumObj = new LuminousCube();
		infLumObj.lightOn();
		infLumObj.lightOff();
		

	}

}
