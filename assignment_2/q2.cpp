// Write a program to find the largest of three numbers using nested if-else.

#include<iostream>
using namespace std;

int bigOne(int num1 , int num2 , int num3)
{
    if(num1 > num2)
    {
        if(num1 > num3)
            return num1;
        else
            return num3;
    }
    else
    {
        if(num2>num3)
            return num2;
        else
            return num3;
    }
}


int main()
{   
    int num1 = 0 , num2 = 0 , num3 = 0;

    cout<<endl<<"Enter 3 numbers (space-separated): ";
    cin>>num1>>num2>>num3;

    cout<<endl<<"Greates number is: "<<bigOne(num1,num2,num3);

    return 0;
}