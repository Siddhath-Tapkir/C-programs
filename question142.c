// Output : a b c d e f
#include<stdio.h>
void Display()
{
    static char ch = 'a';
    if('g' == ch)
    {
        return;
    }
    else
    {
        printf("%c\t",ch);
        ch++;
    }
    Display();
}
int main()
{
    Display();
    printf("\n");
    return 0;
}