// program176.c

#include<iostream>
using namespace std;

void EditingString(char *str)
{
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            *str = '_';
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter string : \n";
    cin.getline(Arr,20);

    EditingString(Arr);
    cout<<"String after editing is : "<<Arr<<"\n";

    return 0;
}