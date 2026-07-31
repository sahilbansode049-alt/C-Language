#include <stdio.h>
int main(void)
{
    int iNo = 10;
    int iAns1;
    int iAns2;

    printf("\n%d", iNo); // 10

    iAns1 = ++iNo;
    printf("\n%d", iAns1); // 11
    printf("\n%d", iNo);   // 11

    iAns2 = iNo++;
    printf("\n%d", iAns2); // 11
    printf("\n%d", iNo);   // 12
    
    ++iNo;
    printf("\n%d", iNo); // 13

    printf("\n%d", ++iNo); // 14
    printf("\n%d", iNo);   // 14

    printf("\n%d", iNo++); // 14
    printf("\n%d", iNo);   // 15

    printf("\n%d", + +iNo); // 15
    printf("\n%d", iNo);    // 15

    printf("\n%d", iNo+1); // 16
    printf("\n%d", iNo);   // 15

    //printf("\n%d", ++10);  // error: lvalue required as increment operand
    //printf("\n%d", 10 ++); // error: lvalue required as increment operand

    return 0;
}
