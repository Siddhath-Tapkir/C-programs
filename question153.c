// program to count number of white spaces from a string using recursion
#include<stdio.h>
int WhiteSpace(char *str)
{
    static int iCount = 0;
    if('\0' == *str)
    {
        return iCount;
    }
    else
    {
        if(' ' == *str)
        {
            iCount++;
        }
        str++;
        WhiteSpace(str);
    }
}
int main()
{
    auto int iRet = 0;
    iRet = WhiteSpace("he llo wor ld ");
    printf("%d\n",iRet);
    return 0;
}