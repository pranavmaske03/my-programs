// program36.c

#include<iostream>
using namespace std;

typedef long int UINT;

class Number 
{
    public: 
        int iPower;
        int iBase;

        Number(int,int);
        UINT CalculatePower();
};

Number::Number(int no1,int no2)
{
    iPower = no2;
    iBase = no1;
}

UINT Number::CalculatePower()
{
    UINT iResult = 1;
    
    for(int iCnt = 1; iCnt <= iPower; iCnt++)
    {
        iResult = iResult * iBase;
    }
    return iResult;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter Base :\n";
    cin>>iValue1;

    cout<<"Enter Power : \n";
    cin>>iValue2;

    Number obj(iValue1,iValue2);

    cout<<"Result is : "<<obj.CalculatePower()<<"\n";

    return 0;
}