// Write a program to multiply two 2D matrices.
#include<iostream>
using namespace std;

void takingInput(int arr[][3])
{
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            cout<<endl<<"Enter the "<<i<<" "<<j<<"Value: ";
            cin>>arr[i][j];
        }
    }
}

void printArray(int arr[][3])
{
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void multiply(int arr[][3] , int brr[][3] , int result[][3])
{
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                result[i][j] += arr[i][k] * arr[k][j];
            }   
        }
    }
}

int main()
{
    int arr[3][3] , brr[3][3] , result[3][3];
    
    cout<<endl<<"Enter the first array input: ";
    takingInput(arr);
    cout<<endl<<"Enter the second array input: ";
    takingInput(brr);

    
    multiply(arr , brr , result);

    printArray(result);
    
    return 0;
}