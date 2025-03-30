// program86.c

#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

        Array(int);
        ~Array();

        void Accept();
        void Display();

        void MaximumMinimum();
};

Array::Array(int X)
{
    iSize = X;
    Arr = new int[iSize];
}

Array::~Array()
{
    delete Arr;
}

void Array::Accept()
{
    cout<<"Enter elements of array \n";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void Array::Display()
{
    cout<<"Elements of the array \n";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

void Array::MaximumMinimum()
{
    int iCnt = 0;
    int iMax = Arr[iCnt];
    int iMin = Arr[iCnt];

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
        else if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }
    cout<<"Largest element of the array is : "<<iMax<<"\n";
    cout<<"Smallest element of the array is : "<<iMin<<"\n";
}

int main()
{
    int iSize = 0;
    
    cout<<"Enter number of elements \n";
    cin>>iSize;

    Array obj(iSize);
    obj.Accept();
    obj.Display();
    obj.MaximumMinimum();

    return 0;
}