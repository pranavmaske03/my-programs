#include<stdio.h>
#include<stdlib.h>

void Display(char **strs)
{
    int j = 0;

    while(!strs[0][j])
    {   
        printf("Inside while\n");
        printf("%c\n",strs[0][j]);
        j++;
    }
}

int main()
{
    char *rptr = NULL;
    char *arr[] = {"flower"};

    Display(arr);

    return 0;
}