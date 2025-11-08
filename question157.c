// Input : 523
// Output : 325
// Program that returns the reverse number using recursion
#include<stdio.h>
int Reverse(int iNo)
{
    static int iRev = 0;
    auto int iDigit = 0;
    if(0 == iNo)
    {
        return iRev;
    }
    else
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
        Reverse(iNo);
    }
}
int main()
{
    auto int iRet = 0;

    iRet = Reverse(523);
    printf("%d\n",iRet);
    return 0;
}