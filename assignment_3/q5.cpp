// Write a program to copy one array to another array.
#include<iostream>
using namespace std;

void takeInput(int* arr)
{
    for (int i = 0; i<10; i++)
    {
        cout<<endl<<"Enter the "<<(i+1)<<" value : ";
        cin>>arr[i];
    }
}

void copy(int* src , int* dst)
{
    for (int i = 0; i<10; i++)
    {
        dst[i] = src[i];
    }
}

void printArray(int* arr)
{
    for (int i = 0; i<10; i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[10] , cpy[0];

    takeInput(arr);

    copy(arr , cpy);

    printArray(cpy);
    
    return 0;
}