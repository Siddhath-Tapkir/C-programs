// Program that accepts a matrix from user and swaps the consecutive rows
#include<stdio.h>
void AddCol(int iRow, int iCol,int Arr[iRow][iCol])
{
    auto int iTemp = 0;
    for(int iCnt = 0; iCnt < (iRow - 1); iCnt = (iCnt + 2))
    {
        iTemp = 0;
        for(int jCnt = 0; jCnt < iCol; jCnt++)
        {
            iTemp = Arr[iCnt][jCnt];
            Arr[iCnt][jCnt] = Arr[iCnt + 1][jCnt];
            Arr[iCnt + 1][jCnt] = iTemp;
        }
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
    AddCol(iRow,iCol,Arr);
    printf("=============\n");
    for(int iCnt = 0; iCnt < iRow; iCnt++)
    {
        for(int jCnt = 0; jCnt < iCol; jCnt++)
        {
            printf(" %d ",Arr[iCnt][jCnt]); 
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}