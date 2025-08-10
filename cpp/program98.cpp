// program82.c

#include<iostream>
using namespace std;

class Array
{
    public: 
        int *Arr;

        virtual void Accept() = 0;
        virtual void Display() = 0;
};

class MyArray : public Array
{
    public:
        int iSize;

        MyArray(int);
        ~MyArray();

        void Accept();
        void Display();
        int Maximum();
};

MyArray::MyArray(int X)
{
    iSize = X;
    Arr = new int[iSize];
}

MyArray::~MyArray()
{
    delete []Arr;
}

void MyArray::Accept()
{
    cout<<"Enter elements of the array \n";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void MyArray::Display()
{
    cout<<"Elements of the array are : \n"; 

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }   
    cout<<"\n";
}

int MyArray::Maximum()
{
    int iCnt = 0;
    int iMax = Arr[iCnt];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{   
    int iValue = 0;

    cout<<"Enter number of elements \n";
    cin>>iValue;

    MyArray obj(iValue);
    obj.Accept();
    obj.Display();

    cout<<"Maximum element of the array is : "<<obj.Maximum()<<"\n";

    return 0;
}