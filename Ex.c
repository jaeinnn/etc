#include <stdio.h>


int main(){
    
    int i =2, j = 7; 
    int ret = 3; 
    
    switch(i+j/2){
        
        case 3 : ret = 4; break;
        case 5 : ret++; 
        case 4: --ret; 
        default: ret %= 3; 
    }
    
    printf("%d\n",ret);
}
