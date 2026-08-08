#include <stdio.h>
#define MAX 10
int main(void)
{
    int iCounter1;
    int iCounter2;
    int iCounter3;
    int iRows;
    int iColumns;
    int iPlane;

    int arr[MAX][MAX][MAX];

    printf("\nEnter value for iPlane but <(%d):", MAX); // Enter value for iPlane but <(10):2
    scanf("%d", &iPlane);

    printf("\nEnter value for Rows but <(%d):", MAX); // Enter value for Rows but <(10):2
    scanf("%d", &iRows);

    printf("\nEnter value for Columns but <(%d):", MAX); // Enter value for Columns but <(10):2
    scanf("%d", &iColumns);

    for (iCounter1 = 0; iCounter1 < iPlane; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iRows; iCounter2++)
        {
            for (iCounter3 = 0; iCounter3 < iColumns; iCounter3++)
            {
                printf("\nEnter Element for arr[%d][%d][%d]: ", iCounter1, iCounter2, iCounter3); 
                // Enter Element for arr[0][0][0]:1,Enter Element for arr[0][0][1]:2,Enter Element for arr[0][1][0]:3,Enter Element for arr[0][1][1]:4,Enter Element for arr[1][0][0]:5,Enter Element for arr[1][0][1]:6,Enter Element for arr[1][1][0]:7,Enter Element for arr[1][1][1]:8
                scanf("%d", &arr[iCounter1][iCounter2][iCounter3]);
            }
        }
    }

    printf("\nEntered Elements are:\n"); // Entered Element are:
    for (iCounter1 = 0; iCounter1 < iPlane; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iRows; iCounter2++)
        {
            for (iCounter3 = 0; iCounter3 < iColumns; iCounter3++)
            {
                printf("\narr[%d][%d][%d] = %d", iCounter1, iCounter2, iCounter3, arr[iCounter1][iCounter2][iCounter3]);
                // arr[0][0][0]=1,arr[0][0][1]=2,arr[0][1][0]=3,arr[0][1][1]=4,arr[1][0][0]=5,arr[1][0][1]=6,arr[1][1][0]=7,arr[1][1][1]=8
            }
        }
    }

    return 0;
}
