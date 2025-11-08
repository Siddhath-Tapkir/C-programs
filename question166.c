// Write a program which accepts matrix from user and check whether is it is a identity matrix or not
#include<stdio.h>
#include<stdbool.h>
bool CheckIdentity(int iRow, int iCol, int Arr[iRow][iCol])
{
    bool bFlag = false;
    for(int iCnt = 0; iCnt < iRow; iCnt++)
    {
        for(int jCnt = 0; jCnt < iCol; jCnt++)
        {
            if((iCnt == jCnt) && (Arr[iCnt][jCnt] == 1))
            {
                bFlag = true;
            }
            else if(Arr[iCnt][jCnt] == 0)
            {
                bFlag = true;
            }
            else
            {
                bFlag = false;
                break;
            }
        }
    }
    return bFlag;
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
    bRet = CheckIdentity(iRow,iCol,Arr);
    if(false == bRet)
    {
        printf("Matrix is not identity\n");
    }
    else
    {
        printf("Matrix is identity\n");
    }

    return 0;
}