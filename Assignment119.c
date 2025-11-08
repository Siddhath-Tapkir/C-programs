// Program to accept a string from user and copy that string into another string
#include<stdio.h>

void StrCpyX(char *str, char *str2)
{
    if(str == NULL)
    {
        printf("Enter valid string\n");
        return;
    }
    while('\0' != *str)
    {
        *str2 = *str;
        str++;
        str2++; 
    }
}
int main()
{
    auto char Arr[20] = {'\0'};
    auto char Brr[20] = {'\0'};
    printf("Enter a string in Arr\n");
    scanf("%[^'\n']s",Arr);
    StrCpyX(Arr,Brr);
    printf("Copied string in Brr: %s\n",Brr);


    return 0;
}