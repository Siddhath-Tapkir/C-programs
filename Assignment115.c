// Program to accept a string from user and count how many times a character is repeated in the string
#include<stdio.h>
int CheckChar(char *str, char ch)
{
    auto int iCount = 0;
    while('\0' != *str)
    {
        if(ch == *str)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    auto char Arr[20] = {'\0'};
    auto char cValue = '\0';
    auto int iRet = 0;
    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);
    printf("Enter a character \n");
    scanf(" %c",&cValue);
    iRet = CheckChar(Arr,cValue);
    printf("character is present %d times\n",iRet);


    return 0;
}