#include <iostream>

using namespace std;

int main(){
    
    int a = 10; 
    int i ; 
    
    for(i=1; i<=a; i++){
        if(a % i == 0){
            std::cout << i << " "; 
        }
    }
    
 }
