#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number of Rows: ";
    cin>>n;

    for(int row=0 ; row<n ; row++)
    {
        for(int col=0 ; col<row ; col++)
        {
            cout<<" ";
        }
        for(int col=0 ; col<(2*n - 2*row -1) ; col++)
        {
            if(col == 0 || col == (2*n - 2*row -1)-1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;

    }

}