package q;

public class D {
	
	protected int dd = 88;		// 別パッケージのサブクラスから参照させている
	
	public void d1() {
		System.out.println( "d1 @ qパッケージ" );
	}
	
	protected void d2() {
		System.out.println( "d2 @ qパッケージ" );
	}

	private void d3() {
		System.out.println( "d3 @ qパッケージ" );
	}
}
