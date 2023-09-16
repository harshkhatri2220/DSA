#include <iostream>

using namespace std;

int factorial(int number)
{
    if (number < 0)

        return 0;

    else if (number == 1)
        return 1;
    else
    {
        int fact = 1;
        for (int i = 2; i <= number; i++)
        {
            fact = fact * i;
        }
        return fact;
    }
}

int main()
{
    int number;
    cout << "Enter a number to find Factorial : ";
    cin >> number;
    cout << factorial(number);
}