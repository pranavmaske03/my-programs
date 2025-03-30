// program26.c

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

        int DisplaySumFactors()
        {
            int iCnt = 0,iSum = 0;

            for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
            {
                if((iNo%iCnt) == 0)
                {
                    iSum = iSum + iCnt;
                }
            }
            return iSum;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number \n";
    cin>>iValue;

    Number obj(iValue);

    iRet = obj.DisplaySumFactors();
    cout<<"Sum of factors is : "<<iRet<<"\n";

    iRet = obj.DisplaySumFactors();
    cout<<"Sum of factors is : "<<iRet<<"\n";

    return 0;
}