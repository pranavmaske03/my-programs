// program171.c

#include<iostream>
using namespace std;

#define ERR_NOTFOUND -1

int FirstOccurence(char *str,char ch)
{
    int iPos = ERR_NOTFOUND;
    int iCnt = 1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
            break;
        }
        iCnt++;
        str++;
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

    cout<<"Enter the character you want to search \n";
    cin>>ch;

    iRet = FirstOccurence(Arr,ch);
    if(iRet == ERR_NOTFOUND)
    {
        cout<<"There is no such character \n";
    }
    else
    {
        cout<<"First occurence of the character is at : "<<iRet<<"\n";
    }

    return 0;
}