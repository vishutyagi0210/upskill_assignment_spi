// Write a program to check if a number is even or odd using %.

#include<iostream>
using namespace std;

int isEven(int number)
{
    return number % 2 == 0;
}

int main()
{

    int number = 0;

    cout<<endl<<"Enter the number: ";
    cin>>number;

    cout<<endl<<number<<" is : "<<(isEven(number)?"Even":"Odd");

    return 0;
}