#include <stdio.h>
#define MAX 10
int main(void)
{
    int iCounter1;
    int iCounter2;
    int iRows;
    int iColumns;

    int arr[MAX][MAX];

    printf("\nEnter number of Rows you want but <(%d):\t", MAX); // Enter number of Rows you want but <(10):        2
    scanf("%d", &iRows);

    printf("\nEnter number of Columns you want but <(%d):\t", MAX); // Enter number of Columns you want but <(10):     2
    scanf("%d", &iColumns);

    for (iCounter1 = 0; iCounter1 < iRows; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
        {
            printf("\nEnter Element for arr[%d][%d]:", iCounter1, iCounter2); // Enter Element for arr[0][0]:1,Enter Element for arr[0][1]:2,Enter Element for arr[1][0]:3,Enter Element for arr[1][1]:4
            scanf("%d", &arr[iCounter1][iCounter2]);
        }
    }

    printf("\nEntered Elements are:"); // Entered Elements are:
    for (iCounter1 = 0; iCounter1 < iRows; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
        {
            printf("\narr[%d][%d]=%d", iCounter1, iCounter2, arr[iCounter1][iCounter2]);
            // arr[0][0]=1,arr[0][1]=2,arr[1][0]=3,arr[1][1]=4
        }
    }

    return 0;
}