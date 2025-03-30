// program40.c

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

    int Factorial()
    {
        int iCnt = 0;
        int iFact = 1;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        return iFact;
    }

};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter Number"<<"\n";
    cin>>iValue;

    Number nobj(iValue);
    iRet = nobj.Factorial();
    
    cout<<"Factorial is : "<<iRet<<'\n';

    return 0;
}
