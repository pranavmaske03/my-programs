#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* plusOne(int* digits, int digitsSize) 
{
    
}

int main()
{
    int Arr[] = {9,8,7,6,5,4,3,2,1,0};

    int *ret = plusOne(Arr,10);

    return 0;
}


/*
 Note: The returned array must be malloced, assume      
 caller calls free().                                  
int *plusOne(int *digits, int digitsSize, int *returnSize) {
    *returnSize = digitsSize;
    int *plusOne = malloc(digitsSize * sizeof(int));
    if (plusOne == NULL)
        return (NULL);
    for (int i = 0; i < digitsSize; i++)
        plusOne[i] = digits[i];
    
    plusOne[digitsSize - 1]++;
    for (int i = digitsSize - 1; i - 1 >= 0; i--)
        if (plusOne[i] == 10) {
            plusOne[i] = 0;
            plusOne[i - 1]++;
        }

    if (plusOne[0] == 10) {
        (*returnSize)++;
        plusOne = realloc(plusOne, *returnSize * sizeof(int));
        if (plusOne == NULL)
            return (NULL);
        memmove(plusOne + 1, plusOne, digitsSize * sizeof(int));
        plusOne[0] = 1;
        plusOne[1] = 0;
    }
    return (plusOne);
}

*/