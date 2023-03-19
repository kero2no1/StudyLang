package java_ex_2_03_2;

public class Ex_2_03_2 {

	public static void main(String[] args) {
		String s = "11,22,33,44,55";
		
		int ep = s.lastIndexOf(",");
		System.out.println(s.substring(ep+1));
		
		
	}

}
