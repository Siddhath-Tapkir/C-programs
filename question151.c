// Input  : 5
// Output : 120
// Program to return factorial using recursion
#include<stdio.h>
int factorial(int iNo)
{
    static int iFact = 1;
    if(0 == iNo)
    {
        return iFact;
    }
    else
    {
        iFact = iNo * iFact;
        factorial(--iNo);
    }
}
int main()
{
    printf("%d\n",factorial(5));
    return 0;
}