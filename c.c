#include <stdio.h>

int main()
{
    int i; 
    int a[5] = {1,2,3,4,5}; 
    int length = 
    sizeof(a)/sizeof(a[0]);
    
    for(i=0; i<length; i++){
        printf("%d", a[i]);
    }
}