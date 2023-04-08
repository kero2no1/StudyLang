package java_ex6_02_1;

class GrandParent {
	int i;
	double d;
}

class Parent extends GrandParent {
	float f;
	String d;
}

class Child extends Parent {
	String s;
}

class M {
	float ff;
	String ss;
}

class N extends M {
	Double dd;
}

public class Ex6_02_1 {

	public static void main(String[] args) {
		Parent p;				// 親は子を受け入れられる
		p = new Child();
		p = new Parent();
		
		Child c;
		c = new Child();
//		c = new Parent();		// 子は親を受け入れられない

		c.i = 10;				// 子は継承元の変数をすべて参照できる(資産を継承するイメージ)
		c.f = 2.3f;
		c.s = "4567";
		c.d = "";
		// ただし同じ変数名が存在する場合は親の情報が隠ぺいされる(子の情報で上書きされるイメージ)
		// c.d はString型のdしか見えない
		System.out.println(c.d.getClass().getSimpleName());	// String
		
		N n = new N();
		n.dd = 1.1;
		n.ff = 2.2f;
		n.ss = "3.3";
		System.out.println( n.dd );
		System.out.println( n.ff );
		System.out.println( n.ss );
		
	}

}
