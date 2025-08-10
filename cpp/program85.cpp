// program77.c

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int);

        void Accept();
        void Display();
        void DisplayEven();
};

ArrayX::ArrayX(int X)
{
    iSize = X;
    Arr = new int[iSize];
}

void ArrayX::Accept()
{
    cout<<"Enter elements of the array \n";
    for(int icnt = 0; icnt < iSize; icnt++)
    {
        cin>>Arr[icnt];
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

void ArrayX::DisplayEven()
{
    cout<<"Even elements of the array are :\n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            cout<<Arr[iCnt]<<"\t";
        }
    }
    cout<<"\n";
}

int main()
{
    int iSize = 0;

    cout<<"Enter number of elements \n";
    cin>>iSize;

    ArrayX obj(iSize);
    obj.Accept();
    obj.Display();
    obj.DisplayEven();

    return 0;
}