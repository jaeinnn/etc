#include <stdio.h>

int main()
{
    char sTemp[16] = "Hello World"; 
    
    printf("%s", &sTemp[6]);

    return 0;
}