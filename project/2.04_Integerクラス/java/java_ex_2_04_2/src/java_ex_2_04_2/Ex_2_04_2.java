package java_ex_2_04_2;

public class Ex_2_04_2 {

	public static void main(String[] args) {
		String s = "125";
		int i = Integer.valueOf(s).intValue();
		
		// parseIntメソッドを使った形にする
		i = Integer.parseInt(s);
		
		//valueOfメソッドは、Integerオブジェクトを返し、
		// parseIntはint型で返す
		
		i += 10;
		System.out.println(i);

	}

}

