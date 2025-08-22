// Write a program to transpose a 2D matrix.
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

void transpose(int arr[][3])
{
    int temp = 0;
    for (int i = 0; i<3; i++)
    {
        for (int j = i+1; j<3; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

int main()
{
    int arr[3][3];
    takingInput(arr);

    cout<<endl<<"Before transpose: "<<endl;
    printArray(arr);
    transpose(arr);
    cout<<endl<<"After transpose: "<<endl;
    printArray(arr);

    return 0;
}