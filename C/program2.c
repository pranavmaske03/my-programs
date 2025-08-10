#include<stdio.h>
#include<stdlib.h>

int main()
{
    int No1 = 10;
    int No2 = 11;
    int Ans = 2;
    int *ptr = NULL;
    

    ptr = (int*)malloc(sizeof(int));

    scanf("%d",&ptr[0]);
    scanf("%d",&ptr[1]);
    scanf("%d",&ptr[2]);
    scanf("%d",&ptr[3]);
  
    int Arr[] = ptr;
    int size = sizeof(Arr) / sizeof(Arr[0]);
    printf("%d",size);

    Ans = No1 + No2;

    printf("%d\n",Ans);

    return 0;
}