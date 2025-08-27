// WAP to find factorial of given number using recursion. 
#include<iostream>
using namespace std;

int factorial(int);

int main()
{
    int num = 0;

    cout<<endl<<"Enter the number: ";
    cin>>num;

    cout<<endl<<"Factorial of "<<num<<" is: "<<factorial(num);

    return 0;
}

int factorial(int num)
{
    if(num == 0)
        return 1;
    return num * factorial(num-1);
}