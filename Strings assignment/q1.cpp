// 1. Write a program to print a string using a pointer.
#include<iostream>
using namespace std;

int main()
{
    string str = "Vishal Tyagi";

    for( string::iterator it = str.begin(); it<str.end(); it++)
    {
        cout<<*it;
    }

    return 0;
}