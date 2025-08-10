#include<iostream>
using namespace std;

void strcpySmallX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    cout<<"Enter string \n";
    cin.getline(Arr,20);

    strcpySmallX(Arr,Brr);

    cout<<"String after editing is : "<<Brr<<"\n";

    return 0;
}