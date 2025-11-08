// Program that shows all the perfect number of the linked list
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
void Perfect(PNODE first)
{
    int iCnt = 0, iSum = 0;
    while(NULL != first)
    {
        iSum = 0;
        for(iCnt = 1; iCnt <= (first->data / 2) ; iCnt++)
        {
            if(first->data % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == first->data)
        {
            printf("%d\t",first->data);
        }
        first = first->tail;
    }
}
int main()
{
    PNODE head = NULL;
    auto int iRet = 0;

    InsertFirst(&head,9);
    InsertFirst(&head,40);
    InsertFirst(&head,6);
    InsertFirst(&head,28);
    InsertFirst(&head,90);

    Perfect(head);

    printf("\n");



    return 0;
}