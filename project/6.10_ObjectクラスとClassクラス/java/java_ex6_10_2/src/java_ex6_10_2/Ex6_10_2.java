package java_ex6_10_2;

public class Ex6_10_2 {

	public static void main(String[] args) {
		Integer iobj = 10;
		// getClass()はObjectクラスのメソッド
		System.out.println( iobj.getClass() );								// 現在のオブジェクトのクラスオブジェクトを取得
		// getSuperClass(), getName()はClassクラスのメソッド
		System.out.println( iobj.getClass().getSuperclass() );				// そのクラスのスーパークラスのクラスオブジェクト
		System.out.println( iobj.getClass().getSuperclass().getName() );	// そのデータ型の名前(スーパークラスの名前)を取得
	}

}
