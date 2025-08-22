// Write a program to check if two matrices are equal.
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

int isEqual(int first[] , int second[])
{
    for (int i = 0; i<10; i++)
    {
        if(first[i] == second[i])
            continue;
        return 0;
    }
    return 1;
}

int main()
{   

    int arr[10] , brr[10];
    
    cout<<endl<<"Enter first array: ";
    takeInput(arr);
    cout<<endl<<"Enter second array: ";
    takeInput(brr);

    cout<<endl<<"The given matrix are: "<<(isEqual? "Equal":"Not Equal");


    return 0;
}