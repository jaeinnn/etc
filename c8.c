#include <stdio.h>

int main()
{
    
    char sTemp[16] = "Hello World"; 
    char * p = sTemp; 
    
    printf("%c", *(p + 6)); 
    
    return 0; 
}