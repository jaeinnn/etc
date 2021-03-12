#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a = 10; 
    int b = 20; 
    
    swap(&a, &b);
    
    printf("%d %d\n", a, b);
    
    return 0;

}

void swap(int *a, int *b)
{
    int temp = 0; 
    
    temp = *a;
    *a = *b;
    *b = temp; 
}