#include <stdio.h>

int main()
{
   int a = 10; 
   int b = (a>=10) ? a+5 : a-5; 
   
   int c = (b != 15) ? b + 10 : b - 10;
   
   printf("b=%d, c=%d", b, c); 
   
   return 0; 
}