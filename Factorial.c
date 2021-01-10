#include<stdio.h>

int factorial(int);


int main()
{
    int n = 4; 

    printf("Factorial of given number: %d", factorial(n));

    return 0;
}

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }

    return fact;
}