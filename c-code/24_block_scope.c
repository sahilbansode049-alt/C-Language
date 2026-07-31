#include <stdio.h>
int main(void)
{
    int iNo1 = 10;

    printf("\n%d", iNo1); // block scope
    //printf("\n%d",iNo2);  //24_block_scope.c:7:17: error: 'iNo2' undeclared
    {
        int iNo2 = 20;

        printf("\n%d", iNo1); // allowed,10
        printf("\n%d", iNo2); // allowed,20
    }

    printf("\n%d", iNo1); // allowed,10
    //printf("\n%d",iNo2); //24_block_scope.c:16:17: error: 'iNo2' undeclared

    return 0;
}