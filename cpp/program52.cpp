// program63.c

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

        int ReverseNumber()
        {
            int iDigit = 0;
            int iResult = 0;
            int temp = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            temp = iNo;
            while(temp != 0)
            {
                iDigit = temp % 10;
                iResult = (iResult * 10) + iDigit;
                temp = temp / 10;
            }
            return iResult;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number \n";
    cin>>iValue;

    Digit obj(iValue);

    iRet = obj.ReverseNumber();
    cout<<"Reverse number is : "<<iRet<<"\n";

    iRet = obj.ReverseNumber();
    cout << "Reverse number is : " << iRet << "\n";

    return 0;
}
