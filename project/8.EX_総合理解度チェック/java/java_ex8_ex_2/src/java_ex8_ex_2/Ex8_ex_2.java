package java_ex8_ex_2;

public class Ex8_ex_2 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		try {
			
//			String str = "abc";
//			String str = "java.lang.ClassName";
			String str = new Exception().getClass().getName();
			int count = getNumSuperClass( str );
			
			System.out.println( "スーパークラスの数：" + count );
		}
		catch( ClassNotFoundException e ) {
			System.out.println( "クラスが見つかりませんでした！" );
		}
		catch( Exception e ) {
			System.out.println( "入力値が異常です。" );
		}
	}
	
	
	public static int getNumSuperClass( String fullQCN ) 
									throws ClassNotFoundException {
		Class<?> cls = Class.forName( fullQCN );
		int count = 0;
		
		while( cls.getSuperclass() != null ) {
			cls = cls.getSuperclass();
			System.out.println( cls );
			count++;
		}
		
		return count;
	}

}
