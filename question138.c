// Program that largest of digits the element in a linkedlist
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
void DisplayLarge(PNODE first)
{
    int iDigit = 0, iLarge = 0;
    int iNum = 0;

    while(first != NULL)
    {
        iNum = first->data;
        iLarge = 0;

        if(iNum == 0)
        {
            iLarge = 0;
        }

        while(iNum != 0)
        {
            iDigit = iNum % 10;
            if(iDigit > iLarge)
            {
                iLarge = iDigit;
            }
            iNum = iNum / 10;
        }

        printf("%d\t", iLarge);
        first = first->next;
    }
}
int main()
{
    PNODE head = NULL;
    auto int iRet = 0;

    InsertFirst(&head,11);
    InsertFirst(&head,89);
    InsertFirst(&head,36);
    InsertFirst(&head,53);

    DisplayLarge(head);
    

    printf("\n");



    return 0;
}