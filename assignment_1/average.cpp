// Find the sum and average of 5 numbers.

#include<iostream>
using namespace std;

float average(int number)
{
    return number/5.0f;
}

int main()
{
    int arr[5] ,  sum = 0;

    for (int i = 0; i<5; i++)
    {
        cout<<endl<<"Enter the "<<i<<"number: ";
        cin>>arr[i];
    }

    for (int i : arr)
    {
        sum += i;
    }

    cout<<endl<<"Sum of 5 numebers is: "<<sum;

    cout<<endl<<"Average of 5 number is: "<<average(sum);

    return 0;

}