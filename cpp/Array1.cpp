/*
    Accept array from user and find the summation of non-repeating element.
*/

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
        int Summation();
};

ArrayX::ArrayX(int size)
{
    this->iSize = size;
    this->Arr = new int[iSize];
}

ArrayX::~ArrayX()
{   
    cout<<"Inside destructor ";
    delete []Arr;
}

void ArrayX::Accept()
{
    int iCnt = 0;

    cout<<"Enter the elements of the array : \n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void ArrayX::Display()
{
    int iCnt = 0;

    cout<<"Elements of the array are : \n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int ArrayX::Summation()
{
    int iCnt = 0,i = 0,counter = 0;
    int sum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        counter = 0;
        for(i = 0; i < iSize; i++)
        {
            if(Arr[iCnt] == Arr[i])
            {
                counter++;
            }
        }
        if(counter == 1)
        {
            sum = sum + Arr[iCnt];
        }
    }
    return sum;
}

int main()
{
    int size = 0;

    cout<<"Enter number of elements \n";
    cin>>size;

    ArrayX *obj = new ArrayX(size);
    obj->Accept();
    obj->Display();

    int ret = obj->Summation();
    cout<<"Summation is : "<<ret<<"\n";
    
    delete obj;
    return 0;
}