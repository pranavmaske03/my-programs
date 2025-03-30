// program46.c

#include<iostream>
using namespace std;

class Number 
{
    public: 
        int iBase;
        int iPower;

        Number(int X,int Y)
        {
            iBase = X;
            iPower = Y;
        }
        
        int CalculatePower()
        {
            int iResult =  1;

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
    int iValue2 = 0;

    cout<<"Enter Base \n";
    cin>>iValue1;

    cout<<"Enter power \n";
    cin>>iValue2;

    Number obj(iValue1,iValue2);
    int iRet = obj.CalculatePower();

    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}