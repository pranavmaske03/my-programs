#include<iostream>

bool CheckCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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

    std::cout<<"Enter character \n";
    std::cin>>ch;

    bRet = CheckCapital(ch);
    if(bRet == true)
    {
        std::cout<<ch<<" is capital letter \n";
    }
    else
    {
        std::cout<<ch<<" is NOT capital letter \n";
    }

    return 0;
}