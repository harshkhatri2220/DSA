#include<iostream>

using namespace std;

int findUniqueElement(int a[] , int size)
{
    int uniqueElement=a[0];

    for(int i=1 ; i<size ; i++)
    {
        uniqueElement = uniqueElement ^ a[i];
    }
    return uniqueElement;
}

int main()
{
    int a[]={1,1,3,4,4,6,6} , size=7;

    cout<<"Unique Element : "<<findUniqueElement(a,size);
    
}