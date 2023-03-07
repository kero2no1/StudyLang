package java_ex_1_12;

public class Ex_1_12 {

	public static void main(String[] args) {
		// Javaには整数拡張があり、
		// char, byte, short型は式の評価中に自動的にint型になる。
		
		short s1, s2;
		
		// わかりづらいエラーの例①
		// 符号反転の際にint型に拡張されるのが原因
		s1 = 1;
		s2 = -s1;
		
		// わかりづらいエラーの例②
		// 同じ型だけど式の評価でint型に拡張されるのが原因
		s1 = 1;
		s2 = 1;
		s1 = s1 + s2;
		s1 = s1 + 1;

		// でも、これはOK
		// s1 = (short)(s1 + s2) と同等だから ※Java言語仕様より
		s1 += s2;
		s1 = (short)(s1 + s2);


	}

}
