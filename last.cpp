// Write a program that accepts two integers and prints quotient and remainder.

#include<iostream>
using namespace std;


int main()
{
    int divisor = 0;
    int remainder = 0;
    int quotient = 0;
    int dividend = 0;

    cout<<endl<<"Enter the divisor: ";
    cin>>divisor;
    cout<<endl<<"Enter the dividend: ";
    cin>>dividend;

    cout<<endl<<"Remainder is : "<<(dividend%divisor)<<endl<<"Quotient is: "<<(dividend/divisor);

    return 0;
}