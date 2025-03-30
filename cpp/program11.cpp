// program27.c

#include<iostream>
using namespace std;

int SumFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

bool CheckPerfect(int iNum)
{
    int iResult = 0;

    iResult = SumFactor(iNum);
    if(iResult == iNum)
    {
        return true;
    }
    else
    {
        return false;
    }
  
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number"<<'\n';
    cin>>iValue;

    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        cout<<"Number is perfect"<<"\n";
    }
    else
    {
        cout<<"Number is not perfect"<<"\n";
    }

    return 0;
}