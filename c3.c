#include <stdio.h>

int add(int a, int b){
    return a+b; 
}

int minus(int a, int b){
    return a-b; 
}

void main()
{
    int a= 5; 
    int b= 3; 
    
    printf("%d", add(a,b) * minus(a,b));
    
}