// Write a program to count vowels in a string using pointers.
#include<iostream>
using namespace std;

string takeInput();
bool isVowel(char);
int countVowel(string);


int main()
{
    string str1 = takeInput();

    cout<<endl<<"Vowels in the word: "<<countVowel(str1);

    return 0;
}

string takeInput()
{
    string input;
    cout<<endl<<"Enter the string: ";
    getline(cin , input);
    return input;
}

bool isVowel(char ch)
{
    switch (ch)
    {
    case 'a':
        return true;
    case 'e':
        return true;
    case 'i':
        return true;
    case 'o':
        return true;
    case 'u':
        return true;
    default:
        return false;
    }
}

int countVowel(string str)
{   
    int count = 0;

    for (string::iterator it = str.begin(); it<str.end(); it++)
    {
        if(isVowel(*it))
            count++;
    }

    return count;
}