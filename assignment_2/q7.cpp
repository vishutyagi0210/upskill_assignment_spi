// Print the sum of digits of a number using while loop.

#include<iostream>
using namespace std;

int Sum(int num)
{
    int temp = num;
    int sum = 0;

    while(temp)
    {
        sum = sum + temp%10;
        temp/=10;
    }

    return sum;
}

int main()
{
    int num = 0;

    cout<<endl<<"Enter the number: ";
    cin>>num;

    cout<<endl<<"The sum of : "<<num<<" is: "<<Sum(num);
    
    return 0;
}