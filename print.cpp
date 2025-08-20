// Take input of name, age, and grade and print details.

#include<iostream>
using namespace std;


int main()
{
    string name = "";
    int age = 0;
    char grade;

    cout<<endl<<"Enter the name: ";
    getline(cin , name);
    cout<<endl<<"Enter the age: ";
    cin>>age;
    cout<<endl<<"Enter the grade: ";
    cin>>grade;
    

    cout<<endl<<"name: "<<name<<endl<<"Age: "<<age<<endl<<"Grade: "<<grade;

    return 0;
}