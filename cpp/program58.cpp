#include<iostream>
using namespace std;

class StringX
{
    public:

        int CountVowels(char *str)
        {
            int iCount = 0;

            while(*str != '\0')
            {
                if((*str == 'A') || (*str == 'E') || (*str == 'O') || (*str == 'I') || (*str == 'U') || (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'u') || (*str == 'o'))
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
    char Arr[20];

    cout<<"Enter string\n";
    cin.getline(Arr,20);

    StringX obj;
    cout<<"Count of the vowels is : "<<obj.CountVowels(Arr)<<"\n";
    
    return 0;
}