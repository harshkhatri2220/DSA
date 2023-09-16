#include<iostream>

using namespace std;

int reverseArray(int a[] , int size)
{
    int i=0,temp=0;
    int iterativeSize = size - 1;

    while(i<(size/2))
    {
        temp = a[i];
        a[i] = a[iterativeSize - i];
        a[iterativeSize- i] = temp; 
        i++;
    }
    
}

int main()
{
    int a[]={1,2,3,4,5,6} , size=6;

for(int i=0 ; i<size ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    reverseArray(a , size);

    for(int i=0 ; i<size ; i++)
    {
        cout<<a[i]<<" ";
    }
    
}