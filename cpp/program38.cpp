// program73.c

// static memory allocation for ARRay

#include<iostream>
using namespace std;

int main()
{
    int Arr[5];
    int iCnt = 0;

    cout<<"Enter elements of Array"<<"\n";

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";

    return 0;
}