#include <stdio.h>
int main(void)
{
    printf("%d\n", 28); // 28
    printf("%d\n", 38); // 38

    printf("%d\n", 28 & 38); // 4
    printf("%d\n", 28 | 38); // 62
    printf("%d\n", 28 ^ 38); // 58
    printf("%d\n", ~38);     //-39

    printf("%d\n", 8);      // 8
    printf("%d\n", 8 << 1); // 16
    printf("%d\n", 8 >> 1); // 4

    printf("%d\n", 28);      // 28
    printf("%d\n", 20 >> 2); // 5
    printf("%d\n", 20 << 2); // 80

    printf("%d\n", 30 >> 3); // 3
    printf("%d\n", 30 << 3); // 240

    return 0;
}