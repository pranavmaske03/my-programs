// program189.c

#include<iostream>
using namespace std;

void strcatX(char *src,char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *src = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20] = "Fuck";

    cout<<"Enter string \n";
    cin.getline(Arr,20);

    strcatX(Arr,Brr);

    cout<<"String after editing is : "<<Brr<<"\n";

    return 0;
}