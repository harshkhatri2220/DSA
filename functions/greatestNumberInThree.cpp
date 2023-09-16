#include<iostream>

using namespace std;

void greatest(int a, int b, int c)
{
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<" is  greater than "<<b<<" & "<<c;
        }
        else if(c>b)
        {
            cout<<c<<" is  greater than "<<a<<" & "<<b;

        }
    }
    else
    {
        cout<<b<<" is  greater than "<<a<<" & "<<c;
        
    }
}
int main()
{
    int first,second,third;
    cout<<"Enter three numbers : "<<endl;
    cout<<"Enter 1st number : ";
    cin>>first;
    cout<<"Enter 2nd number : ";
    cin>>second;
    cout<<"Enter 3rd number : ";
    cin>>third;
    greatest(first,second,third);
}