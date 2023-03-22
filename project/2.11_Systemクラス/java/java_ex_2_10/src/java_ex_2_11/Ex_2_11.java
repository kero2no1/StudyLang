package java_ex_2_11;

public class Ex_2_11 {

	public static void main(String[] args) throws InterruptedException  {

		System.out.println( 
				"\"out\"は静的変数で、"
				+ "PrintStreamオブジェクトへの参照が入っている" );
		
		long old_ms = System.currentTimeMillis();
		Thread.sleep( 1000 );	// スレッドを1000ms一時停止
		long now_ms = System.currentTimeMillis();
		System.out.println( now_ms - old_ms );
		
		System.out.println( now_ms );
		
		System.exit(0);		// 終了コードを指定、0は正常終了
	}

}
