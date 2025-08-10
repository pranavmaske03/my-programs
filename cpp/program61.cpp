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
                cout<<iCnt<<"\t";
            }
            for(iCnt = iNo-1; iCnt >= 1; iCnt--)
            {
                cout<<iCnt<<"\t";
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter frequency\n";
    cin>>iValue;

    Pattern *obj = new Pattern(iValue);
    obj->Display();

    return 0;
}