// main.c
#include <stdio.h>
void Fun(void);
int main(void)
{
    extern int g_iNo;

    printf("\nIn main,%d", g_iNo); // In main,10

    Fun();

    return 0;
}
int g_iNo = 10;

