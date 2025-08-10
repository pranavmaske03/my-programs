// program56.c

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

    bool CheckDigit()
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 7)
            {
                break;
            }
            iNo = iNo / 10;
        }
        if(iDigit == 7)
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

    bRet = dobj.CheckDigit();
    if(bRet == true)
    {
        cout<<"7 is present"<<"\n";
    }
    else
    {
        cout<<"7 is NOT present"<<"\n";
    }

    return 0;
}