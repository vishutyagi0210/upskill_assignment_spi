// Write a program to merge two arrays into one.
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

void printArray(int* arr)
{
    for (int i = 0; i<20; i++)
        cout<<arr[i]<<" ";
}

int main()
{       
    int arr[10] , brr[10] , result[20] , i = 0;

    cout<<endl<<"Enter first array: ";
    takeInput(arr);
    cout<<endl<<"Enter second array: ";
    takeInput(brr);

    for (i = 0; i<10; i++)
        result[i] = arr[i];
    for (; i<20; i++)
        result[i] = brr[i-10];
    
    printArray(result);
    
    return 0;
}