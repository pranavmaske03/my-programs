// program190.c

#include<iostream>
using namespace std;

void strcatX(char *src,char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }
    *dest = ' ';
    dest++;

    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20] = "Hello";

    cout<<"Enter string \n";
    cin.getline(Arr,20);

    strcatX(Arr,Brr);
    cout<<"String after copy is : "<<Brr<<"\n";

    return 0;
}