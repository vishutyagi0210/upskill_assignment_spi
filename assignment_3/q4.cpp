// Write a program to calculate the sum of even and odd numbers separately in an array.
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

int isEven(int num)
{
    return num%2==0;
}

int main()
{   
    int arr[10] , even = 0 , odd = 0;

    takeInput(arr);

    for (int i = 0; i<10; i++)
    {
        if(isEven(arr[i]))
            even += arr[i];
        else
            odd += arr[i];
    }

    cout<<endl<<"Total of odd: "<<odd<<endl<<"Total of even: "<<even;



    return 0;
}