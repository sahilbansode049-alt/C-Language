#include <stdio.h>
int main(void)
{
    int iNo = 10;
    int iAns;
    printf("\n%d", iNo); // 10

    printf("\n%d", iNo--); // 10
    printf("\n%d", iNo);   // 9

    printf("\n%d", --iNo); // 8
    printf("\n%d", iNo);   // 8

    iAns = iNo--;      

    printf("\n%d", iAns); // 8
    printf("\n%d", iNo);  // 7

    iAns = --iNo;    
    printf("\n%d", iAns); // 6
    printf("\n%d", iNo);  // 6

    return 0;
}