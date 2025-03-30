// program65.c

#include<iostream>
using namespace std;

class Digit
{
    public:
        int iNo;

    Digit(int X)
    {
        iNo = X;
    }

    bool CheckPallindrome()
    {
        int iDigit = 0;
        int iReverse = 0;
        int iTemp = 0;

        iTemp = iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iReverse = (iReverse * 10) + iDigit;
            iTemp = iTemp / 10;
        }
        if(iNo == iReverse)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number"<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
    bRet = dobj.CheckPallindrome();

    if(bRet == true)
    {
        cout<<iValue<<" is pllindrome number"<<'\n';
    }
    else
    {
        cout<<iValue<<" is NOT pllindrome number"<<'\n';
    }

    return 0;
}