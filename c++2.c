#include <iostream>

using namespace std;

int main(){
    
  int s = 0; 
  int i ; 
 
 for(i=0; i<=10; i+=2){
     if(i==2)
     continue; 
     else if(i==4)
     break; 
    s += i;
 }
 
 std::cout << i << " " << s; 


}