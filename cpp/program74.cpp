#include<iostream>
using namespace std;

int CountSpace(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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

    cout<<"Enter string \n";
    cin.getline(Arr,30);

    cout<<"Count of the space is : "<<CountSpace(Arr)<<"\n";

    return 0;
}