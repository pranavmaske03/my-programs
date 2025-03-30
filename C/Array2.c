/*
    Accept two array from user and return common elements of the array.
*/

#include<stdio.h>
#include<stdlib.h>

void CommonElements(int Arr[],int Brr[],int length1,int length2)
{
    int iCnt = 0,i = 0,counter = 0,j = 0,k = 0,count = 0;
    int *ptr = NULL;

    //ptr = (int *)malloc(sizeof(int) * 1);

    for(iCnt = 0; iCnt < length1; iCnt++)
    {
        counter = 0;
        for(i = 0; i < length2; i++)
        {
            if(Arr[iCnt] == Brr[i])
            {
                counter++;
            }
        }
        if(counter > 0)
        {
            count = 0;
            for(k = 0; k < j; k++)
            {
                if(Arr[iCnt] == ptr[k])
                {
                    count++;
                }
            }
            if(count == 0)
            {
                ptr = (int *)realloc(ptr,sizeof(int));
                ptr[j] = Arr[iCnt];
                j++;
            }
        }
    }
    
    iCnt = 0;
    for(iCnt = 0; iCnt < j; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
    printf("\n");
    free(ptr);
}

int main()
{
    int size1 = 0,size2 = 0,iCnt = 0;
    int *ptr1 = NULL, *ptr2 = NULL;


    printf("Enter size of first array : \n");
    scanf("%d",&size1);

    ptr1 = (int *)malloc(sizeof(int) * size1);

    printf("Enter the elements of the array : \n");
    for(iCnt = 0; iCnt < size1; iCnt++)
    {
        scanf("%d",&ptr1[iCnt]);
    }

    printf("Enter size of second array : \n");
    scanf("%d",&size2);

    ptr2 = (int *)malloc(sizeof(int) * size2);

    printf("Enter the elements of the array : \n");
    for(iCnt = 0; iCnt < size2; iCnt++)
    {
        scanf("%d",&ptr2[iCnt]);
    }

    CommonElements(ptr1,ptr2,size1,size2);

    free(ptr1);
    free(ptr2);
    return 0;
}