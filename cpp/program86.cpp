// program21.c

#include<iostream>
using namespace std;

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            cout<<iCnt<<"\t";
        }
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;

    cout<<"Enter number \n";
    cin>>iValue;

    DisplayFactors(iValue);

    return 0;
}