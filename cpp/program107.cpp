//program62.c

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

        int CountOddDigit()
        {
            int iCount = 0;
            int iDigit = 0,temp = iNo;

            while(temp != 0)
            {
                iDigit = temp % 10;
                if((iDigit % 2) != 0)
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

    iRet = obj.CountOddDigit();

    cout<<"Count of the odd digit in : "<<iValue<<" is : "<<iRet<<"\n";

    return 0;
}