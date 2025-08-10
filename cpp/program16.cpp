// program61.cp

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

    int CountEven()
    {
        int iDigit = 0;
        int iCount = 0;
        int iTemp = iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if((iDigit % 2) == 0)   
            {
                iCount++;
            }
            iTemp = iTemp / 10;
        }
        return iCount;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    Digit dobj(iValue);

    iRet = dobj.CountEven();
    cout<<"Count of the even number : "<<iRet<<"\n";

    return 0;
}