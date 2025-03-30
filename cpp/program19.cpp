// program70.c

#include <iostream>
using namespace std;

class Digit
{
public:
    int iNo;

    Digit(int X)
    {
        iNo = X;
    }

    int MaximumDigit()
    {
        int iDigit = 0;
        int iMax = 0;
        int iTemp = iNo;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while (iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            if(iMax == 9)
            {
                break;
            }
            iTemp = iTemp / 10;
        }
        return iMax;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    Digit dobj(iValue);

    iRet = dobj.MaximumDigit();
    cout<<"Maximum digit is : "<<iRet<<"\n";

    return 0;
}