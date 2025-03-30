// program187.c

#include<iostream>
using namespace std;

void strcpyrevX(char *str1,char *str2)
{
    int Length = 0;

    while(*str1 != '\0')
    {
        *str1++;
        Length++;
    }
    *str1--;

    while(Length != 0)
    {
        *str2 = *str1;
        *str2++;
        *str1--;
        Length--;
    }
    *str2 = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];
    
    cout<<"Enter string \n";
    cin.getline(Arr,30);

    strcpyrevX(Arr,Brr);

    cout<<"String after copy is ; "<<Brr<<"\n";

    return 0;
}