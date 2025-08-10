// program32.c

#include<iostream>
using namespace std;

typedef unsigned long int ULINT;

class Number
{
    public:
        int iBase;
        int iPower;

    Number(int X, int Y)
    {
        iBase = X;
        iPower = Y;
    }

    ULINT CalculatePower()
    {
        int iCnt = 0;
        ULINT iResult = 1;

        for(iCnt = 1; iCnt <= iPower; iCnt++ )
        {
            iResult = iResult * iBase;
        }
        return iResult;
    }
    
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    ULINT iRet = 0;

    cout<<"Enter Base"<<"\n";
    cin>>iValue1;

    cout<<"Enter power"<<"\n";
    cin>>iValue2;

    Number nobj(iValue1,iValue2);

    iRet = nobj.CalculatePower();
    cout<<"Result is : "<<iRet<<"\n";
    
    return 0;
}

