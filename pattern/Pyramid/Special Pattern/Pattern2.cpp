// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter Number of Rows : ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = ((n - 1) * 2)-row; col > 0; col--)
        {
            cout << "*";
        }
        for (int col = 0; col < (2 * row) + 1; col++)
        {
            if (col % 2 == 0 || col == 0)
                cout << row + 1;
            else
                cout << "*";
        }
        for (int col = ((n - 1) * 2)-row; col > 0; col--)
        {
            cout << "*";
        }
        cout << endl;
    }
}