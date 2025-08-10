// program76.c

#include<iostream>
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
        int Addition();
};

ArrayX::ArrayX(int no)
{
    iSize = no;
    Arr = new int[iSize];
}

ArrayX::~ArrayX()
{
    delete []Arr;
}

void ArrayX::Accept()
{
    cout<<"Enter elements of array \n";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void ArrayX::Display()
{
    cout<<"Elements of the array are \n";
    for(int icnt = 0; icnt < iSize; icnt++)
    {
        cout<<Arr[icnt]<<"\t";
    }
    cout<<"\n";
}

int ArrayX::Addition()
{
    int iSum = 0;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{   
    int iSize = 0;

    cout<<"Enter number of elements \n";
    cin>>iSize;

    ArrayX obj(iSize);
    obj.Accept();
    obj.Display();

    cout<<"Addition of the array elements is : "<<obj.Addition()<<"\n";

    return 0;
}