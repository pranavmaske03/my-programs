// program98.c

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

    void DisplayPattern()
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt <= iNo; iCnt++)
        {
            cout<<iCnt<<"*\t";
        }
    }
};

int main()
{
    int iFrequency = 0;

    cout<<"Enter Frequency "<<"\n";
    cin>>iFrequency;

    Pattern pobj(iFrequency);
    pobj.DisplayPattern();

    return 0;
}