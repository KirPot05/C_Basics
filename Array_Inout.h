#include <iostream>

using namespace std;


void Print_Array(int arr[1000], int size)
{
    cout<<"The elements of the array are: \n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void Input_Array(int arr[1000], int size)
{
    cout<<"Enter the elements of the array: \n";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
}