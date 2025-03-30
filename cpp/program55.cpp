// program85.c

#include<iostream>
using namespace std;

class ArrayX
{
    protected:
        int *Arr;
        int iSize;
        int iCnt;

    public:

        ArrayX(int iLength)
        {
            iCnt = 0;
            iSize = iLength;
            Arr = new int[iSize];
        }
    
    protected:

        void Accept()
        {
            cout<<"Enter elements of array :\n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Dislay()
        {
            cout<<"Elements of the array are :\n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }
};

class MyArray : public ArrayX
{
    public:

        MyArray(int iSize) : ArrayX(iSize)
        {
            ArrayX::Accept();
            ArrayX::Dislay();
        }

        int iMaximum()
        {
            int iCnt = 0;
            int iMax = Arr[0];

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(iMax < Arr[iCnt])
                {
                    iMax = Arr[iCnt];
                }
            }
            return iMax;
        }

        int iMinimum()
        {
            int iMin = Arr[0];

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(iMin > Arr[iCnt])
                {
                    iMin = Arr[iCnt];
                }
            }
            return iMin;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number of elements \n";
    cin>>iValue;
    
    MyArray obj(iValue);

    iRet = obj.iMaximum();
    cout<<"Maximum number in array is : "<<iRet<<"\n";

    iRet = obj.iMinimum();
    cout<<"Minimum number in array is : "<<iRet<<"\n";

    return 0;
}