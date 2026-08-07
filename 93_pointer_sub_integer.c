#include <stdio.h>
int main(void)
{
    char arr[] = {'A', 'B', 'C', 'D', 'E'};

    char *pPtr = &arr[0];

    printf("\n%d", pPtr);  // 6422295
    printf("\n%c", *pPtr); // A

    printf("\n%d", pPtr - 3); // 6422292
    printf("\n%c", *(pPtr - 3));
    // printf("\n%d",3-pPtr);   //14:20: error: invalid operands to binary - (have 'int' and 'char *') printf("\n%d",3-pPtr);

    printf("\n\n%d", pPtr); // 6422295
    printf("\n%c", *pPtr);  // A

    return 0;
}