#include <stdio.h>

int main()
{
     int a = 3; 
      a += 1; 
      
      printf("a=%d",  a); 
      printf("a=%d", ++a); 
      printf("a=%d", a++); 
      printf("a=%d", a); 
      
      return 0; 
}