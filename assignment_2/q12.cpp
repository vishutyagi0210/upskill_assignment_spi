// Write a program to count the number of digits in a number using while loop

#include<iostream>
using namespace std;

int countDigit(int num)
{
    int count = 0;

    while(num)
    {
        count++;
        num/=10;
    }

    return count;
}

int main()
{
    int num = 0;
    
    cout<<endl<<"Enter the number: ";
    cin>>num;

    cout<<endl<<"Digits in "<<num<<" is : "<<countDigit(num);

    return 0;
}