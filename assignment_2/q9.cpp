// Find the sum of first N natural numbers using for loop.

#include<iostream>
using namespace std;

int SumOfN(int num)
{
    int sum = 0;

    for (int i = 1; i<=num; i++)
        sum += i;

    return sum;
}

int main()
{
    int num = 0;

    cout<<endl<<"Enter the number: ";
    cin>>num;

    cout<<endl<<"The Sum of first "<<num<<" is : "<<SumOfN(num);
    
    return 0;
}