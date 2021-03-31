#include <stdio.h>

int main()
{
   
    int a = 10; 
    int *p = &a; 
    printf("%d %d\n", a, *p); 

    a = 30; 
    printf("%d %d\n", a, *p); 

    return 0; 
}