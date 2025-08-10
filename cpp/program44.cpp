// program51.c

#include<iostream>

class Digit
{
    public:
        int iNo;

    Digit(int X)
    {
        iNo = X;
    }

    void DisplayDigit()
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            std::cout<<iDigit<<"\n";
            iNo = iNo / 10;
        }
    }
};

int main()
{
    int iValue = 0;

    std::cout<<"Enter Number"<<'\n';
    std::cin>>iValue;

    Digit obj(iValue);
    obj.DisplayDigit();

    return 0;
}