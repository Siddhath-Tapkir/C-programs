// Program that shows all the prime number of the linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *tail;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
void InsertFirst(PPNODE first, int No)
{
    PNODE node = NULL;
    node = (PNODE)malloc(sizeof(NODE));
    node->data = No;
    node->tail = NULL;
    if(NULL == *first)
    {
        *first = node;
    }
    else
    {
        node->tail = *first;
        *first = node;
    }
}
int Count(PNODE first)
{
    auto int iCount = 0;
     while(NULL != first)
    {
        iCount++;
        first = first->tail;
    }
    return iCount;
}
void Prime(PNODE first)
{
    int iCnt = 0, iSum = 0;
    while(NULL != first)
    {
        if(first->data >= 2)
        {
            for(iCnt = 2; iCnt <= (first->data / 2) ; iCnt++)
            {
                if((first->data % iCnt) == 0)
                {
                    break;
                }
            }
            if((first->data / 2) < iCnt)
            {
                printf("%d\t",first->data);
            }
        }
        first = first->tail;
    }
}
int main()
{
    PNODE head = NULL;
    auto int iRet = 0;

    InsertFirst(&head,0);
    InsertFirst(&head,7);
    InsertFirst(&head,3);
    InsertFirst(&head,17);
    InsertFirst(&head,1);

    Prime(head);

    printf("\n");



    return 0;
}