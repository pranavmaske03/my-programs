// program240.c

#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0X00102040;
    int iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"enter  number \n";
    cin>>iValue;

    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        cout<<"Bits are on \n";
    }
    else
    {
        cout<<"Bits are off \n";
    }

    return 0;
}