// Input : 87983
// Output : 3
// Program that returns the smallest digit from the number using recursion
#include<stdio.h>
int Smallest(int iNo)
{
    static int iMin = 9;
    auto int iDigit = 0;
    if(0 == iNo)
    {
        return iMin;
    }
    else
    {
        iDigit = iNo % 10;
        if(iMin > iDigit)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        Smallest(iNo);
    }
}
int main()
{
    auto int iRet = 0;

    iRet = Smallest(3682);
    printf("%d\n",iRet);
    return 0;
}