#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter no. of rows: ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            char ch = col + 1 + 'A' - 1; // Here we are type casting , 'A' + 1 = 'B' , 'A' + 1 -1 = 'A'
            cout << ch;
        }
        for(int col=row ; col>0 ; col--)
        {
            char ch= 'A' + col - 1;
            cout<<ch;
        }

        cout << endl;
    }
}