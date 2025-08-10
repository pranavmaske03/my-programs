// program42.c

#include<iostream>
using namespace std;

typedef unsigned long int ULINT;

class Factorial
{
    public:
       int iNo;

    Factorial(int X)
    {
        iNo = X;
    }

    ULINT DisplayFactorial()
    {
        int iCnt = 0;
        ULINT iFact = 1;

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
    ULINT iRet = 0;

    cout<<"Enter number"<<"\n";
    cin>>iValue;

    Factorial fobj(iValue);
    iRet = fobj.DisplayFactorial();

    cout<<"Factorial is : "<<iRet<<"\n";

    return 0;

}