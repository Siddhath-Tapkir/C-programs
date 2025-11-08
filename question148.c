// Input  : 5
// Output : 5 * 4  * 3 * 2 * 1 *
#include<stdio.h>
void Display(int iNo)
{
    if(0 == iNo)
    {
        return;
    }
    else
    {
        printf("%d\t*\t",iNo);
    }
    Display(--iNo);
}
int main()
{
    Display(5);
    printf("\n");
    return 0;
}