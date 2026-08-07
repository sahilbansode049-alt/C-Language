#include <Stdio.h>
int main(void)
{
    int iNo = 10;
    int *pPtr = &iNo;

    printf("\n%d", iNo);  // 10
    printf("\n%d", &iNo); // 6422300

    printf("\n%d", pPtr);  // 6422300
    printf("\n%d", &pPtr); // 6422296
    printf("\n%d", *pPtr); // 10

    // int *pPtr=20;   // 14:10: error: redefinition of 'pPtr' int *pPtr=20;

    *pPtr = 20;
    printf("\n%d", *pPtr); // 20

    return 0;
}



