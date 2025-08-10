// program89.c

#include<iostream>
using namespace std;

class Array
{
    public:
        int *Arr;
        int iSize;

        Array(int X)
        {
            iSize = X;
            Arr = new int[iSize];
        }

        void Accept()
        {
            cout<<"Enter elements of array \n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elements of the array are \n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

        bool Search(int iSearch)
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
                return false;
            }
            else
            {
                return true;
            }
        }

        ~Array()
        {
            delete Arr;
        }
};

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number of elements \n";
    cin>>iValue;

    Array *obj = new Array(iValue);
    obj->Accept();
    obj->Display();

    cout<<"Enter number you want to search \n";
    cin>>iValue;

    bRet = obj->Search(iValue);
    if(bRet == true)
    {
        cout<<iValue<<" is present in array \n";
    }
    else
    {
        cout<<iValue<<" is NOT present in array \n";
    }

    return 0;
}