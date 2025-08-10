// program53.c

#include<iostream>
using namespace std;

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    for(; iNo != 0; iNo = iNo / 10)
    {
        iDigit = iNo % 10;
        cout<<iDigit<<"\n";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number \n";
    cin>>iValue;

    DisplayDigits(iValue);

    return 0;
}