// Program that accepts a matrix from user and returns the addition of it's diagonal elements
#include<stdio.h>
int AddDiagonal(int iRow, int iCol,int Arr[iRow][iCol])
{
    auto int iSum = 0;
    for(int iCnt = 0; iCnt < iRow; iCnt++)
    {
        for(int jCnt = 0; jCnt < iCol; jCnt++)
        {
            if(iCnt == jCnt)
            {
                iSum = iSum + Arr[iCnt][jCnt];
            }
        }
    }
    return iSum;
}
int main()
{
    auto int iRow = 0, iCol = 0;
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
    printf("%d\n",AddDiagonal(iRow,iCol,Arr));
    return 0;
}