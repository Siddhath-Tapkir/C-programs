// Program that returns Smallest value of the linked list
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
int Small(PNODE first)
{
    int Min = 0;
    Min = first->data;
    while(NULL != first)
    {
        if(first->data <= Min)
        {
            Min = first->data;
        }
        first = first->tail;
    }
    return Min;
}
int main()
{
    PNODE head = NULL;
    auto int iRet = 0;

    InsertFirst(&head,9);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    iRet = Small(head);
    printf("Smallest value is: %d\n",iRet);



    return 0;
}