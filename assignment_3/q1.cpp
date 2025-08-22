// Find the maximum and minimum element in a 1D array.
#include<iostream>
#include<climits>
using namespace std;


int main()
{
    int max = INT_MAX;
    int min = INT_MIN;

    int arr[10];

    for (int i = 0; i<10; i++)
    {
        cout<<endl<<"Enter the "<<(i+1)<<" value : ";
        cin>>arr[i];
    }

    for (int i = 0; i<10; i++)
    {
        if(arr[i] > min)
            min = arr[i];
        if(arr[i] < max)
            max = arr[i];
    }

    cout<<endl<<"The max and min value of array is: "<<min<<" "<<max;

    return 0;
}