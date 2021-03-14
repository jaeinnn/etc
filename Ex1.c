#include <stdio.h>

int num(int a, int b){
    if(a>b){
        return a; 
    }
    else{
        return b; 
    }
}

void main(){
  
  printf("%d\n", num(10,30) + num(40,20) ); 
  
}