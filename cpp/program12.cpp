// progra57.c

#include<iostream>
using namespace std;

int CheckDigit(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 7)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number"<<"\n";
    cin>>iValue;

    iRet = CheckDigit(iValue);
    cout<<"Frequency of 7 is "<<iRet<<"\n" ;

    return 0;
}