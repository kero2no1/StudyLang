package java_ex7_04_1;

interface I1 {
	
}

interface I2 {
	
}

interface I3 extends I1, I2 {
	
}

interface I4 {
	
}

class X implements I3 {
	
}

class W extends X implements I4 {
	
}


public class Ex7_04_1 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		
		W w = new W();
		
		// instanceof演算子
		// オブジェクトが特定のクラスかどうか、または、
		// 特定のインターフェースが実装されているかどうかを確認する
		System.out.println( "I1：" + ( w instanceof I1 ) );
		System.out.println( "I2：" + ( w instanceof I2 ) );
		System.out.println( "I3：" + ( w instanceof I3 ) );
		System.out.println( "I4：" + ( w instanceof I4 ) );
		System.out.println( "X ：" + ( w instanceof X  ) );
	}

}
