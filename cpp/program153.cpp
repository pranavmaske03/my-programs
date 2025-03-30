// program197.c

#include<iostream>
using namespace std;

bool strcmpX(char *str1,char *str2)
{
    while((*str1 != '\0') && (*str2 != '\0') && (*str1 == *str2))
    {
        str1++;
        str2++;
    }

    return ((*str1 == '\0') && (*str2 == '\0'));
}

int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet = false;

    cout<<"Enter first string \n";
    cin>>Arr;

    cout<<"Enter second string \n";
    cin>>Brr;

    bRet = strcmpX(Arr,Brr);
    if(bRet == true)
    {
        cout<<"Strings are identicle \n";
    }
    else
    {
        cout<<"String are not identicle \n";
    }

    return 0;
}