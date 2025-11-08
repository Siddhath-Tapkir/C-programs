// Program to accept a string from user and copy that string into another string
#include<stdio.h>

void StrCpyX(char *str, char *str2, int iCnt)
{
    auto int iCount = 0;
    auto char *Temp = NULL;
    Temp = str;
    if(str == NULL)
    {
        printf("Enter valid string\n");
        return;
    }
    while('\0' != *Temp)
    {
        Temp++;
        iCount++;
    }
    if(iCnt > iCount)
    {
        while('\0' != *str)
        {
            *str2 = *str;
            str++;
            str2++; 
        }
    }
    else
    {
        for(int i = 0; i < iCnt; i++)
        {
            *str2 = str[i];
            str2++;
        }
    }
    
}
int main()
{
    auto char Arr[20] = {'\0'};
    auto char Brr[20] = {'\0'};
    printf("Enter a string in Arr\n");
    scanf("%[^'\n']s",Arr);
    StrCpyX(Arr,Brr,10);
    printf("Copied string in Brr: %s\n",Brr);


    return 0;
}