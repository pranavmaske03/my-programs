#include<iostream>
#include <iomanip>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int);
        ~ArrayX();

        void Accept();
        void Display();

        float Average();
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

float ArrayX::Average()
{
    int iSum = 0;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return ((float)iSum / (float)iSize);
}

int main()
{
    int iSize = 0;
    float fRet = 0.0f;

    cout<<"Enter number of elements \n";
    cin>>iSize;
 
    ArrayX obj(iSize);
    obj.Accept();
    obj.Display();

    fRet = obj.Average();
    cout<<"Average is : "<<setprecision(4)<<fRet<<"\n";

    return 0;
}