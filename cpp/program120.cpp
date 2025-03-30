// program75.c

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int no)
        {
            iSize = no;
            Arr = new int[iSize];
        }

        void Accept()
        {
            cout<<"Enter number of elements \n";
            for(int i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            cout<<"Elements of array are \n";
            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number of elements \n";
    cin>>iValue;

    ArrayX obj(iValue);
    obj.Accept();
    obj.Display();

    return 0;
}