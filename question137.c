// Program that smallest of digits the element in a linkedlist
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
void InsertFirst(PPNODE first, int No)
{
    PNODE node = NULL;
    node = (PNODE)malloc(sizeof(NODE));
    node->data = No;
    node->next = NULL;
    if(NULL == *first)
    {
        *first = node;
    }
    else
    {
        node->next = *first;
        *first = node;
    }
}
void DisplaySmall(PNODE first)
{
    int iDigit = 0, iSmall = 0;
    int iNum = 0;

    while(NULL != first)
    {
        iNum = first->data;
        iSmall = 9; 

        if(iNum == 0)
        {
            iSmall = 0;
        }

        while(iNum != 0)
        {
            iDigit = iNum % 10;
            if(iDigit < iSmall)
            {
                iSmall = iDigit;
            }
            iNum = iNum / 10;
        }

        printf("%d\t", iSmall);
        first = first->next;
    }
}
int main()
{
    PNODE head = NULL;
    auto int iRet = 0;

    InsertFirst(&head,11);
    InsertFirst(&head,92);
    InsertFirst(&head,36);
    InsertFirst(&head,53);

    DisplaySmall(head);
    

    printf("\n");



    return 0;
}