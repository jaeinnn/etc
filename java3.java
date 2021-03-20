package test;

public class Test {
	
	static int[] arr() {
		int a[] = new int[10]; 
		for(int i=0; i<10; i++)
			a[i] = i; 
		return a;
	}
	
	public static void main(String[] args) {
		int a[] = arr(); 
		for(int i=0; i<10; i++)
			 System.out.print(a[i] + " ");
	}
}
