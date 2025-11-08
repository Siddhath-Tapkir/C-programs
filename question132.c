// Program to return the second largest element in a linked list
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
int SecondLarge(PNODE first)
{
    int iFirstLarge = 0, iSecondLarge = 0;
    iFirstLarge = first->data;
    first = first->next;
    while(NULL != first)
    {
        if(iFirstLarge < first->data)
        {
            iSecondLarge = iFirstLarge;
            iFirstLarge = first->data;
        }
        else if(iFirstLarge > iSecondLarge && iSecondLarge < first->data)
        {
            iSecondLarge = first->data;
        }
        first = first->next;
    }
    
    return iSecondLarge;
}
int main()
{
    PNODE head = NULL;
    auto int iRet = 0;

    InsertFirst(&head,43);
    InsertFirst(&head,1000);
    InsertFirst(&head,32);
    InsertFirst(&head,21);

    printf("%d",SecondLarge(head));
    

    printf("\n");



    return 0;
}