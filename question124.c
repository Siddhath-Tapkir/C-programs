// Program to find first occurence of a value in a linked list
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
int SearchFirstOcc(PNODE first, int Val)
{
    auto int iCount = 0;
    while(NULL != first->tail)
    {
        iCount++;
        if(Val == first->data)
        {
            break;
        }
        first = first->tail;
    }
    return iCount;
}
int main()
{
    PNODE head = NULL;
    auto int iNo = 0, iRet = 0;

    InsertFirst(&head,70);
    InsertFirst(&head,30);
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);
    
    printf("Enter value\n");
    scanf("%d",&iNo);

    iRet = SearchFirstOcc(head, iNo);
    printf("Value found at location %d\n",iRet);



    return 0;
}