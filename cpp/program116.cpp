// program195.c

#include<iostream>
using namespace std;

bool strcmpX(char *str1,char *str2)
{
    while((*str1 != '\0') && (*str2 != '\0') && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    if((*str1 == '\0') && (*str2 == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    cout<<"Enter first String \n";
    cin.getline(Arr,20);
    
    cout<<"Enter second setring \n";
    cin.getline(Brr,20);

    bRet = strcmpX(Arr,Brr);
    if(bRet == true)
    {
        cout<<"Strings are identicle \n";
    }
    else
    {
        cout<<"strings are NOT identicle \n";
    }

    return 0;
}