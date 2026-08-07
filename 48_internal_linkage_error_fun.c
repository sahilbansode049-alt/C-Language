//fun.c
#include <stdio.h>
static int g_iNo = 20;
void Fun(void)
{
    printf("\nIn Fun,%d", g_iNo); // main.c:13:12: error: static declaration of 'g_iNo' follows non-static declaration static int g_iNo = 20;
                                  // note: previous declaration of 'g_iNo' was here extern int g_iNo;
}