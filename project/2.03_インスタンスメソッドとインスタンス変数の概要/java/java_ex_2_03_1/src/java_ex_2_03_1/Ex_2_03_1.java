package java_ex_2_03_1;

public class Ex_2_03_1 {

	public static void main(String[] args) {
		String s = "\"Romeo, where art thou?\"";
		
		System.out.println(s.substring(s.length()-10));

		// ""で囲むことで、Stringオブジェクトは生成されている。
		System.out.println("\"Romeo, where art thou?\"".substring(0,10));
		
		
	}

}
