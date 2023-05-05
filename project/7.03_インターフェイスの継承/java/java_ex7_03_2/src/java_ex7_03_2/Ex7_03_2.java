package java_ex7_03_2;

interface K1 {
	int intK = 1;
	void methodK();
}

interface K2 extends K1 {
	void methodK();
}

interface K3 extends K2 {
	void methodK();
}

class U implements K3 {

	@Override
	public void methodK() {
		// TODO 自動生成されたメソッド・スタブ
		System.out.println( intK );
	}
	
}

public class Ex7_03_2 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		U u = new U();
		
		u.methodK();
	}

}
