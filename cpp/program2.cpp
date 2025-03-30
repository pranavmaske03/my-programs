// program2.c

#include<iostream>
using namespace std;

class Addition
{
    public:
       int iNo1;
       int iNo2;

    Addition(int X, int Y)
    {
       iNo1 = X;
       iNo2 = Y;
    }   

    int Arithmatic()
    {
        int iAns = 0;

        iAns = iNo1 + iNo2;
        return iAns;
    }
};

int main()
{
    int iValue1 = 10;
    int iValue2 = 101;
    int iRet = 0;

    Addition aobj(iValue1,iValue2);

    iRet = aobj.Arithmatic();

    cout<<"Addition is : "<<iRet<<"\n";

    return 0;

}