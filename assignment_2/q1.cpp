// Write a program to check whether a number is positive, negative, or zero using if-else.

#include<iostream>
using namespace std;


int main()
{
    int number = 0;

    cout<<endl<<"Enter the number: ";
    cin>>number;

    if(number>0)
        cout<<endl<<"positive";
    else if(number<0)
        cout<<endl<<"negative";
    else
        cout<<endl<<"zero";

    return 0;
}