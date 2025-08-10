// program165.c

#include<iostream>
//#include<string.h>
using namespace std;

class String 
{
    public:

        int CountVowels(char *str)
        {
            int iCount = 0;

            while(*str != '\0')
            {
                if ((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
                {
                    iCount++;
                }
                str++;
            }
            return iCount;
        }
};

int main()
{
    char Arr[50];
    int iRet = 0;

    cout<<"Enter string : \n";
    cin.getline(Arr,50);

    String obj;

    iRet = obj.CountVowels(Arr);
    cout<<"Count of vowels is : "<<iRet<<"\n";

    return 0;
}