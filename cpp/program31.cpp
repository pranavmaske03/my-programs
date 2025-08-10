// program90.c

#include<iostream>
using namespace std;

#define ERR_NOTFOUND -1

class Array
{
    public:
        int iSize;
        int *Arr;

    Array(int iNo)
    {
        iSize = iNo;
        Arr = new int[iSize];
    }

    void Accept()
    {
        printf("Enter elements of the Array\n");

        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    int SearchFirstOcc()
    {
        int iCnt = 0;
        int iSearch = 0;
        int iPos = ERR_NOTFOUND;

        cout<<"Enter the number you want to search"<<"\n";
        cin>>iSearch;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] == iSearch)
            {
                iPos = iCnt;
                break;
            }
        }
        if(iCnt == iSize)
        {
            return ERR_NOTFOUND;
        }
        else
        {
            return iCnt;
        }
    }

    ~Array()
    {
        delete[] Arr;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iValue);

    Array aobj(iValue);
    aobj.Accept();
    iRet = aobj.SearchFirstOcc();

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is NO such number :\n");
    }
    else
    {
        printf("First occurence of the %d is at Index : %d\n",iValue,iRet);
    }

    return 0;
}