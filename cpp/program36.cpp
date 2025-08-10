// program95.c

#include<iostream>
using namespace std;

class Pattern
{
    public:
        int iNo;

    Pattern(int X)
    {
        iNo = X;
    }

    void Display()
    {
        int iCnt = 0; 

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            cout<<"(^_^)"<<"\t";
        }
        cout<<"\n";
    }
};

int main()
{
    int iValue = 0;

    cout<<"Enter Frequency"<<"\n";
    cin>>iValue;

    Pattern pobj(iValue);
    pobj.Display();

    return 0;
}