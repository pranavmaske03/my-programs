//program59.c

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

        bool CheckDigit(int iSearch)
        {
            int iDigit = 0;
            int temp = iNo;

            while(temp != 0)
            {
                iDigit = temp % 10;
                if(iDigit == iSearch)
                {
                    break;
                }
                temp = temp / 10;
            }
            if(iDigit == iSearch)
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
    int iNum = 0;
    bool bRet = false;

    cout<<"Enter number \n";
    cin>>iValue;

    cout<<"Enter digit between (0 to 9) to serch \n";
    cin>>iNum;

    Digit obj(iValue);

    bRet = obj.CheckDigit(iNum);
    if(bRet == true)
    {
        cout<<iNum<<" is present\n";
    }
    else
    {
        cout<<iNum<<" is NOT present \n";
    }

    return 0;
}