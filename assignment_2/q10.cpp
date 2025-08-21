// Reverse a given number using while loop.
#include<iostream>
using namespace std;

int reverse(int num)
{
    int revNum = 0;
    int temp = num;

    while(temp)
    {
        revNum = revNum * 10 + temp%10;
        temp/=10;
    }

    return revNum;
}

int main()
{
    int num = 0;

    cout<<endl<<"Enter the number: ";
    cin>>num;

    cout<<endl<<"Reversed of "<<num<<" is : "<<reverse(num);
    return 0;
}