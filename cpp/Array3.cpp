/*
    Problem : twoSum using brut force algoritham.
*/

#include<iostream>
#include<set>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int size)
        {
            this->iSize = size;
            this->Arr = new int[iSize];
        }

        void Accept()
        {
            cout<<"Enter the elements of the array : \n";
            for(int i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            cout<<"Elements of the array are : \n";
            for(int i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<"\t";
            }
            cout<<"\n";
        }
};

class MyArray : ArrayX
{
    public:

        MyArray(int size) : ArrayX(size)
        {
            ArrayX::Accept();
            ArrayX::Display();
        }

        ~MyArray()
        {
            cout<<"Inside Destructor \n";
            delete[] Arr;
        }

        int* twoSum(int target)
        {
            int *ptr = new int[2];

            for(int i = 0; i < iSize; i++)
            {
                for(int j = i+1; j < iSize; j++)
                {
                    if((Arr[i] + Arr[j]) == target)
                    {
                        ptr[0] = i;
                        ptr[1] = j;
                        return ptr;
                    }
                }
            }
            return NULL;
        }
};

int main()
{
    int size = 0,value = 0;
    int *ptr = NULL;

    cout<<"Enter number of elements : \n";
    cin>>size;

    cout<<"Enter the target element : \n";
    cin>>value;

    MyArray *obj = new MyArray(size);
    ptr = obj->twoSum(value);

    cout<<ptr[0]<<"\t"<<ptr[1]<<"\n";

    delete obj;
    return 0;
}