#include <iostream>

using namespace std;

void printPrime(int number)
{
    for(int i=2 ; i<number ; i++)
    {
        if(number%i==0)
        {
            return;
        }
    }
    cout<<number<<" ";
    
}
void printPrimeFromOneToN(int number)
{
    if (number <= 0 || number == 1)
    {
        cout << "No prime number ";
        return;
    }
    else
    {
        if(number>=2)
        cout<<2<<" ";
        for (int i = 3; i < number; i++)
        {
            printPrime(i);
        }
    }
}

int main()
{
    int number;
    cout << "Enter till which number you want to print Prime numbers : ";
    cin >> number;
    // printPrime(number);
    printPrimeFromOneToN(number);
}