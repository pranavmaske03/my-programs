// program60.c

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

    int CheckDigitFrequency()       
    {
        int iDigit = 0;
        int iSearch = 0;
        int iCount = 0;
        int iTemp = 0;

        cout<<"Enter the Digit you want to search (0 to 9)"<<"\n";
        cin>>iSearch;

        if((iSearch < 1) || (iSearch > 9))
        {
            cout<<"Invalid Input"<<"\n";
            cout<<"NOTE : please enter digit between range (0 to 9 )"<<"\n";
            return 0;
        }

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        iTemp = iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit == iSearch)
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

    cout<<"Enter number"<<"\n";
    cin>>iValue;

    Digit dobj(iValue);

    iRet = dobj.CheckDigitFrequency();
    cout<<"Frequency of the Digit is : "<<iRet<<"\n";

    iRet = dobj.CheckDigitFrequency();
    cout<<"Frequency of the Digit is : "<<iRet<<"\n";

    return 0;
}