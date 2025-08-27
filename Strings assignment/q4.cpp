// Write a program to count words in a sentence.
#include<iostream>
using namespace std;

string takeInput();
int countWords(string);

int main()
{
    string str1 = takeInput();
    int words = countWords(str1);
    cout<<endl<<"Words: "<<words;
    return 0;
}

string takeInput()
{
    string input;
    cout<<endl<<"Enter the string: ";
    getline(cin , input);
    return input;
}

int countWords(string str1)
{
    int count = 1; // one words is already existed

    for (string::iterator it = str1.begin(); it<str1.end(); it++)
    {
        if(*it == 32)
            count++;
    }

    return count;
}