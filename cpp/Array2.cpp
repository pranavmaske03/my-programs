/*
    Accept two array from user and return common elements of the array.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int *Brr;
        int iSize1;
        int iSize2;

        ArrayX(int size1,int size2)
        {
            this->iSize1 = size1;
            this->iSize2 = size2;
            this->Arr = new int[iSize1];
            this->Brr = new int[iSize2];
        }

        void Acceptfirst()
        {
            int iCnt = 0;

            cout<<"Enter elements of first array \n";
            for(iCnt = 0; iCnt < iSize1; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Acceptsecond()
        {
            int iCnt = 0;

            cout<<"Enter elements of second array \n";
            for(iCnt = 0; iCnt < iSize2; iCnt++)
            {
                cin>>Brr[iCnt];
            }
        }

        void CommonElements()
        {
            int iCnt = 0,i = 0,counter = 0,j = 0,k = 0,count = 0;
            int *ptr = NULL;

            //ptr = (int *)malloc(sizeof(int) * 1);

            for(iCnt = 0; iCnt < iSize1; iCnt++)
            {
                counter = 0;
                for(i = 0; i < iSize2; i++)
                {
                    if(Arr[iCnt] == Brr[i])
                    {
                        counter++;
                    }
                }
                if(counter > 0)
                {
                    count = 0;
                    for(k = 0; k < j; k++)
                    {
                        if(Arr[iCnt] == ptr[k])
                        {
                            count++;
                        }
                    }
                    if(count == 0)
                    {
                        ptr = (int *)realloc(ptr,sizeof(int));
                        ptr[j] = Arr[iCnt];
                        j++;
                    }
                }
            }  
            cout<<"Common elements are : \n";
            iCnt = 0;
            for(iCnt = 0; iCnt < j; iCnt++)
            {
                cout<<ptr[iCnt]<<"\t";
            }
            cout<<"\n";  
            delete[] ptr;
        }
};

int main()
{
    int iSize1 = 0,iSize2 = 0;

    cout<<"Enter number of elements of first array : \n";
    cin>>iSize1;

    cout<<"Enter number of elements of second array : \n";
    cin>>iSize2;

    ArrayX obj(iSize1,iSize2);
    obj.Acceptfirst();
    obj.Acceptsecond();

    obj.CommonElements();

    return 0;
}