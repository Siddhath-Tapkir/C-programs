// Input  : 523
// Output : 30
// Program to return product of the number using recursion
#include<stdio.h>
int Mult(int iNo)
{
    static int iMul = 1;
    auto int iDigit = 0;
    if(0 == iNo)
    {
        return iMul;
    }
    else
    {
        iDigit = iNo % 10;
        iMul = iDigit * iMul;
        iNo = iNo / 10;

        Mult(iNo);
    }
}
int main()
{
    printf("%d\n",Mult(523));
    return 0;
}