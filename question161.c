// Program that accepts a matrix from user and display the addition of elements from each column
#include<stdio.h>
void AddCol(int iRow, int iCol,int Arr[iRow][iCol])
{
    auto int iColSum = 0;
    for(int iCnt = 0; iCnt < iRow; iCnt++)
    {
        iColSum = 0;
        for(int jCnt = 0; jCnt < iCol; jCnt++)
        {
            iColSum = Arr[jCnt][iCnt] + iColSum;
        }
        printf("%d\t",iColSum);
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
    printf("\n");
    return 0;
}