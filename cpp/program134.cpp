// program155.c

#include<iostream>
using namespace std;

bool CheckSmall(char cValue)
{
    if((cValue >= 'a') && (cValue <='z'))
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

    bRet = CheckSmall(ch);
    if(bRet == true)
    {
        cout<<"Character is small \n";
    }
    else
    {
        cout<<"Character is NOT small \n";
    }

    return 0;
}