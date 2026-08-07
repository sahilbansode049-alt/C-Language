#include <stdio.h>
int g_iNo = 10;
void Fun(void)
{
    printf("\nIn Fun,%d", g_iNo); // C:\Users\Admin\AppData\Local\Temp\ccUdM9Zt.o:fun.c:(.data+0x0): multiple definition of `g_iNo'
                                  // C:\Users\Admin\AppData\Local\Temp\ccLxJrmj.o:main.c:(.data+0x0): first defined here
}