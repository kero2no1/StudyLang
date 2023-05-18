package java_ex6_ex_3;

abstract class Monster {
	void display() {}
}

class Vampire extends Monster {
	void display() {
		System.out.println( "Vampire" );
	}
}

class Werewolf extends Monster {
	void display() {
		System.out.println( "Werewolf" );
	}
}

class Zombie extends Monster {
	void display() {
		System.out.println( "Zombie" );
	}
}


public class Ex6_ex_3 {

	public static void main(String[] args) {
		Monster[] mon = new Monster[6];
		
		for( int i = 0; i < 6; i += 3 ) {
			mon[ i + 0 ] = new Vampire();
			mon[ i + 1 ] = new Werewolf();
			mon[ i + 2 ] = new Zombie();
		}
		
		for( int i = 0; i < 6; i++ ) {
			mon[ i ].display();
		}
	}

}
