// Input radius of a circle and calculate area & circumference.
#include<iostream>
using namespace std;
#define PI 3.14

float areaOfCircle(int radius)
{
    return PI*radius*radius;
}

int main()
{
    int radius = 0;

    cout<<endl<<"Enter the radius: ";
    cin>>radius;

    cout<<endl<<"Area of the circle with radius "<<radius<<" is : "<<areaOfCircle(radius);

    return 0;
}