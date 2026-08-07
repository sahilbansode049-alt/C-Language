#include <stdio.h>
struct outer1
{
    int iNo;
    double dNo;
    union inner1
    {
        int iNo;
        double dNo;
    } iobj1, iobj2;
} Oobj1;

struct outer2
{
    int iNo;
    double dNo;
    union inner2
    {
        int iNo;
        float fNo;
    } iobj[2];
} Oobj2;

int main(void)
{
    printf("\nsize is %d", sizeof(Oobj1));         // size is 32
    printf("\nsize is %d", sizeof(struct outer1)); // size is 32

    printf("\nsize is %d", sizeof(Oobj2));         // size is 24
    printf("\nsize is %d", sizeof(struct outer2)); // size is 24

    return 0;
}