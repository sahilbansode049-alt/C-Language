#include <stdio.h>
int main(void)
{
    int iNo;

    iNo = 5;
    if (iNo < 10)
        printf("\none"); // one
    else
        printf("\ntwo");

    iNo = 15;
    if (iNo < 10)
        printf("\none");
    else
        printf("\ntwo"); // two

    iNo = 5;
    if (iNo < 10)
        printf("\none");
        printf("\ntwo");
    else // 20_if_else.c:22:5: error: 'else' without a previous 'if'
        printf("\nthree");

    iNo = 15;
    if (iNo < 10)
    {
        printf("\none");
        printf("\ntwo");
    }
    else
        printf("\nthree"); // three

    iNo = 15;
    if (iNo < 10)
        ;
    {
        printf("\none");
        printf("\ntwo");
    }
    else // 20_if_else.c:41:5: error: 'else' without a previous 'if'
        printf("\nthree");

    return 0;
}