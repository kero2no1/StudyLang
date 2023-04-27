package java_ex8_ex_2;

public class Ex8_ex_2 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		int a = getNumSuperClass( new Exception().getClass().getName() );
//		int b = getNumSuperClass( 10.getClass() );
	}
	
	
	public static int getNumSuperClass( String fullClass ) {
		
//		Class superClass = obj.getClass().getSuperclass();

		try {
			System.out.println( Class.forName( fullClass ).getSuperclass() );
		}
		catch ( ClassNotFoundException e ) {
			
		}
		
		
		return 0;
	}

}
