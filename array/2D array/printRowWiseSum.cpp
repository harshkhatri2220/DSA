#include<iostream>

using namespace std;

void input(int a[3][3] , int row , int col)
{
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cout<<"Enter number for row : "<<i<<" and col. "<<j<<" : ";
            cin>>a[i][j];
        }
    }
}

void printRowWiseSum(int a[3][3] , int row , int col)
{
    int sum=0,j=0;

    for(int i=0 ; i<row ; i++)
    {
        sum=0;
        for(j=0 ; j<col ; j++)
        {
            sum = sum + a[i][j];
        }
            cout<<"sum of row "<<i<<" : "<<sum<<endl;
    }
    
}

int main()
{
    int arr[3][3];
    input(arr, 3 ,3);

    printRowWiseSum(arr , 3,3);

}