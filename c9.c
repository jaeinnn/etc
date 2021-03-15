#include <stdio.h>

double power(double base, int exp);

int main()
{
printf("%.2f\n", power(2,3));
    return 0;
}

double power(double base,int exp)
{
    double result = 1; 
    int n = exp; 
    while(n--) result *= base;
    return result;
}

