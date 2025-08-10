// program92.c

#include<iostream>
using namespace std;

#define ERR_NOTFOUND -1

class Array
{
    protected:
        int *Arr;
        int iSize;
        int iCnt;

    public:

        Array(int iLength)
        {
            iCnt = 0;
            iSize = iLength;
            Arr = new int[iSize];
        }

    protected:

        void Accept()
        {
            cout<<"Enter elements of ther array :"<<"\n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
            cout<<"\n";
        }

        void Display()
        {
            cout<<"Elements of the array are :"<<"\n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

};

class MyArray : public Array
{
    public:

        MyArray(int iSize) : Array(iSize)      
        {
            Array::Accept();
            Array::Display();
        }

        int SearchFirstOcc(int iSearch)
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
};

int main()
{
    int iSize = 0;
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number of elements : "<<"\n";
    cin>>iSize;

    MyArray obj(iSize);

    cout<<"Enter the number you want to search : "<<"\n";
    cin>>iValue;

    iRet = obj.SearchFirstOcc(iValue);
    if(iRet == ERR_NOTFOUND)
    {
        cout<<"There is no such number : "<<"\n";
    }
    else
    {
        cout<<"First occurence is at index : "<<iRet<<"\n";
    }

    return 0;
}