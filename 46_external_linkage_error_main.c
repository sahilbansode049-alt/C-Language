// main.c
#include <stdio.h>
void Fun(void);
int main(void)
{
    extern int g_iNo;

    printf("\nIn main,%d", g_iNo); // C:\Users\Admin\AppData\Local\Temp\ccUdM9Zt.o:fun.c:(.data+0x0): multiple definition of `g_iNo'
                                   // C:\Users\Admin\AppData\Local\Temp\ccLxJrmj.o:main.c:(.data+0x0): first defined here
    Fun();

    return 0;
}
int g_iNo = 20;

