package java_ex6_08_1;

class Person {
	String name;
	int age;
	
	public Person( String name, int age ) {
		this();					// privateは同じクラスから呼出し可能
		this.name = name;
		this.age = age;
	}
	
	private Person() {
		
	}
	
	protected Person( String name ) {
		this.name = name;
	}
}

class Child extends Person{
	Child( String name ) {
		// スーパークラスのコンストラクタにprivateがあるため、
		// どのコンストラクタを呼び出すのか、明示的に指示する必要がある
//		super();			// privateはサブクラスから呼出しできない
		super( name );		// protectedはサブクラスから呼出し可能
		super.age = 10;
	}
}

public class Ex6_08_1 {

	public static void main(String[] args) {
		Person p1 = new Person( "John", 30);
		System.out.println( p1.name );
		System.out.println( p1.age );
		
//		Person p2 = new Person();			// privateなクラスは呼び出せない
		Person p2 = new Person( "Keroichi" );
		System.out.println( p2.name );
		
		p2 = new Child( "Son" );
		System.out.println( p2.name );
		System.out.println( p2.age );
	}

}
