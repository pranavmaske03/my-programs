/*
    Accept array from user and find the summation of non-repeating element.
*/

#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int length)
{
    int iCnt = 0,i = 0;
    int sum = 0, counter = 0;

    for(iCnt = 0; iCnt < length; iCnt++)
    {
        counter = 0;
        for(i = 0; i < length; i++)
        {
            if(Arr[iCnt] == Arr[i])
            {
                counter++;
            }
        }
        if(counter == 1)
        {
            sum = sum + Arr[iCnt];
        }
    }
    return sum;
}

int main()
{
    int size = 0,iCnt = 0,ret = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&size);

    ptr = (int *)malloc(size * sizeof(int));

    printf("Enter the elements of the array : \n");
    for(iCnt = 0; iCnt < size; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of the array are : \n");
    for(iCnt = 0; iCnt < size; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);

    }
    printf("\n");

    ret = Summation(ptr,size);
    printf("Summation is : %d\n",ret);

    free(ptr);
    return 0;
}