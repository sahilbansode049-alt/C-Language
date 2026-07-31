#include <stdio.h>
int main(void)
{
    printf("%d\n", 10 < 20);  // 1
    printf("%d\n", 20 < 20);  // 0
    printf("%d\n", 20 <= 20); // 1
    printf("%d\n", 20 >= 20); // 1
    printf("%d\n",20!=20);    //0
    printf("%d\n", 20 != 10); // 1
    printf("%d\n", 20 == 20); // 1
    printf("%d\n", 20 == 10); // 0

    printf("%d\n", 10 <= 20 != 0); // 1
    printf("%d\n", 20 < 20 != 1);  // 1
    printf("%d\n", 10 > 10 != 0);  // 0
    printf("%d\n", 20 == 10 != 1); // 1

    return 0;
}