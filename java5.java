package test;

class A {
	int a;

	public A(int a) {
		this.a = a + 1;
	}

	void display() {
		System.out.println("a=" + a);
	}
}

class B extends A {
	public B(int a) {
		super(a);
		super.display();
	}
}

public class Test3 {
	public static void main(String[] args) {
		B obj = new B(20);
	}
}
