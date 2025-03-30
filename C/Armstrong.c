#include<stdio.h>
#include<stdbool.h>

int CountDigit(int No)
{
    int count = 0;

    while(No != 0)
    {
        No % 10;
        count++;
        No = No / 10;
    }
    return count;
}

bool CheckArmstrong(int No)
{
    int count = 0, iDigit = 0, iCnt = 0, no = 0;
    int sum = 0, result = 0, temp = No;

    count = CountDigit(No);
    no = count;

    while(no--)
    {
        result = 1;
        iDigit = No % 10;
        for(iCnt = 1; iCnt <= count; iCnt++)
        {
            result = result * iDigit;
        }
        sum = sum + result;
        No = No / 10;
    }
    if(sum == temp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number \n");
    scanf("%d",&iValue);

    bRet = CheckArmstrong(iValue);
    if(bRet == true)
    {
        printf("%d is armstrong number \n",iValue);
    }
    else
    {
        printf("%d is not armstrong number \n",iValue);
    }

    return 0;
}