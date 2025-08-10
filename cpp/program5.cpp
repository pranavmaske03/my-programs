// program87.c

#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

     Array(int iNo1)
    {
        iSize = iNo1;
        Arr = new int[iSize];
    }

    void Accept()
    {
        cout<<"Enter the elements"<<'\n';

        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    ~Array()
    {
        delete []Arr;
    }

    bool SearchNumber()
    {
        int iNo2 = 0;
        bool bFlag = false;

        cout<<"Enter the number you want to search"<<"\n";
        cin>>iNo2;

        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
           if(Arr[iCnt] == iNo2)
           {
                bFlag = true;
                break;
           }
        }
        return bFlag;
    }
};

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    cout<<"Enter number of elements"<<"\n";
    cin>>iValue;

    Array aobj(iValue);
    aobj.Accept();
    bRet = aobj.SearchNumber();

    if(bRet == false)
    {
        cout<<"There is no such number"<<"\n";
    }
    else
    {
        cout<<"Number is present "<<"\n";
    }

    return 0;
}