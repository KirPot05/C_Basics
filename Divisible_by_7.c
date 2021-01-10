#include<stdio.h>

int main()
{
    int sum = 0, count = 0;

    for(int i=100; i<=200; i++){
        if(i % 7 == 0){
            sum += i;
            count++;
        }
    }

    printf("No of integers present in the range: %d\n", count);
    printf("Sum : %d", sum);

    return 0;
}