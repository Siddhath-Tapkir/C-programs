// Program that accepts a matrix from user and returns the largest element from both of it's diagonal
#include<stdio.h>
int MaxDiagonal(int iRow, int iCol,int Arr[iRow][iCol])
{
    if(iRow != iCol)
    {
        printf("Input matrix isnt a square matrix\n");
        return;
    }
    auto int iD1 = 0, iD2 = 0;
    iD1 = Arr[0][0];
    iD2 = Arr[0][iCol - 1];
    for(int iCnt = 0; iCnt < iRow; iCnt++)
    {
        for(int jCnt = 0; jCnt < iCol; jCnt++)
        {
            if(iD1 <= Arr[iCnt][jCnt])
            {
                iD1 = Arr[iCnt][jCnt];
            }

            if(iD2 <= Arr[iCnt][iCol - iCnt - 1])
            {
                iD2 = Arr[iCnt][iCol - iCnt - 1];
            }
        }
    }

    if(iD1 > iD2)
    {
        return iD1;
    }
    else
    {
        return iD2;
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
    printf("%d\n",MaxDiagonal(iRow,iCol,Arr));
    return 0;
}