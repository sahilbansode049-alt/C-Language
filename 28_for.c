#include <stdio.h>
int mian(void)
{
    int iCounter;
    int iCounter1;
    int iCounter2;

    // version 1
    for (iCounter = 0; iCounter < 3; iCounter++)
        printf("%d\t", iCounter); // 0 1 2

    // version 2
    iCounter = 0;
    for (; iCounter < 3; iCounter++)
        printf("%d\t", iCounter); // 0 1 2

    // version 3
    for (iCounter = 0;; iCounter++)
    {
        if (iCounter == 3)
            break;
        printf("%d", iCounter); // 0 1 2
    }

    // version 4
    for (iCounter = 0; iCounter < 3;)
    {
        printf("%d", iCounter); // 0 1 2
        iCounter++;
    }

    // version 5
    iCounter = 0;
    for (;;)
    {
        if (iCounter == 3)
            break;
        printf("%d", iCounter); // 0 1 2
        iCounter++;
    }

    // versiion 6
    iCounter = 0;
    for (; iCounter < 3;)
    {
        printf("%d", iCounter); // 0 1 2
        iCounter++;
    }

    // version 7
    for (iCounter1 = 0, iCounter2 = 3; iCounter1 < 3 && iCounter2 > 0; iCounter1++, iCounter2++)
        printf("%d\t%d\t", iCounter1, iCounter2); // 0 1 2 //3 2 1

    // version 8
    for (iCounter = 3; iCounter < 3; iCounter++)
        printf("%d", iCounter); // no output

    return 0;
}