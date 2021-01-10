#include<stdio.h>

int main()
{   
    int n, key;

    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", arr+i);
    }

    printf("Enter the element to be found : ");
    scanf("%d", &key);

    for(int i=0; i<n; i++){
        if(arr[i] == key)
            printf("Element found at index: %d", i);
    }


    return 0;
}