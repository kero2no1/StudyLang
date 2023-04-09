package java_ex6_02_2;

class S {
	Integer x;
}

class T extends S {
	StringBuffer x;
}


public class Ex6_02_2 {

	public static void main(String[] args) {
		
		S s = new S();
		T t = new T();
		
		s.x = Integer.parseInt("123");
		t.x = new StringBuffer("123");
		
		System.out.println( s.x );
		System.out.println( s.x.getClass().getSimpleName() );
		
		System.out.println( t.x );
		System.out.println( t.x.getClass().getSimpleName() );
	}

}
