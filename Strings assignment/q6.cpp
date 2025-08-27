// Write a program to check palindrome string using pointers.
#include<iostream>
using namespace std;

string takeInput();
bool isPalindrom(string);

int main()
{
    string str = takeInput();

    cout<<endl<<"The string is: "<<(isPalindrom(str)?"Palindrome":"Not palindrome");

    return 0;
}

string takeInput()
{
    string input;
    cout<<endl<<"Enter the string: ";
    getline(cin , input);
    return input;
}

bool isPalindrom(string str)
{
    string::iterator beg = str.begin();
    string::iterator end = str.end();

    end--;

    while(beg < end)
    {
        if((*beg) == (*end))
        {

        }
        else
            return false;
        
        beg++;
        end--;
    }
    return true;
}