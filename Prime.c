#include<stdio.h>

int isPrime(int n){

    for(int i = 1; i*i<=n; i++){
        if(n % i == 0){
            return 0;
        }
    }

    return 1;
}


int main()
{
    int n = 4;
    
    if(isPrime(n)){
        printf("Prime Number");
    }

    else{
        printf("Not a prime number");
    }

    

    return 0;
}