#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main(void)
{
    int iCounter1;
    int iCounter2;
    int iRows;
    int iColumns;

    int **ppPtr;
    ppPtr = NULL;

    printf("\nEnter number of Rows you want but <(%d):", MAX);
    scanf("%d", &iRows);

    printf("\nEnter number of Columns you want but <(%d):", MAX);
    scanf("%d", &iColumns);

    ppPtr = (int **)malloc(iRows * sizeof(int *));

    if (NULL == ppPtr)
    {
        printf("\nMemory Allocation is failed.");
        return -1;
    }

    for (iCounter1 = 0; iCounter1 < iRows; iCounter1++)
    {
        ppPtr[iCounter1] = (int *)malloc(iColumns * sizeof(int));

        if (NULL == ppPtr[iCounter1])
        {
            printf("\nMemory Allocation is Failed.");
            return -1;
        }
    }
    for (iCounter1 = 0; iCounter1 < iRows; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
        {
            printf("\nEnter for arr[%d][%d]:", iCounter1, iCounter2);
            scanf("%d", &ppPtr[iCounter1][iCounter2]);
        }
    }

    for (iCounter1 = 0; iCounter1 < iRows; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
        {
            printf("\narr[%d][%d]=%d", iCounter1, iCounter2, ppPtr[iCounter1][iCounter2]);
        }
    }

    if (ppPtr != NULL)
    {
        for (iCounter1 = 0; iCounter1 < iRows; iCounter1++)
        {
            if (ppPtr[iCounter1] != NULL)
            {
                free(ppPtr[iCounter1]);
                ppPtr[iCounter1] = NULL;
            }
        }
    }
    free(ppPtr);
    ppPtr = NULL;

    return 0;
}//output:
/*
C:\Users\Admin\Desktop\om>.\a.exe

Enter number of Rows you want but <(10):2

Enter number of Columns you want but <(10):2

Enter for arr[0][0]:1

Enter for arr[0][1]:2

Enter for arr[1][0]:3

Enter for arr[1][1]:4

arr[0][0]=1
arr[0][1]=2
arr[1][0]=3
arr[1][1]=4
*/