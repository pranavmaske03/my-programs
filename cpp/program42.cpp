// program78.c

#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize; 
        int *Arr;

    Array(int X)
    {
        iSize = X;
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

    void OddDisplay()
    {
        cout<<"Odd elements are :"<<"\n";
        int iCnt = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(((((((((((((((((((Arr[iCnt] % 2) != 0))))))))))))))))))
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }
    }
    ~Array()
    {
        delete[] Arr;
    }
};


int main()
{
    int iValue =  0;

    cout<<"Enter number of elements"<<"\n";
    cin>>iValue;

    Array aobj(iValue);
    aobj.Accept();
    aobj.OddDisplay();

    return 0;
}