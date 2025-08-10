// program80.c

#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

    Array(int iNo)
    {
        iSize = iNo;
        Arr = new int[iSize];
    }

    void Accept()
    {
        cout<<"Enter the elements of Array"<<"\n";

        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    int OddCount()
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if((Arr[iCnt] % 2) != 0)
            {
                iCount++;
            }
        } 
        return iCount;
    }

    ~Array()
    {
        delete[] Arr;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number of elements "<<"\n";
    cin>>iValue;

    Array aobj(iValue)    ;
    aobj.Accept();
    
    iRet = aobj.OddCount();
    cout<<"Count of the Odd numbers is : "<<iRet<<"\n";

    iRet = aobj.OddCount();
    cout<<"Count of the Odd numbers is : "<<iRet<<"\n";

    return 0;
}