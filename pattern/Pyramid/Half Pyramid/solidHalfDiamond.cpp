#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter no. of rows: ";
    cin >> n;
    n = n / 2;

    for (int row = 0; row < n + 1; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int row = 0; row < n; row++)
    {
        for (int col = n - row; col > 0; col--)
        {
            cout << "*";
        }
        cout << endl;
    }
}