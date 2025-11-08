// Input  : 6
// Output : a b c d e f
#include<stdio.h>
void Display(int iNo)
{
    static char ch = 'a';
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