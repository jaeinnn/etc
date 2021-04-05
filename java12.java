package test;

public class Sujebi { 
	 public static void main(String[] args){
	  int[] arr = {1,2,3,4,5}; 
	  int sum = 0; 
/*
java에서는 for each반복문을 아래와 같이 작성한다
for(type var : array) 
{
 statements using var; 
}

이는 아래 문장과 동일하게 동작한다 
for(int i=0; i<arr.length; i++)
{
type var = arr[i]; 
statements using var;  
}
*/ 
	 for (int num : arr) { 
	 sum += num; 
	} 
	System.out.print(sum); 
	} 
	} 