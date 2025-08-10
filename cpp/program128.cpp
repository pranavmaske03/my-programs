// program191.c

#include<iostream>
using namespace std;

void strncatX(char *src,char *dest,int iLength)
{
    while(*dest != '\0')
    {
        dest++;
    }

    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;

        iLength--;
        if(iLength == 0)
        {
            break;
        }
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20] = "HELLO";
    int iValue = 0;

    cout<<"Enter string :\n";
    cin.getline(Arr,30);

    cout<<"Enter how many characters you want to concate \n";
    cin>>iValue;

    strncatX(Arr,Brr,iValue);
    cout<<"String after concatination is : "<<Brr<<"\n";

    return 0;
}