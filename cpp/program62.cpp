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
            char ch = '\0';
            int iCnt = 0;

            for(iCnt = 1,ch = 'a'; iCnt <= iNo; iCnt++,ch++)
            {
                cout<<ch<<"\t"<<iCnt<<"\t";
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