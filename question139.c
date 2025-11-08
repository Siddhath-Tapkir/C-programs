// Output : * * * * *
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
        printf("*\t");
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