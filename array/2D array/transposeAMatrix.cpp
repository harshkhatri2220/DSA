#include <iostream>

using namespace std;

void input(int a[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter number for row : " << i << " and col. " << j << " : ";
            cin >> a[i][j];
        }
    }
}

void print(int a[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void transposeAMatrix(int a[3][3], int row, int col)
{
    int temp = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = i+1; j < col; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}

// void transposeAMatrix(int a[3][3], int row, int col)
// {
//     int temp = 0;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = i + 1; j < col; j++)
//         {
//             // Swap a[i][j] and a[j][i]
//             temp = a[i][j];
//             a[i][j] = a[j][i];
//             a[j][i] = temp;
//         }
//     }
// }

int main()
{
    int arr[3][3];
    input(arr, 3, 3);
    print(arr, 3, 3);
    transposeAMatrix(arr, 3, 3);
    print(arr, 3, 3);
}