// Calculate factorial of a number using for loop.
#include<iostream>
using namespace std;

int main()
{
    int num = 0 , factorial = 1;

    cout<<endl<<"Enter the number: ";
    cin>>num;

    for(int i = 1; i<=num; i++)
        factorial *= i;
    
    cout<<endl<<"factorial: "<<factorial;

    return 0;
}