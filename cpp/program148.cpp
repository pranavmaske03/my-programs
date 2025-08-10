// program193.c

#include<iostream>
using namespace std;

void strncmpyX(char *src,char *dest,int iLength)
{
    while(iLength != 0)
    {
        *dest = *src;
        dest++;
        src++;
        iLength--;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];
    int iValue = 0;

    cout<<"Enter string \n";
    cin.getline(Arr,30);

    cout<<"Enter numbre of characters that you want to copy \n";
    cin>>iValue;

    strncmpyX(Arr,Brr,iValue);

    cout<<"String after copy is : "<<Brr<<"\n";

    return 0;
}