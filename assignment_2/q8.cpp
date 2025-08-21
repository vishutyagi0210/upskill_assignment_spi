// Print Fibonacci series up to 10 terms using loop.
#include<iostream>
using namespace std;


int main()
{
    int a = 0;
    int b = 1;
    int temp = 0;

    cout<<endl<<a<<endl<<b;
    for (int i = 2; i<=10; i++)
    {
        temp = a+b;
        a = b;
        b = temp;
        cout<<endl<<temp;
    }

    return 0;
}