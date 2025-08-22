// Write a program to reverse the elements of an array.
#include<iostream>
using namespace std;

int main()
{
    int arr[10] , left = 0 , right = 9 , temp = 0;

    for (int i = 0; i<10; i++)
    {
        cout<<endl<<"Enter the "<<(i+1)<<" value : ";
        cin>>arr[i];
    }

    cout<<endl<<"Before swapping!!!";

    for(int i = 0; i<10; i++)
        cout<<arr[i]<<" ";

    while(left < right)
    {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    cout<<endl<<"After swapping!!!";

    for(int i = 0; i<10; i++)
        cout<<arr[i]<<" ";
}