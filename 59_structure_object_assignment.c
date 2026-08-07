#include <stdio.h>
struct demo
{
    int iNo;
    float fNo;
};
int main(void)
{
    struct demo obj1;
    struct demo obj2;
    struct demo obj3;

    printf("\nEnter obj1 value:"); // Enter obj1 value:
    printf("\nEnter integer:");    // Enter integer:1
    scanf("%d", &obj1.iNo);
    printf("\nEnter float:"); // Enter float:2
    scanf("%f", &obj1.fNo);

    obj2.iNo = obj1.iNo;
    obj2.fNo = obj1.fNo;

    obj3 = obj1; // In structure copy allow

    printf("\nobj1 values are:");              // obj1 values are:
    printf("\ninteger value is %d", obj1.iNo); // integer value is 1
    printf("\nfloat value is %.3f", obj1.fNo); // float value is 2.000

    printf("\nobj2 values are:");              // obj2 values are:
    printf("\ninteger value is %d", obj2.iNo); // integer value is 1
    printf("\nfloat value is %.3f", obj2.fNo); // float value is 2.000

    printf("\nobj3 values are:");              // obj3 values are:
    printf("\ninteger value is %d", obj3.iNo); // integer value is 1
    printf("\nfloat value is %.3f", obj3.fNo); // float value is 2.000

    return 0;
}