// Input : HElloWOrlD
// Output : 5
// Program that returns the count of small characters from the string using recursion
#include<stdio.h>
int Small(char *str)
{
    static int iCount = 0;
    if('\0' == *str)
    {
        return iCount;
    }
    else
    {
        if(('a' <= *str) && ('z' >= *str))
        {
            iCount++;
        }
        str++;
        Small(str);
    }
}
int main()
{
    auto int iRet = 0;

    iRet = Small("HElloWOrlD");
    printf("%d\n",iRet);
    return 0;
}