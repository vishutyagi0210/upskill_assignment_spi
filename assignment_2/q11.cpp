// Generate a multiplication table for any number entered by user.

#include<iostream>
using namespace std;

void Table(int table)
{
    for (int i = 1; i<=10; i++)
        cout<<endl<<table<<" X "<<i<<" = "<<table*i;
}

int main()
{
    int table = 0;


    cout<<endl<<"Enter the number you wanna table of: ";
    cin>>table;

    Table(table);

    return 0;
}