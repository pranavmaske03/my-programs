// program156.c

#include<iostream>
using namespace std;

bool CheckDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
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
    char ch = '\0';
    bool bRet = false;

    cout<<"Enter character \n";
    cin>>ch;

    bRet = CheckDigit(ch);
    if(bRet == true)
    {
        cout<<ch<<" is Digit \n";
    }
    else
    {
        cout<<ch<<" is NOT Digit \n";
    }

    return 0;
}