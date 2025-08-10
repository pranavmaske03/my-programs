// program91.c

#include<iostream>
using namespace std;
#define ERR_NOTFOUND -1

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
        cout<<"INside destructor : \n";
        delete []Arr;
    }

    int CheckFirstOcc()
    {
        int iCnt = 0;
        int iSearch = 0;

        cout<<"Enter the number you want to search"<<"\n";
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
            return ERR_NOTFOUND;
        }
        else
        {
            return iCnt;
        }
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
    iRet = aobj.CheckFirstOcc();

    if(iRet == ERR_NOTFOUND)
    {
        cout<<"There is no such number"<<"\n";
    }
    else
    {
        cout<<"First occurance is at Index : "<<iRet<<"\n";
    }

    return 0;
}