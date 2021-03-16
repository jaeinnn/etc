#include <stdio.h>

int main()
{
    int a = 5; 
    int b = 8; 
    
    a/=3; 
    
    switch(++a){
        case 2: b-=3; 
        case 6: b++; 
        case 3:
        if(b%2==0){
            b+=2;
        }
        else{
            b--; 
        }
        default: b *= 2; 
    }
    
    printf("%d\n",b++);
    
}