// Write a program to display the day of the week using switch.

#include<iostream>
using namespace std;


int main()
{   
    int day = 0;
    cout<<endl<<"Choose one digit from 1 to 7: ";
    cin>>day;

    switch (day)
    {
    case 1:
        cout<<"Sunday";
        break;
    case 2:
        cout<<"Monday";
        break;
    case 3:
        cout<<"Tuesday";
        break;
    case 4:
        cout<<"Wednesday";
        break;
    case 5:
        cout<<"thursday";
        break;
    case 6:
        cout<<"Friday";
        break;
    case 7:
        cout<<"saturday";
        break;
    default:
        break;
    }

    return 0;
}