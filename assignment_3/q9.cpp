// Write a program to find the sum of diagonal elements of a matrix.
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

int digSum(int arr[][3])
{
    return (arr[0][0] + arr[1][1] + arr[2][2]);
}

int main()
{
    int arr[3][3];

    takingInput(arr);

    // digSum(arr);

    cout<<endl<<"The sum of diagonal is: "<<digSum(arr);

    return 0;
}