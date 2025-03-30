// program183.c

#include<iostream>
using namespace std;

void strcpyX(char *str1,char *str2)
{
    while(*str1 != '\0')
    {
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    cout<<"Enter String \n";
    cin.getline(Arr,20);

    strcpyX(Arr,Brr);

    cout<<"String after copy is : "<<Brr<<"\n";

    return 0;
}