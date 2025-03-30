// program52.c

#include<iostream>
using namespace std;

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    for(;iNo != 0;)
    {
        iDigit = iNo % 10;
        cout<<iDigit<<"\n";
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
     
    cout<<"Enter number \n";
    cin>>iValue;

    DisplayDigits(iValue);

    return 0;
}