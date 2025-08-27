// WAP to find area and perimeter of rectangle using function. 
#include<iostream>
using namespace std;

int rectArea(int,int);

int main()
{
    int length , breath;

    cout<<endl<<"Enter the length: ";
    cin>>length;
    cout<<endl<<"Enter the breath: ";
    cin>>breath;

    cout<<endl<<"Area of rectangle is: "<<rectArea(length , breath);
    return 0;   
}

int rectArea(int l , int b)
{
    return l*b;
}