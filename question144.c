// Input  : 5
// Output : 1 2 3 4 5
#include<stdio.h>
void Display(int iNo)
{
    static int A = 1;
    if(0 == iNo)
    {
        return;
    }
    else
    {
        printf("%d\t",A);
        A++;
    }
    Display(--iNo);
}
int main()
{
    Display(10);
    printf("\n");
    return 0;
}