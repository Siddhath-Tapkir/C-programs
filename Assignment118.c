// Program to accept a string from user and reserve the string in place
#include<stdio.h>
void StrRevX(char *str)
{
    auto char cTemp = '\0';
    auto char *start = NULL;
    auto char *end = NULL;
    start = str;
    end = str;
    while('\0' != *end)
    {
        end++;
    }
    end--;
    while(start < end)
    {
        cTemp = *start;
        *start = *end;
        *end = cTemp;
        start++;
        end--;
    }
}
int main()
{
    auto char Arr[20] = {'\0'};
    auto char cValue = '\0';
    auto int iRet = 0;
    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);
    StrRevX(Arr);
    printf("Updated string is %s\n",Arr);


    return 0;
}