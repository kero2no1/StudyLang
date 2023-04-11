package java_ex6_10_1;

class Person {
	static private int num = 0;
	String name;
	
	Person( String name ) {
		num++;
		this.name = name;
	}
	
	public String toString() {
		return "num=" + num + ", name=" + this.name;
	}
}


public class Ex6_10_1 {

	public static void main(String[] args) {
		Person p1 = new Person( "Keroichi" );
		System.out.println(p1);
		
		Person p2 = new Person( "Kerokero" );
		System.out.println(p2);

		System.out.println(p1);
	}

}
