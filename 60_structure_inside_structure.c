#include <stdio.h>
struct outer1
{
    int iNo1;
    float fNo1;
    struct inner1
    {
        int iNo2;
        float fNo2;
    };
} Oobj1;

struct outer2
{
    int iNo;
    float fNo;
    struct inner2
    {
        int iNo;
        float fNo;
    } iobj;
} Oobj2;

struct outer3
{
    int iNo;
    double dNo;
    struct inner3
    {
        int iNo;
        float fNo;
    } iobj1, iobj2;
} Oobj3;

struct outer4
{
    int iNo;
    float fNo;
    struct inner4
    {
        int iNo;
        float fNo;
    } iobj[2];
} Oobj4;

int main(void)
{
    printf("\nsize is %d", sizeof(Oobj1));         // size is 16
    printf("\nsize is %d", sizeof(struct outer1)); // size is 16

    printf("\nsize is %d", sizeof(Oobj2));         // size is 16
    printf("\nsize is %d", sizeof(struct outer2)); // size is 16

    printf("\nsize is %d", sizeof(Oobj3));         // size is 32
    printf("\nsize is %d", sizeof(struct outer3)); // size is 32
                                                   // in vs code show output 32 but actual output is 28

    printf("\nsize is %d", sizeof(Oobj4));         // size is 24
    printf("\nsize of %d", sizeof(struct outer4)); // size is 24

    return 0;
}