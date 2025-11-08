// Output : A B C D E F
#include<stdio.h>
void Display()
{
    static char ch = 'A';
    if('G' == ch)
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