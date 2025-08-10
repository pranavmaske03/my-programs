#include<iostream>
using namespace std;

class StringX
{
    public:

        void CountCapitalSmall(char *str)
        {
            int i = 0 , j = 0;

            while(*str != '\0')
            {
                if((*str >= 'A') && (*str <= 'Z'))
                {
                    i++;
                }
                else if((*str >= 'a') && (*str <= 'z'))
                {
                    j++;
                }
                str++;
            }
            cout<<"Count of the Capital letters is : "<<i<<"\n";
            cout<<"Count of the Small letters is : "<<j<<"\n";
        }

};

int main()
{
    char Arr[20];

    cout<<"Enter string\n";
    cin.getline(Arr,20);

    StringX obj;
    obj.CountCapitalSmall(Arr);
    
    return 0;
}