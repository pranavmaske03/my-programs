#include<iostream>
using namespace std;

#define ERR_NOTFOUND -1

class Array
{
    protected:
        int *Arr;
        int iSize;

    public:
        Array(int);

    protected:
        void Accept();
        void Display();
};

Array::Array(int no)
{
    iSize = no;
    Arr = new int[iSize];
}

void Array::Accept()
{
    cout<<"Enter elements of the array \n";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void Array::Display()
{
    cout<<"Elements of the array are :\n";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

class MyArray : public Array
{
    public:

      MyArray(int);
      int SearchFirstOcc(int);
};

MyArray::MyArray(int iSize) : Array(iSize)
{
    Array::Accept();
    Array::Display();
}

int MyArray::SearchFirstOcc(int iSearch)
{
    int iCnt = 0;

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

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number of elements \n";
    cin>>iValue;

    MyArray obj(iValue);

    cout<<"Enter number to search in array \n";
    cin>>iValue;

    iRet = obj.SearchFirstOcc(iValue);
    if(iRet == ERR_NOTFOUND)
    {
        cout<<"There is no such number \n";
    }
    else
    {
        cout<<"First occurence of the number is at Index : "<<iRet<<"\n";
    }

    return 0;
}