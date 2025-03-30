// program20.c

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

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            cout<<iCnt<<"\n";
        }
    }
        
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter first number :"<<"\n";
    cin>>iValue;

    Number nobj(iValue);
    nobj.Display();

    return 0;
}