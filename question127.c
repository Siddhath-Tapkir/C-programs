// Program that returns largest value of the linked list
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
int Large(PNODE first)
{
    int Max = 0;
    while(NULL != first)
    {
        if(first->data >= Max)
        {
            Max = first->data;
        }
        first = first->tail;
    }
    return Max;
}
int main()
{
    PNODE head = NULL;
    auto int iRet = 0;

    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    iRet = Large(head);
    printf("Largest value is: %d\n",iRet);



    return 0;
}