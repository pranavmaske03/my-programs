// program31.c

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

        bool CheckPrime()
        {
            int iCnt = 0;
            
            for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
            {
                if((iNo % iCnt) == 0)
                {
                    break;
                }
            }
            if(iCnt == (iNo/2)+1)
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
    
    bRet = obj.CheckPrime();
    if(bRet == true)
    {
        cout<<"Number is prime \n";
    }
    else
    {
        cout<<"Number is NOT prime \n";
    }

    return 0;
}