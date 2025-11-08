// Program to return addition of even elements in a linked list
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
int AdditionEven(PNODE first)
{
    auto int iEven = 0;
    while(NULL != first)
    {
        if((first->data) % 2 == 0)
        {
            iEven = iEven + first->data;
        }
        first = first->tail;
    }
    return iEven;
}
int main()
{
    PNODE head = NULL;
    auto int iRet = 0;

    InsertFirst(&head,11);
    InsertFirst(&head,20);
    InsertFirst(&head,32);
    InsertFirst(&head,41);

    printf("%d",AdditionEven(head));
    

    printf("\n");



    return 0;
}