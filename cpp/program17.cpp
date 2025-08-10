// program45.c

#include <iostream>
using namespace std;

typedef unsigned long int ULINT;
 
class Number
{
public:
    int iNo;

    Number(int X)
    {
        iNo = X;
    }

    ULINT Factorial()
    {
        ULINT iFact = 1;
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
    ULINT iRet = 0;

    cout<<"Enter first number :"<<"\n";
    cin>>iValue;

    Number nobj(iValue);

    iRet = nobj.Factorial();
    cout<<"Factorial is : "<<iRet<<"\n";

    return 0;
}