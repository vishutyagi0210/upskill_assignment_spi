// Write a program to check if two numbers are equal using relational operators.
#include<iostream>
using namespace std;

int main()
{

    int num1 = 0;
    int num2 = 0;

    cout<<endl<<"Make sure to enter only integer values.";
    cout<<endl<<"Enter the num1: ";
    cin>>num1;
    cout<<endl<<"Enter the num2: ";
    cin>>num2;

    cout<<((num1 == num2 )? "\nEquals" : "\nNot Equals");

    return 0;
}