// Program that accepts a matrix from user and do a transpose
#include<stdio.h>
void transpose(int iRow, int iCol,int Arr[iRow][iCol])
{
    int Trans[iCol][iRow];

    for(int iCnt = 0; iCnt < iRow; iCnt++)
    {
        for(int jCnt = 0; jCnt < iCol; jCnt++)
        {
            Trans[jCnt][iCnt] = Arr[iCnt][jCnt];
        }
    }

    printf("\nTranspose of matrix:\n");
    for(int iCnt = 0; iCnt < iCol; iCnt++)
    {
        for(int jCnt = 0; jCnt < iRow; jCnt++)
        {
            printf("%d ", Trans[iCnt][jCnt]);
        }
        printf("\n");
    }
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
    transpose(iRow,iCol,Arr);
    printf("\n");
    return 0;
}