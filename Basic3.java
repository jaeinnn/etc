package test;

class A{
	private int a; 
	public A(int a) {
		this.a = a; 
	}
	
	public int getA() {
		return a;
	}
}

public class Basic3 {
	public static void main(String[] args) {
		A obj = new A(20); 
		int a = obj.getA(); 
	}

}
