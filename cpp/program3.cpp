// program54.c

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
            if(iDigit == 8)
            {
                break;
            }
            iNo = iNo / 10;
        }
        if(iDigit == 8)
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
        cout<<"8 is present"<<"\n";
    }
    else
    {
        cout<<"8 is not present "<<"\n";
    }

    return 0;
}