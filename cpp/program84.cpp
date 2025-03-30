// program68.c

#include<iostream>
using namespace std;

class Digits
{
    public:
        int iNo;

        Digits(int X)
        {
            iNo = X;
        }

        int Minimum()
        {
            int iMin = 9;
            int iDigit = 0;
            int temp = iNo;

            while(temp != 0)
            {
                iDigit = temp % 10;
                if(iMin > iDigit)
                {
                    iMin = iDigit;
                }
                temp = temp / 10;
            }
            return iMin;
        }
};

int main()
{
    int iValue = 0;
    
    cout<<"Enter number \n";
    cin>>iValue;

    Digits obj(iValue);
    cout<<"Minimum Digit is : "<<obj.Minimum()<<"\n";
    cout<<"Minimum Digit is : "<<obj.Minimum()<<"\n";

    return 0;
}