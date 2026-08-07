#include <stdio.h>
struct demo
{
    char chChar;
    int iNo;
    double dNo;
};
int main(void)
{
    struct demo obj;

    printf("\n%c\t%d\t%lf", obj.chChar, obj.iNo, obj.dNo); // @       0       0.000000
                                                           // becouse memory is different for each member in structure
    obj.chChar = 'A';
    printf("\n%c\t%d\t%lf", obj.chChar, obj.iNo, obj.dNo); // A       0       0.000000

    obj.iNo = 10;
    printf("\n%c\t%d\t%lf", obj.chChar, obj.iNo, obj.dNo); // A       10      0.000000

    obj.dNo = 99.99f;
    printf("\n%c\t%d\t%lf", obj.chChar, obj.iNo, obj.dNo); // A       10      99.989998

    printf("\n%d", sizeof(obj)); // 16

    printf("\n%d", sizeof(struct demo)); // 16

    printf("\n%d", sizeof(obj.chChar)); // 1

    printf("\n%d", sizeof(obj.iNo)); // 4

    printf("\n%d", sizeof(obj.dNo)); // 8

    return 0;
}