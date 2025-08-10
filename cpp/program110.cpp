// program180.c

#include<iostream>
using namespace std;

void struprX(char *str)
{
    int Gap = 'a'-'A';

    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            *str = *str - Gap;
        }
        str++;
    }
}

int main()
{   
    char Arr[20];

    cout<<"Enter string \n";
    cin.getline(Arr,20);

    struprX(Arr);
    cout<<"String after editing is : "<<Arr<<"\n";

    return 0;
}