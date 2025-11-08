// Program to accept two string from user and concatinate it together
#include<stdio.h>

void StrCatX(char *src, char *dest)
{
    auto int iCount = 0, iCnt = 0;
    if(src == NULL)
    {
        printf("Enter valid string\n");
        return;
    }
    while('\0' != *src)
    {
        src++;  
    }
    *src = ' ';
    src++;
    while('\0' != *dest)
    {
        *src = *dest;
        src++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    auto char Arr[20] = {'\0'};
    auto char Brr[20] = {'\0'};
    printf("Enter a string in Arr\n");
    scanf("%[^'\n']s",Arr);
    printf("Enter a string in Brr\n");
    scanf(" %[^'\n']s",Brr);
    StrCatX(Arr,Brr);
    printf("%s\n",Arr);


    return 0;
}