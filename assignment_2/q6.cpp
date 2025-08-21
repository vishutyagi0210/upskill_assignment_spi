// Check whether a number is prime using a loop.

#include<iostream>
using namespace std;


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

int main()
{
    int num = 0;

    cout<<endl<<"Enter the numnber: ";
    cin>>num;

    if (num == 1)
    {
        cout<<"\nNo, 1 is not a prime number. The standard definition of a prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself. Since 1 is not greater than 1, it does not meet this criterion.";
    }
    else
        cout<<endl<<"The given number is: "<<(isPrime(num)?"Prime":"Not prime");

    return 0;
}