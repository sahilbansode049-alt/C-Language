#include <stdio.h>
union outer1
{
    int iNo;
    double dNo;
    struct inner1
    {
        int iNo;
        double dNo;
    } iobj1, iobj2;
} Oobj1;

union outer2
{
    int iNo;
    double dNo;
    struct inner2
    {
        char chChar1;
        char chChar2;
    } iobj[5];
} Oobj2;

int main(void)
{
    printf("\nsize is %d", sizeof(Oobj1));        // size is 16
    printf("\nsize is %d", sizeof(union outer1)); // size is 16

    printf("\nsize is %d", sizeof(Oobj2));        // size is 16
    printf("\nsize is %d", sizeof(union outer2)); // size is 16

    return 0;
}
