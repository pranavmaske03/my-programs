// program84.c

#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

    Array(int X)
    {
        iSize = X;
        Arr = new int[iSize];
    }

    void Accept()
    {
        cout<<"Enter elements of Array"<<"\n";

        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    int Minimum()
    {
        int iCnt = 0;
        int iMin = Arr[0];

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(iMin > Arr[iCnt])
            {
                iMin = Arr[iCnt];
            }
        }
        return iMin;
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

    cout<<"Enter number of element"<<"\n";
    cin>>iValue;

    Array obj(iValue);

    obj.Accept();
    iRet = obj.Minimum();

    cout<<"Smallest element is : "<<iRet<<"\n";

    return 0;
}