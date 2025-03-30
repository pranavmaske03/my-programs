// program174.c

#include<iostream>
using namespace std;

#define ERR_NOTFOUND -1

int SearchLastOcc(char *str,char ch)
{
    int iPos = ERR_NOTFOUND,iCnt = 1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
        }
        str++;
        iCnt++;
    }
    return iPos;
}

int main()
{
    char Arr[30];
    char ch = '\0';
    int iRet = 0;

    cout<<"Enter string \n";
    cin.getline(Arr,30);

    cout<<"Enter character to search \n";
    cin>>ch;

    iRet = SearchLastOcc(Arr,ch);
    if(iRet == ERR_NOTFOUND)
    {
        cout<<"There is no such character \n";
    }
    else
    {
        cout<<"Last occurence of the character is at no : "<<iRet<<"\n";
    }
  
    return 0;
}