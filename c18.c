#include <stdio.h>

int main()
{
   int a = 10;
   
   if(a>10)
   a += 5; 
   
   else
   a -= 5;
   
   if(a==15)
   ++a;
   
   else
   --a; 
   
   printf("a=%d",a); 
   
   return 0; 
}