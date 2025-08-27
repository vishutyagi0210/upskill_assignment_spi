// Write a program to compare two strings for equality without using strcmp().
#include<iostream>
using namespace std;

bool isEqual(string, string);
string takeInput();

int main()
{
    string str1 , str2;

    str1 = takeInput();
    str2 = takeInput();

    cout<<endl<<"Both the strings are: "<<(isEqual(str1 , str2)?"Equals":"Not Equals");

    return 0;
}

string takeInput()
{
    string input;

    cout<<endl<<"Enter the string: ";
    getline(cin , input);

    return input;
}

bool isEqual(string str1 , string str2)
{
    if(str1.length() != str2.length())
        return false;
    else
    {
        int length = str1.length();
        for(int i = 0; i<length; i++)
        {
            if(str1[i] == str2[i])
            {
                continue;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}