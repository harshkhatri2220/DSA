#include<iostream>

using namespace std;

void printAllPairs(int a[] , int size)
{

    for(int i=0 ; i<size ; i++)
    {
        for(int j=0 ; j<size ; j++)
        {
            cout<<"("<<a[i]<<","<<a[j]<<")"<<"  ";
        }
    }
}

int main()
{
    int a[]={1,2,3,4,5,6,7} , size=7;

    printAllPairs(a,size);
    
}