// program38.c

#include <iostream>
using namespace std;

void DisplayDigit(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt-- )
    {
        cout<<iCnt<<"\n";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number"<<"\n";
    cin>>iValue;

    DisplayDigit(iValue);

    return 0;
}