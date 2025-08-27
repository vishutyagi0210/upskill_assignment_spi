// WAP to check given number is prime or not using function. 
#include<iostream>
using namespace std;

bool isPrime(int);

int main()
{
    int num;

    cout<<endl<<"Enter the number: ";
    cin>>num;

    cout<<endl<<"Given number is: "<<(isPrime(num)?"Prime":"Not prime");
    return 0;
}


bool isPrime(int num)
{
    if (num == 2)
    {
        return 1;
    }
    else 
    {
        int half = num/2;

        for (int i = 2; i<=half; i++)
        {
            if(num%i==0)
                return 0;
        }
        return 1;
    }
}