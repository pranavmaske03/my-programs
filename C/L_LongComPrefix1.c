#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

char *LongComPrefix(char **strs, int size)
{
    for(int i = 1; i < size; i++)
    {   
        for(int j = 0; strs[0][j]; j++)
        {   
            if(!(strs[i][j]) ||(strs[0][j] != strs[i][j]))        // terminate loop if chars differ
            {   
                strs[0][j] = '\0';
                break;
            }

        }
    }
    return strs[0];
}

int main()
{
    char *rptr = NULL;
    char *arr[] = {"flower", "flight", "florine"};

    rptr = LongComPrefix(arr,3);
    printf("Inside main\n");

    printf("%s\n",rptr);
    return 0;
}