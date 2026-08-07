#include <stdio.h>
struct demo1
{
    char chChar;
    double dNo;
} obj1;

struct demo2
{
    int iNo;
    double dNo;
} obj2;

struct demo3
{
    char chChar;
    int iNo;
} obj3;

struct demo4
{
    char chChar1;
    char chChar2;
} obj4;

int main(void)
{
    printf("\nsize is %d", sizeof(obj1));         // size is 16
    printf("\nsize is %d", sizeof(struct demo1)); // size is 16

    printf("\nsize is %d", sizeof(obj2));         // size is 16
    printf("\nsize is %d", sizeof(struct demo2)); // size is 16

    printf("\nsize is %d", sizeof(obj3));         // size is 8
    printf("\nsize is %d", sizeof(struct demo3)); // size is 8

    printf("\nsize is %d", sizeof(obj4));         // size is 2
    printf("\nsize is %d", sizeof(struct demo4)); // size is 2

    return 0;
}
