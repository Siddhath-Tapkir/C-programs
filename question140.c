// Output : 5 4 3 2 1
#include<stdio.h>
void Display()
{
    static int iNo = 5;
    if(0 == iNo)
    {
        return;
    }
    else
    {
        printf("%d\t",iNo);
        iNo--;
    }
    Display();
}
int main()
{
    Display();
    printf("\n");
    return 0;
}