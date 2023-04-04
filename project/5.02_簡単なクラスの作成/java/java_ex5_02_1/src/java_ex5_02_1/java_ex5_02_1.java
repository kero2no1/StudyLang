package java_ex5_02_1;

class Person {
	String name;
	int age;
	float income;
}

public class java_ex5_02_1 {

	public static void main(String[] args) {

		Person p1 = new Person();
		p1.name = "Keroichi";
		p1.age = 40;
		p1.income = 20_000_000;
		
		System.out.println( p1.name + "は" );
		System.out.println( p1.age + "歳で" );
		System.out.println( p1.income + "円の収入です");
	}

}
