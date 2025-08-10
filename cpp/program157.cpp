// program201.c

#include<iostream>
using namespace std;

bool CheckPallindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        if(*start != *end)
        {
            break;
        }
        start++;
        end--;
    }

    if(start < end)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[30];
    bool bRet = false;

    cout<<"Enter string \n";
    cin.getline(Arr,30);

    bRet = CheckPallindrome(Arr);
    if(bRet == true)
    {
        cout<<"String is Pallindrome \n";
    }
    else
    {
        cout<<"String is NOT Pallindrome \n";
    }

    return 0;
}