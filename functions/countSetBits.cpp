//Set bit means 1 in binary form
#include<iostream>
#include<math.h>
using namespace std;

int countSetBits(int number)
{
    int count=0;
    while(number>0)
    {
        count = count + (number&1);
        number=number>>1;
    }
    return count;
}

int main()
{
    int number;
    cout<<"Enter number to count set bits : ";
    cin>>number;
    cout<<countSetBits(number);
}                         