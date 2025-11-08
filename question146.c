// Input  : 6
// Output : A B C D E F
#include<stdio.h>
void Display(int iNo)
{
    static char ch = 'A';
    if(0 == iNo)
    {
        return;
    }
    else
    {
        printf("%c\t",ch);
        ch++;
    }
    Display(--iNo);
}
int main()
{
    Display(6);
    printf("\n");
    return 0;
}