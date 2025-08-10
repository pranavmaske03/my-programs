// program160.c

#include<iostream>
using namespace std;

int strlenX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

int main()
{   
    char Arr[20];

    cout<<"Enter string \n";
    cin.getline(Arr,20);

    int iRet = strlenX(Arr);
    cout<<"Length of the string is : "<<iRet<<"\n";

    return 0;
}