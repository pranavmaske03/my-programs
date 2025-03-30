#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef struct Node
{
    char data;
    struct Node *next;
}NODE,*PNODE,**PPNODE;

void Push(PPNODE Head,char ch)
{
    PNODE temp = *Head;
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = ch;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

int Pop(PPNODE Head)
{
    char cValue = 0;
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        printf("Stack is empty \n");
        return -1;
    }
    else if((*Head)->next == NULL)
    {
        cValue = (*Head)->data;
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        cValue = temp->next->data;
        free(temp->next);
        temp->next = NULL;
    }
    return cValue;
}

bool isValid(char* s) 
{
    bool flag = false;
    char *ptr = s;
    char ch = '\0';
    
    PNODE first = NULL;

    while(*s != '\0')
    {
        if(*s == '(') 
        {   
            s++;
            if((*s == '}') || (*s == ']'))
            {
                flag = false;
                break;
            }
            s--;
            Push(&first,*s);
        }
        else if(*s == '{') 
        {   
            s++;
            if((*s == ')') || (*s == ']'))
            {
                flag = false;
                break;
            }
            s--;
            Push(&first,*s);
        }
        else if(*s == '[') 
        {   
            s++;
           if((*s == ')') || (*s == '}'))
            {
                flag = false;
                break;
            }
            s--;
            Push(&first,*s);
        }
        else if(*s == ')')
        {
            ch = Pop(&first);
            if(ch != '(')
            {
                flag = false;
                break;
            }
            flag = true;
        }
        else if(*s == ']')
        {
            ch = Pop(&first);
            if(ch != '[')
            {
                flag = false;
                break;
            }
            flag = true;
        }
        else if(*s == '}')
        {
            ch = Pop(&first);
            if(ch != '{')
            {
                flag = false;
                break;
            }
            flag = true;
        }
        s++;
    }
    if(first != NULL)
    {
        flag = false;
    }
    return flag;
}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    bRet = isValid(Arr);

    if(bRet == true)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}