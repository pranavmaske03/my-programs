// program249.c

#include<iostream>
using namespace std;

int OffBit(int iNo)
{
    int iMask = 0XFFFFFFBF;
    int iResult = 0;

    iResult = iNo | iMask;
    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number \n";
    cin>>iValue;

    iRet = OffBit(iValue);

    cout<<"Result is : "<<iRet<<"\n"  ;

    return 0;
}