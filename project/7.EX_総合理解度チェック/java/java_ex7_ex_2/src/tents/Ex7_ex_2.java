package tents;

public class Ex7_ex_2 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Tent[] ts = new Tent[4];
		
		ts[0] = new TentA();
		ts[1] = new TentB();
		ts[2] = new TentC();
		ts[3] = new TentD();
		
		for( Tent t : ts ) {
			if( t instanceof Waterproof ) System.out.println( t.getClass() );
		}

	}

}
