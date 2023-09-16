//Set bit means 1 in binary form
#include<iostream>
#include<math.h>
using namespace std;

void evenOrOdd(int number)
{
    if((number & 1) == 0)
    cout<<"Even";
    else
    cout<<"odd";

}

int main()
{
    int number;
    cout<<"Enter number to count set bits : ";
    cin>>number;
    evenOrOdd(number);
}                         