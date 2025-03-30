// program30.c

#include <iostream>
using namespace std;

class Number
{
    public:
        int iNo;

    Number(int X)
    {
        iNo = X;
    }

    bool CheckPrime()
    {
        int iCnt = 0;
        bool bFlag = true;

        if (iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                bFlag = false;
                break;
            }
        }
        return bFlag;
    }

};

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter Number"<<"\n";
    cin>>iValue;

    Number nobj(iValue);
    bRet = nobj.CheckPrime();

    if(bRet == true)
    {
        cout<<iValue<<" is Prime number"<<"\n";
    }
    else
    {
        cout<<iValue<<" is NOT Prime number"<<"\n";
    }

    return 0;
}
