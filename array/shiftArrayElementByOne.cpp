#include <iostream>

using namespace std;

void shiftArrayElementByOne(int a[], int size)
{

    int temp = a[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5}, size = 5;

    for (int i = 0; i < size; i++)
    {
        cout << a[i];
    }
    cout<<endl;
    shiftArrayElementByOne(a, size);

    for (int i = 0; i < size; i++)
    {
        cout << a[i];
    }
}