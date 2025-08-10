// program170.c

#include<iostream>
using namespace std;

int CountChar(char *str,char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[30];
    char ch = '\0';

    cout<<"Enter string \n";
    cin.getline(Arr,30);

    cout<<"Enter charater \n";
    cin>>ch;

    cout<<"Count of the character is : "<<CountChar(Arr,ch)<<"\n";

    return 0;
}