#include <stdio.h>
union outer1
{
    int iNo;
    double dNo;
    union inner1
    {
        int iNo;
        double dNo;
    } iobj1, iobj2;
    float fNo;
} Oobj1;

union outer2
{
    int iNo;
    double dNo;
    union inner2
    {
        int iNo;
        float fNo;
    } iobj[3];
} Oobj2;

int main(void)
{
    printf("\nsize is %d", sizeof(Oobj1));        // size is 8
    printf("\nsize is %d", sizeof(union outer1)); // size is 8

    printf("\nsize is %d", sizeof(Oobj2));        // size is 16
    printf("\nsize is %d", sizeof(union outer2)); // size is 16

    return 0;
}