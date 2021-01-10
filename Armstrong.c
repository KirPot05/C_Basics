#include <stdio.h>


int main()
{
    int n, sum = 0, rem, temp;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int temp = i;
        sum = 0;
        while(temp){
            
            rem = temp % 10; 
            sum += (rem * rem * rem);
            temp /= 10;
        }

        if(sum == i){
            printf("%d\n", sum);
        }
    }
    


    return 0;
}