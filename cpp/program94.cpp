// program67.c

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

        int Minimum()
        {
            int iMin = 9;
            int iDigit = 0,temp = iNo;

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

    Digit obj(iValue);
    
    cout<<"Minimum digit is : "<<obj.Minimum()<<"\n";

    return 0;
}