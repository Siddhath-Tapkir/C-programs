// Program to accept a string from user and return a character's first occurence
#include<stdio.h>
int CheckChar(char str[], char ch)
{
    auto int iCount = 0, iCnt = 0;
    auto char *End = NULL;
    End = str;
    while('\0' != *End)
    {
        iCount++;
        End++;
    }
    iCount--;
    for(iCnt = 0; iCnt <= iCount ; iCnt++)
    {
        if(ch == str[iCnt])
        {
            break;
        }
        
    }
    if(iCnt >= iCount)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
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
    printf("character's first occurence is %d \n",iRet);


    return 0;
}