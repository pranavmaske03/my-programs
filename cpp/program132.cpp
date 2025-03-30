// program182.c

#include<iostream>
using namespace std;

void strToggleX(char *str)
{
    int Gap = 'a' - 'A';

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + Gap;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - Gap;
        }
        str++;
    }
}

int main()
{
    char Arr[30];

    cout<<"Enter string \n";
    cin.getline(Arr,30);

    strToggleX(Arr);
    cout<<"String after editing is : "<<Arr<<"\n";

    return 0;
}