#include <stdio.h>
int main(void)
{
    int iNo1;
    auto int iNo2;

    printf("%d\t\t%d", iNo1, iNo2); //(garbage value)   4194432         2863104

    return 0;
}