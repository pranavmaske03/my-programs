// program88.c

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
        cout<<"Enter elements of Array"<<"\n";

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

    bool SearchNum()
    {
        int iCnt = 0;
        int iSearch = 0;

        cout<<"Enter the element you want to search"<<'\n';
        cin>>iSearch;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] == iSearch)
            {
                break;
            }
        }
        if(iCnt == iSize)
        {
            return false;
        }
        else
        {
            return true;
        }
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

    bRet = aobj.SearchNum();
    if(bRet == true)
    {
        cout<<"Number is present"<<"\n";
    }
    else
    {
        cout<<"Number is not present"<<"\n";
    }

    return 0;
}