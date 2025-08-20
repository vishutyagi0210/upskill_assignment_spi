// Write a program to calculate simple interest.

#include<iostream>
using namespace std;

float simpleInterest(int p , int r , int t)
{
    return ((p*r*t)/100);
}

int main()
{
    int p = 0, r = 0 , t = 0;
    cout<<endl<<"Enter the principle amount: ";
    cin>>p;
    cout<<endl<<"Enter the rate of interest: ";
    cin>>r;
    cout<<endl<<"Enter the time period: ";
    cin>>t;


    cout<<endl<<"Simple Interest of Rs. "<<p<<" is: "<<simpleInterest(p,r,t);

    return 0;
}