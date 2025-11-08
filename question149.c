// Input : 879
// Output : 24
// Program that returns addition of digits using recursion
#include<stdio.h>
int Sum(int iNo)
{
    static int iSum = 0;
    auto int iDigit = 0;
    if(0 == iNo)
    {
        return iSum;
    }
    else
    {
        iDigit = iNo % 10;
        iSum = iDigit + iSum;
        iNo = iNo / 10;
    }
    Sum(iNo);

}
int main()
{
    auto int iRet = 0;

    iRet = Sum(879);
    printf("%d\n",iRet);
    return 0;
}