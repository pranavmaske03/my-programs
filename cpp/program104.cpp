// program186.c

#include<iostream>
using namespace std;

void strcpyToggleX(char *str1,char *str2)
{
    int Gap = 'a' - 'A';

    while(*str1 != '\0')
    {
        if((*str1 >= 'a') && (*str1 <= 'z'))
        {
            *str1 = *str1 - Gap;
        }
        else if((*str1 >= 'A') && (*str1 <= 'Z'))
        {
            *str1 = *str1 + Gap;
        }
        
        *str2 = *str1;
        str1++;
        str2++;
    }
}

int main()
{   
    char Arr[20];
    char Brr[20];

    cout<<"Enter string \n";
    cin.getline(Arr,20);

    strcpyToggleX(Arr,Brr);

    cout<<"String after copy is : "<<Brr<<"\n";

    return 0;
}