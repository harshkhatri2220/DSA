#include<iostream>

using namespace std;

int reverse(int number)
{
    int lastDigit=0,ans=0;

    while(number>0)
    {
        lastDigit = number%10;
        ans=(ans*10) + lastDigit;
        number=number/10;
    }
    return ans;
}
int main()
{
    int number;
    cout<<"Enter integer to reverse : ";
    cin>>number;
    cout<<reverse(number);
    
}