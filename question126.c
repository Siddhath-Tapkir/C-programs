// Program that returns sum of all the values of the linked list
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
int Sum(PNODE first)
{
    auto int iSum = 0;
    while(NULL != first)
    {
        
        iSum = iSum + first->data;
        first = first->tail;
    }
    return iSum;
}
int main()
{
    PNODE head = NULL;
    auto int iRet = 0;

    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    iRet = Sum(head);
    printf("Summation is :%d\n",iRet);



    return 0;
}