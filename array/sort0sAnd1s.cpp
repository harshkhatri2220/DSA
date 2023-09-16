#include<iostream>

using namespace std;

void sort0sAnd1s(int a[] , int size)
{

    int zeros=0 , ones=0;

    for(int i=0 ; i<size ; i++)
    {
        if(a[i]==0)
        zeros++;
        else
        ones++;
    }
    for(int i=0 ; i<zeros ; i++)
    {
        a[i]=0;
    }
    for(int i=zeros ; i<size ; i++)
    {
        a[i]=1;
    }
}

int main()
{
    int a[]={1,1,0,1,0,0,1} , size=7;

    sort0sAnd1s(a,size);
    
    for(int i=0 ; i<size ; i++)
    {
        cout<<a[i];
    }
}