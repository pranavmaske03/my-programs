// program34.c

#include<iostream>
using namespace std;

typedef unsigned long int ULINT;

class Number 
{
    public:
        int iBase;
        int iPower;

        Number(int no1,int no2)
        {
            iBase = no1;
            iPower = no2;
        }

        ULINT CalculatePower()
        {
            ULINT iResult = 1,iCnt = 0;

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
    ULINT iRet = 0;

    cout<<"Enter Base \n";
    cin>>iValue1;

    cout<<"Enter power \n";
    cin>>iValue2;

    Number obj(iValue1,iValue2);
    iRet = obj.CalculatePower();

    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}