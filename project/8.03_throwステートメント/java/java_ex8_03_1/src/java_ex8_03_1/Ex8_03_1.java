package java_ex8_03_1;

public class Ex8_03_1 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		
		try {
			// 例外発生時はスタックにつまれた処理をさかのぼってcatchを検索する
			
			System.out.println( "before : main" );
			a();
			// ⑩もう例外はないのでこの処理を実行
			System.out.println( "after : main");
		}
		catch( Exception e ) {
			System.out.println( "main: " + e );
		}
		// ↑サブクラスより先にスーパークラスをキャッチすると
		// ↓のブロックは到達不可になり、コンパイラはエラーにする。
		// コンパイラは順序とパラメータの型をチェックしている。
//		catch( NumberFormatException e ) {
//			
//		}
		finally {
			// tryブロックには少なくとも１つのcatchかfinallyブロックが必要
			// finallyブロックは必ず実行するようになっている
			
			// ⑪↑のcatchブロックの実行が終わったらここを実行
			System.out.println( "main: finally" );
		}
		

	}
	
	private static void a() {
		try {
			System.out.println( "before : a" );
			b();
			System.out.println( "after : a");
		}
		catch( Exception e ) {
			// ⑧ここでbメソッドでthrowされたnewされた例外をキャッチ
			System.out.println( "a: " + e );
		}
		finally {
			// ⑨↑のcatchブロックの実行が終わったらここを実行
			System.out.println( "a: finally" );
		}
	}
	
	private static void b() {
		try {
			System.out.println( "before : b" );
			c();
			System.out.println( "after : b");
		}
		catch( ArrayIndexOutOfBoundsException e ) {
			// ⑥ここでcメソッドでthrowされた例外をキャッチ
			System.out.println( "b: " + e );
			// 新しく例外オブジェクトを生成してthrow
			throw new ArithmeticException();
		}
		finally {
			// ⑦↑のcatchブロックの実行が終わったらここを実行
			System.out.println( "b: finally" );
		}
	}
	
	private static void c() {
		try {
			System.out.println( "before : c" );
			d();
			System.out.println( "after : c");
		}
		catch( ArrayIndexOutOfBoundsException e ) {
			// ④ここでdメソッドでthrowされた例外をキャッチ
			System.out.println( "c: " + e );
			throw e;
		}
		finally {
			// ⑤↑のcatchブロックの実行が終わったらここを実行
			System.out.println( "c: finally" );
		}
	}
	
	private static void d() {
		try {
			System.out.println( "before : d" );
			Integer[] aryInt = new Integer[10];
			
			aryInt[20] = 10;		// ①ここで例外が発生→catchブロックの検索開始

			System.out.println( "after : d");
		}
		catch( ArithmeticException e ) {
			System.out.println( "d: " + e );
		}
		catch( ArrayIndexOutOfBoundsException e ) {
			// ②ここでキャッチ
			System.out.println( "d: " + e );
			throw e;	// 該当するcatchブロックを検索するが、
						// 同じtry-catchブロック内の残りの処理は実行しない
			// ↓到達不能コードなのでエラーにある
//			System.out.println( "catch : d");
		}
		finally {
			// ③↑のcatchブロックの実行が終わったらここを実行
			System.out.println( "d: finally" );
		}
	}
	


}
