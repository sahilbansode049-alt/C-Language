#include <stdio.h>
int ArrayAssign(int[], int[], int);
#define MAX 50
int main(void)
{
    int arr1[MAX];
    int arr2[MAX];

    int iCounter;
    int iNoElement;

    printf("\nEnter How many Element you want to Enter for Array 1 ?(<%d)", MAX); // Enter How many Element you want to Enter for Array 1 ?(<50)3
    scanf("%d", &iNoElement);

    printf("\nEnter Array 1 value:"); // Enter Array 1 value:
    for (iCounter = 0; iCounter < iNoElement; iCounter++)
    {
        printf("\nEnter arr1[%d] value:", iCounter); // Enter arr1[0] value:1 ,Enter arr1[1] value:2,Enter arr1[2] value:3
        scanf("%d", &arr1[iCounter]);
    }

    ArrayAssign(arr1, arr2, iNoElement);

    printf("\nArray 1 values are:"); // Array 1 values are:
    for (iCounter = 0; iCounter < iNoElement; iCounter++)
    {
        printf("\n%d Element of Array is:%d", iCounter + 1, arr1[iCounter]); // 1 Element of Array is:1,2 Element of Array is:2,3 Element of Array is:3
    }

    printf("\n\nArray 2 values are:"); // Array 2 values are:
    iCounter = 0;
    for (; iCounter < iNoElement;)
    {
        printf("\n%d Element of Array is:%d", iCounter + 1, arr2[iCounter]); // 1 Element of Array is:1,2 Element of Array is:2,3 Element of Array is:3
        iCounter++;
    }

    return 0;
}

int ArrayAssign(int arr1[], int arr2[], int iNoElement)
{
    int iCounter;

    for (iCounter = 0; iCounter < iNoElement;)
    {
        arr2[iCounter] = arr1[iCounter];
        iCounter++;
    }
}