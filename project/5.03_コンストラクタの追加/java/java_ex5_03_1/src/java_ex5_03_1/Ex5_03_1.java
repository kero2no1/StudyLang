package java_ex5_03_1;

class Person {
	String name;
	int age;
	float income;
	
	Person( String arg_name, int arg_age, float arg_income){
		name = arg_name;
		age = arg_age;
		income = arg_income;
	}
}

public class Ex5_03_1 {

	public static void main(String[] args) {

//		Person p1 = new Person();		// 引数なしコンストラクタを明示的に作成しないとエラー
//		p1.name = "Keroichi";
//		p1.age = 40;
//		p1.income = 20_000_000;
		
		Person p1 = new Person( "Keroichi", 40, 20_000_000 );
		
		System.out.println( p1.name + "は" );
		System.out.println( p1.age + "歳で" );
		System.out.println( p1.income + "円の収入です");
	}

}