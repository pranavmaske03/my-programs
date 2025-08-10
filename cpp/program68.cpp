// program185.c

#include<iostream>
using namespace std;

void strcmpcapX(char *str,char *dest)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *dest = *str;
            dest++;
        }
        str++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    cout<<"Enter string \n";
    cin.getline(Arr,50);

    strcmpcapX(Arr,Brr);

    cout<<"String after editing is : "<<Brr<<"\n";

    return 0;
}