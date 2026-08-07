#include <stdio.h>
void Fun(int );
int main(void)
{
    int iNo = 10;
    printf("\nBefore calling:%d", iNo); // Before calling:10

    Fun(iNo);

    printf("\nAfter calling:%d", iNo); // After calling:10

    return 0;
}
void Fun(int iNo)
{
    printf("\nIn fun:%d", iNo); // In fun:10

    ++iNo;
    printf("\nLeaving Fun:%d", iNo); // Leaving Fun:11
}
