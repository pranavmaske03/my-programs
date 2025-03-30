// program188.c

#include<iostream>
using namespace std;

void strcpyrevX(char *str1,char *str2)
{
    int iLength = 0;

    while(*str1 != '\0')
    {
        str1++;
        iLength++;
    }
    *str1--;

    while(iLength != 0)
    {
        *str2 = *str1;
        str1--;
        str2++;
        iLength--;
    }
    *str2 = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    cout<<"Enter string \n";
    cin.getline(Arr,20);

    strcpyrevX(Arr,Brr);

    cout<<"String after copy is : "<<Brr<<"\n";

    return 0;
}