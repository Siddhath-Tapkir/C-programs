// Input  : 5
// Output : * * * * *
#include<stdio.h>
void Display(int iNo)
{
    if(0 == iNo)
    {
        return;
    }
    else
    {
        printf("*\t");
    }
    Display(--iNo);
}
int main()
{
    Display(5);
    printf("\n");
    return 0;
}