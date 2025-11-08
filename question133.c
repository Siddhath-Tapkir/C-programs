// Program that shows addition of digits of the element in a linkedlist
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
void AdditionDigits(PNODE first)
{
    int temp = 0;
    int iDigit = 0, iAdd = 0;
    while(NULL != first)
    {
        temp = first->data;
        iAdd = 0;
        while(0 != temp)
        {
            iDigit = temp % 10;
            iAdd = iDigit + iAdd;
            temp = temp / 10;
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

    AdditionDigits(head);
    

    printf("\n");



    return 0;
}