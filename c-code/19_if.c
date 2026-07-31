#include <stdio.h>
int main()
{
    int iNo;

    iNo = 5;
    if (iNo < 10)
        printf("\none"); // one
        printf("\ntwo");     // two

    iNo = 15;
    if (iNo < 10)
        printf("\none");
        printf("\ntwo"); // two

    iNo = 5;
    if (iNo < 10)
    {
        printf("\none"); // one
        printf("\ntwo"); // two
    }

    iNo = 15;
    if (iNo < 10)
    {
        printf("\none");
        printf("\ntwo");
    } // not output,becouse it is not a compound stmt.

    return 0;
}