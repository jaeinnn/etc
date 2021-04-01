#include <stdio.h>

int main()
{
  int a = 11; 
  
  if(a==10)
  a--;
  
  else if(a>10)
  a++; 
  
  else 
  a += 10; 
  
  printf("a=%d", a--);
  
  return 0; 
}