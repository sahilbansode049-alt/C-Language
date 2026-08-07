#include <stdio.h>
int main(void)
{
    int iNo = 10;
    void *pPtr = &iNo;

    printf("\n%d", &(pPtr)); // 6422296
    printf("\n%d", pPtr);  // 6422300

    // printf("\n%d", *pPtr); // 10:5: error: invalid use of void expression printf("\n%d",*pPtr);

    printf("\n%d", *(int *)pPtr); // 10
    
    return 0;
}







