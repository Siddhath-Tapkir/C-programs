// Input  : "Hello"
// Output : 5
// Program to return number of characters from a string using recursion
#include<stdio.h>
int StrlenX(char *str)
{
    static int iSum = 0;
    if('\0' == *str)
    {
        return iSum;
    }
    else
    {
        str++;
        iSum++;
    }
    StrlenX(str);
}
int main()
{
    printf("%d\n",StrlenX("Sidd"));
    return 0;
}