package java_ex_2_07_2;

public class Ex_2_07_2 {

	public static void main(String[] args) {

		// 16進数
		short va_16 = Short.parseShort("22",16);
		System.out.println( va_16 );
		
		// 8進数
		short va_8 = Short.parseShort("33",8);
		System.out.println( va_8 );
		
		// 10進数
		short va_10 = Short.parseShort("44",10);
		System.out.println( va_10 );
		
		// 合計値
		System.out.println( va_16 + va_8 + va_10 );
	}

}
