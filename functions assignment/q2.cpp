// WAP to print table of given number using function. 
#include<iostream>
using namespace std;

void table(int);

int main()
{
    int number;
    cout<<endl<<"Enter the number: ";
    cin>>number;

    table(number);

    return 0;
}

void table(int table)
{
    for (int i = 1; i<=10; i++)
        cout<<endl<<table<<" X "<<i<<" = "<<table*i;
}