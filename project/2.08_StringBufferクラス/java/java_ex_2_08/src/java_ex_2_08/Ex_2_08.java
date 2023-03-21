package java_ex_2_08;

public class Ex_2_08 {

	public static void main(String[] args) {
		// Stringオブジェクトは変更できないが、
		// StringBufferオブジェクトを使うと変更が可能
		StringBuffer sb1 = new StringBuffer();
		System.out.println( sb1.capacity() );	// デフォルト16文字
		
		StringBuffer sb2 = new StringBuffer( "abc" );	// 3文字＋16文字
		System.out.println( sb2.capacity() );
		System.out.println( sb2.length() );
		
		sb1.append( "defg" );
		System.out.println( sb1.capacity() );
		System.out.println( sb1.length() );
		
		sb1.insert(0, sb2);		// 先頭に追加する
		System.out.println( sb1 );
		System.out.println( sb1.capacity() );
		System.out.println( sb1.length() );
		
		sb1.append( "hijk" );	// 後ろに追加される
		System.out.println( sb1 );
		
		sb1.setCharAt( 0, 'A' );	// 指定位置の文字を置き換え
		System.out.println( sb1 );
		sb1.delete( 4, 7 );			// 中間文字を削除すると詰める
		System.out.println( sb1 );
		
	}

}
