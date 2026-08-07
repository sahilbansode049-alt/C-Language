#include <stdio.h>
int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};

    int *pPtr = &arr[0]; // or int *pPtr=arr[0];

    printf("\n%d", &pPtr); // 6422280
    printf("\n%d", pPtr);  // 6422284
    printf("\n%d", *pPtr); // 10

    ++pPtr;

    printf("\n%d", &pPtr); // 6422280
    printf("\n%d", pPtr);  // 6422288
    printf("\n%d", *pPtr); // 20

    return 0;
}