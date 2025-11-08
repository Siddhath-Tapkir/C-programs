// Program that accepts a matrix from user and returns the frequency of that number in the matrix
#include<stdio.h>
int AddDiagonal(int iRow, int iCol,int Arr[iRow][iCol], int iNo)
{
    auto int iCount = 0;
    for(int iCnt = 0; iCnt < iRow; iCnt++)
    {
        for(int jCnt = 0; jCnt < iCol; jCnt++)
        {
            if(Arr[iCnt][jCnt] == iNo)
            {
                iCount++;
            }
        }
    }
    return iCount;
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
    printf("%d\n",AddDiagonal(iRow,iCol,Arr,9));
    return 0;
}