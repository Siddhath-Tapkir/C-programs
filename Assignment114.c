// Program to accept a string from user and check whether a character is present in the string or not
#include<stdio.h>
#include<stdbool.h>
bool CheckChar(char *str, char ch)
{
    auto bool bFlag = false;
    while('\0' != *str)
    {
        if(ch == *str)
        {
            bFlag = true;
        }
        str++;
    }
    return bFlag;
}
int main()
{
    auto char Arr[20] = {'\0'};
    auto char cValue = '\0';
    auto bool bRet = false;
    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);
    printf("Enter a character \n");
    scanf(" %c",&cValue);
    bRet = CheckChar(Arr,cValue);
    if(true == bRet)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }


    return 0;
}