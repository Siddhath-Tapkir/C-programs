// Input : 87983
// Output : 9
// Program that returns the largest digit from the number using recursion
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
        if(iSum < iDigit)
        {
            iSum = iDigit;
        }
        iNo = iNo / 10;
        Sum(iNo);
    }
}
int main()
{
    auto int iRet = 0;

    iRet = Sum(3682);
    printf("%d\n",iRet);
    return 0;
}