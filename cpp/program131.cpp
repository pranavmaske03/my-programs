// program33.c

#include<iostream>
using namespace std;

class Number
{
    public:
        int iPower;
        int iBase;

        Number(int no1,int no2)
        {
            iPower = no1;
            iBase = no2;
        }

        int CalculatePower()
        {
            int iResult = 1;

            for(int iCnt = 1; iCnt <= iPower; iCnt++)
            {
                iResult = iResult * iBase;
            }
            return iResult;
        }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0,iRet = 0;

    cout<<"Enter base \n";
    cin>>iValue1;

    cout<<"Enter power \n";
    cin>>iValue2;

    Number obj(iValue1,iValue2);
    iRet = obj.CalculatePower();

    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}