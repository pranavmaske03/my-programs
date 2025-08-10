// program178.c

#include<iostream>
using namespace std;

void EditString(char *str)
{
    while(*str != '\0')
    {  
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = '#';
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = '$';
        }
        str++;
    }

}

int main()
{
    char Arr[20];

    cout<<"Enter string \n";
    cin.getline(Arr,20);

    EditString(Arr);
    cout<<"String after editing is : "<<Arr<<"\n";

    return 0;
}