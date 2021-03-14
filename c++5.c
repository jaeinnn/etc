#include <iostream>

using namespace std;

int fn1(){
    return 5;
}
int fn2(){
    return fn1()+20;
}
int fn3(){
    return fn1()+fn2(); 
}

int main(){
    std::cout << fn3();

 }
