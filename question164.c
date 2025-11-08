// Write a program which accepts matrix from user and reverse the elements of each rows
#include<stdio.h>
void RevRow(int iRow, int iCol, int Arr[iRow][iCol])
{
    auto int kCnt = 0;
    kCnt = iRow - 1;
    for(int iCnt = 0; iCnt < iRow; iCnt++, kCnt--)
    {
        
        for(int jCnt = 0, kCnt = (iRow - 1); jCnt < kCnt; jCnt++, kCnt--)
        {
            int iTemp = Arr[iCnt][jCnt];
            Arr[iCnt][jCnt] = Arr[iCnt][kCnt];
            Arr[iCnt][kCnt] = iTemp;
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
    RevRow(iRow,iCol,Arr);
    printf("Updated matrix is :\n");
    for(int iCnt = 0; iCnt < iRow; iCnt++)
    {
        for(int jCnt = 0; jCnt < iCol; jCnt++)
        {
            printf(" %d ",Arr[iCnt][jCnt]);
        }
        printf("\n");
    }


    return 0;
}