package java_ex_2_04_1;

public class Ex_2_04_1 {

	public static void main(String[] args) {
		// 基本データ型のラッパークラス
		// 値をカプセル化するもの
		String s = "30";
		Integer objInt = Integer.valueOf( s );
		
		int i = objInt.intValue();
		System.out.println(Integer.toHexString(i));
		
		// String型でなくても設定可能
		objInt = Integer.valueOf(30);
		
		
	}

}
