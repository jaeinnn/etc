package test;

public class Test {
	static void sort(int[] a) {
		int n = a.length; 
		
		for(int i = 0; i<n-1; i++) {
			int idxLeast = i; 
			
			for(int j=i+1; j<n; j++) {
				if(a[j] < a[idxLeast]) {
					idxLeast = j; 
				}
			}
			
			if(idxLeast != i) {
				int tmp = a[i];
				a[i] = a[idxLeast];
				a[idxLeast] = tmp; 
			}
			
			for(int x=0; x<a.length; x++) {
				System.out.print(a[x] + "" ); //(a)
			}
			System.out.print("\n\n"); 
		}
	}

	public static void main(String[] args) {
		int a[] = {7,4,5,1,3};
		sort(a); 
	}
}
