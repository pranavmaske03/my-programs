// program79.c

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
        cout<<"Enter elements of the array"<<"\n";

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

    int CountEven()
    {
        int iCount = 0;
        int iCnt = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iCount++;
            }
        }
        return iCount;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number of elements"<<"\n";
    cin>>iValue;

    Array aobj(iValue);
    aobj.Accept();
    iRet = aobj.CountEven();

    cout<<"Count of even numbers is : "<<iRet<<"\n";

    return 0;
}
