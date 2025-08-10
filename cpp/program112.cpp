// program47.c

#include<iostream>
using namespace std;

class Digit 
{
    public:
        int iNo;

        Number(int X)
        {
            iNo = X;
        }

        void DisplayDigits()
        {
            int iDigit = 0;
            int temp = iNo;

            while(temp != 0)
            {
                iDigit = temp % 10;
                cout<<iDigit<<"\n";
                temp = temp / 10;
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number \n";
    cin>>iValue;

    Digit obj(iValue);
    obj.DisplayDigits();

    return 0;
}