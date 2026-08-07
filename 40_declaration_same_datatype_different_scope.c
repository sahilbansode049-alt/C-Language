extern int No;
#include <stdio.h>
int main(void)
{
    extern int No;

    printf("\n%d", No); // 11

    return 0;
}
int No = 11; // allow