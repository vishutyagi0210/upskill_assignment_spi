// Convert temperature from Celsius to Fahrenheit.

#include<iostream>
using namespace std;


int main()
{
    int celsius = 0;
    cout<<endl<<"Enter the celcius value: ";
    cin>>celsius;

    cout<<endl<<"Fahrenheit: "<<(celsius * 9.0 / 5.0) + 32;
    return 0;
}
