#include <stdio.h>
int ArrayCompare(int arr1[], int arr2[], int iNoElement1);
#define MAX 50
#define EQUAL 1
#define NOT_EQUAL 0
int main(void)
{
    int arr1[MAX];
    int arr2[MAX];

    int iCounter;
    int iRet;
    int iNoElement1;
    int iNoElement2;

    printf("\nHow many Element you want to enter for arr1?(<%d):", MAX); // How many Element you want to enter for arr1?(<50):2
    scanf("%d", &iNoElement1);
    printf("How many Element you want to enter for arr2?(<%d):", MAX); // How many Element you want to enter for arr2?(<50):2
    scanf("%d", &iNoElement2);

    if (iNoElement1 != iNoElement2)
    {
        printf("\nArray will not be equal");
        return 0;
    }

    printf("\nEnter Array 1 value:"); // Enter Array 1 value:
    for (iCounter = 0; iCounter < iNoElement1; iCounter++)
    {
        printf("\nEnter arr[%d] value:", iCounter); // Eneter arr[0] value:1 ,Eneter arr[1] value:2
        scanf("%d", &arr1[iCounter]);
    }

    printf("\nEnter Array 2 value:"); // Enter Array 2 value:
    for (iCounter = 0; iCounter < iNoElement2; iCounter++)
    {
        printf("\nEneter arr[%d] value:", iCounter); // Eneter arr[0] value:1 , Eneter arr[1] value:2
        scanf("%d", &arr2[iCounter]);
    }

    iRet = ArrayCompare(arr1, arr2, iNoElement1);

    if (iRet == EQUAL)
        printf("\nArray are Equal"); // Array are Equal
    else
        printf("\nArray are not Equal");

    return 0;
}

int ArrayCompare(int arr1[], int arr2[], int iNoElement1)
{
    int iCounter;

    for (iCounter = 0; iCounter < iNoElement1; iCounter++)
    {
        if (arr1[iCounter] != arr2[iCounter])
            return NOT_EQUAL;
    }
    return EQUAL;
}
