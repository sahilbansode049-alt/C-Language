#include <stdio.h>
struct demo
{
    char chChar;
    double dNo;
};

#pragma pack(1)
struct demo obj;

int main(void)
{
    printf("\nsize is %d", sizeof(obj)); // size is 16

    return 0;
}