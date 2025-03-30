// program93.c

#include<iostream>
using namespace std;

#define ERR_NOTFOUND -1

class ArrayX
{
    public: 
        int *Arr;
        int iSize;
        
        ArrayX(int);
        ~ArrayX();
        void Accept();
        void Display();
        int SearchLastOcc(int);
};

ArrayX::ArrayX(int X)
{
    iSize = X;
    Arr = new int[iSize];
}

ArrayX::~ArrayX()
{
    delete []Arr;
}

void ArrayX::Accept()
{
    cout<<"Enter elements of the array \n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void ArrayX::Display()
{
    cout<<"Elements of the array are \n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int ArrayX::SearchLastOcc(int iSearch)
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iSearch)
        {
            break;
        }
    }
    return iCnt;
}

int main()
{
    int iSize = 0;
    int iValue = 0,iRet = 0;

    cout<<"Enter number of elements \n";
    cin>>iSize;

    ArrayX obj(iSize);
    obj.Accept();
    obj.Display();

    cout<<"Enter number you want to search \n";
    cin>>iValue;

    iRet = obj.SearchLastOcc(iValue);
    if(iRet == ERR_NOTFOUND)
    {
        cout<<iValue<<" is NOT present in Array \n";
    }
    else
    {
        cout<<iValue<<" is present Array at Index "<<iRet<<"\n";
    }

    return 0;
}