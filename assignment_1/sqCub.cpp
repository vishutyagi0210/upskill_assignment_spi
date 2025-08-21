// Write a program to calculate the square and cube of a number.

#include<iostream>
#include<math.h>
using namespace std;

int square(int number)
{
    return pow(number , 2);  
}

int cube(int number)
{
    return pow(number , 3);
}

int main()
{
    int number = 0;
    cout<<endl<<"Enter the number: ";
    cin>>number;

    cout<<endl<<"Square of number is: "<<square(number)<<endl<<"Cube of number is: "<<cube(number);


    return 0;
}