// Program that display product of element of digits in a linkedlist
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
void DisplayProduct(PNODE first)
{
    int iDigit = 0, iAdd = 0, iPallin = 0;
    while(NULL != first)
    {
        iPallin = first->data;
        iAdd = 1;
        while(0 != iPallin)
        {
            iDigit = iPallin % 10;
            iAdd = iDigit * iAdd ;
            iPallin = iPallin / 10;
        }
        
       printf("%d\t",iAdd);
        
        first = first->next;
    }
}
int main()
{
    PNODE head = NULL;
    auto int iRet = 0;

    InsertFirst(&head,11);
    InsertFirst(&head,20);
    InsertFirst(&head,32);
    InsertFirst(&head,41);

    DisplayProduct(head);
    

    printf("\n");



    return 0;
}