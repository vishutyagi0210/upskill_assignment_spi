// Implement string comparison manually using pointers.
#include<iostream>
using namespace std;

string takeInput();

int main()
{
    string str = takeInput();
    int length = str.length();

    char* beg = &str[0];
    char* end = &str[length];

    for(; beg < end; beg++)
    {
        cout<<(*beg);
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
