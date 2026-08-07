#include <stdio.h>
union demo
{
    char chChar;
    int iNo;
    double dNo; // size 8,hence size of obj is 8 becouse it is max in all member.
};
int main(void)
{
    union demo obj;

    printf("\n%c\t%d\t%lf", obj.chChar, obj.iNo, obj.dNo); // A       3653697 0.000000

    obj.chChar = 'A';
    printf("\n%c\t%d\t%lf", obj.chChar, obj.iNo, obj.dNo); // A        65      0.000000

    obj.iNo = 10;
    printf("\n%c\t%d\t%lf", obj.chChar, obj.iNo, obj.dNo); //        10      0.000000

    obj.dNo = 99.99f;
    printf("\n%c\t%d\t%lf", obj.chChar, obj.iNo, obj.dNo); //        536870912       99.989998

    printf("\n%d", sizeof(obj)); // 8

    printf("\n%d", sizeof(union demo)); // 8

    printf("\n%d", sizeof(obj.chChar)); // 1

    printf("\n%d", sizeof(obj.iNo)); // 4

    printf("\n%d", sizeof(obj.dNo)); // 8

    return 0;
}