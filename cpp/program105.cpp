// program192.c

#include<iostream>
using namespace std;

void strcatX(char *str1,char *str2,int iNo)
{
    int iCnt = 1;

    while(*str2 != '\0')
    {
        str2++;
    }
    *str2 = ' ';
    str2++;
     
    while(iCnt <= iNo)
    {
        *str2 = *str1;
        iCnt++;
        str1++;
        str2++;
    }
}

int main()
{
    char Arr[30];
    char Brr[30] = "Hello";
    int iValue = 0;

    cout<<"Enter string \n";
    cin.getline(Arr,30);

    cout<<"Enter how many character you want to concate \n";
    cin>>iValue;

    strcatX(Arr,Brr,iValue);

    cout<<"String after Concating : "<<Brr<<"\n";

    return 0;   
}