#include <iostream>

using namespace std;

int main(){
    
  int i; 
  int m1 = 0, m2 = 0;
  int a[5] = {4,2,3,5,1};
  
  for(i=0; i<5; i++){
     if(a[m1] > a[i]){
         m1 = i; 
     }
     
     if(a[m2] < a[i]){
         m2 = i; 
     }
}

   cout << a[m1] << " "; 
   cout << a[m2];

}