//program177.c

#include<iostream>
using namespace std;

void Editing_String(char *str)
{
    while(*str != 0)
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = '_';
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter string \n";
    cin.getline(Arr,20);

    Editing_String(Arr);
    cout<<"String after editing is : "<<Arr<<"\n";

    return 0;
}