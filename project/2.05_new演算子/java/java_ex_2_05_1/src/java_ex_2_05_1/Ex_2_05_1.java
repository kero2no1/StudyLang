package java_ex_2_05_1;

public class Ex_2_05_1 {

	public static void main(String[] args) {
		// インスタンス化をするときはnew演算子
		// ただし、Stringはコンパイラ側で
		// 文字列をStringオブジェクトとして自動的に扱う
		// そのため、↓のようにnewするとメモリの無駄になる
		// →"check"をメモリ上に生成し、それを引数に、
		// newで新しくメモリ上に同じものを生成。
		// 最初に生成した"check"は使われなくなり無駄、という流れらしい。
		String ss = new String("check");
		System.out.println(ss);
		
		// このコンストラクタはJava9から非推奨になった
//		Integer obj1 = new Integer(10);
		Integer obj1 = Integer.valueOf(10);
		Integer obj2 = Integer.valueOf("10");
		Integer obj3 = obj1;
		
		int i1 = obj1.intValue();
		int i2 = obj2.intValue();
		int sum = i1 + i2;
		
		System.out.println(i1);
		System.out.println(i2);
		System.out.println(sum);
		System.out.println(obj1.equals(obj2));
		System.out.println(obj1.equals(obj3));
		
		System.out.println("");
		
		// ところで、これはなぜに中身が出力されるのか？
		System.out.println(obj1);
		
		// ↓最初にString.valueOf(x)メソッドを呼び出して、
		//   出力オブジェクトの文字列値を取得し、
		//   print(String)を呼び出してからprintln()を呼び出す動き
		String s = String.valueOf(obj1); 
		System.out.println(s);
		
	}

}
