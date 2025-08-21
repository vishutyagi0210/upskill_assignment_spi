// Swap two numbers using a temporary variable.

#include<iostream>
using namespace std;


int main()
{
    int first = 0 , second = 0 ,  temp = 0;

    cout<<endl<<"Enter the first number: ";
    cin>>first;
    cout<<endl<<"Enter the second number: ";
    cin>>second;

    // before swapping

    cout<<endl<<"Numbers before swapping"<<endl<<"first: "<<first<<endl<<"Second: "<<second;

    temp = first;
    first = second;
    second = temp;

    cout<<endl<<"Numbers after swapping"<<endl<<"first: "<<first<<endl<<"Second: "<<second;

    return 0;

}