// program100.c

#include<iostream>
using namespace std;

class Number
{
    public:
       int iNo;

    Number(int X)
    {
        iNo = X;
    }

    void Display()
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            cout<<iCnt<<"\t";
        }
        cout<<"\n";
    }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number"<<"\n";
    cin>>iValue;

    Number nobj(iValue);
    nobj.Display();

    return 0;
}