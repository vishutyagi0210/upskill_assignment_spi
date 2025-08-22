// Check whether a number is prime using a loop.
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

int main()
{
    int arr[10] , positive = 0 , negative = 0;

    takeInput(arr);

    for (int i = 0; i<10; i++)
    {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
    }

    cout<<endl<<"Positive : "<<positive<<endl<<"Negative: "<<negative;

    return 0;
}