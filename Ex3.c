#include <stdio.h>

int hrd(int n){
    
    if (n<=0)
     return 1;
     
     else
      printf("%d",n);
      
      hrd(n-1);
    
}
  int main() {
      hrd(5);
       return 0;
  }
