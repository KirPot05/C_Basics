#include<stdio.h>


void Input_2D_Array(int arr[100][100], int size)
{
    printf("Enter the elements of the Array: \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}

void Print_2D_Array(int arr[100][100], int size)
{
    printf("The elements of the two dimensional array: \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ",arr[i][j]);
        }

        printf("\n"); 
    }
}

void Input_2D_Matrix(int arr[100][100], int r, int c)
{
    printf("Enter the elements of the Matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}


void Print_2D_Matrix(int arr[100][100], int r, int c)
{
    printf("The elements of the Matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
}