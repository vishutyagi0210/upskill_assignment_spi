// Write a program to concatenate two strings without using strcat().
#include<iostream>
using namespace std;

string conCat(string , string);
string takeInput();

int main()
{
    string str1 , str2;
    str1 = takeInput();
    str2 = takeInput();

    string str3 = conCat(str1 , str2);

    cout<<endl<<"Concatted string: "<<str3;

    return 0;
}

string takeInput()
{
    string input;

    cout<<endl<<"Enter the string: ";
    getline(cin , input);

    return input;
}

string conCat(string str1 , string str2)
{
    string comb = "";

    for (string::iterator it = str1.begin(); it<str1.end(); it++)
        comb += *it;
    
    for (string::iterator it = str2.begin(); it<str2.end(); it++)
        comb += *it;
    
    return comb;
}