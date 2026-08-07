#include <stdio.h>
void Fun(int *);
int main(void)
{
    int iNo = 10;

    printf("\nBefore calling %d", iNo); // 10

    Fun(&iNo);

    printf("\nAfter calling,%d", iNo); // 11

    return 0;
}
void Fun(int *a)
{
    printf("\nIn Fun,%d", *a); // 10

    ++(*a);

    printf("\nLeaving Function,%d", *a); // 11
}
