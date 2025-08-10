// program28.c

#include<iostream>
using namespace std;

class Number 
{
    public:
        int iNo;

        Number(int no)
        {
            iNo = no;
        }

        bool CheckPerfect()
        {   
            int iCnt = 0,iSum = 0;

            for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
            {
                if((iNo % iCnt) == 0)
                {
                    iSum = iSum + iCnt;
                }
                 
                if(iSum > iNo)
                {
                    break;
                }
            }
            if(iSum == iNo)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number \n";
    cin>>iValue;

    Number obj(iValue);
    bRet = obj.CheckPerfect();

    if(bRet == true)
    {
        cout<<"Number is perfect \n";
    }
    else
    {
        cout<<"Number is NOT perfect \n";
    }

    return 0;
}