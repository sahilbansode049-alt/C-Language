//fun.c
#include <stdio.h>
static int g_iNo = 10;
void Fun(void)
{
    printf("\nIn fun,%d", g_iNo); // In fun,10
}