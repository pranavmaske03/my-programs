// program58.c

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

        int CountDigitFrequency()
        {
            int temp = iNo;
            int iCount = 0,iDigit = 0;

            while(temp != 0)
            {
                iDigit = temp % 10;
                if(iDigit == 7)
                {
                    iCount++;
                }
                temp = temp / 10;
            }
            return iCount;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number \n";
    cin>>iValue;

    Digit obj(iValue);
    iRet = obj.CountDigitFrequency();

    cout<<"Frequency of the Digit is ; "<<iRet<<"\n";

    return 0;
}