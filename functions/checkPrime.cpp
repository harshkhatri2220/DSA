#include <iostream>

using namespace std;

bool checkPrime(int number)
{
    if(number <=0 || number == 1)
    return false;
    else if(number == 2)
    return true;
    else
    {
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    }
    return true;
}

int main()
{
    int number;
    cout << "Enter a number to check it is prime or not : ";
    cin >> number;
    if (checkPrime(number))

        cout << number << " is prime";
    else
        cout << number << " is not prime";

        
}