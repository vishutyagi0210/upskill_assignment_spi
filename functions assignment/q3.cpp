// WAP to find greatest number in three numbers using function. 
#include<iostream>
using namespace std;

int grt(int , int , int);


int main()
{

    int num1 , num2 , num3;

    cout<<endl<<"Enter three number: ";
    cin>>num1>>num2>>num3;

    cout<<endl<<"Greater amoong these three is: "<<grt(num1 , num2 , num3);
    return 0;
}

int grt(int n1 , int n2 , int n3 )
{
    return (n1 > n2 ? n1 > n3 ? n1 : n3 : n2 > n3 ? n2 : n3);
}