#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(void)
{
    int iCounter1;
    int iCounter2;
    int iCounter3;
    int iRows;
    int iColumns;
    int iPlane;

    int ***pppPtr = NULL;

    printf("\nEnter value for iPlane but <(%d):", MAX);
    scanf("%d", &iPlane);

    printf("\nEnter value for Rows but <(%d):", MAX);
    scanf("%d", &iRows);

    printf("\nEnter value for Columns but <(%d):", MAX);
    scanf("%d", &iColumns);

    pppPtr = (int ***)malloc(iPlane * sizeof(int **));
    if (NULL == pppPtr)
    {
        printf("\nMemory Allocation Failed.");
        return -1;
    }

    for (iCounter1 = 0; iCounter1 < iPlane; iCounter1++)
    {
        pppPtr[iCounter1] = (int **)malloc(iRows * sizeof(int *));
        if (NULL == pppPtr[iCounter1])
        {
            printf("\nMemory Allocation Failed.");
            return -1;
        }

        for (iCounter2 = 0; iCounter2 < iRows; iCounter2++)
        {
            pppPtr[iCounter1][iCounter2] = (int *)malloc(iColumns * sizeof(int));
            if (NULL == pppPtr[iCounter1][iCounter2])
            {
                printf("\nMemory Allocation Failed.");
                return -1;
            }
        }
    }

    printf("\nEnter Elements:\n");
    for (iCounter1 = 0; iCounter1 < iPlane; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iRows; iCounter2++)
        {
            for (iCounter3 = 0; iCounter3 < iColumns; iCounter3++)
            {
                printf("\nEnter Element for arr[%d][%d][%d]: ", iCounter1, iCounter2, iCounter3);
                scanf("%d", &pppPtr[iCounter1][iCounter2][iCounter3]);

                printf("arr[%d][%d][%d] = %d\n", iCounter1, iCounter2, iCounter3, pppPtr[iCounter1][iCounter2][iCounter3]);
            }
        }
    }

    if (pppPtr != NULL)
    {
        for (iCounter1 = 0; iCounter1 < iPlane; iCounter1++)
        {
            if (pppPtr[iCounter1] != NULL)
            {
                for (iCounter2 = 0; iCounter2 < iRows; iCounter2++)
                {
                    if (pppPtr[iCounter1][iCounter2] != NULL)
                    {
                        free(pppPtr[iCounter1][iCounter2]);
                        pppPtr[iCounter1][iCounter2] = NULL;
                    }
                }
                free(pppPtr[iCounter1]);
                pppPtr[iCounter1] = NULL;
            }
        }
    }
    free(pppPtr);
    pppPtr = NULL;

    return 0;
}
//OUTPUT:
/*
Enter value for iPlane but <(10):3

Enter value for Rows but <(10):3

Enter value for Columns but <(10):1

Enter Elements:

Enter Element for arr[0][0][0]: 1
arr[0][0][0] = 1

Enter Element for arr[0][1][0]: 2
arr[0][1][0] = 2

Enter Element for arr[0][2][0]: 3
arr[0][2][0] = 3

Enter Element for arr[1][0][0]: 1
arr[1][0][0] = 1

Enter Element for arr[1][1][0]: 25
arr[1][1][0] = 25

Enter Element for arr[1][2][0]: 4
arr[1][2][0] = 4

Enter Element for arr[2][0][0]: 6
arr[2][0][0] = 6

Enter Element for arr[2][1][0]: 7
arr[2][1][0] = 7

Enter Element for arr[2][2][0]: 8
arr[2][2][0] = 8

*/