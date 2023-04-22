package p;

// 静的importステートメントという機能もある
// あるクラスの静的メソッドや静的クラスを呼び出す際、
// クラス名を省略して記述することができる。
import static java.lang.Math.*;

// 別パッケージ内にアクセスすのはimportステートメント
// qディレクトりまでで、サブディレクトリは対象外
import q.D;
import q.r.E;
import q.r.F;

public class PackageDemo {
	public static void main( String args[] ) {
		
		// 同じパッケージ内のクラス
		A a = new A();
		a.a1();
		B b = new B();
		b.b1();
		C c = new C();
		c.c1();
				
		// 別のパッケージ内のクラス
		D d = new D();
		d.d1();			// public 修飾されたメソッドであればアクセス可
//		d.d2();			// protected 修飾は見えない(不可視)
						// →別パッケージ内のサブクラスからはアクセスできる。
//		d.d3();			// もちろんprivate 修飾も見えない(不可視)
		E e = new E();
		e.e1();
		F f = new F();
		f.f1();
		
		// パッケージ名とクラス名を合わせた「完全修飾クラス名」を
		// 指定することで、importしなくても使うことができる。
		s.t.u.G g = new s.t.u.G();
		g.g1();
		
		// 静的importで、Mathクラスの静的変数Math.PIを使っているところ
		System.out.println( "PI:" + PI );
		
		
	}
}
