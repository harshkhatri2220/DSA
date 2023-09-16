#include<iostream>
#include<math.h>
using namespace std;

int DecimalToBinary(int number)
{
    int lastBit=0,ans=0,i=0;

    while(number>0)
    {
        lastBit = number % 2;
        ans = (lastBit * pow(10,i) + ans);
        number = number/2;
        i++;
    }
    return ans;
    }
int main()
{
    int number;
    cout<<"Enter Decimal number to convert in binary : ";
    cin>>number;
    cout<<DecimalToBinary(number);
}                         