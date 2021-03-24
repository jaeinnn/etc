
abstract class A{
	abstract void display();
}

class B extends A{
	public B() {
		this.display();
	}
	public void display() {System.out.println("클래스 B");}
}

public class Test4{
	public static void main(String[] args) { 
		A obj1 = new B(); 
	}
}