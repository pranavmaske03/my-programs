// program10.c

#include<iostream>
using namespace std;

class Print
{
    public:
        int iNo;

    Print(int X)
    {
        iNo = X;
    }

    void Display()
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            cout<<"Fuck You...!!!"<<"\n";
        }
    }
};

int main()
{
    int iValue = 0;

    cout<<"Enter Frequency "<<'\n';
    cin>>iValue;

    Print pobj(iValue);
    pobj.Display();

    return 0;
}
