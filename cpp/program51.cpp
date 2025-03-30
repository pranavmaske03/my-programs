// program173.c

#include<iostream>
using namespace std;

#define ERR_NOTFOUND -1

class String
{
    public:

        int SearchFirstOcc(char *str, char cValue)
        {
            int iCnt = 0;

            while((*str != '\0') && (*str != cValue))
            {
                iCnt++;
                str++;
            }

            if(*str == '\0')
            {
                return ERR_NOTFOUND;
            }
            else
            {
                return iCnt;
            }
        }
};

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    cout<<"Enter string \n";
    cin>>Arr;

    cout<<"Enter the character you want to search"<<"\n";
    cin>>ch;

    String obj;

    iRet =obj.SearchFirstOcc(Arr,ch);
    if(iRet == ERR_NOTFOUND)
    {
        cout<<"There is no such character \n";
    }
    else
    {
        cout<<"First occurence is at index : "<<iRet<<"\n";
    }
    

    return 0;
}