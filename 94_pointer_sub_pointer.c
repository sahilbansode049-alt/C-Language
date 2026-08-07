#include <stdio.h>
int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};

    int *pPtr1 = &arr[0];
    int *pPtr2 = &arr[4];

    printf("\n%d", pPtr1);  // 6422284
    printf("\n%d", &pPtr1); // 6422280

    printf("\n\n%d", pPtr2); // 6422300
    printf("\n%d", &pPtr2);  // 6422276

    printf("\n%d", pPtr1 - pPtr2); //-4
    printf("\n%d", pPtr2 - pPtr1); // 4

    return 0;
}