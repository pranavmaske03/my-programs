// program246.c

#include<iostream>
using namespace std;

int ToggleBit(int iNo)
{
    int iMask = 0X00000040;
    int iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    int iValue = 0,iRet = 0;

    cout<<"Enter number \n";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}