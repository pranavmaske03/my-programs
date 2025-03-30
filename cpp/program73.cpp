#include<iostream>
using namespace std;

int strlenDigits(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter string \n";
    cin.getline(Arr,20);

    iRet = strlenDigits(Arr);
    cout<<"Count of the digits in string is : "<<iRet<<"\n";

    return 0;
}