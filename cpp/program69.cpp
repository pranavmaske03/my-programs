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
            int iCnt = 0;
            int iResult = 1;

            for(iCnt = 1; iCnt <= iPower; iCnt++)
            {
                iResult = iResult * iBase;
            }
            return iResult;
        }
};

int main()
{
    int iValue = 0;
    int iValue1 = 0;

    cout<<"Enter Base \n";
    cin>>iValue;

    cout<<"Enter power \n";
    cin>>iValue1;

    Number obj(iValue,iValue1);
    
    cout<<"Result is : "<<obj.CalculatePower()<<"\n";

    return 0;
}