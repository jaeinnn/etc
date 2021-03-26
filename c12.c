#include <stdio.h>

int main()
{
    int a[4]; 
    
    for(int i=0; i<4; i++)
    a[i] = i+1; 
    
    for(int i=0; i<4; i++)
    printf("%d", a[i]);
}