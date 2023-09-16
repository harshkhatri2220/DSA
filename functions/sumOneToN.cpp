#include <iostream>

using namespace std;

int sum(int number)
{
    int sum1 = 0;
    for (int i = 1; i < number + 1; i++)
    {
        sum1 = sum1 + i;
    }
    return sum1;
}

int main()
{
    int number;
    cout << "Enter the number till you have to sum :";
    cin >> number;
    cout << sum(number);
}