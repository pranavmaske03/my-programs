//program64.c

#include<iostream>
using namespace std;

class Digit
{
    public:
        int iNo;

        Digit(int no)
        {
            iNo = no;
        }

        int ReverseNumber()
        {
            int iDigit = 0;
            int iReverse = 0,temp = iNo;

            while(temp != 0)
            {
                iDigit = temp % 10;
                iReverse = (iReverse * 10)+iDigit;
                temp = temp/10;
            }
            return iReverse;
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

    return 0;
}