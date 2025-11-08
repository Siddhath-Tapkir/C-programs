// Write a program which accepts matrix from user and check whether is it is a sparse matrix or not
#include<stdio.h>
#include<stdbool.h>
bool CheckSparse(int iRow, int iCol, int Arr[iRow][iCol])
{
    auto int CountZero = 0, CountNonZero = 0;
    for(int iCnt = 0; iCnt < iRow; iCnt++)
    {
        for(int jCnt = 0; jCnt < iCol; jCnt++)
        {
            if(Arr[iCnt][jCnt] == 0)
            {
                CountZero++;
            }
            else
            {
                CountNonZero++;
            }
        }
    }
    return(CountZero > CountNonZero);
}
int main()
{
    auto int iRow = 0, iCol = 0;
    auto bool bRet = false;
    printf("Enter rows\n");
    scanf("%d",&iRow);
    printf("Enter Cols\n");
    scanf("%d",&iCol);
    int Arr[iRow][iCol];
    printf("Enter matrix elements\n");
    for(int iCnt = 0; iCnt < iRow; iCnt++)
    {
        for(int jCnt = 0; jCnt < iCol; jCnt++)
        {
            scanf("%d",&Arr[iCnt][jCnt]);
        }
    }
    bRet = CheckSparse(iRow,iCol,Arr);
    if(false == bRet)
    {
        printf("Matrix is not sparse\n");
    }
    else
    {
        printf("Matrix is sparse\n");
    }

    return 0;
}