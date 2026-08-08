#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int main(void)
{
    int iPlane1;
    int iPlane2;
    int iRows;
    int iColumns;
    int iCounter1;
    int iCounter2;
    int iCounter3;

    int *ppppPtr;
    ppppPtr=NULL;

    printf("Enter the value for iPlane1 but <%d",MAX);
    scanf("%d",&iPlane1);

    printf("Enter the value for iPlane2 but <%d",MAX);
    scanf("%d",&iPlane2);

    ppppPtr=(int****)malloc(iPlane1*sizeof(int***));

    for(iCounter1=0;iCounter1<iPlane1;iCounter1++)
    {
        ppppPtr[iCounter1]=(int***)malloc(iPlane2*sizeof(int**));
        if(NULL==ppppPtr[iCounter1])
        {
            printf("\nMemory Allocation is Failed.");
            return -1;
        }
        for(iCounter2=0;iCounter2<iPlane2;iCounter2++)
        {
            ppppPtr[iCounter1][iCounter2]=(int**)malloc(iRows*sizeof(int*));
            if(NULL=ppppPtr[iCounter1][iCounter2])
            {
                printf("\nMemory Allocation is Failed.");
                return -1;
            }
            for(iCounter3=0;iCounter3<iColumns;iCounter3++)
            {
                ppppPtr[iCounter1][iCounter2][iCounter3]=(int *)malloc(iColumns*sizeof(int));
                if(NULL==ppppPtr[iCounter1][iCounter2][iCounter3])
                {
                    printf("\nMemory Allocation is Failed.");
                    return -1;
                }
            }
        }
    }
}

