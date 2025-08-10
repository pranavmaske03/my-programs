// program35.c

#include<iostream>
using namespace std;

typedef unsigned int UINT;

class Number
{
    public:
        int iBase;
        int iPower;
    
    Number(int iNo1, int iNo2)
    {
        iBase = iNo1;
        iPower = iNo2;
    }

    UINT CalculatePower()
    {
        int iCnt = 0;
        UINT iResult = 1;

        for(iCnt = 1; iCnt <= iPower; iCnt++)
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
    UINT iRet = 0;

    cout<<"Enter the Base "<<"\n";
    cin>>iValue1;

    cout<<"Enter the power"<<"\n";
    cin>>iValue2;

    Number nobj(iValue1,iValue2);
    iRet = nobj.CalculatePower();

    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}