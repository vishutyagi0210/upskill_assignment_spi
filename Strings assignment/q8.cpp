// Write a program to reverse a string using pointers.
#include<iostream>
using namespace std;

string takeInput();

int main()
{
    string str = takeInput();
    
    string::reverse_iterator beg = str.rbegin();
    string::reverse_iterator end = str.rend();

    for(; beg != end; beg++)
    {
        cout<<*beg;
    }
    return 0;
}


string takeInput()
{
    string input;
    cout<<endl<<"Enter the string: ";
    getline(cin , input);
    return input;
}