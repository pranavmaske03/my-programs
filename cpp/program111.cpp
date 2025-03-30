// program179.c

#include<iostream>
using namespace std;

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter string \n";
    cin.getline(Arr,20);

    strlwrX(Arr);

    cout<<"String after editing is : "<<Arr<<"\n";

    return 0;
}