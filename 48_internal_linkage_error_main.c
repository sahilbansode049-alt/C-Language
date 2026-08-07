// main.c
#include <stdio.h>
void Fun(void);
int main(void)
{
    extern int g_iNo;

    printf("\nIn main,%d", g_iNo); // main.c:13:12: error: static declaration of 'g_iNo' follows non-static declaration static int g_iNo = 20;
                                   // note: previous declaration of 'g_iNo' was here extern int g_iNo;
    Fun();

    return 0;
}
static int g_iNo = 20;
