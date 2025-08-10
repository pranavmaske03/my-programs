// program49.c

#include<iostream>
using namespace std;

int CountDigits(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number \n";
    cin>>iValue;

    iRet = CountDigits(iValue);
    cout<<"Count of the Digits is : "<<iRet<<"\n";

    return 0;
}