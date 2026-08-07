#include <stdio.h>
struct demo1
{
    char chChar;
    double dNo;
} obj1;

#pragma pack(4)

struct demo2
{
    char chChar;
    double dNo;
} obj2;

#pragma pack(1)

struct demo3
{
    char chChar;
    double dNo;
} obj3;

#pragma pack()

struct demo4
{
    char chChar;
    double dNo;
} obj4;

int main(void)
{
    printf("\nsize is %d", sizeof(obj1)); // size is 16

    printf("\nsize is %d", sizeof(obj2)); // size is 12

    printf("\nsize is %d", sizeof(obj3)); // size is 9

    printf("\nsize is %d", sizeof(obj4)); // size is 16

    return 0;
}