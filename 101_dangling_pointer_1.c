#include <stdio.h>
int main(void)
{
    int *pPtr;
    {
        int iNo = 10;
        pPtr = &iNo;

        printf("\n%d", *pPtr); // 10
        printf("\n%d", pPtr);  // 6422296
    }
    printf("\n%d", *pPtr); // 10   ,dangling pointer
    printf("\n%d", pPtr);  // 6422296  ,dangling pointer

    return 0;
}