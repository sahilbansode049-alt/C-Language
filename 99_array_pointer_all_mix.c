#include <stdio.h>
int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};
    int *pPtr[] = {arr, arr + 1, arr + 2, arr + 3, arr + 4};

    int **ppPtr = pPtr;

    printf("\n%d\t%d\t%d", arr, *arr, &arr); // 6422280 10      6422280

    printf("\n%d\t%d\t%d", pPtr, *pPtr, **pPtr); // 6422260 6422280 10

    printf("\n%d\t%d\t%d", ppPtr, *ppPtr, **ppPtr); // 6422260 6422280 10

    *ppPtr++;
    // printf("\n%d\t%d\t%d", ppPtr, *ppPtr, **ppPtr);      //6422264 6422284 20
    printf("\n%d\t%d\t%d", ppPtr - pPtr, *ppPtr - arr, **ppPtr); // 1       1       20

    *++ppPtr;
    printf("\n%d\t%d\t%d", ppPtr - pPtr, *ppPtr - arr, **ppPtr); // 2       2       30

    ++*ppPtr;
    printf("\n%d\t%d\t%d", ppPtr - pPtr, *ppPtr - arr, **ppPtr); // 2       3       40

    return 0;
}