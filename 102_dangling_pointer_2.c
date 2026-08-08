#include <stdio.h>
void Fun(int **);
int main(void)
{
    int *pPtr = NULL;

    Fun(&pPtr);

    printf("\n%d", *pPtr); // 10 ,pPtr still points to its old address this is 'dangling pointer'.

    return 0;
    
}

void Fun(int **ppPtr)
{
    int iNo = 10;

    *ppPtr = &iNo;

    printf("\n%d", ppPtr);   // 6422300
    printf("\n%d", *ppPtr);  // 6422252
    printf("\n%d", **ppPtr); // 10
}