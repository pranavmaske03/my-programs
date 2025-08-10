// program54.c

#include<iostream>
using namespace std;

bool CheckLetter(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
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

    bRet = CheckLetter(ch);
    if(bRet == true)
    {
        cout<<ch<<" is a capitial letter :\n";
    }
    else
    {
        cout << ch << " is  NOT capitial letter :\n";
    }
}