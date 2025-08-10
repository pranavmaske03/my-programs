// program24.c

#include<iostream>
using namespace std;

class Number
{
    public:
        int iNo;

    Number(int X)
    {
        iNo = X;
    }

    void DisplayFactors()
    {
        int iCnt = 0; 

        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                cout<<iCnt<<"\n";
            }
        }
    }
};

int main()
{
    int iValue = 0;

    cout<<"Enter Number"<<"\n";
    cin>>iValue;

    Number nobj(iValue);
    nobj.DisplayFactors();

    return 0;
}