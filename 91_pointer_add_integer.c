#include <stdio.h>
int main(void)
{
    char arr[] = {'A', 'B', 'C', 'D', 'E'};

    char *pPtr = &arr[0];

    printf("\n%d", pPtr);  // 6422299
    printf("\n%d", &pPtr); // 6422292

    printf("\n%d", pPtr + 3);  // 6422302
    printf("\n%d", *pPtr + 3); // 68
    printf("\n%d", 3 + pPtr);  // 6422302

    printf("\n%d", pPtr);  // 6422299
    printf("\n%d", *pPtr); // 65

    return 0;
}

