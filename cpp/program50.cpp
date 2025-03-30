// program200.c

#include<iostream>
using namespace std;

class String
{
    public:
       
       void StrrevX(char *str)
       {
            char *start = NULL;
            char *end = NULL;
            char temp = '\0';

            end = str;
            start = str;

            while(*end != '\0')
            {
                end++;
            }
            end--;

            while(start < end)
            {
                temp = *start;
                *start = *end;
                *end = temp;

                end--;
                start++;
            }
        }
};

int main()
{
    char Arr[20];

    cout<<"Enter string :\n";
    cin.getline(Arr,20);

    String obj;
    
    obj.StrrevX(Arr);
    cout<<"String after reverse is : "<<Arr<<"\n";

    return 0;
}