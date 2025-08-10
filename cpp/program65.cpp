// program39.c

#include<iostream>
using namespace std;

typedef unsigned long int ULONG;

class Number 
{
    public: 
        int iNo;

        Number(int X)
        {
            iNo = X;
        }

        ULONG Factorial()
        {
            ULONG iFact = 1;   
            int iCnt = 0;

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
    ULONG iRet = 0;

    cout<<"Enter number \n";
    cin>>iValue;

    Number obj(iValue);
    iRet = obj.Factorial();
    
    cout<<"Factorial is "<<iRet<<"\t";

    return 0;
}