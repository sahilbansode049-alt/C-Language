#include <stdio.h>
void Fun(void);
int main(void)
{
    extern int g_iNo;

    printf("In main,%d", g_iNo); // In main,10

    Fun();

    return 0;
}


