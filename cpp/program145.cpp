// program45.c


#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = (iNo/2);

    while(iCnt > 0)
    {
        if((iNo % iCnt) == 0)
        {
            cout<<iCnt<<"\t";
        }
        iCnt--;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number \n";
    cin>>iValue;

    Display(iValue);

    return 0;
}