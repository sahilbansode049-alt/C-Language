#include <stdio.h>
int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};

    int *pPtr1 = &arr[0];
    int *pPtr2 = &arr[4];

    printf("\n%d", pPtr1); // 6422276
    printf("\n%d", pPtr2); // 6422292

    // printf("\n%d",pPtr1+pPtr2);  //12:24: error: invalid operands to binary + (have 'int *' and 'int *') printf("\n%d",pPtr1+pPtr2);

    return 0;
    
}