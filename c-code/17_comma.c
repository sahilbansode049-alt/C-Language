#include <stdio.h>
int Fun(void);
int main(void)
{

    // int iA = 10, 2, 3; // seperator (error), 17_comma.c:6:14: error: expected identifier or '(' before numeric constant

    int iA;

    int iAns1, iAns2, iAns3; // seperater

    iAns1 = 10, 20, 30;   // operator
    iAns2 = (10, 20, 30); // operator

    printf("\n%d %d", iAns1, iAns2); // 10,30//seperator

    iAns3 = Fun();

    printf("\n%d", iAns3); // 0//seperator

    iA = (printf("\nsahil"), 2, 3, 4); // sahil,operator

    return 0;
}
int Fun(void)
{
    return -1, 1, 0; // operator
}
