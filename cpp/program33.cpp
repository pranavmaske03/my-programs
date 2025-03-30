// program48.cpp

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

    int CountDigit()
    {
        int iDigit = 0;
        int iCnt = 0;
        int iTemp = iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iCnt++;
            iTemp = iTemp / 10;
        }
        return iCnt;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number"<<"\n";
    cin>>iValue;

    Digit dobj(iValue);

    iRet = dobj.CountDigit();
    cout<<"Count of the Digit is : "<<iRet<<"\n";

    iRet = dobj.CountDigit();
    cout << "Count of the Digit is : " << iRet << "\n";

    return 0;
}