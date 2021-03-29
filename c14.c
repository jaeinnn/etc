#include <stdio.h>

int main()
{
    int a[9][9]; 
    
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            a[i][j] = (i+1)*(j+1);
        }
    }
    
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(i == 6 && j == 6){
                printf("%d * %d = %d", i+1, j+1, a[i][j]); 
                break; 
            }
        }
    }
    
    return 0; 
    
}